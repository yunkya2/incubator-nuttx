/****************************************************************************
 * arch/arm/src/rp2040/hardware/rp2040_pads_bank0.h
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

#ifndef __ARCH_ARM_SRC_RP2040_HARDWARE_RP2040_PADS_BANK0_H
#define __ARCH_ARM_SRC_RP2040_HARDWARE_RP2040_PADS_BANK0_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include "hardware/rp2040_memorymap.h"

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

/* Register offsets *********************************************************/

#define RP2040_PADS_BANK0_VOLTAGE_SELECT_OFFSET  0x000000  /* Voltage select. Per bank control */
#define RP2040_PADS_BANK0_GPIO0_OFFSET           0x000004  /* Pad control register */
#define RP2040_PADS_BANK0_GPIO1_OFFSET           0x000008  /* Pad control register */
#define RP2040_PADS_BANK0_GPIO2_OFFSET           0x00000c  /* Pad control register */
#define RP2040_PADS_BANK0_GPIO3_OFFSET           0x000010  /* Pad control register */
#define RP2040_PADS_BANK0_GPIO4_OFFSET           0x000014  /* Pad control register */
#define RP2040_PADS_BANK0_GPIO5_OFFSET           0x000018  /* Pad control register */
#define RP2040_PADS_BANK0_GPIO6_OFFSET           0x00001c  /* Pad control register */
#define RP2040_PADS_BANK0_GPIO7_OFFSET           0x000020  /* Pad control register */
#define RP2040_PADS_BANK0_GPIO8_OFFSET           0x000024  /* Pad control register */
#define RP2040_PADS_BANK0_GPIO9_OFFSET           0x000028  /* Pad control register */
#define RP2040_PADS_BANK0_GPIO10_OFFSET          0x00002c  /* Pad control register */
#define RP2040_PADS_BANK0_GPIO11_OFFSET          0x000030  /* Pad control register */
#define RP2040_PADS_BANK0_GPIO12_OFFSET          0x000034  /* Pad control register */
#define RP2040_PADS_BANK0_GPIO13_OFFSET          0x000038  /* Pad control register */
#define RP2040_PADS_BANK0_GPIO14_OFFSET          0x00003c  /* Pad control register */
#define RP2040_PADS_BANK0_GPIO15_OFFSET          0x000040  /* Pad control register */
#define RP2040_PADS_BANK0_GPIO16_OFFSET          0x000044  /* Pad control register */
#define RP2040_PADS_BANK0_GPIO17_OFFSET          0x000048  /* Pad control register */
#define RP2040_PADS_BANK0_GPIO18_OFFSET          0x00004c  /* Pad control register */
#define RP2040_PADS_BANK0_GPIO19_OFFSET          0x000050  /* Pad control register */
#define RP2040_PADS_BANK0_GPIO20_OFFSET          0x000054  /* Pad control register */
#define RP2040_PADS_BANK0_GPIO21_OFFSET          0x000058  /* Pad control register */
#define RP2040_PADS_BANK0_GPIO22_OFFSET          0x00005c  /* Pad control register */
#define RP2040_PADS_BANK0_GPIO23_OFFSET          0x000060  /* Pad control register */
#define RP2040_PADS_BANK0_GPIO24_OFFSET          0x000064  /* Pad control register */
#define RP2040_PADS_BANK0_GPIO25_OFFSET          0x000068  /* Pad control register */
#define RP2040_PADS_BANK0_GPIO26_OFFSET          0x00006c  /* Pad control register */
#define RP2040_PADS_BANK0_GPIO27_OFFSET          0x000070  /* Pad control register */
#define RP2040_PADS_BANK0_GPIO28_OFFSET          0x000074  /* Pad control register */
#define RP2040_PADS_BANK0_GPIO29_OFFSET          0x000078  /* Pad control register */
#define RP2040_PADS_BANK0_SWCLK_OFFSET           0x00007c  /* Pad control register */
#define RP2040_PADS_BANK0_SWD_OFFSET             0x000080  /* Pad control register */

/* Register definitions *****************************************************/

