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

#define RP2040_TRACEINTID_GETSTATUS       1
#define RP2040_TRACEINTID_CLEARFEATURE    2
#define RP2040_TRACEINTID_SETFEATURE      3
#define RP2040_TRACEINTID_SETADDRESS      4
#define RP2040_TRACEINTID_GETSETIFCONFIG  5
#define RP2040_TRACEINTID_SYNCHFRAME      6
#define RP2040_TRACEINTID_STALLEDREQUEST  7

#ifdef CONFIG_USBDEV_TRACE_STRINGS
const struct trace_msg_t g_usb_trace_strings_intdecode[] =
{
  TRACE_STR_END
};

const struct trace_msg_t g_usb_trace_strings_deverror[] =
{
  TRACE_STR(RP2040_TRACERR_ALLOCFAIL),
  TRACE_STR_END
};
#endif


/****************************************************************************
 * Private Types
 ****************************************************************************/

struct rp2040_req_s
{
  struct usbdev_req_s req;              /* Standard USB request */
  sq_entry_t          q_ent;
};

struct rp2040_ep_s
{
  struct usbdev_ep_s      ep;           /* Standard endpoint structure */
  struct rp2040_usbdev_s  *dev;         /* Reference to private driver data */
  sq_queue_t              req_q;

  uint8_t *curr_req_buf;
  uint16_t curr_req_len;
  uint16_t curr_req_next_len;
  uint16_t curr_req_xfrd;

  uint8_t *data_buf;
  uint32_t ep_ctrl;
  uint32_t buf_ctrl;

  uint8_t epphy;    /* Physical EP address */
  bool    in;       /* in = 1, out = 0 */
  uint8_t type;     /* 0:cont, 1:iso, 2:bulk, 3:int */
  bool    disable;

  int     next_pid;
  bool    stalled;
};

struct rp2040_usbdev_s
{
  struct usbdev_s             usbdev;
  struct usbdevclass_driver_s *driver;
  struct rp2040_ep_s          eplist[RP2040_NENDPOINTS * 2];

  uint16_t                    next_offset;
  uint8_t                     dev_addr;

  uint16_t                    used;         /* used phyep */  

  struct usb_ctrlreq_s ctrl; /* Last EP0 request */
};

/****************************************************************************
 * Private Function Prototypes
 ****************************************************************************/

/* Endpoint methods */

static int rp2040_epconfigure(FAR struct usbdev_ep_s *ep,
                              FAR const struct usb_epdesc_s *desc, bool last);
static int rp2040_epdisable(FAR struct usbdev_ep_s *ep);
static FAR struct usbdev_req_s *rp2040_epallocreq(FAR struct usbdev_ep_s *ep);
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
  int epnum;
  FAR struct rp2040_ep_s *privep = (struct rp2040_ep_s *)ep;
//  FAR struct rp2040_usbdev_s *priv = privep->dev;
  int eptype;
  uint16_t maxpacket;


_err("EPCONFIGURE: %d\n", privep->epphy);

  eptype    = desc->attr & USB_EP_ATTR_XFERTYPE_MASK;
  maxpacket = GETUINT16(desc->mxpacketsize);

_err("config: EP%d %s %d maxpacket=%d\n", privep->epphy,
        privep->in ? "IN" : "OUT", eptype, maxpacket);

  epnum = privep->epphy;
  if (desc)
    {
      privep->ep.maxpacket = GETUINT16(desc->mxpacketsize);
    }

  usbtrace(TRACE_EPCONFIGURE, privep->epphy);

  if (epnum == 0)
    {
    }
  else
    {
      /* TBD */
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
  FAR struct rp2040_ep_s *privep = (struct rp2040_ep_s *)ep;
  irqstate_t flags;

  usbtrace(TRACE_EPDISABLE, privep->epphy);
_err("EPDISABLE: %d\n", privep->epphy);


  privep->disable = 1;


  flags = spin_lock_irqsave(NULL);
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

_err("EPALLOCREQ: %p\n", ep);
//  usbtrace(TRACE_EPALLOCREQ, ((FAR struct rp2040_ep_s *)ep)->epphy);

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
      usbtrace(TRACE_DEVERROR(RP2040_TRACEERR_INVALIDPARMS), 0);
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

  _err("EPALLOCBUFFER %d %p\n", bytes, ep);
//  usbtrace(TRACE_EPALLOCBUFFER, privep->epphy);

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

  usbtrace(TRACE_EPFREEBUFFER, privep->epphy);

  kmm_free(buf);
}
#endif

