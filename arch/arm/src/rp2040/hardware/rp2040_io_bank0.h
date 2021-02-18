/****************************************************************************
 * arch/arm/src/rp2040/hardware/rp2040_io_bank0.h
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

#ifndef __ARCH_ARM_SRC_RP2040_HARDWARE_RP2040_IO_BANK0_H
#define __ARCH_ARM_SRC_RP2040_HARDWARE_RP2040_IO_BANK0_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include "hardware/rp2040_memorymap.h"

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

/* Register offsets *********************************************************/

#define RP2040_IO_BANK0_GPIO_STATUS_OFFSET(n)       ((n) * 8 + 0x000000)                        /* GPIO status */
#define RP2040_IO_BANK0_GPIO_CTRL_OFFSET(n)         ((n) * 8 + 0x000004)                        /* GPIO control including function select and overrides. */
#define RP2040_IO_BANK0_INTR_OFFSET(n)              (((n) >> 3) * 4 + 0x0000f0)                 /* Raw Interrupts */
#define RP2040_IO_BANK0_PROC_INTE_OFFSET(n, p)      (((n) >> 3) * 4 + ((p) * 0x30) + 0x000100)  /* Interrupt Enable */
#define RP2040_IO_BANK0_PROC_INTF_OFFSET(n, p)      (((n) >> 3) * 4 + ((p) * 0x30) + 0x000110)  /* Interrupt Force */
#define RP2040_IO_BANK0_PROC_INTS_OFFSET(n, p)      (((n) >> 3) * 4 + ((p) * 0x30) + 0x000120)  /* Interrupt status after masking & forcing */
#define RP2040_IO_BANK0_DORMANT_WAKE_INTE_OFFSET(n) (((n) >> 3) * 4 + 0x000160)                 /* Interrupt Enable for dormant_wake */
#define RP2040_IO_BANK0_DORMANT_WAKE_INTF_OFFSET(n) (((n) >> 3) * 4 + 0x000170)                 /* Interrupt Force for dormant_wake */
#define RP2040_IO_BANK0_DORMANT_WAKE_INTS_OFFSET(n) (((n) >> 3) * 4 + 0x000180)                 /* Interrupt status after masking & forcing for dormant_wake */

/* Register definitions *****************************************************/

#define RP2040_IO_BANK0_GPIO_STATUS(n)          (RP2040_IO_BANK0_BASE + RP2040_IO_BANK0_GPIO_STATUS_OFFSET(n))
#define RP2040_IO_BANK0_GPIO_CTRL(n)            (RP2040_IO_BANK0_BASE + RP2040_IO_BANK0_GPIO_CTRL_OFFSET(n))
#define RP2040_IO_BANK0_INTR(n)                 (RP2040_IO_BANK0_BASE + RP2040_IO_BANK0_INTR_OFFSET(n))
#define RP2040_IO_BANK0_PROC_INTE(n, p)         (RP2040_IO_BANK0_BASE + RP2040_IO_BANK0_PROC_INTE_OFFSET(n, p))
#define RP2040_IO_BANK0_PROC_INTF(n, p)         (RP2040_IO_BANK0_BASE + RP2040_IO_BANK0_PROC_INTF_OFFSET(n, p))
#define RP2040_IO_BANK0_PROC_INTS(n, p)         (RP2040_IO_BANK0_BASE + RP2040_IO_BANK0_PROC_INTS_OFFSET(n, p))
#define RP2040_IO_BANK0_DORMANT_WAKE_INTE(n)    (RP2040_IO_BANK0_BASE + RP2040_IO_BANK0_DORMANT_WAKE_INTE_OFFSET(n))
#define RP2040_IO_BANK0_DORMANT_WAKE_INTF(n)    (RP2040_IO_BANK0_BASE + RP2040_IO_BANK0_DORMANT_WAKE_INTF_OFFSET(n))
#define RP2040_IO_BANK0_DORMANT_WAKE_INTS(n)    (RP2040_IO_BANK0_BASE + RP2040_IO_BANK0_DORMANT_WAKE_INTS_OFFSET(n))

/* Register bit definitions *************************************************/