#define RP2040_PADS_BANK0_VOLTAGE_SELECT  (RP2040_PADS_BANK0_BASE + RP2040_PADS_BANK0_VOLTAGE_SELECT_OFFSET)
#define RP2040_PADS_BANK0_GPIO0           (RP2040_PADS_BANK0_BASE + RP2040_PADS_BANK0_GPIO0_OFFSET)
#define RP2040_PADS_BANK0_GPIO1           (RP2040_PADS_BANK0_BASE + RP2040_PADS_BANK0_GPIO1_OFFSET)
#define RP2040_PADS_BANK0_GPIO2           (RP2040_PADS_BANK0_BASE + RP2040_PADS_BANK0_GPIO2_OFFSET)
#define RP2040_PADS_BANK0_GPIO3           (RP2040_PADS_BANK0_BASE + RP2040_PADS_BANK0_GPIO3_OFFSET)
#define RP2040_PADS_BANK0_GPIO4           (RP2040_PADS_BANK0_BASE + RP2040_PADS_BANK0_GPIO4_OFFSET)
#define RP2040_PADS_BANK0_GPIO5           (RP2040_PADS_BANK0_BASE + RP2040_PADS_BANK0_GPIO5_OFFSET)
#define RP2040_PADS_BANK0_GPIO6           (RP2040_PADS_BANK0_BASE + RP2040_PADS_BANK0_GPIO6_OFFSET)
#define RP2040_PADS_BANK0_GPIO7           (RP2040_PADS_BANK0_BASE + RP2040_PADS_BANK0_GPIO7_OFFSET)
#define RP2040_PADS_BANK0_GPIO8           (RP2040_PADS_BANK0_BASE + RP2040_PADS_BANK0_GPIO8_OFFSET)
#define RP2040_PADS_BANK0_GPIO9           (RP2040_PADS_BANK0_BASE + RP2040_PADS_BANK0_GPIO9_OFFSET)
#define RP2040_PADS_BANK0_GPIO10          (RP2040_PADS_BANK0_BASE + RP2040_PADS_BANK0_GPIO10_OFFSET)
#define RP2040_PADS_BANK0_GPIO11          (RP2040_PADS_BANK0_BASE + RP2040_PADS_BANK0_GPIO11_OFFSET)
#define RP2040_PADS_BANK0_GPIO12          (RP2040_PADS_BANK0_BASE + RP2040_PADS_BANK0_GPIO12_OFFSET)
#define RP2040_PADS_BANK0_GPIO13          (RP2040_PADS_BANK0_BASE + RP2040_PADS_BANK0_GPIO13_OFFSET)
#define RP2040_PADS_BANK0_GPIO14          (RP2040_PADS_BANK0_BASE + RP2040_PADS_BANK0_GPIO14_OFFSET)
#define RP2040_PADS_BANK0_GPIO15          (RP2040_PADS_BANK0_BASE + RP2040_PADS_BANK0_GPIO15_OFFSET)
#define RP2040_PADS_BANK0_GPIO16          (RP2040_PADS_BANK0_BASE + RP2040_PADS_BANK0_GPIO16_OFFSET)
#define RP2040_PADS_BANK0_GPIO17          (RP2040_PADS_BANK0_BASE + RP2040_PADS_BANK0_GPIO17_OFFSET)
#define RP2040_PADS_BANK0_GPIO18          (RP2040_PADS_BANK0_BASE + RP2040_PADS_BANK0_GPIO18_OFFSET)
#define RP2040_PADS_BANK0_GPIO19          (RP2040_PADS_BANK0_BASE + RP2040_PADS_BANK0_GPIO19_OFFSET)
#define RP2040_PADS_BANK0_GPIO20          (RP2040_PADS_BANK0_BASE + RP2040_PADS_BANK0_GPIO20_OFFSET)
#define RP2040_PADS_BANK0_GPIO21          (RP2040_PADS_BANK0_BASE + RP2040_PADS_BANK0_GPIO21_OFFSET)
#define RP2040_PADS_BANK0_GPIO22          (RP2040_PADS_BANK0_BASE + RP2040_PADS_BANK0_GPIO22_OFFSET)
#define RP2040_PADS_BANK0_GPIO23          (RP2040_PADS_BANK0_BASE + RP2040_PADS_BANK0_GPIO23_OFFSET)
#define RP2040_PADS_BANK0_GPIO24          (RP2040_PADS_BANK0_BASE + RP2040_PADS_BANK0_GPIO24_OFFSET)
#define RP2040_PADS_BANK0_GPIO25          (RP2040_PADS_BANK0_BASE + RP2040_PADS_BANK0_GPIO25_OFFSET)
#define RP2040_PADS_BANK0_GPIO26          (RP2040_PADS_BANK0_BASE + RP2040_PADS_BANK0_GPIO26_OFFSET)
#define RP2040_PADS_BANK0_GPIO27          (RP2040_PADS_BANK0_BASE + RP2040_PADS_BANK0_GPIO27_OFFSET)
#define RP2040_PADS_BANK0_GPIO28          (RP2040_PADS_BANK0_BASE + RP2040_PADS_BANK0_GPIO28_OFFSET)
#define RP2040_PADS_BANK0_GPIO29          (RP2040_PADS_BANK0_BASE + RP2040_PADS_BANK0_GPIO29_OFFSET)
#define RP2040_PADS_BANK0_SWCLK           (RP2040_PADS_BANK0_BASE + RP2040_PADS_BANK0_SWCLK_OFFSET)
#define RP2040_PADS_BANK0_SWD             (RP2040_PADS_BANK0_BASE + RP2040_PADS_BANK0_SWD_OFFSET)

/* Register bit definitions *************************************************/

#define RP2040_PADS_BANK0_VOLTAGE_SELECT      (1 << 0)  /* Set voltage to 1.8V (DVDD <= 1V8) */

#define RP2040_PADS_BANK0_GPIO0_OD            (1 << 7)  /* Output disable. Has priority over output enable from peripherals */
#define RP2040_PADS_BANK0_GPIO0_IE            (1 << 6)  /* Input enable */
#define RP2040_PADS_BANK0_GPIO0_DRIVE_SHIFT   (4)  /* Drive strength. */
#define RP2040_PADS_BANK0_GPIO0_DRIVE_MASK    (0x03 << RP2040_PADS_BANK0_GPIO0_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO0_DRIVE_2MA     (0x0 << RP2040_PADS_BANK0_GPIO0_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO0_DRIVE_4MA     (0x1 << RP2040_PADS_BANK0_GPIO0_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO0_DRIVE_8MA     (0x2 << RP2040_PADS_BANK0_GPIO0_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO0_DRIVE_12MA    (0x3 << RP2040_PADS_BANK0_GPIO0_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO0_PUE           (1 << 3)  /* Pull up enable */
#define RP2040_PADS_BANK0_GPIO0_PDE           (1 << 2)  /* Pull down enable */
#define RP2040_PADS_BANK0_GPIO0_SCHMITT       (1 << 1)  /* Enable schmitt trigger */
#define RP2040_PADS_BANK0_GPIO0_SLEWFAST      (1 << 0)  /* Slew rate control. 1 = Fast, 0 = Slow */

#define RP2040_PADS_BANK0_GPIO1_OD            (1 << 7)  /* Output disable. Has priority over output enable from peripherals */
#define RP2040_PADS_BANK0_GPIO1_IE            (1 << 6)  /* Input enable */
#define RP2040_PADS_BANK0_GPIO1_DRIVE_SHIFT   (4)  /* Drive strength. */
#define RP2040_PADS_BANK0_GPIO1_DRIVE_MASK    (0x03 << RP2040_PADS_BANK0_GPIO1_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO1_DRIVE_2MA     (0x0 << RP2040_PADS_BANK0_GPIO1_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO1_DRIVE_4MA     (0x1 << RP2040_PADS_BANK0_GPIO1_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO1_DRIVE_8MA     (0x2 << RP2040_PADS_BANK0_GPIO1_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO1_DRIVE_12MA    (0x3 << RP2040_PADS_BANK0_GPIO1_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO1_PUE           (1 << 3)  /* Pull up enable */
#define RP2040_PADS_BANK0_GPIO1_PDE           (1 << 2)  /* Pull down enable */
#define RP2040_PADS_BANK0_GPIO1_SCHMITT       (1 << 1)  /* Enable schmitt trigger */
#define RP2040_PADS_BANK0_GPIO1_SLEWFAST      (1 << 0)  /* Slew rate control. 1 = Fast, 0 = Slow */

#define RP2040_PADS_BANK0_GPIO2_OD            (1 << 7)  /* Output disable. Has priority over output enable from peripherals */
#define RP2040_PADS_BANK0_GPIO2_IE            (1 << 6)  /* Input enable */
#define RP2040_PADS_BANK0_GPIO2_DRIVE_SHIFT   (4)  /* Drive strength. */
#define RP2040_PADS_BANK0_GPIO2_DRIVE_MASK    (0x03 << RP2040_PADS_BANK0_GPIO2_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO2_DRIVE_2MA     (0x0 << RP2040_PADS_BANK0_GPIO2_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO2_DRIVE_4MA     (0x1 << RP2040_PADS_BANK0_GPIO2_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO2_DRIVE_8MA     (0x2 << RP2040_PADS_BANK0_GPIO2_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO2_DRIVE_12MA    (0x3 << RP2040_PADS_BANK0_GPIO2_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO2_PUE           (1 << 3)  /* Pull up enable */
#define RP2040_PADS_BANK0_GPIO2_PDE           (1 << 2)  /* Pull down enable */
#define RP2040_PADS_BANK0_GPIO2_SCHMITT       (1 << 1)  /* Enable schmitt trigger */
#define RP2040_PADS_BANK0_GPIO2_SLEWFAST      (1 << 0)  /* Slew rate control. 1 = Fast, 0 = Slow */

