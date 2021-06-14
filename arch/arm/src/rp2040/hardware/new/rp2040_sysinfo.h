/****************************************************************************
 * arch/arm/src/rp2040/hardware/rp2040_sysinfo.h
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

#ifndef __ARCH_ARM_SRC_RP2040_HARDWARE_RP2040_SYSINFO_H
#define __ARCH_ARM_SRC_RP2040_HARDWARE_RP2040_SYSINFO_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include "hardware/rp2040_memorymap.h"

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

/* Register offsets *********************************************************/

#define RP2040_SYSINFO_CHIP_ID_OFFSET        0x000000  /* JEDEC JEP-106 compliant chip identifier. */
#define RP2040_SYSINFO_PLATFORM_OFFSET       0x000004  /* Platform register. Allows software to know what environment it is running in. */
#define RP2040_SYSINFO_GITREF_RP2040_OFFSET  0x000040  /* Git hash of the chip source. Used to identify chip version. */

/* Register definitions *****************************************************/

#define RP2040_SYSINFO_CHIP_ID        (RP2040_SYSINFO_BASE + RP2040_SYSINFO_CHIP_ID_OFFSET)
#define RP2040_SYSINFO_PLATFORM       (RP2040_SYSINFO_BASE + RP2040_SYSINFO_PLATFORM_OFFSET)
#define RP2040_SYSINFO_GITREF_RP2040  (RP2040_SYSINFO_BASE + RP2040_SYSINFO_GITREF_RP2040_OFFSET)

/* Register bit definitions *************************************************/

#define RP2040_SYSINFO_CHIP_ID_REVISION_SHIFT     (28)
#define RP2040_SYSINFO_CHIP_ID_REVISION_MASK      (0x0f << RP2040_SYSINFO_CHIP_ID_REVISION_SHIFT)
#define RP2040_SYSINFO_CHIP_ID_PART_SHIFT         (12)
#define RP2040_SYSINFO_CHIP_ID_PART_MASK          (0xffff << RP2040_SYSINFO_CHIP_ID_PART_SHIFT)
#define RP2040_SYSINFO_CHIP_ID_MANUFACTURER_MASK  (0xfff)

#define RP2040_SYSINFO_PLATFORM_ASIC              (1 << 1)
#define RP2040_SYSINFO_PLATFORM_FPGA              (1 << 0)

#endif /* __ARCH_ARM_SRC_RP2040_HARDWARE_RP2040_SYSINFO_H */