/****************************************************************************
 * Name: rp2040_epsubmit
 *
 * Description:
 *   Submit an I/O request to the endpoint
 *
 ****************************************************************************/

static void rp2040_buffer_control_update(FAR struct rp2040_ep_s *privep,
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
      if (or_mask & RP2040_USBCTRL_DPRAM_EP_BUFF_CTRL_AVAIL)
        {
          putreg32(value & ~RP2040_USBCTRL_DPRAM_EP_BUFF_CTRL_AVAIL,
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

static void rp2040_start_transfer(FAR struct rp2040_ep_s *privep,
                                 FAR void *buf, size_t len)
{
  uint32_t val;
  irqstate_t flags;

  flags = spin_lock_irqsave(NULL);

//  uinfo("\x1b[1m" "ep:%d tx:%d pid:%d len:%d adr:%d" "\x1b[0m" "\n",
//       privep->epphy, privep->in, privep->next_pid, len, *(uint32_t *)0x50110000);

{
  if (privep->in && privep->epphy == 3) {
    int i;
    uint8_t *p = (uint8_t *)buf;
    uinfo("dump: %02x %02x %02x %02x %02x %02x %02x %02x\n",
        p[0], p[1], p[2], p[3], p[4], p[5], p[6], p[7]);
  }
}

  val = len | RP2040_USBCTRL_DPRAM_EP_BUFF_CTRL_AVAIL;

  if (privep->in)
    {
      memcpy(privep->data_buf, buf, len);
      val |= RP2040_USBCTRL_DPRAM_EP_BUFF_CTRL_FULL;
    }

//  val |= RP2040_USBCTRL_DPRAM_EP_BUFF_CTRL_LAST;

  if (privep->next_pid)
    val |= RP2040_USBCTRL_DPRAM_EP_BUFF_CTRL_DATA1_PID;

  privep->next_pid = 1 - privep->next_pid;

#if 0
  putreg32(val & ~RP2040_USBCTRL_DPRAM_EP_BUFF_CTRL_AVAIL, privep->buf_ctrl);

            __asm volatile (
                    "b 1f\n"
                    "1: b 1f\n"
                    "1: b 1f\n"
                    "1: b 1f\n"
                    "1: b 1f\n"
                    "1: b 1f\n"
                    "1:\n"
                    : : : "memory");

  putreg32(val, privep->buf_ctrl);
#else
  rp2040_buffer_control_update(privep, 0, val);
#endif
  spin_unlock_irqrestore(NULL, flags);
}

static void rp2040_start_req_transfer(FAR struct rp2040_ep_s *privep,
                                      FAR struct usbdev_req_s *req)
{
  privep->curr_req_buf = req->buf;
  privep->curr_req_len = req->len;
  privep->curr_req_next_len = req->len > 64 ? 64 : req->len;
  privep->curr_req_xfrd = 0;
  rp2040_start_transfer(privep, req->buf, privep->curr_req_next_len);
}

static int rp2040_epsubmit(FAR struct usbdev_ep_s *ep,
                           FAR struct usbdev_req_s *req)
{
  FAR struct rp2040_req_s *privreq = (FAR struct rp2040_req_s *)req;
  FAR struct rp2040_ep_s *privep = (FAR struct rp2040_ep_s *)ep;
  irqstate_t flags;
  irqstate_t flags2;

flags2 = spin_lock_irqsave(NULL);
  uinfo("%d tx:%d len:%d\n", privep->epphy, privep->in, req->len);

  usbtrace(TRACE_EPSUBMIT, privep->epphy);

  req->result = 0;
  if (privep->disable)
    {
      return -EBUSY;
    }

  if (privep->epphy == 0)
    {
      flags = spin_lock_irqsave(NULL);
//      sq_addfirst(&privreq->q_ent, &privep->req_q);
      rp2040_start_transfer(privep, req->buf, req->len);
      req->xfrd = req->len;
      spin_unlock_irqrestore(NULL, flags);
      req->callback(ep, req);
    }
  else
    {
      /* Send/Receive packet request from function driver */

      flags = spin_lock_irqsave(NULL);
      sq_addfirst(&privreq->q_ent, &privep->req_q);
      if (privep->curr_req_buf == NULL)
        {
          rp2040_start_req_transfer(privep, req);
        }
      spin_unlock_irqrestore(NULL, flags);
    }

 spin_unlock_irqrestore(NULL, flags2);
  return OK;
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

_err("EPCANCEL: %d\n", privep->epphy);
  usbtrace(TRACE_EPCANCEL, privep->epphy);

  /* Remove request from req_queue */

  flags = spin_lock_irqsave(NULL);
  sq_remafter(&privreq->q_ent, &privep->req_q);
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
  irqstate_t flags;

//  if (privep->epphy == 3 && resume == false)
//    return 0;
//    rp2040_epstall(&g_usbdev.eplist[5].ep, false);

//_err("EPSTALL: %d %d\n", privep->epphy, resume);
// stall(3, 0);
//  usbtrace(TRACE_EPSTALL, ((FAR struct rp2040_ep_s *)ep)->epphy);

  /* STALL or RESUME the endpoint */

  flags = spin_lock_irqsave(NULL);
  usbtrace(resume ? TRACE_EPRESUME : TRACE_EPSTALL, privep->epphy);

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

      rp2040_buffer_control_update(privep,
                        ~RP2040_USBCTRL_DPRAM_EP_BUFF_CTRL_STALL,
                        0);
    }
  else
    {
      privep->stalled = true;
      if (privep->epphy == 0)
        {
          setbits_reg32(privep->in ?
                         RP2040_USBCTRL_REGS_EP_STALL_ARM_EP0_IN :
                         RP2040_USBCTRL_REGS_EP_STALL_ARM_EP0_OUT,
                        RP2040_USBCTRL_REGS_EP_STALL_ARM);
        }

      rp2040_buffer_control_update(privep,
                        0,
                        RP2040_USBCTRL_DPRAM_EP_BUFF_CTRL_STALL);
    }

  spin_unlock_irqrestore(NULL, flags);
//_err("EPSTALL: %d %d\n", privep->epphy, resume);
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
  epindex = epphy * 2 + (1 - in);

  if ((priv->used & 1 << epphy) && (epphy != 0))
    {
      uinfo("ep is still used\n");
      return NULL;
    }
  priv->used |= 1 << epphy;

  privep = &priv->eplist[epindex];
  privep->in = in;
  privep->type = eptype;
  privep->epphy = epphy;
  privep->ep.eplog = epphy;
  privep->next_pid = 0;
  privep->stalled = false;
  privep->curr_req_buf = NULL;
  privep->buf_ctrl = RP2040_USBCTRL_DPRAM_EP_BUF_CTRL(epindex);

  if (epphy == 0)
    {
      privep->data_buf = (uint8_t *)RP2040_USBCTRL_DPRAM_EP0_BUF_0;
      privep->ep_ctrl = 0;
    }
  else
    {
      privep->data_buf = (uint8_t *)(RP2040_USBCTRL_DPRAM_BASE +
                                     priv->next_offset);
      priv->next_offset =
                     (priv->next_offset + privep->ep.maxpacket + 63) & ~63;
      privep->ep_ctrl = RP2040_USBCTRL_DPRAM_EP_CTRL(epindex);

      putreg32(RP2040_USBCTRL_DPRAM_EP_CTRL_ENABLE |
               RP2040_USBCTRL_DPRAM_EP_CTRL_INT_1BUF |
               (eptype << RP2040_USBCTRL_DPRAM_EP_CTRL_EP_TYPE_SHIFT) |
//               RP2040_USBCTRL_DPRAM_EP_CTRL_INT_STALL |
//               RP2040_USBCTRL_DPRAM_EP_CTRL_INT_NAK |
               ((uint32_t)privep->data_buf &
                RP2040_USBCTRL_DPRAM_EP_CTRL_EP_ADDR_MASK),
               privep->ep_ctrl);
    }

_err("DEVALLOCEP: %x %d %d %p\n", eplog, in, eptype, &privep->ep);
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

  priv->used &= ~(1 << privep->epphy);
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

//  modifyreg32(USB_DEVC, 0, USB_DEVC_RESUME);
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
 * Name: rp2040_usbinterrupt
 *
 * Description:
 *   USB interrupt handler
 *
 ****************************************************************************/

static int xxxx = 0;
static int yyyy = 0;

static void rp2040_usbintr_setup(FAR struct rp2040_usbdev_s *priv)
{
  uint16_t index;
  uint16_t value;
  uint16_t len;
  int handled = 0;
  char resp[2];
  uint8_t epnum;

  /* Read EP0 SETUP data */

  memcpy(&priv->ctrl, (void *)RP2040_USBCTRL_DPRAM_SETUP_PACKET, USB_SIZEOF_CTRLREQ);

  priv->eplist[0].next_pid = 1;
  priv->eplist[1].next_pid = 1;
  priv->eplist[0].stalled = false;
  priv->eplist[1].stalled = false;

  index = GETUINT16(priv->ctrl.index);
  value = GETUINT16(priv->ctrl.value);
  len = GETUINT16(priv->ctrl.len);

//  uinfo("type:%x req:%d %x len:%d\n", priv->ctrl.type, priv->ctrl.req, value, len);
{
  uint8_t *p = &priv->ctrl.type;
//  uinfo("%02x %02x %02x %02x %02x %02x %02x %02x\n",
//        p[0], p[1], p[2], p[3], p[4], p[5], p[6], p[7]);
}

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
                      epnum = USB_EPNO(priv->ctrl.index[0]);
                      epnum = epnum * 2 + USB_ISEPOUT(priv->ctrl.index[0]);
                      if (epnum < RP2040_NENDPOINTS * 2 &&
                          priv->eplist[epnum].stalled == 0)
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
              usbtrace(TRACE_INTDECODE(RP2040_TRACEINTID_GETSTATUS), 0);
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
                    epnum = USB_EPNO(priv->ctrl.index[0]);
                    epnum = epnum * 2 + USB_ISEPOUT(priv->ctrl.index[0]);
//_err("clearfeature %d\n", epnum);
//                   rp2040_epstall(&priv->eplist[epnum * 2].ep, true);
//                   rp2040_start_transfer(&priv->eplist[0], NULL, 0);
//                   handled = 1;

                    if (epnum < RP2040_NENDPOINTS * 2)
                      {
#ifdef CONFIG_USBMSC_IGNORE_CLEAR_STALL
                        if (!priv->eplist[epnum].ignore_clear_stall)
#endif
                          {
                            rp2040_epstall(&priv->eplist[epnum].ep, true);
//                            rp2040_epstall(&priv->eplist[5].ep, true);
                          }

                        rp2040_start_transfer(&priv->eplist[0], NULL, 0);
                        yyyy = 1;
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
_err("setfeature\n");
                if (priv->ctrl.value[0] == USB_FEATURE_TESTMODE)
                  {
                    rp2040_start_transfer(&priv->eplist[0], NULL, 0);
                    up_udelay(1000);

                    if (priv->ctrl.index[1] == 0x4)
                      {
                        /* TestPacket */

//                        putreg32(1 << 0 | USB_TESTC_FORCE_HS, USB_TESTC);
                      }
                    else
                      {
//                        putreg32(1 << ctrl.index[1] | USB_TESTC_FORCE_HS,
//                                 USB_TESTC);
                      }

                    handled = 1;
                  }
                else if (priv->ctrl.value[0] == USB_FEATURE_ENDPOINTHALT)
                  {
                    epnum = USB_EPNO(priv->ctrl.index[0]);
                    epnum = epnum * 2 + USB_ISEPOUT(priv->ctrl.index[0]);
                    if (epnum < RP2040_NENDPOINTS * 2)
                      {
                        rp2040_epstall(&priv->eplist[epnum].ep, false);
                        rp2040_start_transfer(&priv->eplist[0], NULL, 0);
                        handled = 1;
                      }
                  }

              usbtrace(TRACE_INTDECODE(RP2040_TRACEINTID_SETFEATURE), 0);
              break;
            }

          case USB_REQ_SETADDRESS:
            {
              /* type:  host-to-device; recipient = device
               * value: device address
               * index: 0
               * len:   0; data = none
               */

              usbtrace(TRACE_INTDECODE(RP2040_TRACEINTID_SETADDRESS), 0);

              priv->dev_addr = value & 0xff;

              rp2040_start_transfer(&priv->eplist[0], NULL, 0);
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
            break;

          case USB_REQ_SETDESCRIPTOR:
            /* type:  host-to-device; recipient = device
             * value: descriptor type and index
             * index: 0 or language ID;
             * len:   descriptor len; data = descriptor
             */

          case USB_REQ_GETCONFIGURATION:
            /* type:  device-to-host; recipient = device
             * value: 0;
             * index: 0;
             * len:   1; data = configuration value
             */
#if 0
          case USB_REQ_SETCONFIGURATION:
            /* type:  host-to-device; recipient = device
             * value: configuration value
             * index: 0;
             * len:   0; data = none
             */
#endif
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
              usbtrace(TRACE_INTDECODE(RP2040_TRACEINTID_GETSETIFCONFIG), 0);
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

          case USB_REQ_SETCONFIGURATION:
            xxxx = 1;
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
      if (CLASS_SETUP(priv->driver, &priv->usbdev, &priv->ctrl, NULL, 0) < 0)
        {
    _err("epstall\n");
          rp2040_epstall(&priv->eplist[0].ep, false);
        }
    }
}

static void rp2040_usbintr_buffstat(FAR struct rp2040_usbdev_s *priv)
{
  struct usbdev_req_s *req;
  sq_entry_t *q_ent;
  uint32_t stat = getreg32(RP2040_USBCTRL_REGS_BUFF_STATUS);
  uint32_t bit;
  int i;
  struct rp2040_ep_s *privep;
  irqstate_t flags;

//  uinfo("%x\n", stat);

  bit = 1;
  for (i = 0; i < RP2040_NENDPOINTS * 2 && stat != 0; i++)
    {
      if (stat & bit)
        {
//          flags = spin_lock_irqsave(NULL);

          clrbits_reg32(bit, RP2040_USBCTRL_REGS_BUFF_STATUS);
          privep = &priv->eplist[i];

          int len;

          len = getreg32(RP2040_USBCTRL_DPRAM_EP_BUF_CTRL(i))
                         & RP2040_USBCTRL_DPRAM_EP_BUFF_CTRL_LEN_MASK;
          
         uinfo("\x1b[1m" "EP:%02x %d" "\x1b[0m" "\n",
//         uinfo("EP %02x %d\n",
                (privep->in ? 0x80 : 0x00) + (i / 2), len);

          if (i == 0)
            {
  // Endpoint Address is opposite to direction bit, this is Status Stage complete event
              if (priv->dev_addr)
                {
                  uinfo("setaddr %d\n", priv->dev_addr);
                  putreg32(priv->dev_addr, RP2040_USBCTRL_REGS_ADDR_ENDP);
                  priv->dev_addr = 0;
                  break;
                }
            }

            {
              /* IN/OUT transfer */

              if (privep->curr_req_buf != NULL)
                {
                  int len;

                  len = getreg32(RP2040_USBCTRL_DPRAM_EP_BUF_CTRL(i))
                        & RP2040_USBCTRL_DPRAM_EP_BUFF_CTRL_LEN_MASK;

                  if (!privep->in)
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
_err("short %d\n", privep->curr_req_xfrd);
                          privep->curr_req_len = 0;
                        }
                    }

                  if (privep->curr_req_len == 0)
                    {
                      q_ent = sq_remlast(&privep->req_q);
//                      _err("%d queue count=%d\n", privep->in, sq_count(&privep->req_q));
                  if (q_ent)
                    {
                      req = &container_of(q_ent, struct rp2040_req_s, q_ent)->req;


                      req->xfrd = privep->curr_req_xfrd;
                      req->result = 0;
                      req->callback(&privep->ep, req);
_err("CB %d\n", privep->curr_req_xfrd);
if (yyyy)
{
//  while (1)
//    ;
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
                        }
                    }
                  else
                    {
                      privep->curr_req_next_len =
                             privep->curr_req_len > 64 ? 64 : privep->curr_req_len;

                      rp2040_start_transfer(privep, privep->curr_req_buf,
                                            privep->curr_req_next_len);
                    }

//                  uinfo("%s %d %d\n", privep->in ? "tx" : "rx", i, len);
                }
              else
                {
                  uinfo("EP0 %d\n", i);
                }
            }

          stat &= ~bit;

          if (i == 0)
            {
              if (!xxxx)
              rp2040_start_transfer(&priv->eplist[1], NULL, 0); /* EP0 OUT */
              // _status_stage_xact()   opposite to endpoint
              // <- tud_control_status() or tud_control_xfer(0)
              // MSC_REQ_RESET --> USBMSC_REQ_MSRESET ??  EP_SUBMITで実行
              // RCPT_DEVICE: TUSB_REQ_SET_CONFIGURATION,SET_FEATURE,CLEAR_FEATURE
              // RCPT_ENDPOINT: TUSB_REQ_CLEAR_FEATURE,SET_FEATURE
              else {
                xxxx = 0;
                _err("canceled\n");
              }
            }

//          spin_unlock_irqrestore(NULL, flags);
        }
      bit <<= 1;
    }
}

static void rp2040_usbintr_busreset(FAR struct rp2040_usbdev_s *priv)
{
_err("BUSRESET\n");

  putreg32(0, RP2040_USBCTRL_REGS_ADDR_ENDP);
  CLASS_DISCONNECT(priv->driver, &priv->usbdev);
  clrbits_reg32(RP2040_USBCTRL_REGS_SIE_STATUS_BUS_RESET,
                RP2040_USBCTRL_REGS_SIE_STATUS);
}

static int rp2040_usbinterrupt(int irq, void *context, FAR void *arg)
{
  FAR struct rp2040_usbdev_s *priv = (FAR struct rp2040_usbdev_s *)arg;
  uint32_t stat;
  uint32_t handled = 0;

//  usbtrace(TRACE_INTENTRY, 0);

  stat = getreg32(RP2040_USBCTRL_REGS_INTS);

//  uinfo("irq=%d context=%p stat=0x%x\n", irq, context, stat);

  if (stat & RP2040_USBCTRL_REGS_INTR_SETUP_REQ)
    {
      clrbits_reg32(RP2040_USBCTRL_REGS_SIE_STATUS_SETUP_REC,
                    RP2040_USBCTRL_REGS_SIE_STATUS);

      rp2040_usbintr_setup(priv);
      handled |= RP2040_USBCTRL_REGS_INTR_SETUP_REQ;
    }

  if (stat & RP2040_USBCTRL_REGS_INTR_BUFF_STATUS)
    {
      rp2040_usbintr_buffstat(priv);
      handled |= RP2040_USBCTRL_REGS_INTR_BUFF_STATUS;
    }

  if (stat & RP2040_USBCTRL_REGS_INTR_BUS_RESET)
    {
      clrbits_reg32(RP2040_USBCTRL_REGS_SIE_STATUS_BUS_RESET,
                    RP2040_USBCTRL_REGS_SIE_STATUS);

      rp2040_usbintr_busreset(priv);
      handled |= RP2040_USBCTRL_REGS_INTR_BUS_RESET;
    }

  if (stat & RP2040_USBCTRL_REGS_INTR_EP_STALL_NAK)
    {
      uint32_t stnk;
      int i;

      stnk = getreg32(RP2040_USBCTRL_REGS_EP_STATUS_STALL_NAK);
      clrbits_reg32(stnk, RP2040_USBCTRL_REGS_EP_STATUS_STALL_NAK);

      for (i = 0; i < 32; i++)
        {
          if (stnk & (1 << i))
            {
              clrbits_reg32(RP2040_USBCTRL_DPRAM_EP_BUFF_CTRL_STALL,
                            RP2040_USBCTRL_DPRAM_EP_BUF_CTRL(i));
              _err("stall_nak: %d\n", i);
            }
        }
      handled |= RP2040_USBCTRL_REGS_INTR_EP_STALL_NAK;
    }

  if (stat != handled)
    {
      assert(0);
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
  g_usbdev.next_offset = RP2040_USBCTRL_DPRAM_DATA_BUF_OFFSET;

  for (i = 0; i < RP2040_NENDPOINTS * 2; i++)
    {
      g_usbdev.eplist[i].ep.ops = &g_epops;
      g_usbdev.eplist[i].ep.maxpacket = 64;
      g_usbdev.eplist[i].dev = &g_usbdev;
      g_usbdev.eplist[i].epphy = i / 2;
      sq_init(&g_usbdev.eplist[i].req_q);
      g_usbdev.eplist[i].ep.eplog = i / 2;
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

  memset((void *)RP2040_USBCTRL_DPRAM_BASE, 0, 0x1000);
  
  putreg32(RP2040_USBCTRL_REGS_USB_MUXING_SOFTCON |
           RP2040_USBCTRL_REGS_USB_MUXING_TO_PHY,
           RP2040_USBCTRL_REGS_USB_MUXING);
  putreg32(RP2040_USBCTRL_REGS_USB_PWR_VBUS_DETECT|
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
           RP2040_USBCTRL_REGS_INTR_SETUP_REQ |
           RP2040_USBCTRL_REGS_INTR_EP_STALL_NAK,
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
