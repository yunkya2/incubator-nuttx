/****************************************************************************
 * arch/arm/src/rp2040/rp2040_uart.c
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

#include <stdint.h>

#include <nuttx/irq.h>
#include <arch/board/board.h>

#include <errno.h>

#include "arm_internal.h"
#include "arm_arch.h"

#include "chip.h"
#include "rp2040_config.h"
#include "rp2040_uart.h"

#define BOARD_UART0_BASEFREQ  125000000

#define UART_INTR_ALL       (0x7ff)    /* All of interrupts */
#define UART_LCR_WLEN(x)    ((((x)-5)&3)<<5)

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

/* Select UART parameters for the selected console */

#if defined(CONFIG_UART0_SERIAL_CONSOLE)
 #define CONSOLE_BASE     RP2040_UART0_BASE
 #define CONSOLE_BASEFREQ BOARD_UART0_BASEFREQ
 #define CONSOLE_BAUD     CONFIG_UART0_BAUD
 #define CONSOLE_BITS     CONFIG_UART0_BITS
 #define CONSOLE_PARITY   CONFIG_UART0_PARITY
 #define CONSOLE_2STOP    CONFIG_UART0_2STOP
#elif defined(CONFIG_UART1_SERIAL_CONSOLE)
 #define CONSOLE_BASE     RP2040_UART1_BASE
 #define CONSOLE_BASEFREQ BOARD_UART1_BASEFREQ
 #define CONSOLE_BAUD     CONFIG_UART1_BAUD
 #define CONSOLE_BITS     CONFIG_UART1_BITS
 #define CONSOLE_PARITY   CONFIG_UART1_PARITY
 #define CONSOLE_2STOP    CONFIG_UART1_2STOP
#elif defined(HAVE_CONSOLE)
 #error "No CONFIG_UARTn_SERIAL_CONSOLE Setting"
#endif

/* Get word length setting for the console */

#if CONSOLE_BITS >= 5 && CONSOLE_BITS <= 8
 #define CONSOLE_LCR_WLS UART_LCR_WLEN(CONSOLE_BITS)
#elif defined(HAVE_CONSOLE)
 #error "Invalid CONFIG_UARTn_BITS setting for console "
#endif

/* Get parity setting for the console */

#if CONSOLE_PARITY == 0
 #define CONSOLE_LCR_PAR 0
#elif CONSOLE_PARITY == 1
 #define CONSOLE_LCR_PAR (UART_LCR_PEN)
#elif CONSOLE_PARITY == 2
 #define CONSOLE_LCR_PAR (UART_LCR_PEN | UART_LCR_EPS)
#elif CONSOLE_PARITY == 3
 #define CONSOLE_LCR_PAR (UART_LCR_PEN | UART_LCR_SPS)
#elif CONSOLE_PARITY == 4
 #define CONSOLE_LCR_PAR (UART_LCR_PEN | UART_LCR_EPS | UART_LCR_SPS)
#elif defined(HAVE_CONSOLE)
 #error "Invalid CONFIG_UARTn_PARITY setting for CONSOLE"
#endif

/* Get stop-bit setting for the console and UART0/1/2 */

#if CONSOLE_2STOP != 0
 #define CONSOLE_LCR_STOP UART_LCR_STP2
#else
 #define CONSOLE_LCR_STOP 0
#endif

/* LCR and FCR values for the console */

#define CONSOLE_LCR_VALUE (CONSOLE_LCR_WLS | CONSOLE_LCR_PAR | CONSOLE_LCR_STOP)

/****************************************************************************
 * Private Types
 ****************************************************************************/

struct uartdev
{
  uintptr_t uartbase; /* Base address of UART registers */
};

/****************************************************************************
 * Private Function Prototypes
 ****************************************************************************/

/****************************************************************************
 * Public Data
 ****************************************************************************/

/****************************************************************************
 * Private Data
 ****************************************************************************/

static struct uartdev g_uartdevs[] =
{
  {
    RP2040_UART0_BASE
  },
  {
    RP2040_UART1_BASE
  },
};

/****************************************************************************
 * Private Functions
 ****************************************************************************/

/****************************************************************************
 * Public Functions
 ****************************************************************************/

