/****************************************************************************
 * arch/arm/src/rp2040/rp2040_gpio.c
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
#include <assert.h>
#include <debug.h>

#include <nuttx/arch.h>

#include <arch/board/board.h>

#include "arm_arch.h"

#include "chip.h"

#include "rp2040_gpio.h"

#include "hardware/rp2040_pads_bank0.h"
#include "hardware/rp2040_io_bank0.h"
#include "hardware/rp2040_sio.h"

/****************************************************************************
 * Private Functions
 ****************************************************************************/

/****************************************************************************
 * Public Functions
 ****************************************************************************/

void rp2040_gpioinit(void)
{
  modbits_reg32(RP2040_PADS_BANK0_GPIO0_IE,
                RP2040_PADS_BANK0_GPIO0_IE | RP2040_PADS_BANK0_GPIO0_OD,
                RP2040_PADS_BANK0_GPIO0);

  putreg32(RP2040_IO_BANK0_GPIO0_CTRL_FUNCSEL_UART0_TX,
           RP2040_IO_BANK0_GPIO0_CTRL);

  modbits_reg32(RP2040_PADS_BANK0_GPIO1_IE,
                RP2040_PADS_BANK0_GPIO1_IE | RP2040_PADS_BANK0_GPIO1_OD,
                RP2040_PADS_BANK0_GPIO1);

  putreg32(RP2040_IO_BANK0_GPIO1_CTRL_FUNCSEL_UART0_RX,
           RP2040_IO_BANK0_GPIO1_CTRL);

#if 0
  setbits_reg32(RP2040_RESETS_RESET_uart0, RP2040_RESETS_RESET);
  clrbits_reg32(RP2040_RESETS_RESET_uart0, RP2040_RESETS_RESET);
  while (~getreg32(RP2040_RESETS_RESET_DONE) & RP2040_RESETS_RESET_uart0)
    ;
#endif

#if 0
    putreg32(RP2040_IO_BANK0_GPIO25_CTRL_FUNCSEL_SIO_25,
             RP2040_IO_BANK0_GPIO25_CTRL);
    putreg32(1 << 25, RP2040_SIO_GPIO_OE_SET);
    putreg32(1 << 25, RP2040_SIO_GPIO_OUT_SET);
    putreg32(1 << 25, RP2040_SIO_GPIO_OUT_CLR);
    putreg32(1 << 25, RP2040_SIO_GPIO_OUT_SET);
    putreg32(1 << 25, RP2040_SIO_GPIO_OUT_CLR);
    putreg32(1 << 25, RP2040_SIO_GPIO_OUT_SET);

    {
        int i;
        while (1) {
            putreg32(1 << 25, RP2040_SIO_GPIO_OUT_XOR);
            for (i = 0; i < 125000000 / 5; i++) {
                __asm__ volatile("nop");
            }
        }
    }
#endif
}