#define RP2040_PADS_BANK0_GPIO3_OD            (1 << 7)  /* Output disable. Has priority over output enable from peripherals */
#define RP2040_PADS_BANK0_GPIO3_IE            (1 << 6)  /* Input enable */
#define RP2040_PADS_BANK0_GPIO3_DRIVE_SHIFT   (4)  /* Drive strength. */
#define RP2040_PADS_BANK0_GPIO3_DRIVE_MASK    (0x03 << RP2040_PADS_BANK0_GPIO3_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO3_DRIVE_2MA     (0x0 << RP2040_PADS_BANK0_GPIO3_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO3_DRIVE_4MA     (0x1 << RP2040_PADS_BANK0_GPIO3_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO3_DRIVE_8MA     (0x2 << RP2040_PADS_BANK0_GPIO3_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO3_DRIVE_12MA    (0x3 << RP2040_PADS_BANK0_GPIO3_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO3_PUE           (1 << 3)  /* Pull up enable */
#define RP2040_PADS_BANK0_GPIO3_PDE           (1 << 2)  /* Pull down enable */
#define RP2040_PADS_BANK0_GPIO3_SCHMITT       (1 << 1)  /* Enable schmitt trigger */
#define RP2040_PADS_BANK0_GPIO3_SLEWFAST      (1 << 0)  /* Slew rate control. 1 = Fast, 0 = Slow */

#define RP2040_PADS_BANK0_GPIO4_OD            (1 << 7)  /* Output disable. Has priority over output enable from peripherals */
#define RP2040_PADS_BANK0_GPIO4_IE            (1 << 6)  /* Input enable */
#define RP2040_PADS_BANK0_GPIO4_DRIVE_SHIFT   (4)  /* Drive strength. */
#define RP2040_PADS_BANK0_GPIO4_DRIVE_MASK    (0x03 << RP2040_PADS_BANK0_GPIO4_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO4_DRIVE_2MA     (0x0 << RP2040_PADS_BANK0_GPIO4_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO4_DRIVE_4MA     (0x1 << RP2040_PADS_BANK0_GPIO4_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO4_DRIVE_8MA     (0x2 << RP2040_PADS_BANK0_GPIO4_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO4_DRIVE_12MA    (0x3 << RP2040_PADS_BANK0_GPIO4_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO4_PUE           (1 << 3)  /* Pull up enable */
#define RP2040_PADS_BANK0_GPIO4_PDE           (1 << 2)  /* Pull down enable */
#define RP2040_PADS_BANK0_GPIO4_SCHMITT       (1 << 1)  /* Enable schmitt trigger */
#define RP2040_PADS_BANK0_GPIO4_SLEWFAST      (1 << 0)  /* Slew rate control. 1 = Fast, 0 = Slow */

#define RP2040_PADS_BANK0_GPIO5_OD            (1 << 7)  /* Output disable. Has priority over output enable from peripherals */
#define RP2040_PADS_BANK0_GPIO5_IE            (1 << 6)  /* Input enable */
#define RP2040_PADS_BANK0_GPIO5_DRIVE_SHIFT   (4)  /* Drive strength. */
#define RP2040_PADS_BANK0_GPIO5_DRIVE_MASK    (0x03 << RP2040_PADS_BANK0_GPIO5_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO5_DRIVE_2MA     (0x0 << RP2040_PADS_BANK0_GPIO5_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO5_DRIVE_4MA     (0x1 << RP2040_PADS_BANK0_GPIO5_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO5_DRIVE_8MA     (0x2 << RP2040_PADS_BANK0_GPIO5_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO5_DRIVE_12MA    (0x3 << RP2040_PADS_BANK0_GPIO5_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO5_PUE           (1 << 3)  /* Pull up enable */
#define RP2040_PADS_BANK0_GPIO5_PDE           (1 << 2)  /* Pull down enable */
#define RP2040_PADS_BANK0_GPIO5_SCHMITT       (1 << 1)  /* Enable schmitt trigger */
#define RP2040_PADS_BANK0_GPIO5_SLEWFAST      (1 << 0)  /* Slew rate control. 1 = Fast, 0 = Slow */

#define RP2040_PADS_BANK0_GPIO6_OD            (1 << 7)  /* Output disable. Has priority over output enable from peripherals */
#define RP2040_PADS_BANK0_GPIO6_IE            (1 << 6)  /* Input enable */
#define RP2040_PADS_BANK0_GPIO6_DRIVE_SHIFT   (4)  /* Drive strength. */
#define RP2040_PADS_BANK0_GPIO6_DRIVE_MASK    (0x03 << RP2040_PADS_BANK0_GPIO6_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO6_DRIVE_2MA     (0x0 << RP2040_PADS_BANK0_GPIO6_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO6_DRIVE_4MA     (0x1 << RP2040_PADS_BANK0_GPIO6_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO6_DRIVE_8MA     (0x2 << RP2040_PADS_BANK0_GPIO6_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO6_DRIVE_12MA    (0x3 << RP2040_PADS_BANK0_GPIO6_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO6_PUE           (1 << 3)  /* Pull up enable */
#define RP2040_PADS_BANK0_GPIO6_PDE           (1 << 2)  /* Pull down enable */
#define RP2040_PADS_BANK0_GPIO6_SCHMITT       (1 << 1)  /* Enable schmitt trigger */
#define RP2040_PADS_BANK0_GPIO6_SLEWFAST      (1 << 0)  /* Slew rate control. 1 = Fast, 0 = Slow */

#define RP2040_PADS_BANK0_GPIO7_OD            (1 << 7)  /* Output disable. Has priority over output enable from peripherals */
#define RP2040_PADS_BANK0_GPIO7_IE            (1 << 6)  /* Input enable */
#define RP2040_PADS_BANK0_GPIO7_DRIVE_SHIFT   (4)  /* Drive strength. */
#define RP2040_PADS_BANK0_GPIO7_DRIVE_MASK    (0x03 << RP2040_PADS_BANK0_GPIO7_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO7_DRIVE_2MA     (0x0 << RP2040_PADS_BANK0_GPIO7_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO7_DRIVE_4MA     (0x1 << RP2040_PADS_BANK0_GPIO7_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO7_DRIVE_8MA     (0x2 << RP2040_PADS_BANK0_GPIO7_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO7_DRIVE_12MA    (0x3 << RP2040_PADS_BANK0_GPIO7_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO7_PUE           (1 << 3)  /* Pull up enable */
#define RP2040_PADS_BANK0_GPIO7_PDE           (1 << 2)  /* Pull down enable */
#define RP2040_PADS_BANK0_GPIO7_SCHMITT       (1 << 1)  /* Enable schmitt trigger */
#define RP2040_PADS_BANK0_GPIO7_SLEWFAST      (1 << 0)  /* Slew rate control. 1 = Fast, 0 = Slow */