#define RP2040_IO_BANK0_GPIO_STATUS_IRQTOPROC                           (1 << 26)  /* interrupt to processors, after override is applied */
#define RP2040_IO_BANK0_GPIO_STATUS_IRQFROMPAD                          (1 << 24)  /* interrupt from pad before override is applied */
#define RP2040_IO_BANK0_GPIO_STATUS_INTOPERI                            (1 << 19)  /* input signal to peripheral, after override is applied */
#define RP2040_IO_BANK0_GPIO_STATUS_INFROMPAD                           (1 << 17)  /* input signal from pad, before override is applied */
#define RP2040_IO_BANK0_GPIO_STATUS_OETOPAD                             (1 << 13)  /* output enable to pad after register override is applied */
#define RP2040_IO_BANK0_GPIO_STATUS_OEFROMPERI                          (1 << 12)  /* output enable from selected peripheral, before register override is applied */
#define RP2040_IO_BANK0_GPIO_STATUS_OUTTOPAD                            (1 << 9)   /* output signal to pad after register override is applied */
#define RP2040_IO_BANK0_GPIO_STATUS_OUTFROMPERI                         (1 << 8)   /* output signal from selected peripheral, before register override is applied */

#define RP2040_IO_BANK0_GPIO_CTRL_IRQOVER_SHIFT                         (28)
#define RP2040_IO_BANK0_GPIO_CTRL_IRQOVER_MASK                          (0x03 << RP2040_IO_BANK0_GPIO0_CTRL_IRQOVER_SHIFT)
#define RP2040_IO_BANK0_GPIO_CTRL_IRQOVER_NORMAL                        (0x0 << RP2040_IO_BANK0_GPIO0_CTRL_IRQOVER_SHIFT)  /* don't invert the interrupt */
#define RP2040_IO_BANK0_GPIO_CTRL_IRQOVER_INVERT                        (0x1 << RP2040_IO_BANK0_GPIO0_CTRL_IRQOVER_SHIFT)  /* invert the interrupt */
#define RP2040_IO_BANK0_GPIO_CTRL_IRQOVER_LOW                           (0x2 << RP2040_IO_BANK0_GPIO0_CTRL_IRQOVER_SHIFT)  /* drive interrupt low */
#define RP2040_IO_BANK0_GPIO_CTRL_IRQOVER_HIGH                          (0x3 << RP2040_IO_BANK0_GPIO0_CTRL_IRQOVER_SHIFT)  /* drive interrupt high */
#define RP2040_IO_BANK0_GPIO_CTRL_INOVER_SHIFT                          (16)
#define RP2040_IO_BANK0_GPIO_CTRL_INOVER_MASK                           (0x03 << RP2040_IO_BANK0_GPIO0_CTRL_INOVER_SHIFT)
#define RP2040_IO_BANK0_GPIO_CTRL_INOVER_NORMAL                         (0x0 << RP2040_IO_BANK0_GPIO0_CTRL_INOVER_SHIFT)  /* don't invert the peri input */
#define RP2040_IO_BANK0_GPIO_CTRL_INOVER_INVERT                         (0x1 << RP2040_IO_BANK0_GPIO0_CTRL_INOVER_SHIFT)  /* invert the peri input */
#define RP2040_IO_BANK0_GPIO_CTRL_INOVER_LOW                            (0x2 << RP2040_IO_BANK0_GPIO0_CTRL_INOVER_SHIFT)  /* drive peri input low */
#define RP2040_IO_BANK0_GPIO_CTRL_INOVER_HIGH                           (0x3 << RP2040_IO_BANK0_GPIO0_CTRL_INOVER_SHIFT)  /* drive peri input high */
#define RP2040_IO_BANK0_GPIO_CTRL_OEOVER_SHIFT                          (12)
#define RP2040_IO_BANK0_GPIO_CTRL_OEOVER_MASK                           (0x03 << RP2040_IO_BANK0_GPIO0_CTRL_OEOVER_SHIFT)
#define RP2040_IO_BANK0_GPIO_CTRL_OEOVER_NORMAL                         (0x0 << RP2040_IO_BANK0_GPIO0_CTRL_OEOVER_SHIFT)  /* drive output enable from peripheral signal selected by funcsel */
#define RP2040_IO_BANK0_GPIO_CTRL_OEOVER_INVERT                         (0x1 << RP2040_IO_BANK0_GPIO0_CTRL_OEOVER_SHIFT)  /* drive output enable from inverse of peripheral signal selected by funcsel */
#define RP2040_IO_BANK0_GPIO_CTRL_OEOVER_DISABLE                        (0x2 << RP2040_IO_BANK0_GPIO0_CTRL_OEOVER_SHIFT)  /* disable output */
#define RP2040_IO_BANK0_GPIO_CTRL_OEOVER_ENABLE                         (0x3 << RP2040_IO_BANK0_GPIO0_CTRL_OEOVER_SHIFT)  /* enable output */
#define RP2040_IO_BANK0_GPIO_CTRL_OUTOVER_SHIFT                         (8)
#define RP2040_IO_BANK0_GPIO_CTRL_OUTOVER_MASK                          (0x03 << RP2040_IO_BANK0_GPIO0_CTRL_OUTOVER_SHIFT)
#define RP2040_IO_BANK0_GPIO_CTRL_OUTOVER_NORMAL                        (0x0 << RP2040_IO_BANK0_GPIO0_CTRL_OUTOVER_SHIFT)  /* drive output from peripheral signal selected by funcsel */
#define RP2040_IO_BANK0_GPIO_CTRL_OUTOVER_INVERT                        (0x1 << RP2040_IO_BANK0_GPIO0_CTRL_OUTOVER_SHIFT)  /* drive output from inverse of peripheral signal selected by funcsel */
#define RP2040_IO_BANK0_GPIO_CTRL_OUTOVER_LOW                           (0x2 << RP2040_IO_BANK0_GPIO0_CTRL_OUTOVER_SHIFT)  /* drive output low */
#define RP2040_IO_BANK0_GPIO_CTRL_OUTOVER_HIGH                          (0x3 << RP2040_IO_BANK0_GPIO0_CTRL_OUTOVER_SHIFT)  /* drive output high */
#define RP2040_IO_BANK0_GPIO_CTRL_FUNCSEL_MASK                          (0x1f)
#define RP2040_IO_BANK0_GPIO_CTRL_FUNCSEL_JTAG                          (0x0)
#define RP2040_IO_BANK0_GPIO_CTRL_FUNCSEL_SPI                           (0x1)
#define RP2040_IO_BANK0_GPIO_CTRL_FUNCSEL_UART                          (0x2)
#define RP2040_IO_BANK0_GPIO_CTRL_FUNCSEL_I2C                           (0x3)
#define RP2040_IO_BANK0_GPIO_CTRL_FUNCSEL_PWM                           (0x4)
#define RP2040_IO_BANK0_GPIO_CTRL_FUNCSEL_SIO                           (0x5)
#define RP2040_IO_BANK0_GPIO_CTRL_FUNCSEL_PIO0                          (0x6)
#define RP2040_IO_BANK0_GPIO_CTRL_FUNCSEL_PIO1                          (0x7)
#define RP2040_IO_BANK0_GPIO_CTRL_FUNCSEL_CLOCKS                        (0x8)
#define RP2040_IO_BANK0_GPIO_CTRL_FUNCSEL_USB                           (0x9)
#define RP2040_IO_BANK0_GPIO_CTRL_FUNCSEL_NULL                          (0x1f)

#define RP2040_IO_BANK0_INTR_GPIO_EDGE_HIGH(n)                          (1 << (((n) & 0x7) * 4 + 3))
#define RP2040_IO_BANK0_INTR_GPIO_EDGE_LOW(n)                           (1 << (((n) & 0x7) * 4 + 2))
#define RP2040_IO_BANK0_INTR_GPIO_LEVEL_HIGH(n)                         (1 << (((n) & 0x7) * 4 + 1))
#define RP2040_IO_BANK0_INTR_GPIO_LEVEL_LOW(n)                          (1 << (((n) & 0x7) * 4))

#endif /* __ARCH_ARM_SRC_RP2040_HARDWARE_RP2040_IO_BANK0_H */
