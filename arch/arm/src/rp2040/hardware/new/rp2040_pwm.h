/****************************************************************************
 * arch/arm/src/rp2040/hardware/rp2040_pwm.h
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

#ifndef __ARCH_ARM_SRC_RP2040_HARDWARE_RP2040_PWM_H
#define __ARCH_ARM_SRC_RP2040_HARDWARE_RP2040_PWM_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include "hardware/rp2040_memorymap.h"

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

/* Register offsets *********************************************************/

#define RP2040_PWM_CH0_CSR_OFFSET  0x000000  /* Control and status register */
#define RP2040_PWM_CH0_DIV_OFFSET  0x000004  /* INT and FRAC form a fixed-point fractional number. Counting rate is system clock frequency divided by this number. Fractional division uses simple 1st-order sigma-delta. */
#define RP2040_PWM_CH0_CTR_OFFSET  0x000008  /* Direct access to the PWM counter */
#define RP2040_PWM_CH0_CC_OFFSET   0x00000c  /* Counter compare values */
#define RP2040_PWM_CH0_TOP_OFFSET  0x000010  /* Counter wrap value */
#define RP2040_PWM_CH1_CSR_OFFSET  0x000014  /* Control and status register */
#define RP2040_PWM_CH1_DIV_OFFSET  0x000018  /* INT and FRAC form a fixed-point fractional number. Counting rate is system clock frequency divided by this number. Fractional division uses simple 1st-order sigma-delta. */
#define RP2040_PWM_CH1_CTR_OFFSET  0x00001c  /* Direct access to the PWM counter */
#define RP2040_PWM_CH1_CC_OFFSET   0x000020  /* Counter compare values */
#define RP2040_PWM_CH1_TOP_OFFSET  0x000024  /* Counter wrap value */
#define RP2040_PWM_CH2_CSR_OFFSET  0x000028  /* Control and status register */
#define RP2040_PWM_CH2_DIV_OFFSET  0x00002c  /* INT and FRAC form a fixed-point fractional number. Counting rate is system clock frequency divided by this number. Fractional division uses simple 1st-order sigma-delta. */
#define RP2040_PWM_CH2_CTR_OFFSET  0x000030  /* Direct access to the PWM counter */
#define RP2040_PWM_CH2_CC_OFFSET   0x000034  /* Counter compare values */
#define RP2040_PWM_CH2_TOP_OFFSET  0x000038  /* Counter wrap value */
#define RP2040_PWM_CH3_CSR_OFFSET  0x00003c  /* Control and status register */
#define RP2040_PWM_CH3_DIV_OFFSET  0x000040  /* INT and FRAC form a fixed-point fractional number. Counting rate is system clock frequency divided by this number. Fractional division uses simple 1st-order sigma-delta. */
#define RP2040_PWM_CH3_CTR_OFFSET  0x000044  /* Direct access to the PWM counter */
#define RP2040_PWM_CH3_CC_OFFSET   0x000048  /* Counter compare values */
#define RP2040_PWM_CH3_TOP_OFFSET  0x00004c  /* Counter wrap value */
#define RP2040_PWM_CH4_CSR_OFFSET  0x000050  /* Control and status register */
#define RP2040_PWM_CH4_DIV_OFFSET  0x000054  /* INT and FRAC form a fixed-point fractional number. Counting rate is system clock frequency divided by this number. Fractional division uses simple 1st-order sigma-delta. */
#define RP2040_PWM_CH4_CTR_OFFSET  0x000058  /* Direct access to the PWM counter */
#define RP2040_PWM_CH4_CC_OFFSET   0x00005c  /* Counter compare values */
#define RP2040_PWM_CH4_TOP_OFFSET  0x000060  /* Counter wrap value */
#define RP2040_PWM_CH5_CSR_OFFSET  0x000064  /* Control and status register */
#define RP2040_PWM_CH5_DIV_OFFSET  0x000068  /* INT and FRAC form a fixed-point fractional number. Counting rate is system clock frequency divided by this number. Fractional division uses simple 1st-order sigma-delta. */
#define RP2040_PWM_CH5_CTR_OFFSET  0x00006c  /* Direct access to the PWM counter */
#define RP2040_PWM_CH5_CC_OFFSET   0x000070  /* Counter compare values */
#define RP2040_PWM_CH5_TOP_OFFSET  0x000074  /* Counter wrap value */
#define RP2040_PWM_CH6_CSR_OFFSET  0x000078  /* Control and status register */
#define RP2040_PWM_CH6_DIV_OFFSET  0x00007c  /* INT and FRAC form a fixed-point fractional number. Counting rate is system clock frequency divided by this number. Fractional division uses simple 1st-order sigma-delta. */
#define RP2040_PWM_CH6_CTR_OFFSET  0x000080  /* Direct access to the PWM counter */
#define RP2040_PWM_CH6_CC_OFFSET   0x000084  /* Counter compare values */
#define RP2040_PWM_CH6_TOP_OFFSET  0x000088  /* Counter wrap value */
#define RP2040_PWM_CH7_CSR_OFFSET  0x00008c  /* Control and status register */
#define RP2040_PWM_CH7_DIV_OFFSET  0x000090  /* INT and FRAC form a fixed-point fractional number. Counting rate is system clock frequency divided by this number. Fractional division uses simple 1st-order sigma-delta. */
#define RP2040_PWM_CH7_CTR_OFFSET  0x000094  /* Direct access to the PWM counter */
#define RP2040_PWM_CH7_CC_OFFSET   0x000098  /* Counter compare values */
#define RP2040_PWM_CH7_TOP_OFFSET  0x00009c  /* Counter wrap value */
#define RP2040_PWM_EN_OFFSET       0x0000a0  /* This register aliases the CSR_EN bits for all channels. Writing to this register allows multiple channels to be enabled or disabled simultaneously, so they can run in perfect sync. For each channel, there is only one physical EN register bit, which can be accessed through here or CHx_CSR. */
#define RP2040_PWM_INTR_OFFSET     0x0000a4  /* Raw Interrupts */
#define RP2040_PWM_INTE_OFFSET     0x0000a8  /* Interrupt Enable */
#define RP2040_PWM_INTF_OFFSET     0x0000ac  /* Interrupt Force */
#define RP2040_PWM_INTS_OFFSET     0x0000b0  /* Interrupt status after masking & forcing */