#define RP2040_PADS_BANK0_GPIO8_OD            (1 << 7)  /* Output disable. Has priority over output enable from peripherals */
#define RP2040_PADS_BANK0_GPIO8_IE            (1 << 6)  /* Input enable */
#define RP2040_PADS_BANK0_GPIO8_DRIVE_SHIFT   (4)  /* Drive strength. */
#define RP2040_PADS_BANK0_GPIO8_DRIVE_MASK    (0x03 << RP2040_PADS_BANK0_GPIO8_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO8_DRIVE_2MA     (0x0 << RP2040_PADS_BANK0_GPIO8_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO8_DRIVE_4MA     (0x1 << RP2040_PADS_BANK0_GPIO8_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO8_DRIVE_8MA     (0x2 << RP2040_PADS_BANK0_GPIO8_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO8_DRIVE_12MA    (0x3 << RP2040_PADS_BANK0_GPIO8_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO8_PUE           (1 << 3)  /* Pull up enable */
#define RP2040_PADS_BANK0_GPIO8_PDE           (1 << 2)  /* Pull down enable */
#define RP2040_PADS_BANK0_GPIO8_SCHMITT       (1 << 1)  /* Enable schmitt trigger */
#define RP2040_PADS_BANK0_GPIO8_SLEWFAST      (1 << 0)  /* Slew rate control. 1 = Fast, 0 = Slow */

#define RP2040_PADS_BANK0_GPIO9_OD            (1 << 7)  /* Output disable. Has priority over output enable from peripherals */
#define RP2040_PADS_BANK0_GPIO9_IE            (1 << 6)  /* Input enable */
#define RP2040_PADS_BANK0_GPIO9_DRIVE_SHIFT   (4)  /* Drive strength. */
#define RP2040_PADS_BANK0_GPIO9_DRIVE_MASK    (0x03 << RP2040_PADS_BANK0_GPIO9_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO9_DRIVE_2MA     (0x0 << RP2040_PADS_BANK0_GPIO9_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO9_DRIVE_4MA     (0x1 << RP2040_PADS_BANK0_GPIO9_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO9_DRIVE_8MA     (0x2 << RP2040_PADS_BANK0_GPIO9_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO9_DRIVE_12MA    (0x3 << RP2040_PADS_BANK0_GPIO9_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO9_PUE           (1 << 3)  /* Pull up enable */
#define RP2040_PADS_BANK0_GPIO9_PDE           (1 << 2)  /* Pull down enable */
#define RP2040_PADS_BANK0_GPIO9_SCHMITT       (1 << 1)  /* Enable schmitt trigger */
#define RP2040_PADS_BANK0_GPIO9_SLEWFAST      (1 << 0)  /* Slew rate control. 1 = Fast, 0 = Slow */

#define RP2040_PADS_BANK0_GPIO10_OD           (1 << 7)  /* Output disable. Has priority over output enable from peripherals */
#define RP2040_PADS_BANK0_GPIO10_IE           (1 << 6)  /* Input enable */
#define RP2040_PADS_BANK0_GPIO10_DRIVE_SHIFT  (4)  /* Drive strength. */
#define RP2040_PADS_BANK0_GPIO10_DRIVE_MASK   (0x03 << RP2040_PADS_BANK0_GPIO10_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO10_DRIVE_2MA    (0x0 << RP2040_PADS_BANK0_GPIO10_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO10_DRIVE_4MA    (0x1 << RP2040_PADS_BANK0_GPIO10_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO10_DRIVE_8MA    (0x2 << RP2040_PADS_BANK0_GPIO10_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO10_DRIVE_12MA   (0x3 << RP2040_PADS_BANK0_GPIO10_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO10_PUE          (1 << 3)  /* Pull up enable */
#define RP2040_PADS_BANK0_GPIO10_PDE          (1 << 2)  /* Pull down enable */
#define RP2040_PADS_BANK0_GPIO10_SCHMITT      (1 << 1)  /* Enable schmitt trigger */
#define RP2040_PADS_BANK0_GPIO10_SLEWFAST     (1 << 0)  /* Slew rate control. 1 = Fast, 0 = Slow */

#define RP2040_PADS_BANK0_GPIO11_OD           (1 << 7)  /* Output disable. Has priority over output enable from peripherals */
#define RP2040_PADS_BANK0_GPIO11_IE           (1 << 6)  /* Input enable */
#define RP2040_PADS_BANK0_GPIO11_DRIVE_SHIFT  (4)  /* Drive strength. */
#define RP2040_PADS_BANK0_GPIO11_DRIVE_MASK   (0x03 << RP2040_PADS_BANK0_GPIO11_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO11_DRIVE_2MA    (0x0 << RP2040_PADS_BANK0_GPIO11_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO11_DRIVE_4MA    (0x1 << RP2040_PADS_BANK0_GPIO11_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO11_DRIVE_8MA    (0x2 << RP2040_PADS_BANK0_GPIO11_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO11_DRIVE_12MA   (0x3 << RP2040_PADS_BANK0_GPIO11_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO11_PUE          (1 << 3)  /* Pull up enable */
#define RP2040_PADS_BANK0_GPIO11_PDE          (1 << 2)  /* Pull down enable */
#define RP2040_PADS_BANK0_GPIO11_SCHMITT      (1 << 1)  /* Enable schmitt trigger */
#define RP2040_PADS_BANK0_GPIO11_SLEWFAST     (1 << 0)  /* Slew rate control. 1 = Fast, 0 = Slow */

