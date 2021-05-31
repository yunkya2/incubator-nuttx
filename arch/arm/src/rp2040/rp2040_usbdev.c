/****************************************************************************
 * arch/arm/src/rp2040/rp2040_usbdev.c
 *
 * Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.  The
 * ASF licenses this file to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance with the
 * License.  You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.  See the
 * License for the specific language governing permissions and limitations
 * under the License.
 *
 ****************************************************************************/

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include <nuttx/config.h>

#include <sys/types.h>
#include <stdint.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <debug.h>
#include <queue.h>

#include <nuttx/arch.h>
#include <nuttx/spinlock.h>
#include <nuttx/kmalloc.h>

#include <nuttx/usb/usb.h>
#include <nuttx/usb/usbdev.h>
#include <nuttx/usb/usbdev_trace.h>

#include "chip.h"
#include "arm_arch.h"
#include "arm_internal.h"
#include "rp2040_usbdev.h"

#include "hardware/rp2040_resets.h"

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

#define RP2040_NENDPOINTS       16

/* Conversion between USB logical endpoint and RP2040 DPSRAM index */

#define RP2040_EPINDEX(eplog)   (USB_EPNO(eplog) * 2 + USB_ISEPOUT(eplog))
#define RP2040_EPLOG(epindex)   (((epindex) / 2) + \
                                 ((epindex) & 1 ? USB_DIR_OUT : USB_DIR_IN))

#ifndef container_of
#  define container_of(ptr, type, member) \
    ((type *)((void *)(ptr) - offsetof(type, member)))
#endif

/* Debug ********************************************************************/

/* Trace error codes */

#define RP2040_TRACEERR_ALLOCFAIL         0x0001
#define RP2040_TRACEERR_INVALIDPARAMS     0x0002
#define RP2040_TRACEERR_IRQREGISTRATION   0x0003
#define RP2040_TRACEERR_BINDFAILED        0x0004
#define RP2040_TRACEERR_STALLEDREQUEST    0x0005

/* Trace interrupt codes */

#define RP2040_TRACEINTID_BUFF_STATUS     0x0001
#define RP2040_TRACEINTID_SETUP_REQ       0x0002
#define RP2040_TRACEINTID_BUS_RESET       0x0004

#define RP2040_TRACEINTID_GETSTATUS       1
#define RP2040_TRACEINTID_CLEARFEATURE    2
#define RP2040_TRACEINTID_SETFEATURE      3
#define RP2040_TRACEINTID_SETADDRESS      4
#define RP2040_TRACEINTID_GETSETIFCONFIG  5
#define RP2040_TRACEINTID_SYNCHFRAME      6
#define RP2040_TRACEINTID_STALLEDREQUEST  7
#define RP2040_TRACEINTID_GETSETDESC      8
#define RP2040_TRACEINTID_HANDLEZLP       9
#define RP2040_TRACEINTID_BUSRESET       10

#ifdef CONFIG_USBDEV_TRACE_STRINGS
const struct trace_msg_t g_usb_trace_strings_deverror[] =
{
  TRACE_STR(RP2040_TRACEERR_ALLOCFAIL),
  TRACE_STR(RP2040_TRACEERR_INVALIDPARAMS),
  TRACE_STR(RP2040_TRACEERR_IRQREGISTRATION),
  TRACE_STR(RP2040_TRACEERR_BINDFAILED),
  TRACE_STR(RP2040_TRACEERR_STALLEDREQUEST),
  TRACE_STR_END
};

const struct trace_msg_t g_usb_trace_strings_intdecode[] =
{
  TRACE_STR(RP2040_TRACEINTID_GETSTATUS),
  TRACE_STR(RP2040_TRACEINTID_CLEARFEATURE),
  TRACE_STR(RP2040_TRACEINTID_SETFEATURE),
  TRACE_STR(RP2040_TRACEINTID_SETADDRESS),
  TRACE_STR(RP2040_TRACEINTID_GETSETIFCONFIG),
  TRACE_STR(RP2040_TRACEINTID_SYNCHFRAME),
  TRACE_STR(RP2040_TRACEINTID_STALLEDREQUEST),
  TRACE_STR(RP2040_TRACEINTID_GETSETDESC),
  TRACE_STR(RP2040_TRACEINTID_HANDLEZLP),
  TRACE_STR(RP2040_TRACEINTID_BUSRESET),
  TRACE_STR_END
};
#endif

/****************************************************************************
 * Private Types
 ****************************************************************************/

enum rp2040_zlp_e
{
  RP2040_ZLP_NONE = 0,        /* Don't send/receive Zero Length Packet */
  RP2040_ZLP_IN_REPLY,        /* Receive ZLP to reply IN transfer */
  RP2040_ZLP_OUT_REPLY,       /* Send ZLP to reply OUT transfer */
};

struct rp2040_req_s
{
  struct usbdev_req_s req;        /* Standard USB request */
  sq_entry_t          q_ent;
};

struct rp2040_ep_s
{
  struct usbdev_ep_s      ep;     /* Standard endpoint structure */
  struct rp2040_usbdev_s  *dev;   /* Reference to private driver data */
  sq_queue_t              req_q;

  uint8_t *curr_req_buf;          /* Current transfer buffer address */
  uint16_t curr_req_len;          /*                  total transfer length */
  uint16_t curr_req_next_len;     /*                  length of one transfer */
  uint16_t curr_req_xfrd;         /*                  transferred length */

  uint8_t *data_buf;              /* DPSRAM buffer address */
  uint32_t ep_ctrl;               /* DPSRAM EP control register address */
  uint32_t buf_ctrl;              /* DPSRAM buffer control register address */

  uint8_t epphy;                  /* Physical EP address */
  bool    in;                     /* in = true, out = false */
  uint8_t type;                   /* 0:cont, 1:iso, 2:bulk, 3:int */
  bool    disable;                /* The EP is disabled */

  int     next_pid;               /* Next PID 0:DATA0, 1:DATA1 */
  bool    stalled;                /* The EP is stalled */
  bool    pending_stall;          /* Pending stall request */
};

struct rp2040_usbdev_s
{
  struct usbdev_s             usbdev;
  struct usbdevclass_driver_s *driver;

  struct rp2040_ep_s  eplist[RP2040_NENDPOINTS * 2];

  uint16_t    next_offset;        /* Unused DPSRAM buffer offset */
  uint8_t     dev_addr;           /* USB device address */

  enum rp2040_zlp_e   zlp_stat;   /* Pending EP0 ZLP status */

  uint16_t            used;       /* used phyep */

  struct usb_ctrlreq_s ctrl;      /* Last EP0 request */
  uint8_t setup_out[64];
  int     setup_out_len;
};

/****************************************************************************
 * Private Function Prototypes
 ****************************************************************************/

/* Endpoint methods */

