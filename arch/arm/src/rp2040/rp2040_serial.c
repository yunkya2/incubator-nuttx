/****************************************************************************
 * arch/arm/src/rp2040/rp2040_serial.c
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
#include <unistd.h>
#include <string.h>
#include <errno.h>
#include <debug.h>

#ifdef CONFIG_SERIAL_TERMIOS
#  include <termios.h>
#endif

#include <nuttx/irq.h>
#include <nuttx/arch.h>
#include <nuttx/fs/ioctl.h>
#include <nuttx/serial/serial.h>
#include <nuttx/spinlock.h>

#include <arch/board/board.h>

#include "chip.h"
#include "arm_arch.h"
#include "arm_internal.h"

#include "rp2040_config.h"
#include "rp2040_serial.h"

#define BOARD_UART0_BASEFREQ  125000000

#define UART_INTR_ALL       (0x7ff)    /* All of interrupts */
#define UART_LCR_WLEN(x)    ((((x)-5)&3)<<5)

/****************************************************************************
 * Pre-processor definitions
 ****************************************************************************/

/* If we are not using the serial driver for the console, then we still must
 * provide some minimal implementation of up_putc.
 */

#if defined(USE_SERIALDRIVER) && defined(HAVE_UART)

/****************************************************************************
 * Private Types
 ****************************************************************************/

struct up_dev_s
{
  uintptr_t uartbase; /* Base address of UART registers */
  uint32_t basefreq;  /* Base frequency of input clock */
  uint32_t baud;      /* Configured baud */
  uint32_t ier;       /* Saved IER value */
  uint8_t id;         /* ID=0,1,2,3 */
  uint8_t irq;        /* IRQ associated with this UART */
  uint8_t parity;     /* 0=none, 1=odd, 2=even */
  uint8_t bits;       /* Number of bits (7 or 8) */
  bool stopbits2;     /* true: Configure with 2 stop bits instead of 1 */
  void *pmhandle;
};

/****************************************************************************
 * Private Function Prototypes
 ****************************************************************************/

static int up_setup(FAR struct uart_dev_s *dev);
static void up_shutdown(FAR struct uart_dev_s *dev);
static int up_attach(FAR struct uart_dev_s *dev);
static void up_detach(FAR struct uart_dev_s *dev);
static int up_interrupt(int irq, FAR void *context, FAR void *arg);
static int up_ioctl(FAR struct file *filep, int cmd, unsigned long arg);
static int up_receive(FAR struct uart_dev_s *dev, FAR unsigned int *status);
static void up_rxint(FAR struct uart_dev_s *dev, bool enable);
static bool up_rxavailable(FAR struct uart_dev_s *dev);
static void up_send(FAR struct uart_dev_s *dev, int ch);
static void up_txint(FAR struct uart_dev_s *dev, bool enable);
static bool up_txready(FAR struct uart_dev_s *dev);
static bool up_txempty(FAR struct uart_dev_s *dev);

/****************************************************************************
 * Private Data
 ****************************************************************************/

static const struct uart_ops_s g_uart_ops =
{
  .setup         = up_setup,
  .shutdown      = up_shutdown,
  .attach        = up_attach,
  .detach        = up_detach,
  .ioctl         = up_ioctl,
  .receive       = up_receive,
  .rxint         = up_rxint,
  .rxavailable   = up_rxavailable,
#ifdef CONFIG_SERIAL_IFLOWCONTROL
  .rxflowcontrol = NULL,
#endif
  .send          = up_send,
  .txint         = up_txint,
  .txready       = up_txready,
  .txempty       = up_txempty,
};

/* I/O buffers */

#ifdef CONFIG_RP2040_UART0
static char g_uart0rxbuffer[CONFIG_UART0_RXBUFSIZE];
static char g_uart0txbuffer[CONFIG_UART0_TXBUFSIZE];
#endif
#ifdef CONFIG_RP2040_UART1
static char g_uart1rxbuffer[CONFIG_UART1_RXBUFSIZE];
static char g_uart1txbuffer[CONFIG_UART1_TXBUFSIZE];
#endif

/* This describes the state of the RP2040 UART0 port. */

#ifdef CONFIG_RP2040_UART0
static struct up_dev_s g_uart0priv =
{
  .uartbase  = RP2040_UART0_BASE,
  .basefreq  = BOARD_UART0_BASEFREQ,
  .baud      = CONFIG_UART0_BAUD,
  .id        = 1,
  .irq       = RP2040_UART0_IRQ,
  .parity    = CONFIG_UART0_PARITY,
  .bits      = CONFIG_UART0_BITS,
  .stopbits2 = CONFIG_UART0_2STOP,
};