#define RP2040_PADS_BANK0_GPIO12_OD           (1 << 7)  /* Output disable. Has priority over output enable from peripherals */
#define RP2040_PADS_BANK0_GPIO12_IE           (1 << 6)  /* Input enable */
#define RP2040_PADS_BANK0_GPIO12_DRIVE_SHIFT  (4)  /* Drive strength. */
#define RP2040_PADS_BANK0_GPIO12_DRIVE_MASK   (0x03 << RP2040_PADS_BANK0_GPIO12_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO12_DRIVE_2MA    (0x0 << RP2040_PADS_BANK0_GPIO12_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO12_DRIVE_4MA    (0x1 << RP2040_PADS_BANK0_GPIO12_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO12_DRIVE_8MA    (0x2 << RP2040_PADS_BANK0_GPIO12_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO12_DRIVE_12MA   (0x3 << RP2040_PADS_BANK0_GPIO12_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO12_PUE          (1 << 3)  /* Pull up enable */
#define RP2040_PADS_BANK0_GPIO12_PDE          (1 << 2)  /* Pull down enable */
#define RP2040_PADS_BANK0_GPIO12_SCHMITT      (1 << 1)  /* Enable schmitt trigger */
#define RP2040_PADS_BANK0_GPIO12_SLEWFAST     (1 << 0)  /* Slew rate control. 1 = Fast, 0 = Slow */

#define RP2040_PADS_BANK0_GPIO13_OD           (1 << 7)  /* Output disable. Has priority over output enable from peripherals */
#define RP2040_PADS_BANK0_GPIO13_IE           (1 << 6)  /* Input enable */
#define RP2040_PADS_BANK0_GPIO13_DRIVE_SHIFT  (4)  /* Drive strength. */
#define RP2040_PADS_BANK0_GPIO13_DRIVE_MASK   (0x03 << RP2040_PADS_BANK0_GPIO13_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO13_DRIVE_2MA    (0x0 << RP2040_PADS_BANK0_GPIO13_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO13_DRIVE_4MA    (0x1 << RP2040_PADS_BANK0_GPIO13_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO13_DRIVE_8MA    (0x2 << RP2040_PADS_BANK0_GPIO13_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO13_DRIVE_12MA   (0x3 << RP2040_PADS_BANK0_GPIO13_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO13_PUE          (1 << 3)  /* Pull up enable */
#define RP2040_PADS_BANK0_GPIO13_PDE          (1 << 2)  /* Pull down enable */
#define RP2040_PADS_BANK0_GPIO13_SCHMITT      (1 << 1)  /* Enable schmitt trigger */
#define RP2040_PADS_BANK0_GPIO13_SLEWFAST     (1 << 0)  /* Slew rate control. 1 = Fast, 0 = Slow */

#define RP2040_PADS_BANK0_GPIO14_OD           (1 << 7)  /* Output disable. Has priority over output enable from peripherals */
#define RP2040_PADS_BANK0_GPIO14_IE           (1 << 6)  /* Input enable */
#define RP2040_PADS_BANK0_GPIO14_DRIVE_SHIFT  (4)  /* Drive strength. */
#define RP2040_PADS_BANK0_GPIO14_DRIVE_MASK   (0x03 << RP2040_PADS_BANK0_GPIO14_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO14_DRIVE_2MA    (0x0 << RP2040_PADS_BANK0_GPIO14_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO14_DRIVE_4MA    (0x1 << RP2040_PADS_BANK0_GPIO14_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO14_DRIVE_8MA    (0x2 << RP2040_PADS_BANK0_GPIO14_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO14_DRIVE_12MA   (0x3 << RP2040_PADS_BANK0_GPIO14_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO14_PUE          (1 << 3)  /* Pull up enable */
#define RP2040_PADS_BANK0_GPIO14_PDE          (1 << 2)  /* Pull down enable */
#define RP2040_PADS_BANK0_GPIO14_SCHMITT      (1 << 1)  /* Enable schmitt trigger */
#define RP2040_PADS_BANK0_GPIO14_SLEWFAST     (1 << 0)  /* Slew rate control. 1 = Fast, 0 = Slow */

#define RP2040_PADS_BANK0_GPIO15_OD           (1 << 7)  /* Output disable. Has priority over output enable from peripherals */
#define RP2040_PADS_BANK0_GPIO15_IE           (1 << 6)  /* Input enable */
#define RP2040_PADS_BANK0_GPIO15_DRIVE_SHIFT  (4)  /* Drive strength. */
#define RP2040_PADS_BANK0_GPIO15_DRIVE_MASK   (0x03 << RP2040_PADS_BANK0_GPIO15_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO15_DRIVE_2MA    (0x0 << RP2040_PADS_BANK0_GPIO15_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO15_DRIVE_4MA    (0x1 << RP2040_PADS_BANK0_GPIO15_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO15_DRIVE_8MA    (0x2 << RP2040_PADS_BANK0_GPIO15_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO15_DRIVE_12MA   (0x3 << RP2040_PADS_BANK0_GPIO15_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO15_PUE          (1 << 3)  /* Pull up enable */
#define RP2040_PADS_BANK0_GPIO15_PDE          (1 << 2)  /* Pull down enable */
#define RP2040_PADS_BANK0_GPIO15_SCHMITT      (1 << 1)  /* Enable schmitt trigger */
#define RP2040_PADS_BANK0_GPIO15_SLEWFAST     (1 << 0)  /* Slew rate control. 1 = Fast, 0 = Slow */

#define RP2040_PADS_BANK0_GPIO16_OD           (1 << 7)  /* Output disable. Has priority over output enable from peripherals */
#define RP2040_PADS_BANK0_GPIO16_IE           (1 << 6)  /* Input enable */
#define RP2040_PADS_BANK0_GPIO16_DRIVE_SHIFT  (4)  /* Drive strength. */
#define RP2040_PADS_BANK0_GPIO16_DRIVE_MASK   (0x03 << RP2040_PADS_BANK0_GPIO16_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO16_DRIVE_2MA    (0x0 << RP2040_PADS_BANK0_GPIO16_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO16_DRIVE_4MA    (0x1 << RP2040_PADS_BANK0_GPIO16_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO16_DRIVE_8MA    (0x2 << RP2040_PADS_BANK0_GPIO16_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO16_DRIVE_12MA   (0x3 << RP2040_PADS_BANK0_GPIO16_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO16_PUE          (1 << 3)  /* Pull up enable */
#define RP2040_PADS_BANK0_GPIO16_PDE          (1 << 2)  /* Pull down enable */
#define RP2040_PADS_BANK0_GPIO16_SCHMITT      (1 << 1)  /* Enable schmitt trigger */
#define RP2040_PADS_BANK0_GPIO16_SLEWFAST     (1 << 0)  /* Slew rate control. 1 = Fast, 0 = Slow */