/****************************************************************************
 * Name: arm_lowputc
 *
 * Description:
 *   Output one byte on the serial console
 *
 ****************************************************************************/

void arm_lowputc(char ch)
{
#if defined HAVE_UART && defined HAVE_CONSOLE
  /* Wait for the transmitter to be available */

  while ((getreg32(CONSOLE_BASE + RP2040_UART0_UARTFR_OFFSET) & RP2040_UART0_UARTFR_TXFF));

  /* Send the character */

  putreg32((uint32_t)ch, CONSOLE_BASE + RP2040_UART0_UARTDR_OFFSET);
#endif
}

/****************************************************************************
 * Name: rp2040_lowsetup
 *
 * Description:
 *   This performs basic initialization of the UART used for the serial
 *   console.  Its purpose is to get the console output available as soon
 *   as possible.
 *
 ****************************************************************************/

void rp2040_lowsetup(void)
{
#ifdef HAVE_UART
  /* Enable clocking and  for all console UART and disable power for
   * other UARTs
   */

#if defined(CONFIG_UART0_SERIAL_CONSOLE)
  rp2040_uart_setup(0);
#elif defined(CONFIG_UART1_SERIAL_CONSOLE)
  rp2040_uart_setup(1);
#endif

  /* Configure the console (only) */

#if defined(HAVE_CONSOLE) && !defined(CONFIG_SUPPRESS_UART_CONFIG)
  {
    uint32_t val;
    val = getreg32(CONSOLE_BASE + RP2040_UART0_UARTCR_OFFSET);
    if (val & RP2040_UART0_UARTCR_UARTEN)
      {
        return;
      }
  }

  putreg32(CONSOLE_LCR_VALUE, CONSOLE_BASE + RP2040_UART0_UARTLCR_H_OFFSET);
  rp2040_setbaud(CONSOLE_BASE, CONSOLE_BASEFREQ, CONSOLE_BAUD);
  putreg32(0, CONSOLE_BASE + RP2040_UART0_UARTIFLS_OFFSET);
  putreg32(UART_INTR_ALL, CONSOLE_BASE + RP2040_UART0_UARTICR_OFFSET);

#endif
#endif
}

void rp2040_uart_setup(int ch)
{
  uint32_t cr;
  uint32_t lcr;

  cr = getreg32(g_uartdevs[ch].uartbase + RP2040_UART0_UARTCR_OFFSET);
  putreg32(cr & ~(1 << 0), g_uartdevs[ch].uartbase + RP2040_UART0_UARTCR_OFFSET);

  lcr = getreg32(g_uartdevs[ch].uartbase + RP2040_UART0_UARTLCR_H_OFFSET);
  putreg32(lcr & ~(1 << 4), g_uartdevs[ch].uartbase + RP2040_UART0_UARTLCR_H_OFFSET);

  putreg32(cr, g_uartdevs[ch].uartbase + RP2040_UART0_UARTCR_OFFSET);
}

/****************************************************************************
 * Name: rp2040_setbaud
 *
 ****************************************************************************/

void rp2040_setbaud(uintptr_t uartbase, uint32_t basefreq, uint32_t baud)
{
  uint32_t ibrd;
  uint32_t fbrd;
  uint32_t div;
  uint32_t lcr_h;

  irqstate_t flags = enter_critical_section();

  div  = basefreq / (16 * baud / 100);
  ibrd = div / 100;

  /* fbrd will be up to 63 ((99 * 64 + 50) / 100 = 6386 / 100 = 63) */

  fbrd = (((div % 100) * 64) + 50) / 100;

  /* Invalid baud rate divider setting combination */

  if (ibrd == 0 || (ibrd == 65535 && fbrd != 0))
    {
      goto finish;
    }

  putreg32(ibrd, uartbase + RP2040_UART0_UARTIBRD_OFFSET);
  putreg32(fbrd, uartbase + RP2040_UART0_UARTFBRD_OFFSET);

  /* Baud rate is updated by writing to LCR_H */

  lcr_h = getreg32(uartbase + RP2040_UART0_UARTLCR_H_OFFSET);
  putreg32(lcr_h, uartbase + RP2040_UART0_UARTLCR_H_OFFSET);

finish:
  leave_critical_section(flags);
}