static int rp2040_epconfigure(FAR struct usbdev_ep_s *ep,
                              FAR const struct usb_epdesc_s *desc,
                              bool last);

static int rp2040_epdisable(FAR struct usbdev_ep_s *ep);
static FAR struct usbdev_req_s *rp2040_epallocreq(FAR struct usbdev_ep_s
                                                  *ep);
static void rp2040_epfreereq(FAR struct usbdev_ep_s *ep,
                             FAR struct usbdev_req_s *req);
#ifdef CONFIG_USBDEV_DMA
static FAR void *rp2040_epallocbuffer(FAR struct usbdev_ep_s *ep,
                                      uint16_t nbytes);
static void rp2040_epfreebuffer(FAR struct usbdev_ep_s *ep, FAR void *buf);
#endif
static int rp2040_epsubmit(FAR struct usbdev_ep_s *ep,
                           FAR struct usbdev_req_s *privreq);
static int rp2040_epcancel(FAR struct usbdev_ep_s *ep,
                           FAR struct usbdev_req_s *privreq);
static int rp2040_epstall(FAR struct usbdev_ep_s *ep, bool resume);

/* USB device controller methods */

static FAR struct usbdev_ep_s *rp2040_allocep(FAR struct usbdev_s *dev,
                                              uint8_t epno, bool in,
                                              uint8_t eptype);
static void rp2040_freeep(FAR struct usbdev_s *dev,
                          FAR struct usbdev_ep_s *ep);
static int rp2040_getframe(FAR struct usbdev_s *dev);
static int rp2040_wakeup(FAR struct usbdev_s *dev);
static int rp2040_selfpowered(FAR struct usbdev_s *dev, bool selfpowered);
static int rp2040_pullup(FAR struct usbdev_s *dev, bool enable);

/****************************************************************************
 * Public Data
 ****************************************************************************/

/****************************************************************************
 * Private Data
 ****************************************************************************/

/* Endpoint methods */

static const struct usbdev_epops_s g_epops =
{
  .configure   = rp2040_epconfigure,
  .disable     = rp2040_epdisable,
  .allocreq    = rp2040_epallocreq,
  .freereq     = rp2040_epfreereq,
#ifdef CONFIG_USBDEV_DMA
  .allocbuffer = rp2040_epallocbuffer,
  .freebuffer  = rp2040_epfreebuffer,
#endif
  .submit      = rp2040_epsubmit,
  .cancel      = rp2040_epcancel,
  .stall       = rp2040_epstall,
};

/* USB controller device methods */

static const struct usbdev_ops_s g_devops =
{
  .allocep     = rp2040_allocep,
  .freeep      = rp2040_freeep,
  .getframe    = rp2040_getframe,
  .wakeup      = rp2040_wakeup,
  .selfpowered = rp2040_selfpowered,
  .pullup      = rp2040_pullup,
};

static struct rp2040_usbdev_s g_usbdev;

/****************************************************************************
 * Private Functions
 ****************************************************************************/

/****************************************************************************
 * Endpoint Methods
 ****************************************************************************/

/****************************************************************************
 * Name: rp2040_epconfigure
 *
 * Description:
 *   Configure endpoint, making it usable
 *
 * Input Parameters:
 *   ep   - the struct usbdev_ep_s instance obtained from allocep()
 *   desc - A struct usb_epdesc_s instance describing the endpoint
 *   last - true if this is the last endpoint to be configured.  Some
 *          hardware needs to take special action when all of the endpoints
 *          have been configured.
 *
 ****************************************************************************/

static int rp2040_epconfigure(FAR struct usbdev_ep_s *ep,
                              FAR const struct usb_epdesc_s *desc, bool last)
{
  FAR struct rp2040_ep_s *privep = (FAR struct rp2040_ep_s *)ep;
  FAR struct rp2040_usbdev_s *priv = privep->dev;
  int epindex;
  int eptype;
  uint16_t maxpacket;

  usbtrace(TRACE_EPCONFIGURE, privep->epphy);
  DEBUGASSERT(desc->addr == ep->eplog);

  epindex = RP2040_EPINDEX(ep->eplog);
  eptype = desc->attr & USB_EP_ATTR_XFERTYPE_MASK;
  maxpacket = GETUINT16(desc->mxpacketsize);

  uinfo("config: EP%d %s %d maxpacket=%d\n", privep->epphy,
        privep->in ? "IN" : "OUT", eptype, maxpacket);

  if (desc)
    {
      privep->ep.maxpacket = GETUINT16(desc->mxpacketsize);
    }

  if (privep->epphy != 0)
    {
      /* Configure the EP data buffer address
       * (No need for EP0 because it has the dedicated buffer)
       */

      privep->data_buf = (uint8_t *)(RP2040_USBCTRL_DPSRAM_BASE +
                                     priv->next_offset);
      priv->next_offset =
                     (priv->next_offset + privep->ep.maxpacket + 63) & ~63;
      privep->ep_ctrl = RP2040_USBCTRL_DPSRAM_EP_CTRL(epindex);

      /* Enable EP */

      putreg32(RP2040_USBCTRL_DPSRAM_EP_CTRL_ENABLE |
               RP2040_USBCTRL_DPSRAM_EP_CTRL_INT_1BUF |
               (eptype << RP2040_USBCTRL_DPSRAM_EP_CTRL_EP_TYPE_SHIFT) |
               ((uint32_t)privep->data_buf &
                RP2040_USBCTRL_DPSRAM_EP_CTRL_EP_ADDR_MASK),
               privep->ep_ctrl);
    }

  privep->disable = 0;

  return OK;
}

/****************************************************************************
 * Name: rp2040_epdisable
 *
 * Description:
 *   The endpoint will no longer be used
 *
 ****************************************************************************/

static int rp2040_epdisable(FAR struct usbdev_ep_s *ep)
{
  FAR struct rp2040_ep_s *privep = (FAR struct rp2040_ep_s *)ep;
  irqstate_t flags;

#ifdef CONFIG_DEBUG_FEATURES
  if (!ep)
    {
      usbtrace(TRACE_DEVERROR(RP2040_TRACEERR_INVALIDPARAMS), 0);
      return -EINVAL;
    }

#endif

  usbtrace(TRACE_EPDISABLE, privep->epphy);
  uinfo("EP%d\n", privep->epphy);

  flags = spin_lock_irqsave(NULL);

  privep->disable = 1;
  privep->ep.maxpacket = 64;
  privep->curr_req_buf = NULL;
  privep->stalled = false;
  privep->next_pid = 0;
  putreg32(0, privep->buf_ctrl);

  /* Cancel all queued requests */

  while (privep->req_q.tail)
    {
      struct usbdev_req_s *req;
      sq_entry_t *q_ent;

      /* Dequeue from Reqbuf poll */

      q_ent = sq_remlast(&privep->req_q);
      req = &container_of(q_ent, struct rp2040_req_s, q_ent)->req;

      /* return reqbuf to function driver */

      req->result = -ESHUTDOWN;
      req->callback(ep, req);
    }

  spin_unlock_irqrestore(NULL, flags);

  return OK;
}