#define RP2040_PADS_BANK0_GPIO17_OD           (1 << 7)  /* Output disable. Has priority over output enable from peripherals */
#define RP2040_PADS_BANK0_GPIO17_IE           (1 << 6)  /* Input enable */
#define RP2040_PADS_BANK0_GPIO17_DRIVE_SHIFT  (4)  /* Drive strength. */
#define RP2040_PADS_BANK0_GPIO17_DRIVE_MASK   (0x03 << RP2040_PADS_BANK0_GPIO17_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO17_DRIVE_2MA    (0x0 << RP2040_PADS_BANK0_GPIO17_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO17_DRIVE_4MA    (0x1 << RP2040_PADS_BANK0_GPIO17_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO17_DRIVE_8MA    (0x2 << RP2040_PADS_BANK0_GPIO17_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO17_DRIVE_12MA   (0x3 << RP2040_PADS_BANK0_GPIO17_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO17_PUE          (1 << 3)  /* Pull up enable */
#define RP2040_PADS_BANK0_GPIO17_PDE          (1 << 2)  /* Pull down enable */
#define RP2040_PADS_BANK0_GPIO17_SCHMITT      (1 << 1)  /* Enable schmitt trigger */
#define RP2040_PADS_BANK0_GPIO17_SLEWFAST     (1 << 0)  /* Slew rate control. 1 = Fast, 0 = Slow */

#define RP2040_PADS_BANK0_GPIO18_OD           (1 << 7)  /* Output disable. Has priority over output enable from peripherals */
#define RP2040_PADS_BANK0_GPIO18_IE           (1 << 6)  /* Input enable */
#define RP2040_PADS_BANK0_GPIO18_DRIVE_SHIFT  (4)  /* Drive strength. */
#define RP2040_PADS_BANK0_GPIO18_DRIVE_MASK   (0x03 << RP2040_PADS_BANK0_GPIO18_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO18_DRIVE_2MA    (0x0 << RP2040_PADS_BANK0_GPIO18_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO18_DRIVE_4MA    (0x1 << RP2040_PADS_BANK0_GPIO18_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO18_DRIVE_8MA    (0x2 << RP2040_PADS_BANK0_GPIO18_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO18_DRIVE_12MA   (0x3 << RP2040_PADS_BANK0_GPIO18_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO18_PUE          (1 << 3)  /* Pull up enable */
#define RP2040_PADS_BANK0_GPIO18_PDE          (1 << 2)  /* Pull down enable */
#define RP2040_PADS_BANK0_GPIO18_SCHMITT      (1 << 1)  /* Enable schmitt trigger */
#define RP2040_PADS_BANK0_GPIO18_SLEWFAST     (1 << 0)  /* Slew rate control. 1 = Fast, 0 = Slow */

#define RP2040_PADS_BANK0_GPIO19_OD           (1 << 7)  /* Output disable. Has priority over output enable from peripherals */
#define RP2040_PADS_BANK0_GPIO19_IE           (1 << 6)  /* Input enable */
#define RP2040_PADS_BANK0_GPIO19_DRIVE_SHIFT  (4)  /* Drive strength. */
#define RP2040_PADS_BANK0_GPIO19_DRIVE_MASK   (0x03 << RP2040_PADS_BANK0_GPIO19_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO19_DRIVE_2MA    (0x0 << RP2040_PADS_BANK0_GPIO19_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO19_DRIVE_4MA    (0x1 << RP2040_PADS_BANK0_GPIO19_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO19_DRIVE_8MA    (0x2 << RP2040_PADS_BANK0_GPIO19_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO19_DRIVE_12MA   (0x3 << RP2040_PADS_BANK0_GPIO19_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO19_PUE          (1 << 3)  /* Pull up enable */
#define RP2040_PADS_BANK0_GPIO19_PDE          (1 << 2)  /* Pull down enable */
#define RP2040_PADS_BANK0_GPIO19_SCHMITT      (1 << 1)  /* Enable schmitt trigger */
#define RP2040_PADS_BANK0_GPIO19_SLEWFAST     (1 << 0)  /* Slew rate control. 1 = Fast, 0 = Slow */

#define RP2040_PADS_BANK0_GPIO20_OD           (1 << 7)  /* Output disable. Has priority over output enable from peripherals */
#define RP2040_PADS_BANK0_GPIO20_IE           (1 << 6)  /* Input enable */
#define RP2040_PADS_BANK0_GPIO20_DRIVE_SHIFT  (4)  /* Drive strength. */
#define RP2040_PADS_BANK0_GPIO20_DRIVE_MASK   (0x03 << RP2040_PADS_BANK0_GPIO20_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO20_DRIVE_2MA    (0x0 << RP2040_PADS_BANK0_GPIO20_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO20_DRIVE_4MA    (0x1 << RP2040_PADS_BANK0_GPIO20_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO20_DRIVE_8MA    (0x2 << RP2040_PADS_BANK0_GPIO20_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO20_DRIVE_12MA   (0x3 << RP2040_PADS_BANK0_GPIO20_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO20_PUE          (1 << 3)  /* Pull up enable */
#define RP2040_PADS_BANK0_GPIO20_PDE          (1 << 2)  /* Pull down enable */
#define RP2040_PADS_BANK0_GPIO20_SCHMITT      (1 << 1)  /* Enable schmitt trigger */
#define RP2040_PADS_BANK0_GPIO20_SLEWFAST     (1 << 0)  /* Slew rate control. 1 = Fast, 0 = Slow */

#define RP2040_PADS_BANK0_GPIO21_OD           (1 << 7)  /* Output disable. Has priority over output enable from peripherals */
#define RP2040_PADS_BANK0_GPIO21_IE           (1 << 6)  /* Input enable */
#define RP2040_PADS_BANK0_GPIO21_DRIVE_SHIFT  (4)  /* Drive strength. */
#define RP2040_PADS_BANK0_GPIO21_DRIVE_MASK   (0x03 << RP2040_PADS_BANK0_GPIO21_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO21_DRIVE_2MA    (0x0 << RP2040_PADS_BANK0_GPIO21_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO21_DRIVE_4MA    (0x1 << RP2040_PADS_BANK0_GPIO21_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO21_DRIVE_8MA    (0x2 << RP2040_PADS_BANK0_GPIO21_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO21_DRIVE_12MA   (0x3 << RP2040_PADS_BANK0_GPIO21_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO21_PUE          (1 << 3)  /* Pull up enable */
#define RP2040_PADS_BANK0_GPIO21_PDE          (1 << 2)  /* Pull down enable */
#define RP2040_PADS_BANK0_GPIO21_SCHMITT      (1 << 1)  /* Enable schmitt trigger */
#define RP2040_PADS_BANK0_GPIO21_SLEWFAST     (1 << 0)  /* Slew rate control. 1 = Fast, 0 = Slow */