/* Register definitions *****************************************************/

#define RP2040_PWM_CH0_CSR  (RP2040_PWM_BASE + RP2040_PWM_CH0_CSR_OFFSET)
#define RP2040_PWM_CH0_DIV  (RP2040_PWM_BASE + RP2040_PWM_CH0_DIV_OFFSET)
#define RP2040_PWM_CH0_CTR  (RP2040_PWM_BASE + RP2040_PWM_CH0_CTR_OFFSET)
#define RP2040_PWM_CH0_CC   (RP2040_PWM_BASE + RP2040_PWM_CH0_CC_OFFSET)
#define RP2040_PWM_CH0_TOP  (RP2040_PWM_BASE + RP2040_PWM_CH0_TOP_OFFSET)
#define RP2040_PWM_CH1_CSR  (RP2040_PWM_BASE + RP2040_PWM_CH1_CSR_OFFSET)
#define RP2040_PWM_CH1_DIV  (RP2040_PWM_BASE + RP2040_PWM_CH1_DIV_OFFSET)
#define RP2040_PWM_CH1_CTR  (RP2040_PWM_BASE + RP2040_PWM_CH1_CTR_OFFSET)
#define RP2040_PWM_CH1_CC   (RP2040_PWM_BASE + RP2040_PWM_CH1_CC_OFFSET)
#define RP2040_PWM_CH1_TOP  (RP2040_PWM_BASE + RP2040_PWM_CH1_TOP_OFFSET)
#define RP2040_PWM_CH2_CSR  (RP2040_PWM_BASE + RP2040_PWM_CH2_CSR_OFFSET)
#define RP2040_PWM_CH2_DIV  (RP2040_PWM_BASE + RP2040_PWM_CH2_DIV_OFFSET)
#define RP2040_PWM_CH2_CTR  (RP2040_PWM_BASE + RP2040_PWM_CH2_CTR_OFFSET)
#define RP2040_PWM_CH2_CC   (RP2040_PWM_BASE + RP2040_PWM_CH2_CC_OFFSET)
#define RP2040_PWM_CH2_TOP  (RP2040_PWM_BASE + RP2040_PWM_CH2_TOP_OFFSET)
#define RP2040_PWM_CH3_CSR  (RP2040_PWM_BASE + RP2040_PWM_CH3_CSR_OFFSET)
#define RP2040_PWM_CH3_DIV  (RP2040_PWM_BASE + RP2040_PWM_CH3_DIV_OFFSET)
#define RP2040_PWM_CH3_CTR  (RP2040_PWM_BASE + RP2040_PWM_CH3_CTR_OFFSET)
#define RP2040_PWM_CH3_CC   (RP2040_PWM_BASE + RP2040_PWM_CH3_CC_OFFSET)
#define RP2040_PWM_CH3_TOP  (RP2040_PWM_BASE + RP2040_PWM_CH3_TOP_OFFSET)
#define RP2040_PWM_CH4_CSR  (RP2040_PWM_BASE + RP2040_PWM_CH4_CSR_OFFSET)
#define RP2040_PWM_CH4_DIV  (RP2040_PWM_BASE + RP2040_PWM_CH4_DIV_OFFSET)
#define RP2040_PWM_CH4_CTR  (RP2040_PWM_BASE + RP2040_PWM_CH4_CTR_OFFSET)
#define RP2040_PWM_CH4_CC   (RP2040_PWM_BASE + RP2040_PWM_CH4_CC_OFFSET)
#define RP2040_PWM_CH4_TOP  (RP2040_PWM_BASE + RP2040_PWM_CH4_TOP_OFFSET)
#define RP2040_PWM_CH5_CSR  (RP2040_PWM_BASE + RP2040_PWM_CH5_CSR_OFFSET)
#define RP2040_PWM_CH5_DIV  (RP2040_PWM_BASE + RP2040_PWM_CH5_DIV_OFFSET)
#define RP2040_PWM_CH5_CTR  (RP2040_PWM_BASE + RP2040_PWM_CH5_CTR_OFFSET)
#define RP2040_PWM_CH5_CC   (RP2040_PWM_BASE + RP2040_PWM_CH5_CC_OFFSET)
#define RP2040_PWM_CH5_TOP  (RP2040_PWM_BASE + RP2040_PWM_CH5_TOP_OFFSET)
#define RP2040_PWM_CH6_CSR  (RP2040_PWM_BASE + RP2040_PWM_CH6_CSR_OFFSET)
#define RP2040_PWM_CH6_DIV  (RP2040_PWM_BASE + RP2040_PWM_CH6_DIV_OFFSET)
#define RP2040_PWM_CH6_CTR  (RP2040_PWM_BASE + RP2040_PWM_CH6_CTR_OFFSET)
#define RP2040_PWM_CH6_CC   (RP2040_PWM_BASE + RP2040_PWM_CH6_CC_OFFSET)
#define RP2040_PWM_CH6_TOP  (RP2040_PWM_BASE + RP2040_PWM_CH6_TOP_OFFSET)
#define RP2040_PWM_CH7_CSR  (RP2040_PWM_BASE + RP2040_PWM_CH7_CSR_OFFSET)
#define RP2040_PWM_CH7_DIV  (RP2040_PWM_BASE + RP2040_PWM_CH7_DIV_OFFSET)
#define RP2040_PWM_CH7_CTR  (RP2040_PWM_BASE + RP2040_PWM_CH7_CTR_OFFSET)
#define RP2040_PWM_CH7_CC   (RP2040_PWM_BASE + RP2040_PWM_CH7_CC_OFFSET)
#define RP2040_PWM_CH7_TOP  (RP2040_PWM_BASE + RP2040_PWM_CH7_TOP_OFFSET)
#define RP2040_PWM_EN       (RP2040_PWM_BASE + RP2040_PWM_EN_OFFSET)
#define RP2040_PWM_INTR     (RP2040_PWM_BASE + RP2040_PWM_INTR_OFFSET)
#define RP2040_PWM_INTE     (RP2040_PWM_BASE + RP2040_PWM_INTE_OFFSET)
#define RP2040_PWM_INTF     (RP2040_PWM_BASE + RP2040_PWM_INTF_OFFSET)
#define RP2040_PWM_INTS     (RP2040_PWM_BASE + RP2040_PWM_INTS_OFFSET)