/****************************************************************************
 * Name: rp2040_epallocreq
 *
 * Description:
 *   Allocate an I/O request
 *
 ****************************************************************************/

static FAR struct usbdev_req_s *rp2040_epallocreq(FAR struct usbdev_ep_s *ep)
{
  FAR struct rp2040_req_s *privreq;

#ifdef CONFIG_DEBUG_FEATURES
  if (!ep)
    {
      return NULL;
    }
#endif

  usbtrace(TRACE_EPALLOCREQ, ((FAR struct rp2040_ep_s *)ep)->epphy);

  privreq = (FAR struct rp2040_req_s *)
            kmm_malloc(sizeof(struct rp2040_req_s));

  if (!privreq)
    {
      usbtrace(TRACE_DEVERROR(RP2040_TRACEERR_ALLOCFAIL), 0);
      return NULL;
    }

  memset(privreq, 0, sizeof(struct rp2040_req_s));
  return &privreq->req;
}

/****************************************************************************
 * Name: rp2040_epfreereq
 *
 * Description:
 *   Free an I/O request
 *
 ****************************************************************************/

static void rp2040_epfreereq(FAR struct usbdev_ep_s *ep,
                             FAR struct usbdev_req_s *req)
{
  FAR struct rp2040_req_s *privreq = (FAR struct rp2040_req_s *)req;

#ifdef CONFIG_DEBUG
  if (!ep || !req)
    {
      usbtrace(TRACE_DEVERROR(RP2040_TRACEERR_INVALIDPARAMS), 0);
      return;
    }
#endif

  usbtrace(TRACE_EPFREEREQ, ((FAR struct rp2040_ep_s *)ep)->epphy);
  kmm_free(privreq);
}

/****************************************************************************
 * Name: rp2040_epallocbuffer
 *
 * Description:
 *   Allocate an I/O buffer
 *
 ****************************************************************************/

#ifdef CONFIG_USBDEV_DMA
static FAR void *rp2040_epallocbuffer(FAR struct usbdev_ep_s *ep,
                                      uint16_t bytes)
{
  FAR struct rp2040_ep_s *privep = (FAR struct rp2040_ep_s *)ep;

  UNUSED(privep);
  usbtrace(TRACE_EPALLOCBUFFER, privep->epphy);

  return kmm_malloc(bytes);
}
#endif

/****************************************************************************
 * Name: rp2040_epfreebuffer
 *
 * Description:
 *   Free an I/O buffer
 *
 ****************************************************************************/

#ifdef CONFIG_USBDEV_DMA
static void rp2040_epfreebuffer(FAR struct usbdev_ep_s *ep, FAR void *buf)
{
  FAR struct rp2040_ep_s *privep = (FAR struct rp2040_ep_s *)ep;

  UNUSED(privep);
  usbtrace(TRACE_EPFREEBUFFER, privep->epphy);

  kmm_free(buf);
}
#endif

/****************************************************************************
 * Name: rp2040_update_buffer_control
 *
 * Description:
 *   Update DPSRAM buffer control register
 *
 ****************************************************************************/

static void rp2040_update_buffer_control(FAR struct rp2040_ep_s *privep,
                                         uint32_t and_mask,
                                         uint32_t or_mask)
{
  uint32_t value = 0;

  if (and_mask)
    {
      value = getreg32(privep->buf_ctrl) & and_mask;
    }

  if (or_mask)
    {
      value |= or_mask;
      if (or_mask & RP2040_USBCTRL_DPSRAM_EP_BUFF_CTRL_AVAIL)
        {
          putreg32(value & ~RP2040_USBCTRL_DPSRAM_EP_BUFF_CTRL_AVAIL,
                   privep->buf_ctrl);

          __asm volatile (
                    "b 1f\n"
                    "1: b 1f\n"
                    "1: b 1f\n"
                    "1: b 1f\n"
                    "1: b 1f\n"
                    "1: b 1f\n"
                    "1:\n"
                    : : : "memory");
        }
    }

  putreg32(value, privep->buf_ctrl);
}

/****************************************************************************
 * Name: rp2040_start_transfer
 *
 * Description:
 *   Start endpoint send/receive transfer
 *
 ****************************************************************************/

static void rp2040_start_transfer(FAR struct rp2040_ep_s *privep,
                                  FAR void *buf, size_t len)
{
  uint32_t val;
  irqstate_t flags;

  if (privep->in)
    {
      usbtrace(TRACE_WRITE(privep->epphy), len);
    }
  else
    {
      usbtrace(TRACE_READ(privep->epphy), len);
    }

  flags = spin_lock_irqsave(NULL);

  val = len | RP2040_USBCTRL_DPSRAM_EP_BUFF_CTRL_AVAIL;

  if (privep->in)
    {
      /* Copy the transmit data into DPSRAM */

      memcpy(privep->data_buf, buf, len);
      val |= RP2040_USBCTRL_DPSRAM_EP_BUFF_CTRL_FULL;
    }

  if (privep->next_pid)
    {
      val |= RP2040_USBCTRL_DPSRAM_EP_BUFF_CTRL_DATA1_PID;
    }

  privep->next_pid = 1 - privep->next_pid;    /* Invert DATA0 <-> DATA1 */

  /* Start transfer */

  rp2040_update_buffer_control(privep, 0, val);

  spin_unlock_irqrestore(NULL, flags);
}

/****************************************************************************
 * Name: rp2040_start_req_transfer
 *
 * Description:
 *   Start the endpoint transfer request
 *
 ****************************************************************************/

static void rp2040_start_req_transfer(FAR struct rp2040_ep_s *privep,
                                      FAR struct usbdev_req_s *req)
{
  privep->curr_req_buf = req->buf;
  privep->curr_req_len = req->len;
  privep->curr_req_next_len = req->len > 64 ? 64 : req->len;
  privep->curr_req_xfrd = 0;
  rp2040_start_transfer(privep, req->buf, privep->curr_req_next_len);
}

/****************************************************************************
 * Name: rp2040_epsubmit
 *
 * Description:
 *   Submit an I/O request to the endpoint
 *
 ****************************************************************************/