#define RP2040_PADS_BANK0_GPIO22_OD           (1 << 7)  /* Output disable. Has priority over output enable from peripherals */
#define RP2040_PADS_BANK0_GPIO22_IE           (1 << 6)  /* Input enable */
#define RP2040_PADS_BANK0_GPIO22_DRIVE_SHIFT  (4)  /* Drive strength. */
#define RP2040_PADS_BANK0_GPIO22_DRIVE_MASK   (0x03 << RP2040_PADS_BANK0_GPIO22_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO22_DRIVE_2MA    (0x0 << RP2040_PADS_BANK0_GPIO22_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO22_DRIVE_4MA    (0x1 << RP2040_PADS_BANK0_GPIO22_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO22_DRIVE_8MA    (0x2 << RP2040_PADS_BANK0_GPIO22_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO22_DRIVE_12MA   (0x3 << RP2040_PADS_BANK0_GPIO22_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO22_PUE          (1 << 3)  /* Pull up enable */
#define RP2040_PADS_BANK0_GPIO22_PDE          (1 << 2)  /* Pull down enable */
#define RP2040_PADS_BANK0_GPIO22_SCHMITT      (1 << 1)  /* Enable schmitt trigger */
#define RP2040_PADS_BANK0_GPIO22_SLEWFAST     (1 << 0)  /* Slew rate control. 1 = Fast, 0 = Slow */

#define RP2040_PADS_BANK0_GPIO23_OD           (1 << 7)  /* Output disable. Has priority over output enable from peripherals */
#define RP2040_PADS_BANK0_GPIO23_IE           (1 << 6)  /* Input enable */
#define RP2040_PADS_BANK0_GPIO23_DRIVE_SHIFT  (4)  /* Drive strength. */
#define RP2040_PADS_BANK0_GPIO23_DRIVE_MASK   (0x03 << RP2040_PADS_BANK0_GPIO23_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO23_DRIVE_2MA    (0x0 << RP2040_PADS_BANK0_GPIO23_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO23_DRIVE_4MA    (0x1 << RP2040_PADS_BANK0_GPIO23_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO23_DRIVE_8MA    (0x2 << RP2040_PADS_BANK0_GPIO23_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO23_DRIVE_12MA   (0x3 << RP2040_PADS_BANK0_GPIO23_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO23_PUE          (1 << 3)  /* Pull up enable */
#define RP2040_PADS_BANK0_GPIO23_PDE          (1 << 2)  /* Pull down enable */
#define RP2040_PADS_BANK0_GPIO23_SCHMITT      (1 << 1)  /* Enable schmitt trigger */
#define RP2040_PADS_BANK0_GPIO23_SLEWFAST     (1 << 0)  /* Slew rate control. 1 = Fast, 0 = Slow */

#define RP2040_PADS_BANK0_GPIO24_OD           (1 << 7)  /* Output disable. Has priority over output enable from peripherals */
#define RP2040_PADS_BANK0_GPIO24_IE           (1 << 6)  /* Input enable */
#define RP2040_PADS_BANK0_GPIO24_DRIVE_SHIFT  (4)  /* Drive strength. */
#define RP2040_PADS_BANK0_GPIO24_DRIVE_MASK   (0x03 << RP2040_PADS_BANK0_GPIO24_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO24_DRIVE_2MA    (0x0 << RP2040_PADS_BANK0_GPIO24_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO24_DRIVE_4MA    (0x1 << RP2040_PADS_BANK0_GPIO24_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO24_DRIVE_8MA    (0x2 << RP2040_PADS_BANK0_GPIO24_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO24_DRIVE_12MA   (0x3 << RP2040_PADS_BANK0_GPIO24_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO24_PUE          (1 << 3)  /* Pull up enable */
#define RP2040_PADS_BANK0_GPIO24_PDE          (1 << 2)  /* Pull down enable */
#define RP2040_PADS_BANK0_GPIO24_SCHMITT      (1 << 1)  /* Enable schmitt trigger */
#define RP2040_PADS_BANK0_GPIO24_SLEWFAST     (1 << 0)  /* Slew rate control. 1 = Fast, 0 = Slow */

#define RP2040_PADS_BANK0_GPIO25_OD           (1 << 7)  /* Output disable. Has priority over output enable from peripherals */
#define RP2040_PADS_BANK0_GPIO25_IE           (1 << 6)  /* Input enable */
#define RP2040_PADS_BANK0_GPIO25_DRIVE_SHIFT  (4)  /* Drive strength. */
#define RP2040_PADS_BANK0_GPIO25_DRIVE_MASK   (0x03 << RP2040_PADS_BANK0_GPIO25_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO25_DRIVE_2MA    (0x0 << RP2040_PADS_BANK0_GPIO25_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO25_DRIVE_4MA    (0x1 << RP2040_PADS_BANK0_GPIO25_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO25_DRIVE_8MA    (0x2 << RP2040_PADS_BANK0_GPIO25_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO25_DRIVE_12MA   (0x3 << RP2040_PADS_BANK0_GPIO25_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO25_PUE          (1 << 3)  /* Pull up enable */
#define RP2040_PADS_BANK0_GPIO25_PDE          (1 << 2)  /* Pull down enable */
#define RP2040_PADS_BANK0_GPIO25_SCHMITT      (1 << 1)  /* Enable schmitt trigger */
#define RP2040_PADS_BANK0_GPIO25_SLEWFAST     (1 << 0)  /* Slew rate control. 1 = Fast, 0 = Slow */

#define RP2040_PADS_BANK0_GPIO26_OD           (1 << 7)  /* Output disable. Has priority over output enable from peripherals */
#define RP2040_PADS_BANK0_GPIO26_IE           (1 << 6)  /* Input enable */
#define RP2040_PADS_BANK0_GPIO26_DRIVE_SHIFT  (4)  /* Drive strength. */
#define RP2040_PADS_BANK0_GPIO26_DRIVE_MASK   (0x03 << RP2040_PADS_BANK0_GPIO26_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO26_DRIVE_2MA    (0x0 << RP2040_PADS_BANK0_GPIO26_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO26_DRIVE_4MA    (0x1 << RP2040_PADS_BANK0_GPIO26_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO26_DRIVE_8MA    (0x2 << RP2040_PADS_BANK0_GPIO26_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO26_DRIVE_12MA   (0x3 << RP2040_PADS_BANK0_GPIO26_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO26_PUE          (1 << 3)  /* Pull up enable */
#define RP2040_PADS_BANK0_GPIO26_PDE          (1 << 2)  /* Pull down enable */
#define RP2040_PADS_BANK0_GPIO26_SCHMITT      (1 << 1)  /* Enable schmitt trigger */
#define RP2040_PADS_BANK0_GPIO26_SLEWFAST     (1 << 0)  /* Slew rate control. 1 = Fast, 0 = Slow */