static uart_dev_t g_uart0port =
{
  .recv =
    {
      .size   = CONFIG_UART0_RXBUFSIZE,
      .buffer = g_uart0rxbuffer,
    },
  .xmit =
    {
      .size   = CONFIG_UART0_TXBUFSIZE,
      .buffer = g_uart0txbuffer,
    },
  .ops  = &g_uart_ops,
  .priv = &g_uart0priv,
};
#  define TTYS0_DEV g_uart0port /* UART0=ttyS0 */
#endif

/* This describes the state of the RP2040 UART1 port. */

#ifdef CONFIG_RP2040_UART1
static struct up_dev_s g_uart1priv =
{
  .uartbase  = RP2040_UART1_BASE,
  .basefreq  = BOARD_UART1_BASEFREQ,
  .baud      = CONFIG_UART1_BAUD,
  .id        = 1,
  .irq       = RP2040_UART1_IRQ,
  .parity    = CONFIG_UART1_PARITY,
  .bits      = CONFIG_UART1_BITS,
  .stopbits2 = CONFIG_UART1_2STOP,
};

static uart_dev_t g_uart1port =
{
  .recv =
    {
      .size   = CONFIG_UART1_RXBUFSIZE,
      .buffer = g_uart1rxbuffer,
    },
  .xmit =
    {
      .size   = CONFIG_UART1_TXBUFSIZE,
      .buffer = g_uart1txbuffer,
    },
  .ops  = &g_uart_ops,
  .priv = &g_uart1priv,
};
#  define TTYS1_DEV g_uart1port /* UART1=ttyS1 */
#endif

/* Which UART with be tty0/console and which tty1? tty2? tty3? */

#ifdef HAVE_CONSOLE
#  if defined(CONFIG_UART0_SERIAL_CONSOLE)
#    define CONSOLE_DEV     g_uart0port /* UART0=console */
#  elif defined(CONFIG_UART1_SERIAL_CONSOLE)
#    define CONSOLE_DEV     g_uart1port /* UART1=console */
#  endif
#endif /* HAVE_CONSOLE */

/****************************************************************************
 * Inline Functions
 ****************************************************************************/

/****************************************************************************
 * Name: up_serialin
 ****************************************************************************/

static inline uint32_t up_serialin(FAR struct up_dev_s *priv, int offset)
{
  return getreg32(priv->uartbase + offset);
}

/****************************************************************************
 * Name: up_serialout
 ****************************************************************************/

static inline void up_serialout(FAR struct up_dev_s *priv, int offset,
                                uint32_t value)
{
  putreg32(value, priv->uartbase + offset);
}

/****************************************************************************
 * Name: up_disableuartint
 ****************************************************************************/

static inline void up_disableuartint(FAR struct up_dev_s *priv,
                                     FAR uint32_t *ier)
{
  irqstate_t flags;

  flags = enter_critical_section();
  if (ier)
    {
      *ier = priv->ier & UART_INTR_ALL;
    }

  priv->ier &= ~UART_INTR_ALL;
  up_serialout(priv, RP2040_UART0_UARTIMSC_OFFSET, priv->ier);
  leave_critical_section(flags);
}

/****************************************************************************
 * Name: up_restoreuartint
 ****************************************************************************/

static inline void up_restoreuartint(FAR struct up_dev_s *priv, uint32_t ier)
{
  irqstate_t flags;

  flags = enter_critical_section();
  priv->ier |= ier & UART_INTR_ALL;
  up_serialout(priv, RP2040_UART0_UARTIMSC_OFFSET, priv->ier);
  leave_critical_section(flags);
}

/****************************************************************************
 * Name: up_enablebreaks
 ****************************************************************************/

static inline void up_enablebreaks(FAR struct up_dev_s *priv, bool enable)
{
  uint32_t lcr = up_serialin(priv, RP2040_UART0_UARTLCR_H_OFFSET);
  if (enable)
    {
      lcr |= RP2040_UART0_UARTLCR_H_BRK;
    }
  else
    {
      lcr &= ~RP2040_UART0_UARTLCR_H_BRK;
    }

  up_serialout(priv, RP2040_UART0_UARTLCR_H_OFFSET, lcr);
}

