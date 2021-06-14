/****************************************************************************
 * arch/arm/src/rp2040/hardware/rp2040_rtc.h
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

#ifndef __ARCH_ARM_SRC_RP2040_HARDWARE_RP2040_RTC_H
#define __ARCH_ARM_SRC_RP2040_HARDWARE_RP2040_RTC_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include "hardware/rp2040_memorymap.h"

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

/* Register offsets *********************************************************/

#define RP2040_RTC_CLKDIV_M1_OFFSET    0x000000  /* Divider minus 1 for the 1 second counter. Safe to change the value when RTC is not enabled. */
#define RP2040_RTC_SETUP_0_OFFSET      0x000004  /* RTC setup register 0 */
#define RP2040_RTC_SETUP_1_OFFSET      0x000008  /* RTC setup register 1 */
#define RP2040_RTC_CTRL_OFFSET         0x00000c  /* RTC Control and status */
#define RP2040_RTC_IRQ_SETUP_0_OFFSET  0x000010  /* Interrupt setup register 0 */
#define RP2040_RTC_IRQ_SETUP_1_OFFSET  0x000014  /* Interrupt setup register 1 */
#define RP2040_RTC_RTC_1_OFFSET        0x000018  /* RTC register 1. */
#define RP2040_RTC_RTC_0_OFFSET        0x00001c  /* RTC register 0 Read this before RTC 1! */
#define RP2040_RTC_INTR_OFFSET         0x000020  /* Raw Interrupts */
#define RP2040_RTC_INTE_OFFSET         0x000024  /* Interrupt Enable */
#define RP2040_RTC_INTF_OFFSET         0x000028  /* Interrupt Force */
#define RP2040_RTC_INTS_OFFSET         0x00002c  /* Interrupt status after masking & forcing */

/* Register definitions *****************************************************/

#define RP2040_RTC_CLKDIV_M1    (RP2040_RTC_BASE + RP2040_RTC_CLKDIV_M1_OFFSET)
#define RP2040_RTC_SETUP_0      (RP2040_RTC_BASE + RP2040_RTC_SETUP_0_OFFSET)
#define RP2040_RTC_SETUP_1      (RP2040_RTC_BASE + RP2040_RTC_SETUP_1_OFFSET)
#define RP2040_RTC_CTRL         (RP2040_RTC_BASE + RP2040_RTC_CTRL_OFFSET)
#define RP2040_RTC_IRQ_SETUP_0  (RP2040_RTC_BASE + RP2040_RTC_IRQ_SETUP_0_OFFSET)
#define RP2040_RTC_IRQ_SETUP_1  (RP2040_RTC_BASE + RP2040_RTC_IRQ_SETUP_1_OFFSET)
#define RP2040_RTC_RTC_1        (RP2040_RTC_BASE + RP2040_RTC_RTC_1_OFFSET)
#define RP2040_RTC_RTC_0        (RP2040_RTC_BASE + RP2040_RTC_RTC_0_OFFSET)
#define RP2040_RTC_INTR         (RP2040_RTC_BASE + RP2040_RTC_INTR_OFFSET)
#define RP2040_RTC_INTE         (RP2040_RTC_BASE + RP2040_RTC_INTE_OFFSET)
#define RP2040_RTC_INTF         (RP2040_RTC_BASE + RP2040_RTC_INTF_OFFSET)
#define RP2040_RTC_INTS         (RP2040_RTC_BASE + RP2040_RTC_INTS_OFFSET)

/* Register bit definitions *************************************************/

#define RP2040_RTC_CLKDIV_M1_MASK            (0xffff)

#define RP2040_RTC_SETUP_0_YEAR_SHIFT        (12)  /* Year */
#define RP2040_RTC_SETUP_0_YEAR_MASK         (0xfff << RP2040_RTC_SETUP_0_YEAR_SHIFT)
#define RP2040_RTC_SETUP_0_MONTH_SHIFT       (8)  /* Month (1..12) */
#define RP2040_RTC_SETUP_0_MONTH_MASK        (0x0f << RP2040_RTC_SETUP_0_MONTH_SHIFT)
#define RP2040_RTC_SETUP_0_DAY_MASK          (0x1f)  /* Day of the month (1..31) */

#define RP2040_RTC_SETUP_1_DOTW_SHIFT        (24)  /* Day of the week: 1-Monday...0-Sunday ISO 8601 mod 7 */
#define RP2040_RTC_SETUP_1_DOTW_MASK         (0x07 << RP2040_RTC_SETUP_1_DOTW_SHIFT)
#define RP2040_RTC_SETUP_1_HOUR_SHIFT        (16)  /* Hours */
#define RP2040_RTC_SETUP_1_HOUR_MASK         (0x1f << RP2040_RTC_SETUP_1_HOUR_SHIFT)
#define RP2040_RTC_SETUP_1_MIN_SHIFT         (8)  /* Minutes */
#define RP2040_RTC_SETUP_1_MIN_MASK          (0x3f << RP2040_RTC_SETUP_1_MIN_SHIFT)
#define RP2040_RTC_SETUP_1_SEC_MASK          (0x3f)  /* Seconds */