/* Register bit definitions *************************************************/

#define RP2040_PWM_CH0_CSR_PH_ADV         (1 << 7)  /* Advance the phase of the counter by 1 count, while it is running. Self-clearing. Write a 1, and poll until low. Counter must be running at less than full speed (div_int + div_frac / 16 > 1) */
#define RP2040_PWM_CH0_CSR_PH_RET         (1 << 6)  /* Retard the phase of the counter by 1 count, while it is running. Self-clearing. Write a 1, and poll until low. Counter must be running. */
#define RP2040_PWM_CH0_CSR_DIVMODE_SHIFT  (4)
#define RP2040_PWM_CH0_CSR_DIVMODE_MASK   (0x03 << RP2040_PWM_CH0_CSR_DIVMODE_SHIFT)
#define RP2040_PWM_CH0_CSR_DIVMODE_DIV    (0x0 << RP2040_PWM_CH0_CSR_DIVMODE_SHIFT)  /* Free-running counting at rate dictated by fractional divider */
#define RP2040_PWM_CH0_CSR_DIVMODE_LEVEL  (0x1 << RP2040_PWM_CH0_CSR_DIVMODE_SHIFT)  /* Fractional divider operation is gated by the PWM B pin. */
#define RP2040_PWM_CH0_CSR_DIVMODE_RISE   (0x2 << RP2040_PWM_CH0_CSR_DIVMODE_SHIFT)  /* Counter advances with each rising edge of the PWM B pin. */
#define RP2040_PWM_CH0_CSR_DIVMODE_FALL   (0x3 << RP2040_PWM_CH0_CSR_DIVMODE_SHIFT)  /* Counter advances with each falling edge of the PWM B pin. */
#define RP2040_PWM_CH0_CSR_B_INV          (1 << 3)  /* Invert output B */
#define RP2040_PWM_CH0_CSR_A_INV          (1 << 2)  /* Invert output A */
#define RP2040_PWM_CH0_CSR_PH_CORRECT     (1 << 1)  /* 1: Enable phase-correct modulation. 0: Trailing-edge */
#define RP2040_PWM_CH0_CSR_EN             (1 << 0)  /* Enable the PWM channel. */

