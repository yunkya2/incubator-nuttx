/****************************************************************************
 * arch/arm/src/rp2040/hardware/rp2040_timer.h
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

#ifndef __ARCH_ARM_SRC_RP2040_HARDWARE_RP2040_TIMER_H
#define __ARCH_ARM_SRC_RP2040_HARDWARE_RP2040_TIMER_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include "hardware/rp2040_memorymap.h"

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

/* Register offsets *********************************************************/

#define RP2040_TIMER_TIMEHW_OFFSET    0x000000  /* Write to bits 63:32 of time always write timelw before timehw */
#define RP2040_TIMER_TIMELW_OFFSET    0x000004  /* Write to bits 31:0 of time writes do not get copied to time until timehw is written */
#define RP2040_TIMER_TIMEHR_OFFSET    0x000008  /* Read from bits 63:32 of time always read timelr before timehr */
#define RP2040_TIMER_TIMELR_OFFSET    0x00000c  /* Read from bits 31:0 of time */
#define RP2040_TIMER_ALARM0_OFFSET    0x000010  /* Arm alarm 0, and configure the time it will fire. Once armed, the alarm fires when TIMER_ALARM0 == TIMELR. The alarm will disarm itself once it fires, and can be disarmed early using the ARMED status register. */
#define RP2040_TIMER_ALARM1_OFFSET    0x000014  /* Arm alarm 1, and configure the time it will fire. Once armed, the alarm fires when TIMER_ALARM1 == TIMELR. The alarm will disarm itself once it fires, and can be disarmed early using the ARMED status register. */
#define RP2040_TIMER_ALARM2_OFFSET    0x000018  /* Arm alarm 2, and configure the time it will fire. Once armed, the alarm fires when TIMER_ALARM2 == TIMELR. The alarm will disarm itself once it fires, and can be disarmed early using the ARMED status register. */
#define RP2040_TIMER_ALARM3_OFFSET    0x00001c  /* Arm alarm 3, and configure the time it will fire. Once armed, the alarm fires when TIMER_ALARM3 == TIMELR. The alarm will disarm itself once it fires, and can be disarmed early using the ARMED status register. */
#define RP2040_TIMER_ARMED_OFFSET     0x000020  /* Indicates the armed/disarmed status of each alarm. A write to the corresponding ALARMx register arms the alarm. Alarms automatically disarm upon firing, but writing ones here will disarm immediately without waiting to fire. */
#define RP2040_TIMER_TIMERAWH_OFFSET  0x000024  /* Raw read from bits 63:32 of time (no side effects) */
#define RP2040_TIMER_TIMERAWL_OFFSET  0x000028  /* Raw read from bits 31:0 of time (no side effects) */
#define RP2040_TIMER_DBGPAUSE_OFFSET  0x00002c  /* Set bits high to enable pause when the corresponding debug ports are active */
#define RP2040_TIMER_PAUSE_OFFSET     0x000030  /* Set high to pause the timer */
#define RP2040_TIMER_INTR_OFFSET      0x000034  /* Raw Interrupts */
#define RP2040_TIMER_INTE_OFFSET      0x000038  /* Interrupt Enable */
#define RP2040_TIMER_INTF_OFFSET      0x00003c  /* Interrupt Force */
#define RP2040_TIMER_INTS_OFFSET      0x000040  /* Interrupt status after masking & forcing */

/* Register definitions *****************************************************/

#define RP2040_TIMER_TIMEHW    (RP2040_TIMER_BASE + RP2040_TIMER_TIMEHW_OFFSET)
#define RP2040_TIMER_TIMELW    (RP2040_TIMER_BASE + RP2040_TIMER_TIMELW_OFFSET)
#define RP2040_TIMER_TIMEHR    (RP2040_TIMER_BASE + RP2040_TIMER_TIMEHR_OFFSET)
#define RP2040_TIMER_TIMELR    (RP2040_TIMER_BASE + RP2040_TIMER_TIMELR_OFFSET)
#define RP2040_TIMER_ALARM0    (RP2040_TIMER_BASE + RP2040_TIMER_ALARM0_OFFSET)
#define RP2040_TIMER_ALARM1    (RP2040_TIMER_BASE + RP2040_TIMER_ALARM1_OFFSET)
#define RP2040_TIMER_ALARM2    (RP2040_TIMER_BASE + RP2040_TIMER_ALARM2_OFFSET)
#define RP2040_TIMER_ALARM3    (RP2040_TIMER_BASE + RP2040_TIMER_ALARM3_OFFSET)
#define RP2040_TIMER_ARMED     (RP2040_TIMER_BASE + RP2040_TIMER_ARMED_OFFSET)
#define RP2040_TIMER_TIMERAWH  (RP2040_TIMER_BASE + RP2040_TIMER_TIMERAWH_OFFSET)
#define RP2040_TIMER_TIMERAWL  (RP2040_TIMER_BASE + RP2040_TIMER_TIMERAWL_OFFSET)
#define RP2040_TIMER_DBGPAUSE  (RP2040_TIMER_BASE + RP2040_TIMER_DBGPAUSE_OFFSET)
#define RP2040_TIMER_PAUSE     (RP2040_TIMER_BASE + RP2040_TIMER_PAUSE_OFFSET)
#define RP2040_TIMER_INTR      (RP2040_TIMER_BASE + RP2040_TIMER_INTR_OFFSET)
#define RP2040_TIMER_INTE      (RP2040_TIMER_BASE + RP2040_TIMER_INTE_OFFSET)
#define RP2040_TIMER_INTF      (RP2040_TIMER_BASE + RP2040_TIMER_INTF_OFFSET)
#define RP2040_TIMER_INTS      (RP2040_TIMER_BASE + RP2040_TIMER_INTS_OFFSET)

/* Register bit definitions *************************************************/

#define RP2040_TIMER_ARMED_MASK     (0x0f)

#define RP2040_TIMER_DBGPAUSE_DBG1  (1 << 2)  /* Pause when processor 1 is in debug mode */
#define RP2040_TIMER_DBGPAUSE_DBG0  (1 << 1)  /* Pause when processor 0 is in debug mode */

#define RP2040_TIMER_PAUSE          (1 << 0)

#define RP2040_TIMER_INTR_ALARM_3   (1 << 3)
#define RP2040_TIMER_INTR_ALARM_2   (1 << 2)
#define RP2040_TIMER_INTR_ALARM_1   (1 << 1)
#define RP2040_TIMER_INTR_ALARM_0   (1 << 0)

#define RP2040_TIMER_INTE_ALARM_3   (1 << 3)
#define RP2040_TIMER_INTE_ALARM_2   (1 << 2)
#define RP2040_TIMER_INTE_ALARM_1   (1 << 1)
#define RP2040_TIMER_INTE_ALARM_0   (1 << 0)

#define RP2040_TIMER_INTF_ALARM_3   (1 << 3)
#define RP2040_TIMER_INTF_ALARM_2   (1 << 2)
#define RP2040_TIMER_INTF_ALARM_1   (1 << 1)
#define RP2040_TIMER_INTF_ALARM_0   (1 << 0)

#define RP2040_TIMER_INTS_ALARM_3   (1 << 3)
#define RP2040_TIMER_INTS_ALARM_2   (1 << 2)
#define RP2040_TIMER_INTS_ALARM_1   (1 << 1)
#define RP2040_TIMER_INTS_ALARM_0   (1 << 0)

#endif /* __ARCH_ARM_SRC_RP2040_HARDWARE_RP2040_TIMER_H */
