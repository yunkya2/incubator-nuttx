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

#include <stdio.h>

#if 0
#define log(...) { char buf[100]; sprintf(buf, __VA_ARGS__); up_puts(buf); }
#define usbtrace(a, b)    _err(#a "\n")
#else
#define log(a, ...)
#define usbtrace(a, b)
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
  uint32_t *ep_ctrl;
  uint32_t *buf_ctrl;

  uint8_t epphy;    /* Physical EP address */
  bool    in;       /* in = 1, out = 0 */
  uint8_t type;     /* 0:cont, 1:iso, 2:bulk, 3:int */

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

  epnum = privep->epphy;
  if (desc)
    {
//      priv->eplist[epnum].ep.maxpacket = GETUINT16(desc->mxpacketsize);
    }

  usbtrace(TRACE_EPCONFIGURE, privep->epphy);

  if (epnum == 0)
    {
    }
  else
    {
      /* TBD */
    }

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


  /* disable */


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

  usbtrace(TRACE_EPFREEREQ, ((FAR struct cxd56_ep_s *)ep)->epphy);
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

static void rp2040_start_transfer(FAR struct rp2040_ep_s *privep,
                                 FAR void *buf, size_t len)
{
  uint32_t val;

  log("trans: ep:%d tx:%d pid:%d len:%d adr:%d\n",
       privep->epphy, privep->in, privep->next_pid, len, *(uint32_t *)0x50110000);

  val = len | RP2040_USBCTRL_DPRAM_EP_BUFF_CTRL_AVAIL;

  if (privep->in)
    {
      memcpy(privep->data_buf, buf, len);
      val |= RP2040_USBCTRL_DPRAM_EP_BUFF_CTRL_FULL;
    }

  if (privep->next_pid)
    val |= RP2040_USBCTRL_DPRAM_EP_BUFF_CTRL_DATA1_PID;

  privep->next_pid = 1 - privep->next_pid;

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

log("submit: %d\n", req->len);

  usbtrace(TRACE_EPSUBMIT, privep->epphy);

  req->result = 0;

//  if (privep->disable)
//    {
//      return -EBUSY;
//    }

  if (privep->epphy == 0)
    {
      flags = spin_lock_irqsave(NULL);
      sq_addfirst(&privreq->q_ent, &privep->req_q);
      rp2040_start_transfer(privep, req->buf, req->len);
      spin_unlock_irqrestore(NULL, flags);
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
//  FAR struct rp2040_ep_s *privep = (FAR struct rp2040_ep_s *)ep;
  irqstate_t flags;

  usbtrace(TRACE_EPSTALL, privep->epphy);

  /* STALL or RESUME the endpoint */

  flags = spin_lock_irqsave(NULL);
  usbtrace(resume ? TRACE_EPRESUME : TRACE_EPSTALL, privep->epphy);

  if (resume)
    {
//      privep->stalled = false;
//      epcmd_write(privep->epphy, USB_EPCMD_STALL_CLR | USB_EPCMD_TGL_CLR);
    }
  else
    {
//      privep->stalled = true;
//      epcmd_write(privep->epphy, USB_EPCMD_STALL_SET | USB_EPCMD_TGL_SET);
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

//  usbtrace(TRACE_DEVALLOCEP, (uint16_t)eplog);

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
  privep->stalled = 0;
  privep->curr_req_buf = NULL;
  privep->buf_ctrl = (uint32_t *)RP2040_USBCTRL_DPRAM_EP_BUF_CTRL(epindex);

  if (epphy == 0)
    {
      privep->data_buf = (uint8_t *)RP2040_USBCTRL_DPRAM_EP0_BUF_0;
      privep->ep_ctrl = NULL;
    }
  else
    {
      privep->data_buf = (uint8_t *)(RP2040_USBCTRL_DPRAM_BASE +
                                     priv->next_offset);
      priv->next_offset =
                     (priv->next_offset + privep->ep.maxpacket + 63) & ~63;
      privep->ep_ctrl = (uint32_t *)RP2040_USBCTRL_DPRAM_EP_CTRL(epindex);

      putreg32(RP2040_USBCTRL_DPRAM_EP_CTRL_ENABLE |
               RP2040_USBCTRL_DPRAM_EP_CTRL_INT_1BUF |
               (eptype << RP2040_USBCTRL_DPRAM_EP_CTRL_EP_TYPE_SHIFT) |
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

//  return (int)(getreg32(USB_TSTAMP));
  return 0;
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

static void rp2040_usbintr_setup(FAR struct rp2040_usbdev_s *priv)
{
  uint16_t index;
  uint16_t value;
  uint16_t len;

  /* Read EP0 SETUP data */

  memcpy(&priv->ctrl, (void *)RP2040_USBCTRL_DPRAM_SETUP_PACKET, USB_SIZEOF_CTRLREQ);


  priv->eplist[0].next_pid = 1;

  index = GETUINT16(priv->ctrl.index);
  value = GETUINT16(priv->ctrl.value);
  len = GETUINT16(priv->ctrl.len);

  log("SETUP type:%x req:%d %x len:%d\n", priv->ctrl.type, priv->ctrl.req, value, len);

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

              usbtrace(TRACE_INTDECODE(CXD56_TRACEINTID_GETSTATUS), 0);

              return;
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

              usbtrace(TRACE_INTDECODE(CXD56_TRACEINTID_CLEARFEATURE),
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

              usbtrace(TRACE_INTDECODE(CXD56_TRACEINTID_SETFEATURE), 0);

              return;
            }

          case USB_REQ_SETADDRESS:
            {
              /* type:  host-to-device; recipient = device
               * value: device address
               * index: 0
               * len:   0; data = none
               */

              usbtrace(TRACE_INTDECODE(CXD56_TRACEINTID_SETADDRESS), 0);

              priv->dev_addr = value & 0xff;

              rp2040_start_transfer(&priv->eplist[0], NULL, 0);

              return;
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
              usbtrace(TRACE_INTDECODE(CXD56_TRACEINTID_GETSETIFCONFIG), 0);
            }

            break;

          case USB_REQ_SYNCHFRAME:
            {
              /* type:  device-to-host; recipient = endpoint
               * value: 0
               * index: endpoint;
               * len:   2; data = frame number
               */

              usbtrace(TRACE_INTDECODE(CXD56_TRACEINTID_SYNCHFRAME), 0);
            }
            break;

          default:
            {
              usbtrace(TRACE_DEVERROR(CXD56_TRACEERR_STALLEDREQUEST),
                       priv->ctrl.req);
            }
            break;
        }
    }

  if (CLASS_SETUP(priv->driver, &priv->usbdev, &priv->ctrl, NULL, 0) < 0)
    {
      rp2040_epstall(&priv->eplist[0].ep, false);
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

log("BUFFSTAT: %x\n", stat);
  bit = 1;
  for (i = 0; i < 32 && stat != 0; i++)
    {
      if (stat & bit)
        {
          clrbits_reg32(bit, RP2040_USBCTRL_REGS_BUFF_STATUS);
          privep = &priv->eplist[i];

          if (i == 0)
            {
              if (priv->dev_addr)
                {
                  log("setaddr %d\n", priv->dev_addr);
                  putreg32(priv->dev_addr, RP2040_USBCTRL_REGS_ADDR_ENDP);
                  priv->dev_addr = 0;
                  break;
                }
            }
          else
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
                          privep->curr_req_len = 0;
                        }
                    }

                  if (privep->curr_req_len == 0)
                    {
                      q_ent = sq_remlast(&privep->req_q);
                      req = &container_of(q_ent, struct rp2040_req_s, q_ent)->req;

                      req->xfrd = privep->curr_req_xfrd;
                      req->result = 0;
                      req->callback(&privep->ep, req);

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
                  log("buffstat: %s %d %d\n", privep->in ? "tx" : "rx", i, len);
                }
              else
                {
                  log("buffstat: tx %d\n", i);
                }
            }

          stat &= ~bit;

          if (i == 0)
            {
              rp2040_start_transfer(&priv->eplist[1], NULL, 0); /* EP0 OUT */
            }
        }
      bit <<= 1;
    }
}

static void rp2040_usbintr_busreset(FAR struct rp2040_usbdev_s *priv)
{
  putreg32(0, RP2040_USBCTRL_REGS_ADDR_ENDP);
  CLASS_DISCONNECT(priv->driver, &priv->usbdev);
}

static int rp2040_usbinterrupt(int irq, void *context, FAR void *arg)
{
  FAR struct rp2040_usbdev_s *priv = (FAR struct rp2040_usbdev_s *)arg;
  uint32_t stat;
  uint32_t handled = 0;

  usbtrace(TRACEINTENTRY, 0);

  uinfo("irq=%d context=%p\n", irq, context);

  stat = getreg32(RP2040_USBCTRL_REGS_INTS);

  if (stat & RP2040_USBCTRL_REGS_INTR_SETUP_REQ)
    {
      _err("SETUP_REQ\n");

      clrbits_reg32(RP2040_USBCTRL_REGS_SIE_STATUS_SETUP_REC,
                    RP2040_USBCTRL_REGS_SIE_STATUS);

      rp2040_usbintr_setup(priv);
  handled |= RP2040_USBCTRL_REGS_INTR_SETUP_REQ;
    }

  if (stat & RP2040_USBCTRL_REGS_INTR_BUFF_STATUS)
    {
      _err("BUFF_STATUS\n");

      rp2040_usbintr_buffstat(priv);
  handled |= RP2040_USBCTRL_REGS_INTR_BUFF_STATUS;
    }

  if (stat & RP2040_USBCTRL_REGS_INTR_BUS_RESET)
    {

log("BUS_RESET\n");

      _err("BUS_RESET\n");

      clrbits_reg32(RP2040_USBCTRL_REGS_SIE_STATUS_BUS_RESET,
                    RP2040_USBCTRL_REGS_SIE_STATUS);

      rp2040_usbintr_busreset(priv);
  handled |= RP2040_USBCTRL_REGS_INTR_BUS_RESET;
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
  
#if 1
  putreg32(RP2040_USBCTRL_REGS_USB_MUXING_SOFTCON |
           RP2040_USBCTRL_REGS_USB_MUXING_TO_PHY,
           RP2040_USBCTRL_REGS_USB_MUXING);
  putreg32(RP2040_USBCTRL_REGS_USB_PWR_VBUS_DETECT|
           RP2040_USBCTRL_REGS_USB_PWR_VBUS_DETECT_OVERRIDE_EN,
           RP2040_USBCTRL_REGS_USB_PWR);
#endif

  rp2040_allocep(&g_usbdev.usbdev, 0x00, 0, USB_EP_ATTR_XFER_CONTROL);
  rp2040_allocep(&g_usbdev.usbdev, 0x80, 1, USB_EP_ATTR_XFER_CONTROL);

//  hw_endpoint_init(0x0, 64, 0);
//  hw_endpoint_init(0x80, 64, 0);

  /* Then bind the class driver */

  ret = CLASS_BIND(driver, &g_usbdev.usbdev);
  if (ret)
    {
      usbtrace(TRACE_DEVERROR(RP2040_TRACEERR_BINDFAILED), (uint16_t)-ret);
      g_usbdev.driver = NULL;
      return ret;
    }

#if 1
  putreg32(RP2040_USBCTRL_REGS_MAIN_CTRL_CONTROLLER_EN,
           RP2040_USBCTRL_REGS_MAIN_CTRL);
#endif

  /* Enable interrupt */

#if 1
  putreg32(RP2040_USBCTRL_REGS_SIE_CTRL_EP0_INT_1BUF,
           RP2040_USBCTRL_REGS_SIE_CTRL);
  putreg32(RP2040_USBCTRL_REGS_INTR_BUFF_STATUS |
           RP2040_USBCTRL_REGS_INTR_BUS_RESET |
           RP2040_USBCTRL_REGS_INTR_SETUP_REQ,
           RP2040_USBCTRL_REGS_INTE);
#endif

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