#define RP2040_PWM_CH0_DIV_INT_SHIFT      (4)
#define RP2040_PWM_CH0_DIV_INT_MASK       (0xff << RP2040_PWM_CH0_DIV_INT_SHIFT)
#define RP2040_PWM_CH0_DIV_FRAC_MASK      (0x0f)

#define RP2040_PWM_CH0_CTR_MASK           (0xffff)

#define RP2040_PWM_CH0_CC_B_SHIFT         (16)
#define RP2040_PWM_CH0_CC_B_MASK          (0xffff << RP2040_PWM_CH0_CC_B_SHIFT)
#define RP2040_PWM_CH0_CC_A_MASK          (0xffff)

#define RP2040_PWM_CH0_TOP_MASK           (0xffff)

#define RP2040_PWM_CH1_CSR_PH_ADV         (1 << 7)  /* Advance the phase of the counter by 1 count, while it is running. Self-clearing. Write a 1, and poll until low. Counter must be running at less than full speed (div_int + div_frac / 16 > 1) */
#define RP2040_PWM_CH1_CSR_PH_RET         (1 << 6)  /* Retard the phase of the counter by 1 count, while it is running. Self-clearing. Write a 1, and poll until low. Counter must be running. */
#define RP2040_PWM_CH1_CSR_DIVMODE_SHIFT  (4)
#define RP2040_PWM_CH1_CSR_DIVMODE_MASK   (0x03 << RP2040_PWM_CH1_CSR_DIVMODE_SHIFT)
#define RP2040_PWM_CH1_CSR_DIVMODE_DIV    (0x0 << RP2040_PWM_CH1_CSR_DIVMODE_SHIFT)  /* Free-running counting at rate dictated by fractional divider */
#define RP2040_PWM_CH1_CSR_DIVMODE_LEVEL  (0x1 << RP2040_PWM_CH1_CSR_DIVMODE_SHIFT)  /* Fractional divider operation is gated by the PWM B pin. */
#define RP2040_PWM_CH1_CSR_DIVMODE_RISE   (0x2 << RP2040_PWM_CH1_CSR_DIVMODE_SHIFT)  /* Counter advances with each rising edge of the PWM B pin. */
#define RP2040_PWM_CH1_CSR_DIVMODE_FALL   (0x3 << RP2040_PWM_CH1_CSR_DIVMODE_SHIFT)  /* Counter advances with each falling edge of the PWM B pin. */
#define RP2040_PWM_CH1_CSR_B_INV          (1 << 3)  /* Invert output B */
#define RP2040_PWM_CH1_CSR_A_INV          (1 << 2)  /* Invert output A */
#define RP2040_PWM_CH1_CSR_PH_CORRECT     (1 << 1)  /* 1: Enable phase-correct modulation. 0: Trailing-edge */
#define RP2040_PWM_CH1_CSR_EN             (1 << 0)  /* Enable the PWM channel. */

#define RP2040_PWM_CH1_DIV_INT_SHIFT      (4)
#define RP2040_PWM_CH1_DIV_INT_MASK       (0xff << RP2040_PWM_CH1_DIV_INT_SHIFT)
#define RP2040_PWM_CH1_DIV_FRAC_MASK      (0x0f)

#define RP2040_PWM_CH1_CTR_MASK           (0xffff)

#define RP2040_PWM_CH1_CC_B_SHIFT         (16)
#define RP2040_PWM_CH1_CC_B_MASK          (0xffff << RP2040_PWM_CH1_CC_B_SHIFT)
#define RP2040_PWM_CH1_CC_A_MASK          (0xffff)

#define RP2040_PWM_CH1_TOP_MASK           (0xffff)