#define RP2040_PADS_BANK0_GPIO27_OD           (1 << 7)  /* Output disable. Has priority over output enable from peripherals */
#define RP2040_PADS_BANK0_GPIO27_IE           (1 << 6)  /* Input enable */
#define RP2040_PADS_BANK0_GPIO27_DRIVE_SHIFT  (4)  /* Drive strength. */
#define RP2040_PADS_BANK0_GPIO27_DRIVE_MASK   (0x03 << RP2040_PADS_BANK0_GPIO27_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO27_DRIVE_2MA    (0x0 << RP2040_PADS_BANK0_GPIO27_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO27_DRIVE_4MA    (0x1 << RP2040_PADS_BANK0_GPIO27_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO27_DRIVE_8MA    (0x2 << RP2040_PADS_BANK0_GPIO27_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO27_DRIVE_12MA   (0x3 << RP2040_PADS_BANK0_GPIO27_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO27_PUE          (1 << 3)  /* Pull up enable */
#define RP2040_PADS_BANK0_GPIO27_PDE          (1 << 2)  /* Pull down enable */
#define RP2040_PADS_BANK0_GPIO27_SCHMITT      (1 << 1)  /* Enable schmitt trigger */
#define RP2040_PADS_BANK0_GPIO27_SLEWFAST     (1 << 0)  /* Slew rate control. 1 = Fast, 0 = Slow */

#define RP2040_PADS_BANK0_GPIO28_OD           (1 << 7)  /* Output disable. Has priority over output enable from peripherals */
#define RP2040_PADS_BANK0_GPIO28_IE           (1 << 6)  /* Input enable */
#define RP2040_PADS_BANK0_GPIO28_DRIVE_SHIFT  (4)  /* Drive strength. */
#define RP2040_PADS_BANK0_GPIO28_DRIVE_MASK   (0x03 << RP2040_PADS_BANK0_GPIO28_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO28_DRIVE_2MA    (0x0 << RP2040_PADS_BANK0_GPIO28_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO28_DRIVE_4MA    (0x1 << RP2040_PADS_BANK0_GPIO28_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO28_DRIVE_8MA    (0x2 << RP2040_PADS_BANK0_GPIO28_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO28_DRIVE_12MA   (0x3 << RP2040_PADS_BANK0_GPIO28_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO28_PUE          (1 << 3)  /* Pull up enable */
#define RP2040_PADS_BANK0_GPIO28_PDE          (1 << 2)  /* Pull down enable */
#define RP2040_PADS_BANK0_GPIO28_SCHMITT      (1 << 1)  /* Enable schmitt trigger */
#define RP2040_PADS_BANK0_GPIO28_SLEWFAST     (1 << 0)  /* Slew rate control. 1 = Fast, 0 = Slow */

#define RP2040_PADS_BANK0_GPIO29_OD           (1 << 7)  /* Output disable. Has priority over output enable from peripherals */
#define RP2040_PADS_BANK0_GPIO29_IE           (1 << 6)  /* Input enable */
#define RP2040_PADS_BANK0_GPIO29_DRIVE_SHIFT  (4)  /* Drive strength. */
#define RP2040_PADS_BANK0_GPIO29_DRIVE_MASK   (0x03 << RP2040_PADS_BANK0_GPIO29_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO29_DRIVE_2MA    (0x0 << RP2040_PADS_BANK0_GPIO29_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO29_DRIVE_4MA    (0x1 << RP2040_PADS_BANK0_GPIO29_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO29_DRIVE_8MA    (0x2 << RP2040_PADS_BANK0_GPIO29_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO29_DRIVE_12MA   (0x3 << RP2040_PADS_BANK0_GPIO29_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO29_PUE          (1 << 3)  /* Pull up enable */
#define RP2040_PADS_BANK0_GPIO29_PDE          (1 << 2)  /* Pull down enable */
#define RP2040_PADS_BANK0_GPIO29_SCHMITT      (1 << 1)  /* Enable schmitt trigger */
#define RP2040_PADS_BANK0_GPIO29_SLEWFAST     (1 << 0)  /* Slew rate control. 1 = Fast, 0 = Slow */

#define RP2040_PADS_BANK0_SWCLK_OD            (1 << 7)  /* Output disable. Has priority over output enable from peripherals */
#define RP2040_PADS_BANK0_SWCLK_IE            (1 << 6)  /* Input enable */
#define RP2040_PADS_BANK0_SWCLK_DRIVE_SHIFT   (4)  /* Drive strength. */
#define RP2040_PADS_BANK0_SWCLK_DRIVE_MASK    (0x03 << RP2040_PADS_BANK0_SWCLK_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_SWCLK_DRIVE_2MA     (0x0 << RP2040_PADS_BANK0_SWCLK_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_SWCLK_DRIVE_4MA     (0x1 << RP2040_PADS_BANK0_SWCLK_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_SWCLK_DRIVE_8MA     (0x2 << RP2040_PADS_BANK0_SWCLK_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_SWCLK_DRIVE_12MA    (0x3 << RP2040_PADS_BANK0_SWCLK_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_SWCLK_PUE           (1 << 3)  /* Pull up enable */
#define RP2040_PADS_BANK0_SWCLK_PDE           (1 << 2)  /* Pull down enable */
#define RP2040_PADS_BANK0_SWCLK_SCHMITT       (1 << 1)  /* Enable schmitt trigger */
#define RP2040_PADS_BANK0_SWCLK_SLEWFAST      (1 << 0)  /* Slew rate control. 1 = Fast, 0 = Slow */

#define RP2040_PADS_BANK0_SWD_OD              (1 << 7)  /* Output disable. Has priority over output enable from peripherals */
#define RP2040_PADS_BANK0_SWD_IE              (1 << 6)  /* Input enable */
#define RP2040_PADS_BANK0_SWD_DRIVE_SHIFT     (4)  /* Drive strength. */
#define RP2040_PADS_BANK0_SWD_DRIVE_MASK      (0x03 << RP2040_PADS_BANK0_SWD_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_SWD_DRIVE_2MA       (0x0 << RP2040_PADS_BANK0_SWD_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_SWD_DRIVE_4MA       (0x1 << RP2040_PADS_BANK0_SWD_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_SWD_DRIVE_8MA       (0x2 << RP2040_PADS_BANK0_SWD_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_SWD_DRIVE_12MA      (0x3 << RP2040_PADS_BANK0_SWD_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_SWD_PUE             (1 << 3)  /* Pull up enable */
#define RP2040_PADS_BANK0_SWD_PDE             (1 << 2)  /* Pull down enable */
#define RP2040_PADS_BANK0_SWD_SCHMITT         (1 << 1)  /* Enable schmitt trigger */
#define RP2040_PADS_BANK0_SWD_SLEWFAST        (1 << 0)  /* Slew rate control. 1 = Fast, 0 = Slow */

#endif /* __ARCH_ARM_SRC_RP2040_HARDWARE_RP2040_PADS_BANK0_H */