/****************************************************************************
 * Name: up_setup
 *
 * Description:
 *   Configure the UART baud, bits, parity, fifos, etc. This method is
 *   called the first time that the serial port is opened.
 *
 ****************************************************************************/

static int up_setup(FAR struct uart_dev_s *dev)
{
#ifndef CONFIG_SUPPRESS_UART_CONFIG
  FAR struct up_dev_s *priv = (FAR struct up_dev_s *)dev->priv;
  uint32_t lcr;
  uint32_t cr;

  rp2040_uart_setup(priv->id);

  /* Init HW */

  up_serialout(priv, RP2040_UART0_UARTCR_OFFSET, 0);
  up_serialout(priv, RP2040_UART0_UARTLCR_H_OFFSET, 0);
  up_serialout(priv, RP2040_UART0_UARTDMACR_OFFSET, 0);
  up_serialout(priv, RP2040_UART0_UARTRSR_OFFSET, 0xf);

  /* Set up the IER */

  priv->ier = up_serialin(priv, RP2040_UART0_UARTIMSC_OFFSET);

  /* Set the BAUD divisor */

  rp2040_setbaud(priv->uartbase, priv->basefreq, priv->baud);

  /* Set up the LCR */

  lcr = 0;
  if (priv->bits == 7)
    {
      lcr |= UART_LCR_WLEN(7);
    }
  else
    {
      lcr |= UART_LCR_WLEN(8);
    }

  if (priv->stopbits2)
    {
      lcr |= RP2040_UART0_UARTLCR_H_STP2;
    }

  if (priv->parity == 1)
    {
      lcr |= (RP2040_UART0_UARTLCR_H_PEN);
    }
  else if (priv->parity == 2)
    {
      lcr |= (RP2040_UART0_UARTLCR_H_PEN | RP2040_UART0_UARTLCR_H_EPS);
    }

  /* Save the LCR */

  up_serialout(priv, RP2040_UART0_UARTLCR_H_OFFSET, lcr);

  up_serialout(priv, RP2040_UART0_UARTIFLS_OFFSET, 0);
  up_serialout(priv, RP2040_UART0_UARTICR_OFFSET, 0x7ff);

  cr = RP2040_UART0_UARTCR_RXE | RP2040_UART0_UARTCR_TXE;

  up_serialout(priv, RP2040_UART0_UARTCR_OFFSET, cr);

  /* Enable FIFO and UART in the last */

  lcr |= RP2040_UART0_UARTLCR_H_FEN;
  up_serialout(priv, RP2040_UART0_UARTLCR_H_OFFSET, lcr);
  cr |= RP2040_UART0_UARTCR_UARTEN;
  up_serialout(priv, RP2040_UART0_UARTCR_OFFSET, cr);
#endif

  return OK;
}

/****************************************************************************
 * Name: up_shutdown
 *
 * Description:
 *   Disable the UART.  This method is called when the serial port is closed
 *
 ****************************************************************************/

static void up_shutdown(FAR struct uart_dev_s *dev)
{
  FAR struct up_dev_s *priv = (FAR struct up_dev_s *)dev->priv;

  /* Disable further interrupts from the UART */

  up_disableuartint(priv, NULL);
}

/****************************************************************************
 * Name: up_attach
 *
 * Description:
 *   Configure the UART to operation in interrupt driven mode.  This method is
 *   called when the serial port is opened.  Normally, this is just after the
 *   the setup() method is called, however, the serial console may operate in
 *   a non-interrupt driven mode during the boot phase.
 *
 *   RX and TX interrupts are not enabled when by the attach method (unless
 *   the hardware supports multiple levels of interrupt enabling).  The RX and
 *   TX interrupts are not enabled until the txint() and rxint() methods are
 *   called.
 *
 ****************************************************************************/

static int up_attach(FAR struct uart_dev_s *dev)
{
  FAR struct up_dev_s *priv = (FAR struct up_dev_s *)dev->priv;
  int ret;

  /* Attach and enable the IRQ */

  ret = irq_attach(priv->irq, up_interrupt, dev);
  if (ret == OK)
    {
      /* Enable the interrupt (RX and TX interrupts are still disabled
       * in the UART
       */

      up_enable_irq(priv->irq);
    }

  return ret;
}

/****************************************************************************
 * Name: up_detach
 *
 * Description:
 *   Detach UART interrupts.  This method is called when the serial port is
 *   closed normally just before the shutdown method is called.  The exception
 *   is the serial console which is never shutdown.
 *
 ****************************************************************************/