#define RP2040_PWM_CH2_CSR_PH_ADV         (1 << 7)  /* Advance the phase of the counter by 1 count, while it is running. Self-clearing. Write a 1, and poll until low. Counter must be running at less than full speed (div_int + div_frac / 16 > 1) */
#define RP2040_PWM_CH2_CSR_PH_RET         (1 << 6)  /* Retard the phase of the counter by 1 count, while it is running. Self-clearing. Write a 1, and poll until low. Counter must be running. */
#define RP2040_PWM_CH2_CSR_DIVMODE_SHIFT  (4)
#define RP2040_PWM_CH2_CSR_DIVMODE_MASK   (0x03 << RP2040_PWM_CH2_CSR_DIVMODE_SHIFT)
#define RP2040_PWM_CH2_CSR_DIVMODE_DIV    (0x0 << RP2040_PWM_CH2_CSR_DIVMODE_SHIFT)  /* Free-running counting at rate dictated by fractional divider */
#define RP2040_PWM_CH2_CSR_DIVMODE_LEVEL  (0x1 << RP2040_PWM_CH2_CSR_DIVMODE_SHIFT)  /* Fractional divider operation is gated by the PWM B pin. */
#define RP2040_PWM_CH2_CSR_DIVMODE_RISE   (0x2 << RP2040_PWM_CH2_CSR_DIVMODE_SHIFT)  /* Counter advances with each rising edge of the PWM B pin. */
#define RP2040_PWM_CH2_CSR_DIVMODE_FALL   (0x3 << RP2040_PWM_CH2_CSR_DIVMODE_SHIFT)  /* Counter advances with each falling edge of the PWM B pin. */
#define RP2040_PWM_CH2_CSR_B_INV          (1 << 3)  /* Invert output B */
#define RP2040_PWM_CH2_CSR_A_INV          (1 << 2)  /* Invert output A */
#define RP2040_PWM_CH2_CSR_PH_CORRECT     (1 << 1)  /* 1: Enable phase-correct modulation. 0: Trailing-edge */
#define RP2040_PWM_CH2_CSR_EN             (1 << 0)  /* Enable the PWM channel. */

#define RP2040_PWM_CH2_DIV_INT_SHIFT      (4)
#define RP2040_PWM_CH2_DIV_INT_MASK       (0xff << RP2040_PWM_CH2_DIV_INT_SHIFT)
#define RP2040_PWM_CH2_DIV_FRAC_MASK      (0x0f)

#define RP2040_PWM_CH2_CTR_MASK           (0xffff)

#define RP2040_PWM_CH2_CC_B_SHIFT         (16)
#define RP2040_PWM_CH2_CC_B_MASK          (0xffff << RP2040_PWM_CH2_CC_B_SHIFT)
#define RP2040_PWM_CH2_CC_A_MASK          (0xffff)

#define RP2040_PWM_CH2_TOP_MASK           (0xffff)

#define RP2040_PWM_CH3_CSR_PH_ADV         (1 << 7)  /* Advance the phase of the counter by 1 count, while it is running. Self-clearing. Write a 1, and poll until low. Counter must be running at less than full speed (div_int + div_frac / 16 > 1) */
#define RP2040_PWM_CH3_CSR_PH_RET         (1 << 6)  /* Retard the phase of the counter by 1 count, while it is running. Self-clearing. Write a 1, and poll until low. Counter must be running. */
#define RP2040_PWM_CH3_CSR_DIVMODE_SHIFT  (4)
#define RP2040_PWM_CH3_CSR_DIVMODE_MASK   (0x03 << RP2040_PWM_CH3_CSR_DIVMODE_SHIFT)
#define RP2040_PWM_CH3_CSR_DIVMODE_DIV    (0x0 << RP2040_PWM_CH3_CSR_DIVMODE_SHIFT)  /* Free-running counting at rate dictated by fractional divider */
#define RP2040_PWM_CH3_CSR_DIVMODE_LEVEL  (0x1 << RP2040_PWM_CH3_CSR_DIVMODE_SHIFT)  /* Fractional divider operation is gated by the PWM B pin. */
#define RP2040_PWM_CH3_CSR_DIVMODE_RISE   (0x2 << RP2040_PWM_CH3_CSR_DIVMODE_SHIFT)  /* Counter advances with each rising edge of the PWM B pin. */
#define RP2040_PWM_CH3_CSR_DIVMODE_FALL   (0x3 << RP2040_PWM_CH3_CSR_DIVMODE_SHIFT)  /* Counter advances with each falling edge of the PWM B pin. */
#define RP2040_PWM_CH3_CSR_B_INV          (1 << 3)  /* Invert output B */
#define RP2040_PWM_CH3_CSR_A_INV          (1 << 2)  /* Invert output A */
#define RP2040_PWM_CH3_CSR_PH_CORRECT     (1 << 1)  /* 1: Enable phase-correct modulation. 0: Trailing-edge */
#define RP2040_PWM_CH3_CSR_EN             (1 << 0)  /* Enable the PWM channel. */

#define RP2040_PWM_CH3_DIV_INT_SHIFT      (4)
#define RP2040_PWM_CH3_DIV_INT_MASK       (0xff << RP2040_PWM_CH3_DIV_INT_SHIFT)
#define RP2040_PWM_CH3_DIV_FRAC_MASK      (0x0f)

#define RP2040_PWM_CH3_CTR_MASK           (0xffff)

#define RP2040_PWM_CH3_CC_B_SHIFT         (16)
#define RP2040_PWM_CH3_CC_B_MASK          (0xffff << RP2040_PWM_CH3_CC_B_SHIFT)
#define RP2040_PWM_CH3_CC_A_MASK          (0xffff)

