/****************************************************************************
 * arch/arm/src/rp2040/hardware/rp2040_psm.h
 *
 * Generated from rp2040.svd originally provided by
 *   Raspberry Pi (Trading) Ltd.
 *
 * Copyright 2020 (c) 2020 Raspberry Pi (Trading) Ltd.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 * 3. Neither the name of the copyright holder nor the names of its
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 ****************************************************************************/

#ifndef __ARCH_ARM_SRC_RP2040_HARDWARE_RP2040_PSM_H
#define __ARCH_ARM_SRC_RP2040_HARDWARE_RP2040_PSM_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include "hardware/rp2040_memorymap.h"

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

/* Register offsets *********************************************************/

#define RP2040_PSM_FRCE_ON_OFFSET   0x000000  /* Force block out of reset (i.e. power it on) */
#define RP2040_PSM_FRCE_OFF_OFFSET  0x000004  /* Force into reset (i.e. power it off) */
#define RP2040_PSM_WDSEL_OFFSET     0x000008  /* Set to 1 if this peripheral should be reset when the watchdog fires. */
#define RP2040_PSM_DONE_OFFSET      0x00000c  /* Indicates the peripheral's registers are ready to access. */

/* Register definitions *****************************************************/

#define RP2040_PSM_FRCE_ON   (RP2040_PSM_BASE + RP2040_PSM_FRCE_ON_OFFSET)
#define RP2040_PSM_FRCE_OFF  (RP2040_PSM_BASE + RP2040_PSM_FRCE_OFF_OFFSET)
#define RP2040_PSM_WDSEL     (RP2040_PSM_BASE + RP2040_PSM_WDSEL_OFFSET)
#define RP2040_PSM_DONE      (RP2040_PSM_BASE + RP2040_PSM_DONE_OFFSET)

/* Register bit definitions *************************************************/

#define RP2040_PSM_FRCE_ON_proc1                 (1 << 16)
#define RP2040_PSM_FRCE_ON_proc0                 (1 << 15)
#define RP2040_PSM_FRCE_ON_sio                   (1 << 14)
#define RP2040_PSM_FRCE_ON_vreg_and_chip_reset   (1 << 13)
#define RP2040_PSM_FRCE_ON_xip                   (1 << 12)
#define RP2040_PSM_FRCE_ON_sram5                 (1 << 11)
#define RP2040_PSM_FRCE_ON_sram4                 (1 << 10)
#define RP2040_PSM_FRCE_ON_sram3                 (1 << 9)
#define RP2040_PSM_FRCE_ON_sram2                 (1 << 8)
#define RP2040_PSM_FRCE_ON_sram1                 (1 << 7)
#define RP2040_PSM_FRCE_ON_sram0                 (1 << 6)
#define RP2040_PSM_FRCE_ON_rom                   (1 << 5)
#define RP2040_PSM_FRCE_ON_busfabric             (1 << 4)
#define RP2040_PSM_FRCE_ON_resets                (1 << 3)
#define RP2040_PSM_FRCE_ON_clocks                (1 << 2)
#define RP2040_PSM_FRCE_ON_xosc                  (1 << 1)
#define RP2040_PSM_FRCE_ON_rosc                  (1 << 0)

#define RP2040_PSM_FRCE_OFF_proc1                (1 << 16)
#define RP2040_PSM_FRCE_OFF_proc0                (1 << 15)
#define RP2040_PSM_FRCE_OFF_sio                  (1 << 14)
#define RP2040_PSM_FRCE_OFF_vreg_and_chip_reset  (1 << 13)
#define RP2040_PSM_FRCE_OFF_xip                  (1 << 12)
#define RP2040_PSM_FRCE_OFF_sram5                (1 << 11)
#define RP2040_PSM_FRCE_OFF_sram4                (1 << 10)
#define RP2040_PSM_FRCE_OFF_sram3                (1 << 9)
#define RP2040_PSM_FRCE_OFF_sram2                (1 << 8)
#define RP2040_PSM_FRCE_OFF_sram1                (1 << 7)
#define RP2040_PSM_FRCE_OFF_sram0                (1 << 6)
#define RP2040_PSM_FRCE_OFF_rom                  (1 << 5)
#define RP2040_PSM_FRCE_OFF_busfabric            (1 << 4)
#define RP2040_PSM_FRCE_OFF_resets               (1 << 3)
#define RP2040_PSM_FRCE_OFF_clocks               (1 << 2)
#define RP2040_PSM_FRCE_OFF_xosc                 (1 << 1)
#define RP2040_PSM_FRCE_OFF_rosc                 (1 << 0)

#define RP2040_PSM_WDSEL_proc1                   (1 << 16)
#define RP2040_PSM_WDSEL_proc0                   (1 << 15)
#define RP2040_PSM_WDSEL_sio                     (1 << 14)
#define RP2040_PSM_WDSEL_vreg_and_chip_reset     (1 << 13)
#define RP2040_PSM_WDSEL_xip                     (1 << 12)
#define RP2040_PSM_WDSEL_sram5                   (1 << 11)
#define RP2040_PSM_WDSEL_sram4                   (1 << 10)
#define RP2040_PSM_WDSEL_sram3                   (1 << 9)
#define RP2040_PSM_WDSEL_sram2                   (1 << 8)
#define RP2040_PSM_WDSEL_sram1                   (1 << 7)
#define RP2040_PSM_WDSEL_sram0                   (1 << 6)
#define RP2040_PSM_WDSEL_rom                     (1 << 5)
#define RP2040_PSM_WDSEL_busfabric               (1 << 4)
#define RP2040_PSM_WDSEL_resets                  (1 << 3)
#define RP2040_PSM_WDSEL_clocks                  (1 << 2)
#define RP2040_PSM_WDSEL_xosc                    (1 << 1)
#define RP2040_PSM_WDSEL_rosc                    (1 << 0)

#define RP2040_PSM_DONE_proc1                    (1 << 16)
#define RP2040_PSM_DONE_proc0                    (1 << 15)
#define RP2040_PSM_DONE_sio                      (1 << 14)
#define RP2040_PSM_DONE_vreg_and_chip_reset      (1 << 13)
#define RP2040_PSM_DONE_xip                      (1 << 12)
#define RP2040_PSM_DONE_sram5                    (1 << 11)
#define RP2040_PSM_DONE_sram4                    (1 << 10)
#define RP2040_PSM_DONE_sram3                    (1 << 9)
#define RP2040_PSM_DONE_sram2                    (1 << 8)
#define RP2040_PSM_DONE_sram1                    (1 << 7)
#define RP2040_PSM_DONE_sram0                    (1 << 6)
#define RP2040_PSM_DONE_rom                      (1 << 5)
#define RP2040_PSM_DONE_busfabric                (1 << 4)
#define RP2040_PSM_DONE_resets                   (1 << 3)
#define RP2040_PSM_DONE_clocks                   (1 << 2)
#define RP2040_PSM_DONE_xosc                     (1 << 1)
#define RP2040_PSM_DONE_rosc                     (1 << 0)

#endif /* __ARCH_ARM_SRC_RP2040_HARDWARE_RP2040_PSM_H */