static int rp2040_epsubmit(FAR struct usbdev_ep_s *ep,
                           FAR struct usbdev_req_s *req)
{
  FAR struct rp2040_req_s *privreq = (FAR struct rp2040_req_s *)req;
  FAR struct rp2040_ep_s *privep = (FAR struct rp2040_ep_s *)ep;
  irqstate_t flags;

#ifdef CONFIG_DEBUG_FEATURES
  if (!req || !req->callback || !req->buf || !ep)
    {
      usbtrace(TRACE_DEVERROR(RP2040_TRACEERR_INVALIDPARAMS), 0);
      return -EINVAL;
    }
#endif

  usbtrace(TRACE_EPSUBMIT, privep->ep.eplog);

  req->result = 0;

  if (privep->disable && privep->epphy != 0)
    {
      return -EBUSY;
    }

  /* Send/Receive packet request from function driver */

  flags = spin_lock_irqsave(NULL);

  sq_addfirst(&privreq->q_ent, &privep->req_q);
  if (privep->curr_req_buf == NULL)
    {
      rp2040_start_req_transfer(privep, req);
    }
  else
    {
      if (privep->in)
        {
          usbtrace(TRACE_INREQQUEUED(privep->epphy), privreq->req.len);
        }
      else
        {
          usbtrace(TRACE_OUTREQQUEUED(privep->epphy), privreq->req.len);
        }
    }

  spin_unlock_irqrestore(NULL, flags);

  return OK;
}

/****************************************************************************
 * Name: rp2040_handle_zlp
 *
 * Description:
 *   Handle Zero Length Packet to reply to the control transfer
 *
 ****************************************************************************/

static void rp2040_handle_zlp(FAR struct rp2040_usbdev_s *priv)
{
  FAR struct rp2040_ep_s *privep;

  switch (priv->zlp_stat)
    {
      case RP2040_ZLP_NONE:
        return;

      case RP2040_ZLP_IN_REPLY:
        privep = &priv->eplist[RP2040_EPINDEX(0x00)];
        break;

      case RP2040_ZLP_OUT_REPLY:
        privep = &priv->eplist[RP2040_EPINDEX(0x80)];
        break;

      default:
        assert(0);
    }

  usbtrace(TRACE_INTDECODE(RP2040_TRACEINTID_HANDLEZLP), privep->ep.eplog);

  privep->next_pid = 1;   /* ZLP is always sent by DATA1 packet */

  rp2040_start_transfer(privep, NULL, 0);

  priv->zlp_stat = RP2040_ZLP_NONE;
}

/****************************************************************************
 * Name: rp2040_epcancel
 *
 * Description:
 *   Cancel an I/O request previously sent to an endpoint
 *
 ****************************************************************************/

static int rp2040_epcancel(FAR struct usbdev_ep_s *ep,
                           FAR struct usbdev_req_s *req)
{
  FAR struct rp2040_req_s *privreq = (FAR struct rp2040_req_s *)req;
  FAR struct rp2040_ep_s *privep = (FAR struct rp2040_ep_s *)ep;
  irqstate_t flags;

#ifdef CONFIG_DEBUG_FEATURES
  if (!ep || !req)
    {
      usbtrace(TRACE_DEVERROR(RP2040_TRACEERR_INVALIDPARAMS), 0);
      return -EINVAL;
    }
#endif

  usbtrace(TRACE_EPCANCEL, privep->epphy);

  /* Remove request from req_queue */

  flags = spin_lock_irqsave(NULL);
  sq_remafter(&privreq->q_ent, &privep->req_q); /* TBD */
  spin_unlock_irqrestore(NULL, flags);
  return OK;
}

/****************************************************************************
 * Name: rp2040_epstall_exec
 *
 * Description:
 *   Stall endpoint
 *
 ****************************************************************************/

static int rp2040_epstall_exec(FAR struct usbdev_ep_s *ep)
{
  FAR struct rp2040_ep_s *privep = (FAR struct rp2040_ep_s *)ep;
  irqstate_t flags;

  usbtrace(TRACE_EPSTALL, privep->epphy + 0xff00);

  flags = spin_lock_irqsave(NULL);

  if (privep->epphy == 0)
    {
      setbits_reg32(privep->in ?
                     RP2040_USBCTRL_REGS_EP_STALL_ARM_EP0_IN :
                     RP2040_USBCTRL_REGS_EP_STALL_ARM_EP0_OUT,
                    RP2040_USBCTRL_REGS_EP_STALL_ARM);
    }

  rp2040_update_buffer_control(privep,
                    0,
                    RP2040_USBCTRL_DPSRAM_EP_BUFF_CTRL_STALL);

  privep->pending_stall = false;

  spin_unlock_irqrestore(NULL, flags);
  return OK;
}

/****************************************************************************
 * Name: rp2040_epstall
 *
 * Description:
 *   Stall or resume and endpoint
 *
 ****************************************************************************/

static int rp2040_epstall(FAR struct usbdev_ep_s *ep, bool resume)
{
  FAR struct rp2040_ep_s *privep = (FAR struct rp2040_ep_s *)ep;
  FAR struct rp2040_usbdev_s *priv = privep->dev;
  irqstate_t flags;

  /* STALL or RESUME the endpoint */

  usbtrace(resume ? TRACE_EPRESUME : TRACE_EPSTALL, privep->epphy);

  flags = spin_lock_irqsave(NULL);

  if (resume)
    {
      privep->stalled = false;
      if (privep->epphy == 0)
        {
          clrbits_reg32(privep->in ?
                         RP2040_USBCTRL_REGS_EP_STALL_ARM_EP0_IN :
                         RP2040_USBCTRL_REGS_EP_STALL_ARM_EP0_OUT,
                        RP2040_USBCTRL_REGS_EP_STALL_ARM);
        }

      rp2040_update_buffer_control(privep,
                        ~RP2040_USBCTRL_DPSRAM_EP_BUFF_CTRL_STALL,
                        0);
    }
  else
    {
      privep->stalled = true;
      if (privep->curr_req_buf == NULL)
        {
          rp2040_epstall_exec(ep);
        }
      else
        {
          privep->pending_stall = true;
        }

      priv->zlp_stat = RP2040_ZLP_NONE;
    }

  spin_unlock_irqrestore(NULL, flags);

  return OK;
}

/****************************************************************************
 * Device Methods
 ****************************************************************************/

/****************************************************************************
 * Name: rp2040_allocep
 *
 * Description:
 *   Allocate an endpoint matching the parameters
 *
 * Input Parameters:
 *   eplog  - 7-bit logical endpoint number (direction bit ignored).
 *            Zero means that any endpoint matching the other requirements
 *            will suffice.  The assigned endpoint can be found in the eplog
 *            field.
 *   in     - true: IN (device-to-host) endpoint requested
 *   eptype - Endpoint type.
 *            One of {USB_EP_ATTR_XFER_ISOC,
 *                    USB_EP_ATTR_XFER_BULK,
 *                    USB_EP_ATTR_XFER_INT}
 *
 ****************************************************************************/