static void up_detach(FAR struct uart_dev_s *dev)
{
  FAR struct up_dev_s *priv = (FAR struct up_dev_s *)dev->priv;
  up_disable_irq(priv->irq);
  irq_detach(priv->irq);
}

/****************************************************************************
 * Name: up_interrupt
 *
 * Description:
 *   This is the UART interrupt handler.  It will be invoked when an
 *   interrupt received on the 'irq'  It should call uart_transmitchars or
 *   uart_receivechar to perform the appropriate data transfers.  The
 *   interrupt handling logic must be able to map the 'irq' number into the
 *   appropriate uart_dev_s structure in order to call these functions.
 *
 ****************************************************************************/

static int up_interrupt(int irq, FAR void *context, FAR void *arg)
{
  FAR struct uart_dev_s *dev = (FAR struct uart_dev_s *)arg;
  FAR struct up_dev_s *priv;
  uint32_t status;
  int passes;

  priv = (FAR struct up_dev_s *)dev->priv;

  /* Loop until there are no characters to be transferred or,
   * until we have been looping for a long time.
   */

  for (passes = 0; passes < 256; passes++)
    {
      /* Get the current UART status and check for loop
       * termination conditions
       */

      status = up_serialin(priv, RP2040_UART0_UARTMIS_OFFSET);
      if (status == 0)
        {
          return OK;
        }

      up_serialout(priv, RP2040_UART0_UARTICR_OFFSET, status);
      if (status & RP2040_UART0_UARTICR_RIMIC)
        {
        }

      if (status & RP2040_UART0_UARTICR_CTSMIC)
        {
        }

      if (status & RP2040_UART0_UARTICR_DCDMIC)
        {
        }

      if (status & RP2040_UART0_UARTICR_DSRMIC)
        {
        }

      if (status & (RP2040_UART0_UARTICR_RXIC | RP2040_UART0_UARTICR_RTIC))
        {
          uart_recvchars(dev);
        }

      if (status & RP2040_UART0_UARTICR_TXIC)
        {
          uart_xmitchars(dev);
        }

      if (status & RP2040_UART0_UARTICR_FEIC)
        {
        }

      if (status & RP2040_UART0_UARTICR_PEIC)
        {
        }

      if (status & RP2040_UART0_UARTICR_BEIC)
        {
        }

      if (status & RP2040_UART0_UARTICR_OEIC)
        {
        }
    }

  return OK;
}

/****************************************************************************
 * Name: up_ioctl
 *
 * Description:
 *   All ioctl calls will be routed through this method
 *
 ****************************************************************************/

static int up_ioctl(FAR struct file *filep, int cmd, unsigned long arg)
{
  FAR struct inode *inode    = filep->f_inode;
  FAR struct uart_dev_s *dev = inode->i_private;
  FAR struct up_dev_s *priv  = (FAR struct up_dev_s *)dev->priv;
  int ret                = OK;

  switch (cmd)
    {
#ifdef CONFIG_SERIAL_TIOCSERGSTRUCT
      case TIOCSERGSTRUCT:
        {
          FAR struct up_dev_s *user = (FAR struct up_dev_s *)arg;
          if (!user)
            {
              ret = -EINVAL;
            }
          else
            {
              memcpy(user, dev, sizeof(struct up_dev_s));
            }
        }
        break;
#endif

#ifdef CONFIG_SERIAL_TERMIOS
      case TCGETS:
        {
          FAR struct termios *termiosp = (FAR struct termios *)arg;

          if (!termiosp)
            {
              ret = -EINVAL;
              break;
            }

          flags = spin_lock_irqsave(&priv->lock);

          termiosp->c_cflag = ((priv->parity != 0) ? PARENB : 0) |
                              ((priv->parity == 1) ? PARODD : 0) |
                              ((priv->stopbits2) ? CSTOPB : 0);

          cfsetispeed(termiosp, priv->baud);

          switch (priv->bits)
            {
              case 5:
                termiosp->c_cflag |= CS5;
                break;

              case 6:
                termiosp->c_cflag |= CS6;
                break;

              case 7:
                termiosp->c_cflag |= CS7;
                break;

              case 8:
              default:
                termiosp->c_cflag |= CS8;
                break;
            }

          spin_unlock_irqrestore(&priv->lock, flags);
        }
        break;

      case TCSETS:
        {
          FAR struct termios *termiosp = (FAR struct termios *)arg;

          if (!termiosp)
            {
              ret = -EINVAL;
              break;
            }

          flags = spin_lock_irqsave(&priv->lock);

          switch (termiosp->c_cflag & CSIZE)
            {
              case CS5:
                priv->bits = 5;
                break;

              case CS6:
                priv->bits = 6;
                break;

              case CS7:
                priv->bits = 7;
                break;

              case CS8:
              default:
                priv->bits = 8;
                break;
            }

          if ((termiosp->c_cflag & PARENB) != 0)
            {
              priv->parity = (termiosp->c_cflag & PARODD) ? 1 : 2;
            }
          else
            {
              priv->parity = 0;
            }

          priv->stopbits2 = (termiosp->c_cflag & CSTOPB) != 0;

          priv->baud = cfgetispeed(termiosp);

          /* Configure the UART line format and speed. */

          up_set_format(dev);
          spin_unlock_irqrestore(&priv->lock, flags);
        }
        break;
#endif

      case TIOCSBRK: /* BSD compatibility: Turn break on, unconditionally */
        {
          irqstate_t flags = enter_critical_section();
          up_enablebreaks(priv, true);
          leave_critical_section(flags);
        }
        break;

      case TIOCCBRK: /* BSD compatibility: Turn break off, unconditionally */
        {
          irqstate_t flags;
          flags = enter_critical_section();
          up_enablebreaks(priv, false);
          leave_critical_section(flags);
        }
        break;

      case TCFLSH: /* Flush TX fifo etc. */
        {
          while (!up_txempty(dev));
        }
        break;

      default:
        ret = -ENOTTY;
        break;
    }

  return ret;
}