#define RP2040_PWM_CH3_TOP_MASK           (0xffff)

#define RP2040_PWM_CH4_CSR_PH_ADV         (1 << 7)  /* Advance the phase of the counter by 1 count, while it is running. Self-clearing. Write a 1, and poll until low. Counter must be running at less than full speed (div_int + div_frac / 16 > 1) */
#define RP2040_PWM_CH4_CSR_PH_RET         (1 << 6)  /* Retard the phase of the counter by 1 count, while it is running. Self-clearing. Write a 1, and poll until low. Counter must be running. */
#define RP2040_PWM_CH4_CSR_DIVMODE_SHIFT  (4)
#define RP2040_PWM_CH4_CSR_DIVMODE_MASK   (0x03 << RP2040_PWM_CH4_CSR_DIVMODE_SHIFT)
#define RP2040_PWM_CH4_CSR_DIVMODE_DIV    (0x0 << RP2040_PWM_CH4_CSR_DIVMODE_SHIFT)  /* Free-running counting at rate dictated by fractional divider */
#define RP2040_PWM_CH4_CSR_DIVMODE_LEVEL  (0x1 << RP2040_PWM_CH4_CSR_DIVMODE_SHIFT)  /* Fractional divider operation is gated by the PWM B pin. */
#define RP2040_PWM_CH4_CSR_DIVMODE_RISE   (0x2 << RP2040_PWM_CH4_CSR_DIVMODE_SHIFT)  /* Counter advances with each rising edge of the PWM B pin. */
#define RP2040_PWM_CH4_CSR_DIVMODE_FALL   (0x3 << RP2040_PWM_CH4_CSR_DIVMODE_SHIFT)  /* Counter advances with each falling edge of the PWM B pin. */
#define RP2040_PWM_CH4_CSR_B_INV          (1 << 3)  /* Invert output B */
#define RP2040_PWM_CH4_CSR_A_INV          (1 << 2)  /* Invert output A */
#define RP2040_PWM_CH4_CSR_PH_CORRECT     (1 << 1)  /* 1: Enable phase-correct modulation. 0: Trailing-edge */
#define RP2040_PWM_CH4_CSR_EN             (1 << 0)  /* Enable the PWM channel. */

#define RP2040_PWM_CH4_DIV_INT_SHIFT      (4)
#define RP2040_PWM_CH4_DIV_INT_MASK       (0xff << RP2040_PWM_CH4_DIV_INT_SHIFT)
#define RP2040_PWM_CH4_DIV_FRAC_MASK      (0x0f)

#define RP2040_PWM_CH4_CTR_MASK           (0xffff)

#define RP2040_PWM_CH4_CC_B_SHIFT         (16)
#define RP2040_PWM_CH4_CC_B_MASK          (0xffff << RP2040_PWM_CH4_CC_B_SHIFT)
#define RP2040_PWM_CH4_CC_A_MASK          (0xffff)

#define RP2040_PWM_CH4_TOP_MASK           (0xffff)

#define RP2040_PWM_CH5_CSR_PH_ADV         (1 << 7)  /* Advance the phase of the counter by 1 count, while it is running. Self-clearing. Write a 1, and poll until low. Counter must be running at less than full speed (div_int + div_frac / 16 > 1) */
#define RP2040_PWM_CH5_CSR_PH_RET         (1 << 6)  /* Retard the phase of the counter by 1 count, while it is running. Self-clearing. Write a 1, and poll until low. Counter must be running. */
#define RP2040_PWM_CH5_CSR_DIVMODE_SHIFT  (4)
#define RP2040_PWM_CH5_CSR_DIVMODE_MASK   (0x03 << RP2040_PWM_CH5_CSR_DIVMODE_SHIFT)
#define RP2040_PWM_CH5_CSR_DIVMODE_DIV    (0x0 << RP2040_PWM_CH5_CSR_DIVMODE_SHIFT)  /* Free-running counting at rate dictated by fractional divider */
#define RP2040_PWM_CH5_CSR_DIVMODE_LEVEL  (0x1 << RP2040_PWM_CH5_CSR_DIVMODE_SHIFT)  /* Fractional divider operation is gated by the PWM B pin. */
#define RP2040_PWM_CH5_CSR_DIVMODE_RISE   (0x2 << RP2040_PWM_CH5_CSR_DIVMODE_SHIFT)  /* Counter advances with each rising edge of the PWM B pin. */
#define RP2040_PWM_CH5_CSR_DIVMODE_FALL   (0x3 << RP2040_PWM_CH5_CSR_DIVMODE_SHIFT)  /* Counter advances with each falling edge of the PWM B pin. */
#define RP2040_PWM_CH5_CSR_B_INV          (1 << 3)  /* Invert output B */
#define RP2040_PWM_CH5_CSR_A_INV          (1 << 2)  /* Invert output A */
#define RP2040_PWM_CH5_CSR_PH_CORRECT     (1 << 1)  /* 1: Enable phase-correct modulation. 0: Trailing-edge */
#define RP2040_PWM_CH5_CSR_EN             (1 << 0)  /* Enable the PWM channel. */