static FAR struct usbdev_ep_s *rp2040_allocep(FAR struct usbdev_s *dev,
                                              uint8_t eplog, bool in,
                                              uint8_t eptype)
{
  struct rp2040_usbdev_s *priv = (FAR struct rp2040_usbdev_s *)dev;
  struct rp2040_ep_s *privep;
  int epphy;
  int epindex;

  usbtrace(TRACE_DEVALLOCEP, (uint16_t)eplog);

  /* Ignore any direction bits in the logical address */

  epphy = USB_EPNO(eplog);
  epindex = RP2040_EPINDEX(eplog);

  if ((priv->used & 1 << epphy) && (epphy != 0))
    {
      uinfo("ep is still used\n");
      return NULL;
    }

  priv->used |= 1 << epphy; /* TBD */

  privep = &priv->eplist[epindex];
  privep->in = in;
  privep->type = eptype;
  privep->epphy = epphy;
  privep->ep.eplog = eplog;

  privep->next_pid = 0;
  privep->stalled = false;
  privep->curr_req_buf = NULL;
  privep->buf_ctrl = RP2040_USBCTRL_DPSRAM_EP_BUF_CTRL(epindex);

  if (epphy == 0)
    {
      privep->data_buf = (uint8_t *)RP2040_USBCTRL_DPSRAM_EP0_BUF_0;
      privep->ep_ctrl = 0;
    }

  return &privep->ep;
}

/****************************************************************************
 * Name: rp2040_freeep
 *
 * Description:
 *   Free the previously allocated endpoint
 *
 ****************************************************************************/

static void rp2040_freeep(FAR struct usbdev_s *dev,
                          FAR struct usbdev_ep_s *ep)
{
  FAR struct rp2040_usbdev_s *priv = (FAR struct rp2040_usbdev_s *)dev;
  FAR struct rp2040_ep_s *privep = (FAR struct rp2040_ep_s *)ep;

  usbtrace(TRACE_DEVFREEEP, (uint16_t)privep->epphy);

  priv->used &= ~(1 << privep->epphy); /* TBD */
}

/****************************************************************************
 * Name: rp2040_getframe
 *
 * Description:
 *   Returns the current frame number
 *
 ****************************************************************************/

static int rp2040_getframe(FAR struct usbdev_s *dev)
{
  usbtrace(TRACE_DEVGETFRAME, 0);

  return (int)(getreg32(RP2040_USBCTRL_REGS_SOF_RD) &
               RP2040_USBCTRL_REGS_SOF_RD_COUNT_MASK);
}

/****************************************************************************
 * Name: rp2040_wakeup
 *
 * Description:
 *   Tries to wake up the host connected to this device
 *
 ****************************************************************************/

static int rp2040_wakeup(FAR struct usbdev_s *dev)
{
  usbtrace(TRACE_DEVWAKEUP, 0);

  /* TBD */

  setbits_reg32(RP2040_USBCTRL_REGS_SIE_CTRL_RESUME,
                RP2040_USBCTRL_REGS_SIE_CTRL);

  return OK;
}

/****************************************************************************
 * Name: rp2040_selfpowered
 *
 * Description:
 *   Sets/clears the device selfpowered feature
 *
 ****************************************************************************/

static int rp2040_selfpowered(FAR struct usbdev_s *dev, bool selfpowered)
{
  usbtrace(TRACE_DEVSELFPOWERED, (uint16_t)selfpowered);

  return OK;
}

/****************************************************************************
 * Name: rp2040_pullup
 *
 * Description:
 *    Software-controlled connect to/disconnect from USB host
 *
 ****************************************************************************/

static int rp2040_pullup(FAR struct usbdev_s *dev, bool enable)
{
  usbtrace(TRACE_DEVPULLUP, (uint16_t)enable);

  if (enable)
    {
      setbits_reg32(RP2040_USBCTRL_REGS_SIE_CTRL_PULLUP_EN,
                    RP2040_USBCTRL_REGS_SIE_CTRL);
    }
  else
    {
      clrbits_reg32(RP2040_USBCTRL_REGS_SIE_CTRL_PULLUP_EN,
                    RP2040_USBCTRL_REGS_SIE_CTRL);
    }

  return OK;
}

/****************************************************************************
 * Name: rp2040_ep0_setup
 *
 * Description:
 *   Handle EP0 SETUP packet
 *
 ****************************************************************************/