/****************************************************************************
 * Name: up_receive
 *
 * Description:
 *   Called (usually) from the interrupt level to receive one
 *   character from the UART.  Error bits associated with the
 *   receipt are provided in the return 'status'.
 *
 ****************************************************************************/

static int up_receive(FAR struct uart_dev_s *dev, FAR unsigned int *status)
{
  FAR struct up_dev_s *priv = (struct up_dev_s *)dev->priv;
  uint32_t rbr;

  rbr     = up_serialin(priv, RP2040_UART0_UARTDR_OFFSET);
  *status = rbr & 0xf00;
  return rbr & 0xff;
}

/****************************************************************************
 * Name: up_rxint
 *
 * Description:
 *   Call to enable or disable RX interrupts
 *
 ****************************************************************************/

static void up_rxint(FAR struct uart_dev_s *dev, bool enable)
{
  FAR struct up_dev_s *priv = (FAR struct up_dev_s *)dev->priv;
  irqstate_t flags;

  flags = enter_critical_section();
  if (enable)
    {
#ifndef CONFIG_SUPPRESS_SERIAL_INTS
      priv->ier |= (RP2040_UART0_UARTICR_RXIC | RP2040_UART0_UARTICR_RTIC);
#endif
    }
  else
    {
      priv->ier &= ~(RP2040_UART0_UARTICR_RXIC | RP2040_UART0_UARTICR_RTIC);
    }

  up_serialout(priv, RP2040_UART0_UARTIMSC_OFFSET, priv->ier);
  leave_critical_section(flags);
}

/****************************************************************************
 * Name: up_rxavailable
 *
 * Description:
 *   Return true if the receive fifo is not empty
 *
 ****************************************************************************/

static bool up_rxavailable(FAR struct uart_dev_s *dev)
{
  FAR struct up_dev_s *priv = (FAR struct up_dev_s *)dev->priv;
  return ((up_serialin(priv, RP2040_UART0_UARTFR_OFFSET) & RP2040_UART0_UARTFR_RXFE) == 0);
}

/****************************************************************************
 * Name: up_send
 *
 * Description:
 *   This method will send one byte on the UART
 *
 ****************************************************************************/

static void up_send(FAR struct uart_dev_s *dev, int ch)
{
  FAR struct up_dev_s *priv = (FAR struct up_dev_s *)dev->priv;
  up_serialout(priv, RP2040_UART0_UARTDR_OFFSET, (uint32_t)ch);
}

/****************************************************************************
 * Name: up_txint
 *
 * Description:
 *   Call to enable or disable TX interrupts
 *
 ****************************************************************************/