#define RP2040_RTC_CTRL_FORCE_NOTLEAPYEAR    (1 << 8)  /* If set, leapyear is forced off. Useful for years divisible by 100 but not by 400 */
#define RP2040_RTC_CTRL_LOAD                 (1 << 4)  /* Load RTC */
#define RP2040_RTC_CTRL_RTC_ACTIVE           (1 << 1)  /* RTC enabled (running) */
#define RP2040_RTC_CTRL_RTC_ENABLE           (1 << 0)  /* Enable RTC */

#define RP2040_RTC_IRQ_SETUP_0_MATCH_ACTIVE  (1 << 29)
#define RP2040_RTC_IRQ_SETUP_0_MATCH_ENA     (1 << 28)  /* Global match enable. Don't change any other value while this one is enabled */
#define RP2040_RTC_IRQ_SETUP_0_YEAR_ENA      (1 << 26)  /* Enable year matching */
#define RP2040_RTC_IRQ_SETUP_0_MONTH_ENA     (1 << 25)  /* Enable month matching */
#define RP2040_RTC_IRQ_SETUP_0_DAY_ENA       (1 << 24)  /* Enable day matching */
#define RP2040_RTC_IRQ_SETUP_0_YEAR_SHIFT    (12)  /* Year */
#define RP2040_RTC_IRQ_SETUP_0_YEAR_MASK     (0xfff << RP2040_RTC_IRQ_SETUP_0_YEAR_SHIFT)
#define RP2040_RTC_IRQ_SETUP_0_MONTH_SHIFT   (8)  /* Month (1..12) */
#define RP2040_RTC_IRQ_SETUP_0_MONTH_MASK    (0x0f << RP2040_RTC_IRQ_SETUP_0_MONTH_SHIFT)
#define RP2040_RTC_IRQ_SETUP_0_DAY_MASK      (0x1f)  /* Day of the month (1..31) */

#define RP2040_RTC_IRQ_SETUP_1_DOTW_ENA      (1 << 31)  /* Enable day of the week matching */
#define RP2040_RTC_IRQ_SETUP_1_HOUR_ENA      (1 << 30)  /* Enable hour matching */
#define RP2040_RTC_IRQ_SETUP_1_MIN_ENA       (1 << 29)  /* Enable minute matching */
#define RP2040_RTC_IRQ_SETUP_1_SEC_ENA       (1 << 28)  /* Enable second matching */
#define RP2040_RTC_IRQ_SETUP_1_DOTW_SHIFT    (24)  /* Day of the week */
#define RP2040_RTC_IRQ_SETUP_1_DOTW_MASK     (0x07 << RP2040_RTC_IRQ_SETUP_1_DOTW_SHIFT)
#define RP2040_RTC_IRQ_SETUP_1_HOUR_SHIFT    (16)  /* Hours */
#define RP2040_RTC_IRQ_SETUP_1_HOUR_MASK     (0x1f << RP2040_RTC_IRQ_SETUP_1_HOUR_SHIFT)
#define RP2040_RTC_IRQ_SETUP_1_MIN_SHIFT     (8)  /* Minutes */
#define RP2040_RTC_IRQ_SETUP_1_MIN_MASK      (0x3f << RP2040_RTC_IRQ_SETUP_1_MIN_SHIFT)
#define RP2040_RTC_IRQ_SETUP_1_SEC_MASK      (0x3f)  /* Seconds */

#define RP2040_RTC_RTC_1_YEAR_SHIFT          (12)  /* Year */
#define RP2040_RTC_RTC_1_YEAR_MASK           (0xfff << RP2040_RTC_RTC_1_YEAR_SHIFT)
#define RP2040_RTC_RTC_1_MONTH_SHIFT         (8)  /* Month (1..12) */
#define RP2040_RTC_RTC_1_MONTH_MASK          (0x0f << RP2040_RTC_RTC_1_MONTH_SHIFT)
#define RP2040_RTC_RTC_1_DAY_MASK            (0x1f)  /* Day of the month (1..31) */

#define RP2040_RTC_RTC_0_DOTW_SHIFT          (24)  /* Day of the week */
#define RP2040_RTC_RTC_0_DOTW_MASK           (0x07 << RP2040_RTC_RTC_0_DOTW_SHIFT)
#define RP2040_RTC_RTC_0_HOUR_SHIFT          (16)  /* Hours */
#define RP2040_RTC_RTC_0_HOUR_MASK           (0x1f << RP2040_RTC_RTC_0_HOUR_SHIFT)
#define RP2040_RTC_RTC_0_MIN_SHIFT           (8)  /* Minutes */
#define RP2040_RTC_RTC_0_MIN_MASK            (0x3f << RP2040_RTC_RTC_0_MIN_SHIFT)
#define RP2040_RTC_RTC_0_SEC_MASK            (0x3f)  /* Seconds */

#define RP2040_RTC_INTR_RTC                  (1 << 0)

#define RP2040_RTC_INTE_RTC                  (1 << 0)

#define RP2040_RTC_INTF_RTC                  (1 << 0)

#define RP2040_RTC_INTS_RTC                  (1 << 0)

#endif /* __ARCH_ARM_SRC_RP2040_HARDWARE_RP2040_RTC_H */