static void rp2040_usbintr_setup(FAR struct rp2040_usbdev_s *priv)
{
  uint16_t index;
  uint16_t value;
  uint16_t len;
  int handled = 0;
  char resp[2];
  int epindex;

  usbtrace(TRACE_INTENTRY(RP2040_TRACEINTID_SETUP_REQ), 0);

  /* Read EP0 SETUP data */

  memcpy(&priv->ctrl, (void *)RP2040_USBCTRL_DPSRAM_SETUP_PACKET,
         USB_SIZEOF_CTRLREQ);

  priv->eplist[0].next_pid = 1;
  priv->eplist[1].next_pid = 1;
  priv->eplist[0].stalled = false;
  priv->eplist[1].stalled = false;

  index = GETUINT16(priv->ctrl.index);
  value = GETUINT16(priv->ctrl.value);
  len = GETUINT16(priv->ctrl.len);

  priv->zlp_stat = USB_REQ_ISIN(priv->ctrl.type) ? RP2040_ZLP_IN_REPLY :
                                                   RP2040_ZLP_OUT_REPLY;

  uinfo("type=%02x req=%02x value=%04x index=%04x len=%04x\n",
        priv->ctrl.type, priv->ctrl.req, value, index, len);

#if 1
  if (USB_REQ_ISOUT(priv->ctrl.type) && len > 0)
    {
      usbtrace(TRACE_DEVAPI_USER, 0x5678);
      priv->setup_out_len = len;
      rp2040_start_transfer(&priv->eplist[RP2040_EPINDEX(0x00)],
                            priv->setup_out, len);
      return;
    }
#endif

  if ((priv->ctrl.type & USB_REQ_TYPE_MASK) == USB_REQ_TYPE_STANDARD)
    {
      switch (priv->ctrl.req)
        {
          case USB_REQ_GETSTATUS:
            {
              /* type:  device-to-host;
               *        recipient = device,
               *        interface,
               *        endpoint
               * value: 0
               * index: zero interface endpoint
               * len:   2; data = status
               */

                resp[1] = 0;
                switch (priv->ctrl.type & USB_REQ_RECIPIENT_MASK)
                  {
                    case USB_REQ_RECIPIENT_ENDPOINT:
                      epindex = RP2040_EPINDEX(priv->ctrl.index[0]);
                      if (epindex < RP2040_NENDPOINTS * 2 &&
                          priv->eplist[epindex].stalled == 0)
                        {
                          resp[0] = 0; /* bit0: halt */
                        }
                      else
                        {
                          resp[0] = 1; /* bit0: halt */
                        }
                      break;

                    case USB_REQ_RECIPIENT_DEVICE:
                      resp[0] = 0; /* bit0: selfpowerd, bit1: remote wakeup */
                      break;

                    case USB_REQ_RECIPIENT_INTERFACE:
                      resp[0] = 0; /* reserved */
                      break;
                  }

              rp2040_start_transfer(&priv->eplist[0], &resp, 2);
              handled = 1;
              usbtrace(TRACE_INTDECODE(RP2040_TRACEINTID_GETSTATUS),
                       priv->ctrl.req);
              break;
            }

          case USB_REQ_CLEARFEATURE:
            {
              /* type:  host-to device;
               *        recipient = device,
               *        interface or endpoint
               * value: feature selector
               * index: zero interface endpoint;
               * len:   zero, data = none
               */

                if (priv->ctrl.value[0] == USB_FEATURE_ENDPOINTHALT)
                  {
                    epindex = RP2040_EPINDEX(priv->ctrl.index[0]);
                    if (epindex < RP2040_NENDPOINTS * 2)
                      {
#ifdef CONFIG_USBMSC_IGNORE_CLEAR_STALL
                        if (!priv->eplist[epindex].ignore_clear_stall)
#endif
                          {
                            rp2040_epstall(&priv->eplist[epindex].ep, true);
                          }

                        handled = 1;
                      }
                  }

              usbtrace(TRACE_INTDECODE(RP2040_TRACEINTID_CLEARFEATURE),
                       (uint16_t)priv->ctrl.req);
              break;
            }

          case USB_REQ_SETFEATURE:
            {
              /* type:  host-to-device;
               *        recipient = device,
               *        interface,
               *        endpoint
               * value: feature selector
               * index: zero interface endpoint;
               * len:   0; data = none
               */

                if (priv->ctrl.value[0] == USB_FEATURE_TESTMODE)
                  {
                    up_udelay(1000);

                    if (priv->ctrl.index[1] == 0x4)
                      {
                        /* TestPacket */

                        /* TBD */
                      }
                    else
                      {
                        /* TBD */
                      }

                    handled = 1;
                  }
                else if (priv->ctrl.value[0] == USB_FEATURE_ENDPOINTHALT)
                  {
                    epindex = RP2040_EPINDEX(priv->ctrl.index[0]);
                    if (epindex < RP2040_NENDPOINTS * 2)
                      {
                        rp2040_epstall(&priv->eplist[epindex].ep, false);
                        handled = 1;
                      }
                  }

              usbtrace(TRACE_INTDECODE(RP2040_TRACEINTID_SETFEATURE),
                       priv->ctrl.req);
              break;
            }

          case USB_REQ_SETADDRESS:
            {
              /* type:  host-to-device; recipient = device
               * value: device address
               * index: 0
               * len:   0; data = none
               */

              usbtrace(TRACE_INTDECODE(RP2040_TRACEINTID_SETADDRESS), value);

              priv->dev_addr = value & 0xff;

              handled = 1;
              break;
            }
            break;

          case USB_REQ_GETDESCRIPTOR:
            /* type:  device-to-host; recipient = device
             * value: descriptor type and index
             * index: 0 or language ID;
             * len:   descriptor len; data = descriptor
             */

          case USB_REQ_SETDESCRIPTOR:
            /* type:  host-to-device; recipient = device
             * value: descriptor type and index
             * index: 0 or language ID;
             * len:   descriptor len; data = descriptor
             */

            {
              usbtrace(TRACE_INTDECODE(RP2040_TRACEINTID_GETSETDESC),
                       priv->ctrl.req);
              break;
            }

          case USB_REQ_GETCONFIGURATION:
            /* type:  device-to-host; recipient = device
             * value: 0;
             * index: 0;
             * len:   1; data = configuration value
             */

          case USB_REQ_SETCONFIGURATION:
            /* type:  host-to-device; recipient = device
             * value: configuration value
             * index: 0;
             * len:   0; data = none
             */

          case USB_REQ_GETINTERFACE:
            /* type:  device-to-host; recipient = interface
             * value: 0
             * index: interface;
             * len:   1; data = alt interface
             */

          case USB_REQ_SETINTERFACE:
            /* type:  host-to-device; recipient = interface
             * value: alternate setting
             * index: interface;
             * len:   0; data = none
             */

            {
              usbtrace(TRACE_INTDECODE(RP2040_TRACEINTID_GETSETIFCONFIG),
                       priv->ctrl.req);
            }

            break;

          case USB_REQ_SYNCHFRAME:
            {
              /* type:  device-to-host; recipient = endpoint
               * value: 0
               * index: endpoint;
               * len:   2; data = frame number
               */

              usbtrace(TRACE_INTDECODE(RP2040_TRACEINTID_SYNCHFRAME), 0);
            }
            break;

          default:
            {
              usbtrace(TRACE_DEVERROR(RP2040_TRACEERR_STALLEDREQUEST),
                       priv->ctrl.req);
            }
            break;
        }
    }

  if (!handled)
    {
      int res;

      res = CLASS_SETUP(priv->driver, &priv->usbdev, &priv->ctrl,
                        priv->setup_out, priv->setup_out_len);
      if (res < 0)
        {
          usbtrace(TRACE_DEVERROR(RP2040_TRACEERR_STALLEDREQUEST),
                   priv->ctrl.req);
          rp2040_epstall(&priv->eplist[0].ep, false);
          return;
        }
      else if (res == 0 && USB_REQ_ISOUT(priv->ctrl.type))
        {
          priv->zlp_stat = RP2040_ZLP_NONE; /* already sent */
          usbtrace(TRACE_DEVAPI_USER, 0);
        }
    }

  if (priv->zlp_stat != RP2040_ZLP_NONE)
    {
      if (priv->eplist[1].curr_req_buf == NULL)
        {
          usbtrace(TRACE_DEVAPI_USER, 0x8001);
          rp2040_handle_zlp(priv);
        }
    }
}

/****************************************************************************
 * Name: rp2040_usbintr_setup
 *
 * Description:
 *   Handle USB SETUP packet
 *
 ****************************************************************************/

#if 0
static void rp2040_usbintr_setup0(FAR struct rp2040_usbdev_s *priv)
{
  uint16_t len;

  usbtrace(TRACE_INTENTRY(RP2040_TRACEINTID_SETUP_REQ), 0);

  /* Read EP0 SETUP data */

  memcpy(&priv->ctrl, (void *)RP2040_USBCTRL_DPSRAM_SETUP_PACKET,
         USB_SIZEOF_CTRLREQ);
  len = GETUINT16(priv->ctrl.len);

  if (USB_REQ_ISOUT(priv->ctrl.type) && len > 0)
    {
      usbtrace(TRACE_DEVAPI_USER, 0x5678);
      priv->setup_out_len = len;
      rp2040_start_transfer(&priv->eplist[RP2040_EPINDEX(0x00)],
                            priv->setup_out, len);
    }
  else
    {
      rp2040_ep0_setup(priv);
    }

  usbtrace(TRACE_INTEXIT(RP2040_TRACEINTID_SETUP_REQ), 0);
}
#endif