#define RP2040_PWM_CH5_DIV_INT_SHIFT      (4)
#define RP2040_PWM_CH5_DIV_INT_MASK       (0xff << RP2040_PWM_CH5_DIV_INT_SHIFT)
#define RP2040_PWM_CH5_DIV_FRAC_MASK      (0x0f)

#define RP2040_PWM_CH5_CTR_MASK           (0xffff)

#define RP2040_PWM_CH5_CC_B_SHIFT         (16)
#define RP2040_PWM_CH5_CC_B_MASK          (0xffff << RP2040_PWM_CH5_CC_B_SHIFT)
#define RP2040_PWM_CH5_CC_A_MASK          (0xffff)

#define RP2040_PWM_CH5_TOP_MASK           (0xffff)

#define RP2040_PWM_CH6_CSR_PH_ADV         (1 << 7)  /* Advance the phase of the counter by 1 count, while it is running. Self-clearing. Write a 1, and poll until low. Counter must be running at less than full speed (div_int + div_frac / 16 > 1) */
#define RP2040_PWM_CH6_CSR_PH_RET         (1 << 6)  /* Retard the phase of the counter by 1 count, while it is running. Self-clearing. Write a 1, and poll until low. Counter must be running. */
#define RP2040_PWM_CH6_CSR_DIVMODE_SHIFT  (4)
#define RP2040_PWM_CH6_CSR_DIVMODE_MASK   (0x03 << RP2040_PWM_CH6_CSR_DIVMODE_SHIFT)
#define RP2040_PWM_CH6_CSR_DIVMODE_DIV    (0x0 << RP2040_PWM_CH6_CSR_DIVMODE_SHIFT)  /* Free-running counting at rate dictated by fractional divider */
#define RP2040_PWM_CH6_CSR_DIVMODE_LEVEL  (0x1 << RP2040_PWM_CH6_CSR_DIVMODE_SHIFT)  /* Fractional divider operation is gated by the PWM B pin. */
#define RP2040_PWM_CH6_CSR_DIVMODE_RISE   (0x2 << RP2040_PWM_CH6_CSR_DIVMODE_SHIFT)  /* Counter advances with each rising edge of the PWM B pin. */
#define RP2040_PWM_CH6_CSR_DIVMODE_FALL   (0x3 << RP2040_PWM_CH6_CSR_DIVMODE_SHIFT)  /* Counter advances with each falling edge of the PWM B pin. */
#define RP2040_PWM_CH6_CSR_B_INV          (1 << 3)  /* Invert output B */
#define RP2040_PWM_CH6_CSR_A_INV          (1 << 2)  /* Invert output A */
#define RP2040_PWM_CH6_CSR_PH_CORRECT     (1 << 1)  /* 1: Enable phase-correct modulation. 0: Trailing-edge */
#define RP2040_PWM_CH6_CSR_EN             (1 << 0)  /* Enable the PWM channel. */

#define RP2040_PWM_CH6_DIV_INT_SHIFT      (4)
#define RP2040_PWM_CH6_DIV_INT_MASK       (0xff << RP2040_PWM_CH6_DIV_INT_SHIFT)
#define RP2040_PWM_CH6_DIV_FRAC_MASK      (0x0f)

#define RP2040_PWM_CH6_CTR_MASK           (0xffff)

#define RP2040_PWM_CH6_CC_B_SHIFT         (16)
#define RP2040_PWM_CH6_CC_B_MASK          (0xffff << RP2040_PWM_CH6_CC_B_SHIFT)
#define RP2040_PWM_CH6_CC_A_MASK          (0xffff)

#define RP2040_PWM_CH6_TOP_MASK           (0xffff)