static void up_txint(FAR struct uart_dev_s *dev, bool enable)
{
  FAR struct up_dev_s *priv = (FAR struct up_dev_s *)dev->priv;
  irqstate_t flags;

  flags = enter_critical_section();
  if (enable)
    {
#ifndef CONFIG_SUPPRESS_SERIAL_INTS
      priv->ier |= RP2040_UART0_UARTICR_TXIC;
      up_serialout(priv, RP2040_UART0_UARTIMSC_OFFSET, priv->ier);

      /* Fake a TX interrupt here by just calling uart_xmitchars() with
       * interrupts disabled (note this may recurse).
       */

      uart_xmitchars(dev);
#endif
    }
  else
    {
      priv->ier &= ~RP2040_UART0_UARTICR_TXIC;
      up_serialout(priv, RP2040_UART0_UARTIMSC_OFFSET, priv->ier);
    }

  leave_critical_section(flags);
}

/****************************************************************************
 * Name: up_txready
 *
 * Description:
 *   Return true if the tranmsit fifo is not full
 *
 ****************************************************************************/

static bool up_txready(FAR struct uart_dev_s *dev)
{
  FAR struct up_dev_s *priv = (FAR struct up_dev_s *)dev->priv;
  return ((up_serialin(priv, RP2040_UART0_UARTFR_OFFSET) & RP2040_UART0_UARTFR_TXFF) == 0);
}

/****************************************************************************
 * Name: up_txempty
 *
 * Description:
 *   Return true if the transmit fifo is empty
 *
 ****************************************************************************/

static bool up_txempty(FAR struct uart_dev_s *dev)
{
  FAR struct up_dev_s *priv = (FAR struct up_dev_s *)dev->priv;
  uint32_t rbr = 0;
  rbr = up_serialin(priv, RP2040_UART0_UARTFR_OFFSET);
  return (((rbr & RP2040_UART0_UARTFR_TXFE) != 0) && ((rbr & RP2040_UART0_UARTFR_BUSY) == 0));
}

/****************************************************************************
 * Public Funtions
 ****************************************************************************/

/****************************************************************************
 * Name: arm_earlyserialinit
 *
 * Description:
 *   Performs the low level UART initialization early in debug so that the
 *   serial console will be available during bootup.  This must be called
 *   before up_serialinit.
 *
 *   NOTE: Configuration of the CONSOLE UART was performed by up_lowsetup()
 *   very early in the boot sequence.
 *
 ****************************************************************************/

#ifdef USE_EARLYSERIALINIT
void arm_earlyserialinit(void)
{
  /* Configuration whichever one is the console */

#  ifdef CONSOLE_DEV
  CONSOLE_DEV.isconsole = true;
  up_setup(&CONSOLE_DEV);
#  endif
}
#endif

/****************************************************************************
 * Name: arm_serialinit
 *
 * Description:
 *   Register serial console and serial ports.  This assumes that
 *   up_earlyserialinit was called previously.
 *
 ****************************************************************************/

void arm_serialinit(void)
{
#ifdef CONSOLE_DEV
  (void)uart_register("/dev/console", &CONSOLE_DEV);
#endif
#ifdef TTYS0_DEV
  (void)uart_register("/dev/ttyS0", &TTYS0_DEV);
#endif
#ifdef TTYS1_DEV
  (void)uart_register("/dev/ttyS1", &TTYS1_DEV);
#endif
}

/****************************************************************************
 * Name: up_putc
 *
 * Description:
 *   Provide priority, low-level access to support OS debug  writes
 *
 ****************************************************************************/

int up_putc(int ch)
{
#ifdef HAVE_CONSOLE
  struct up_dev_s *priv = (struct up_dev_s *)CONSOLE_DEV.priv;
  uint32_t ier;
  up_disableuartint(priv, &ier);
#endif

  /* Check for LF */

  if (ch == '\n')
    {
      /* Add CR */

      arm_lowputc('\r');
    }

  arm_lowputc(ch);
#ifdef HAVE_CONSOLE
  up_restoreuartint(priv, ier);
#endif

  return ch;
}

#else /* USE_SERIALDRIVER */

/****************************************************************************
 * Name: up_putc
 *
 * Description:
 *   Provide priority, low-level access to support OS debug writes
 *
 ****************************************************************************/

int up_putc(int ch)
{
#ifdef HAVE_UART
  /* Check for LF */

  if (ch == '\n')
    {
      /* Add CR */

      arm_lowputc('\r');
    }

  arm_lowputc(ch);
#endif
  return ch;
}

#endif /* USE_SERIALDRIVER */