/****************************************************************************
 * Name: rp2040_usbintr_epdone
 *
 * Description:
 *   USB interrupt handler
 *
 ****************************************************************************/

static void rp2040_usbintr_epdone(FAR struct rp2040_usbdev_s *priv,
                                  int epindex)
{
  struct usbdev_req_s *req;
  sq_entry_t *q_ent;
  struct rp2040_ep_s *privep;
  int len;

  if (epindex == 0)
    {
      /* Endpoint Address is opposite to direction bit,
       * this is Status Stage complete event
       */

      if (priv->dev_addr)
        {
          uinfo("setaddr %d\n", priv->dev_addr);
          putreg32(priv->dev_addr, RP2040_USBCTRL_REGS_ADDR_ENDP);
          priv->dev_addr = 0;
          return;
        }
    }

  privep = &priv->eplist[epindex];

  if (priv->setup_out_len > 0 && epindex == 1)
    {
      usbtrace(TRACE_DEVAPI_USER, 0x6789);
      memcpy(priv->setup_out, privep->data_buf, priv->setup_out_len);
      priv->setup_out_len = 0;
      priv->zlp_stat = RP2040_ZLP_NONE;
      usbtrace(TRACE_DEVAPI_USER, 0);
#if 1
      CLASS_SETUP(priv->driver, &priv->usbdev, &priv->ctrl,
                  priv->setup_out, priv->setup_out_len);
#else
      rp2040_ep0_setup(priv);
#endif
      return;
    }

  len = getreg32(RP2040_USBCTRL_DPSRAM_EP_BUF_CTRL(epindex))
        & RP2040_USBCTRL_DPSRAM_EP_BUFF_CTRL_LEN_MASK;
  if (!privep->in && len > 0)
    {
      memcpy(privep->curr_req_buf, privep->data_buf, len);
    }

  privep->curr_req_buf += len;
  privep->curr_req_len -= len;
  privep->curr_req_xfrd += len;

  if (privep->in)
    {
      assert(len == privep->curr_req_next_len);
    }
  else
    {
      if (len < privep->curr_req_next_len)
        {
          /* short packet */

          privep->curr_req_len = 0;
        }
    }

  if (privep->curr_req_len == 0)
    {
      q_ent = sq_remlast(&privep->req_q);
      if (q_ent != NULL)
        {
          req = &container_of(q_ent, struct rp2040_req_s, q_ent)->req;
          req->xfrd = privep->curr_req_xfrd;

          usbtrace(TRACE_COMPLETE(privep->epphy), req->xfrd);

          if (req->callback)
            {
              req->result = 0;
              req->callback(&privep->ep, req);
            }
        }

      if (privep->req_q.tail)
        {
          req = &container_of(privep->req_q.tail,
                              struct rp2040_req_s, q_ent)->req;
          rp2040_start_req_transfer(privep, req);
        }
      else
        {
          privep->curr_req_buf = NULL;

          if (privep->pending_stall)
            {
              rp2040_epstall_exec(&privep->ep);
            }
        }
    }
  else
    {
      privep->curr_req_next_len =
             privep->curr_req_len > 64 ? 64 : privep->curr_req_len;
      rp2040_start_transfer(privep, privep->curr_req_buf,
                            privep->curr_req_next_len);
    }
}

/****************************************************************************
 * Name: rp2040_usbintr_buffstat
 *
 * Description:
 *   USB interrupt handler
 *
 ****************************************************************************/

static void rp2040_usbintr_buffstat(FAR struct rp2040_usbdev_s *priv)
{
  uint32_t stat = getreg32(RP2040_USBCTRL_REGS_BUFF_STATUS);
  uint32_t bit;
  int i;

  usbtrace(TRACE_INTENTRY(RP2040_TRACEINTID_BUFF_STATUS), stat & 0xffff);

  retry:

  bit = 1;
  for (i = 0; i < RP2040_NENDPOINTS * 2 && stat != 0; i++)
    {
      if (stat & bit)
        {
          clrbits_reg32(bit, RP2040_USBCTRL_REGS_BUFF_STATUS);

          int len;

          len = getreg32(RP2040_USBCTRL_DPSRAM_EP_BUF_CTRL(i))
                         & RP2040_USBCTRL_DPSRAM_EP_BUFF_CTRL_LEN_MASK;

          uinfo("\x1b[1m" "EP:%02x %d" "\x1b[0m" "\n",
                RP2040_EPLOG(i), len);

          rp2040_usbintr_epdone(priv, i);
          stat &= ~bit;
        }

      bit <<= 1;
    }

  stat = getreg32(RP2040_USBCTRL_REGS_BUFF_STATUS);
  if (stat)
    {
      uinfo("retry\n");
      goto retry;
    }

  usbtrace(TRACE_INTEXIT(RP2040_TRACEINTID_BUFF_STATUS), 0);
}

/****************************************************************************
 * Name: rp2040_usbintr_busreset
 *
 * Description:
 *   USB interrupt handler
 *
 ****************************************************************************/

static void rp2040_usbintr_busreset(FAR struct rp2040_usbdev_s *priv)
{
  usbtrace(TRACE_INTENTRY(RP2040_TRACEINTID_BUS_RESET), 0);
  usbtrace(TRACE_INTDECODE(RP2040_TRACEINTID_BUSRESET), 0);

  putreg32(0, RP2040_USBCTRL_REGS_ADDR_ENDP);
  priv->dev_addr = 0;
  priv->zlp_stat = RP2040_ZLP_NONE;
  priv->next_offset = RP2040_USBCTRL_DPSRAM_DATA_BUF_OFFSET;
  CLASS_DISCONNECT(priv->driver, &priv->usbdev);
  clrbits_reg32(RP2040_USBCTRL_REGS_SIE_STATUS_BUS_RESET,
                RP2040_USBCTRL_REGS_SIE_STATUS);

#if 0
  int i;
  for (i = 0; i < RP2040_NENDPOINTS * 2; i++)
    {
      rp2040_epdisable(&priv->eplist[i].ep);
    }

  priv->eplist[0].disable = 0;
  priv->eplist[1].disable = 0;
  sq_remlast(&priv->eplist[1].req_q);
#endif

  usbtrace(TRACE_INTEXIT(RP2040_TRACEINTID_BUS_RESET), 0);
}

/****************************************************************************
 * Name: rp2040_usbinterrupt
 *
 * Description:
 *   USB interrupt handler
 *
 ****************************************************************************/