#define RP2040_PWM_CH7_CSR_PH_ADV         (1 << 7)  /* Advance the phase of the counter by 1 count, while it is running. Self-clearing. Write a 1, and poll until low. Counter must be running at less than full speed (div_int + div_frac / 16 > 1) */
#define RP2040_PWM_CH7_CSR_PH_RET         (1 << 6)  /* Retard the phase of the counter by 1 count, while it is running. Self-clearing. Write a 1, and poll until low. Counter must be running. */
#define RP2040_PWM_CH7_CSR_DIVMODE_SHIFT  (4)
#define RP2040_PWM_CH7_CSR_DIVMODE_MASK   (0x03 << RP2040_PWM_CH7_CSR_DIVMODE_SHIFT)
#define RP2040_PWM_CH7_CSR_DIVMODE_DIV    (0x0 << RP2040_PWM_CH7_CSR_DIVMODE_SHIFT)  /* Free-running counting at rate dictated by fractional divider */
#define RP2040_PWM_CH7_CSR_DIVMODE_LEVEL  (0x1 << RP2040_PWM_CH7_CSR_DIVMODE_SHIFT)  /* Fractional divider operation is gated by the PWM B pin. */
#define RP2040_PWM_CH7_CSR_DIVMODE_RISE   (0x2 << RP2040_PWM_CH7_CSR_DIVMODE_SHIFT)  /* Counter advances with each rising edge of the PWM B pin. */
#define RP2040_PWM_CH7_CSR_DIVMODE_FALL   (0x3 << RP2040_PWM_CH7_CSR_DIVMODE_SHIFT)  /* Counter advances with each falling edge of the PWM B pin. */
#define RP2040_PWM_CH7_CSR_B_INV          (1 << 3)  /* Invert output B */
#define RP2040_PWM_CH7_CSR_A_INV          (1 << 2)  /* Invert output A */
#define RP2040_PWM_CH7_CSR_PH_CORRECT     (1 << 1)  /* 1: Enable phase-correct modulation. 0: Trailing-edge */
#define RP2040_PWM_CH7_CSR_EN             (1 << 0)  /* Enable the PWM channel. */

#define RP2040_PWM_CH7_DIV_INT_SHIFT      (4)
#define RP2040_PWM_CH7_DIV_INT_MASK       (0xff << RP2040_PWM_CH7_DIV_INT_SHIFT)
#define RP2040_PWM_CH7_DIV_FRAC_MASK      (0x0f)

#define RP2040_PWM_CH7_CTR_MASK           (0xffff)

#define RP2040_PWM_CH7_CC_B_SHIFT         (16)
#define RP2040_PWM_CH7_CC_B_MASK          (0xffff << RP2040_PWM_CH7_CC_B_SHIFT)
#define RP2040_PWM_CH7_CC_A_MASK          (0xffff)

#define RP2040_PWM_CH7_TOP_MASK           (0xffff)

#define RP2040_PWM_EN_CH7                 (1 << 7)
#define RP2040_PWM_EN_CH6                 (1 << 6)
#define RP2040_PWM_EN_CH5                 (1 << 5)
#define RP2040_PWM_EN_CH4                 (1 << 4)
#define RP2040_PWM_EN_CH3                 (1 << 3)
#define RP2040_PWM_EN_CH2                 (1 << 2)
#define RP2040_PWM_EN_CH1                 (1 << 1)
#define RP2040_PWM_EN_CH0                 (1 << 0)

#define RP2040_PWM_INTR_CH7               (1 << 7)
#define RP2040_PWM_INTR_CH6               (1 << 6)
#define RP2040_PWM_INTR_CH5               (1 << 5)
#define RP2040_PWM_INTR_CH4               (1 << 4)
#define RP2040_PWM_INTR_CH3               (1 << 3)
#define RP2040_PWM_INTR_CH2               (1 << 2)
#define RP2040_PWM_INTR_CH1               (1 << 1)
#define RP2040_PWM_INTR_CH0               (1 << 0)

#define RP2040_PWM_INTE_CH7               (1 << 7)
#define RP2040_PWM_INTE_CH6               (1 << 6)
#define RP2040_PWM_INTE_CH5               (1 << 5)
#define RP2040_PWM_INTE_CH4               (1 << 4)
#define RP2040_PWM_INTE_CH3               (1 << 3)
#define RP2040_PWM_INTE_CH2               (1 << 2)
#define RP2040_PWM_INTE_CH1               (1 << 1)
#define RP2040_PWM_INTE_CH0               (1 << 0)

#define RP2040_PWM_INTF_CH7               (1 << 7)
#define RP2040_PWM_INTF_CH6               (1 << 6)
#define RP2040_PWM_INTF_CH5               (1 << 5)
#define RP2040_PWM_INTF_CH4               (1 << 4)
#define RP2040_PWM_INTF_CH3               (1 << 3)
#define RP2040_PWM_INTF_CH2               (1 << 2)
#define RP2040_PWM_INTF_CH1               (1 << 1)
#define RP2040_PWM_INTF_CH0               (1 << 0)

#define RP2040_PWM_INTS_CH7               (1 << 7)
#define RP2040_PWM_INTS_CH6               (1 << 6)
#define RP2040_PWM_INTS_CH5               (1 << 5)
#define RP2040_PWM_INTS_CH4               (1 << 4)
#define RP2040_PWM_INTS_CH3               (1 << 3)
#define RP2040_PWM_INTS_CH2               (1 << 2)
#define RP2040_PWM_INTS_CH1               (1 << 1)
#define RP2040_PWM_INTS_CH0               (1 << 0)

#endif /* __ARCH_ARM_SRC_RP2040_HARDWARE_RP2040_PWM_H */
