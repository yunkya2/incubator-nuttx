/****************************************************************************
 * arch/arm/src/rp2040/rp2040_xosc.c
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

#include "rp2040_xosc.h"
#include "hardware/rp2040_xosc.h"

/****************************************************************************
 * Private Functions
 ****************************************************************************/

/****************************************************************************
 * Public Functions
 ****************************************************************************/

/****************************************************************************
 * Name: rp2040_xosc_init
 *
 * Description:
 *   Initialize Crystal Oscillator (XOSC).
 *
 ****************************************************************************/

void rp2040_xosc_init(void)
{
  /* Assumes 1-15 MHz input */

  assert(BOARD_XOSC_FREQ <= (15 * MHZ));
  putreg32(RP2040_XOSC_CTRL_FREQ_RANGE_1_15MHZ, RP2040_XOSC_CTRL);

  /* Set xosc startup delay */

  uint32_t startup_delay = (((12 * MHZ) / 1000) + 128) / 256;
  putreg32(startup_delay, RP2040_XOSC_STARTUP);

  /* Set the enable bit now that we have set freq range and startup delay */

  setbits_reg32(RP2040_XOSC_CTRL_ENABLE_ENABLE, RP2040_XOSC_CTRL);

  /* Wait for XOSC to be stable */

  while (!(getreg32(RP2040_XOSC_STATUS) & RP2040_XOSC_STATUS_STABLE))
    ;
}