static int rp2040_usbinterrupt(int irq, void *context, FAR void *arg)
{
  FAR struct rp2040_usbdev_s *priv = (FAR struct rp2040_usbdev_s *)arg;
  uint32_t stat;

  stat = getreg32(RP2040_USBCTRL_REGS_INTS);

  uinfo("irq=%d context=%p stat=0x%lx\n", irq, context, stat);

  if (stat & RP2040_USBCTRL_REGS_INTR_BUFF_STATUS)
    {
      rp2040_usbintr_buffstat(priv);
    }

  if (stat & RP2040_USBCTRL_REGS_INTR_SETUP_REQ)
    {
      clrbits_reg32(RP2040_USBCTRL_REGS_SIE_STATUS_SETUP_REC,
                    RP2040_USBCTRL_REGS_SIE_STATUS);

      rp2040_usbintr_setup(priv);
    }

  if (stat & RP2040_USBCTRL_REGS_INTR_BUS_RESET)
    {
      clrbits_reg32(RP2040_USBCTRL_REGS_SIE_STATUS_BUS_RESET,
                    RP2040_USBCTRL_REGS_SIE_STATUS);

      rp2040_usbintr_busreset(priv);
    }

  return OK;
}

/****************************************************************************
 * Public Functions
 ****************************************************************************/

/****************************************************************************
 * Name: arm_usbinitialize
 *
 * Description:
 *   Initialize the USB driver
 *
 * Input Parameters:
 *   None
 *
 * Returned Value:
 *   None
 *
 ****************************************************************************/

void arm_usbinitialize(void)
{
  int i;

  usbtrace(TRACE_DEVINIT, 0);

  putreg32(0, RP2040_USBCTRL_REGS_ADDR_ENDP);

  /* Initialize driver instance */

  memset(&g_usbdev, 0, sizeof(struct rp2040_usbdev_s));

  g_usbdev.usbdev.ops = &g_devops;
  g_usbdev.usbdev.ep0 = &g_usbdev.eplist[0].ep;

  g_usbdev.dev_addr = 0;
  g_usbdev.next_offset = RP2040_USBCTRL_DPSRAM_DATA_BUF_OFFSET;

  for (i = 0; i < RP2040_NENDPOINTS * 2; i++)
    {
      g_usbdev.eplist[i].ep.ops = &g_epops;
      g_usbdev.eplist[i].ep.maxpacket = 64;
      g_usbdev.eplist[i].dev = &g_usbdev;
      g_usbdev.eplist[i].epphy = USB_EPNO(RP2040_EPLOG(i));
      sq_init(&g_usbdev.eplist[i].req_q);
      g_usbdev.eplist[i].ep.eplog = RP2040_EPLOG(i);
    }

  if (irq_attach(RP2040_USBCTRL_IRQ, rp2040_usbinterrupt, &g_usbdev) != 0)
    {
      usbtrace(TRACE_DEVERROR(RP2040_TRACEERR_IRQREGISTRATION),
               (uint16_t)RP2040_USBCTRL_IRQ);
      return;
    }
}

/****************************************************************************
 * Name: usbdev_register
 *
 * Description:
 *   Register a USB device class driver. The class driver's bind() method
 *   will be called to bind it to a USB device driver.
 *
 ****************************************************************************/

int usbdev_register(FAR struct usbdevclass_driver_s *driver)
{
  int ret = -1;

  usbtrace(TRACE_DEVREGISTER, 0);

  /* Hook up the driver */

  g_usbdev.driver = driver;

  setbits_reg32(RP2040_RESETS_RESET_USBCTRL, RP2040_RESETS_RESET);
  clrbits_reg32(RP2040_RESETS_RESET_USBCTRL, RP2040_RESETS_RESET);

  memset((void *)RP2040_USBCTRL_DPSRAM_BASE, 0, 0x1000);

  putreg32(RP2040_USBCTRL_REGS_USB_MUXING_SOFTCON |
           RP2040_USBCTRL_REGS_USB_MUXING_TO_PHY,
           RP2040_USBCTRL_REGS_USB_MUXING);
  putreg32(RP2040_USBCTRL_REGS_USB_PWR_VBUS_DETECT |
           RP2040_USBCTRL_REGS_USB_PWR_VBUS_DETECT_OVERRIDE_EN,
           RP2040_USBCTRL_REGS_USB_PWR);

  rp2040_allocep(&g_usbdev.usbdev, 0x00, 0, USB_EP_ATTR_XFER_CONTROL);
  rp2040_allocep(&g_usbdev.usbdev, 0x80, 1, USB_EP_ATTR_XFER_CONTROL);

  /* Then bind the class driver */

  ret = CLASS_BIND(driver, &g_usbdev.usbdev);
  if (ret)
    {
      usbtrace(TRACE_DEVERROR(RP2040_TRACEERR_BINDFAILED), (uint16_t)-ret);
      g_usbdev.driver = NULL;
      return ret;
    }

  g_usbdev.usbdev.speed = USB_SPEED_FULL;

  putreg32(RP2040_USBCTRL_REGS_MAIN_CTRL_CONTROLLER_EN,
           RP2040_USBCTRL_REGS_MAIN_CTRL);

  /* Enable interrupt */

  putreg32(RP2040_USBCTRL_REGS_SIE_CTRL_EP0_INT_1BUF,
           RP2040_USBCTRL_REGS_SIE_CTRL);
  putreg32(RP2040_USBCTRL_REGS_INTR_BUFF_STATUS |
           RP2040_USBCTRL_REGS_INTR_BUS_RESET |
           RP2040_USBCTRL_REGS_INTR_SETUP_REQ,
           RP2040_USBCTRL_REGS_INTE);

  up_enable_irq(RP2040_USBCTRL_IRQ);

  return OK;
}

/****************************************************************************
 * Name: usbdev_unregister
 *
 * Description:
 *   Un-register usbdev class driver. If the USB device is connected to a
 *   USB host, it will first disconnect().  The driver is also requested to
 *   unbind() and clean up any device state, before this procedure finally
 *   returns.
 *
 ****************************************************************************/

int usbdev_unregister(FAR struct usbdevclass_driver_s *driver)
{
  FAR struct rp2040_usbdev_s *priv = &g_usbdev;
  irqstate_t flags;

  usbtrace(TRACE_DEVUNREGISTER, 0);

  flags = spin_lock_irqsave(NULL);

  /* Unbind the class driver */

  CLASS_UNBIND(driver, &priv->usbdev);

  /* Disable interrupts */

  up_disable_irq(RP2040_USBCTRL_IRQ);

  /* Disconnect device */

  rp2040_pullup(&priv->usbdev, false);

  spin_unlock_irqrestore(NULL, flags);

  return OK;
}
