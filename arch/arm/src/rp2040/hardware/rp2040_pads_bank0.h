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

#define RP2040_PADS_BANK0_VOLTAGE_SELECT_OFFSET  0x000000               /* Voltage select. Per bank control */
#define RP2040_PADS_BANK0_GPIO_OFFSET(n)         ((n) * 4 + 0x000004)   /* Pad control register */
#define RP2040_PADS_BANK0_SWCLK_OFFSET           0x00007c               /* Pad control register */
#define RP2040_PADS_BANK0_SWD_OFFSET             0x000080               /* Pad control register */

/* Register definitions *****************************************************/

#define RP2040_PADS_BANK0_VOLTAGE_SELECT  (RP2040_PADS_BANK0_BASE + RP2040_PADS_BANK0_VOLTAGE_SELECT_OFFSET)
#define RP2040_PADS_BANK0_GPIO(n)         (RP2040_PADS_BANK0_BASE + RP2040_PADS_BANK0_GPIO_OFFSET(n))
#define RP2040_PADS_BANK0_SWCLK           (RP2040_PADS_BANK0_BASE + RP2040_PADS_BANK0_SWCLK_OFFSET)
#define RP2040_PADS_BANK0_SWD             (RP2040_PADS_BANK0_BASE + RP2040_PADS_BANK0_SWD_OFFSET)

/* Register bit definitions *************************************************/

#define RP2040_PADS_BANK0_VOLTAGE_SELECT_1_8V (1 << 0)  /* Set voltage to 1.8V (DVDD <= 1V8) */

#define RP2040_PADS_BANK0_GPIO_OD             (1 << 7)  /* Output disable. Has priority over output enable from peripherals */
#define RP2040_PADS_BANK0_GPIO_IE             (1 << 6)  /* Input enable */
#define RP2040_PADS_BANK0_GPIO_DRIVE_SHIFT    (4)       /* Drive strength. */
#define RP2040_PADS_BANK0_GPIO_DRIVE_MASK     (0x03 << RP2040_PADS_BANK0_GPIO0_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO_DRIVE_2MA      (0x0 << RP2040_PADS_BANK0_GPIO0_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO_DRIVE_4MA      (0x1 << RP2040_PADS_BANK0_GPIO0_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO_DRIVE_8MA      (0x2 << RP2040_PADS_BANK0_GPIO0_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO_DRIVE_12MA     (0x3 << RP2040_PADS_BANK0_GPIO0_DRIVE_SHIFT)
#define RP2040_PADS_BANK0_GPIO_PUE            (1 << 3)  /* Pull up enable */
#define RP2040_PADS_BANK0_GPIO_PDE            (1 << 2)  /* Pull down enable */
#define RP2040_PADS_BANK0_GPIO_SCHMITT        (1 << 1)  /* Enable schmitt trigger */
#define RP2040_PADS_BANK0_GPIO_SLEWFAST       (1 << 0)  /* Slew rate control. 1 = Fast, 0 = Slow */

#endif /* __ARCH_ARM_SRC_RP2040_HARDWARE_RP2040_PADS_BANK0_H */
