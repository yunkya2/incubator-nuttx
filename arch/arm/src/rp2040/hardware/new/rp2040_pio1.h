/****************************************************************************
 * arch/arm/src/rp2040/hardware/rp2040_pio1.h
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

#ifndef __ARCH_ARM_SRC_RP2040_HARDWARE_RP2040_PIO1_H
#define __ARCH_ARM_SRC_RP2040_HARDWARE_RP2040_PIO1_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include "hardware/rp2040_memorymap.h"

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

/* Register offsets *********************************************************/

#define RP2040_PIO1_CTRL_OFFSET               0x000000  /* PIO control register */
#define RP2040_PIO1_FSTAT_OFFSET              0x000004  /* FIFO status register */
#define RP2040_PIO1_FDEBUG_OFFSET             0x000008  /* FIFO debug register */
#define RP2040_PIO1_FLEVEL_OFFSET             0x00000c  /* FIFO levels */
#define RP2040_PIO1_TXF0_OFFSET               0x000010  /* Direct write access to the TX FIFO for this state machine. Each write pushes one word to the FIFO. */
#define RP2040_PIO1_TXF1_OFFSET               0x000014  /* Direct write access to the TX FIFO for this state machine. Each write pushes one word to the FIFO. */
#define RP2040_PIO1_TXF2_OFFSET               0x000018  /* Direct write access to the TX FIFO for this state machine. Each write pushes one word to the FIFO. */
#define RP2040_PIO1_TXF3_OFFSET               0x00001c  /* Direct write access to the TX FIFO for this state machine. Each write pushes one word to the FIFO. */
#define RP2040_PIO1_RXF0_OFFSET               0x000020  /* Direct read access to the RX FIFO for this state machine. Each read pops one word from the FIFO. */
#define RP2040_PIO1_RXF1_OFFSET               0x000024  /* Direct read access to the RX FIFO for this state machine. Each read pops one word from the FIFO. */
#define RP2040_PIO1_RXF2_OFFSET               0x000028  /* Direct read access to the RX FIFO for this state machine. Each read pops one word from the FIFO. */
#define RP2040_PIO1_RXF3_OFFSET               0x00002c  /* Direct read access to the RX FIFO for this state machine. Each read pops one word from the FIFO. */
#define RP2040_PIO1_IRQ_OFFSET                0x000030  /* Interrupt request register. Write 1 to clear */
#define RP2040_PIO1_IRQ_FORCE_OFFSET          0x000034  /* Writing a 1 to each of these bits will forcibly assert the corresponding IRQ. Note this is different to the INTF register: writing here affects PIO internal state. INTF just asserts the processor-facing IRQ signal for testing ISRs, and is not visible to the state machines. */
#define RP2040_PIO1_INPUT_SYNC_BYPASS_OFFSET  0x000038  /* There is a 2-flipflop synchronizer on each GPIO input, which protects PIO logic from metastabilities. This increases input delay, and for fast synchronous IO (e.g. SPI) these synchronizers may need to be bypassed. Each bit in this register corresponds to one GPIO. 0 -> input is synchronized (default) 1 -> synchronizer is bypassed If in doubt, leave this register as all zeroes. */
#define RP2040_PIO1_DBG_PADOUT_OFFSET         0x00003c  /* Read to sample the pad output values PIO is currently driving to the GPIOs. */
#define RP2040_PIO1_DBG_PADOE_OFFSET          0x000040  /* Read to sample the pad output enables (direction) PIO is currently driving to the GPIOs. */
#define RP2040_PIO1_DBG_CFGINFO_OFFSET        0x000044  /* The PIO hardware has some free parameters that may vary between chip products. These should be provided in the chip datasheet, but are also exposed here. */
#define RP2040_PIO1_INSTR_MEM0_OFFSET         0x000048  /* Write-only access to instruction memory location 0 */
#define RP2040_PIO1_INSTR_MEM1_OFFSET         0x00004c  /* Write-only access to instruction memory location 1 */
#define RP2040_PIO1_INSTR_MEM2_OFFSET         0x000050  /* Write-only access to instruction memory location 2 */
#define RP2040_PIO1_INSTR_MEM3_OFFSET         0x000054  /* Write-only access to instruction memory location 3 */
#define RP2040_PIO1_INSTR_MEM4_OFFSET         0x000058  /* Write-only access to instruction memory location 4 */
#define RP2040_PIO1_INSTR_MEM5_OFFSET         0x00005c  /* Write-only access to instruction memory location 5 */
#define RP2040_PIO1_INSTR_MEM6_OFFSET         0x000060  /* Write-only access to instruction memory location 6 */
#define RP2040_PIO1_INSTR_MEM7_OFFSET         0x000064  /* Write-only access to instruction memory location 7 */
#define RP2040_PIO1_INSTR_MEM8_OFFSET         0x000068  /* Write-only access to instruction memory location 8 */
#define RP2040_PIO1_INSTR_MEM9_OFFSET         0x00006c  /* Write-only access to instruction memory location 9 */
#define RP2040_PIO1_INSTR_MEM10_OFFSET        0x000070  /* Write-only access to instruction memory location 10 */
#define RP2040_PIO1_INSTR_MEM11_OFFSET        0x000074  /* Write-only access to instruction memory location 11 */
#define RP2040_PIO1_INSTR_MEM12_OFFSET        0x000078  /* Write-only access to instruction memory location 12 */
#define RP2040_PIO1_INSTR_MEM13_OFFSET        0x00007c  /* Write-only access to instruction memory location 13 */
#define RP2040_PIO1_INSTR_MEM14_OFFSET        0x000080  /* Write-only access to instruction memory location 14 */
#define RP2040_PIO1_INSTR_MEM15_OFFSET        0x000084  /* Write-only access to instruction memory location 15 */
#define RP2040_PIO1_INSTR_MEM16_OFFSET        0x000088  /* Write-only access to instruction memory location 16 */
#define RP2040_PIO1_INSTR_MEM17_OFFSET        0x00008c  /* Write-only access to instruction memory location 17 */
#define RP2040_PIO1_INSTR_MEM18_OFFSET        0x000090  /* Write-only access to instruction memory location 18 */
#define RP2040_PIO1_INSTR_MEM19_OFFSET        0x000094  /* Write-only access to instruction memory location 19 */
#define RP2040_PIO1_INSTR_MEM20_OFFSET        0x000098  /* Write-only access to instruction memory location 20 */
#define RP2040_PIO1_INSTR_MEM21_OFFSET        0x00009c  /* Write-only access to instruction memory location 21 */
#define RP2040_PIO1_INSTR_MEM22_OFFSET        0x0000a0  /* Write-only access to instruction memory location 22 */
#define RP2040_PIO1_INSTR_MEM23_OFFSET        0x0000a4  /* Write-only access to instruction memory location 23 */
#define RP2040_PIO1_INSTR_MEM24_OFFSET        0x0000a8  /* Write-only access to instruction memory location 24 */
#define RP2040_PIO1_INSTR_MEM25_OFFSET        0x0000ac  /* Write-only access to instruction memory location 25 */
#define RP2040_PIO1_INSTR_MEM26_OFFSET        0x0000b0  /* Write-only access to instruction memory location 26 */
#define RP2040_PIO1_INSTR_MEM27_OFFSET        0x0000b4  /* Write-only access to instruction memory location 27 */
#define RP2040_PIO1_INSTR_MEM28_OFFSET        0x0000b8  /* Write-only access to instruction memory location 28 */
#define RP2040_PIO1_INSTR_MEM29_OFFSET        0x0000bc  /* Write-only access to instruction memory location 29 */
#define RP2040_PIO1_INSTR_MEM30_OFFSET        0x0000c0  /* Write-only access to instruction memory location 30 */
#define RP2040_PIO1_INSTR_MEM31_OFFSET        0x0000c4  /* Write-only access to instruction memory location 31 */
#define RP2040_PIO1_SM0_CLKDIV_OFFSET         0x0000c8  /* Clock divider register for state machine 0 Frequency = clock freq / (CLKDIV_INT + CLKDIV_FRAC / 256) */
#define RP2040_PIO1_SM0_EXECCTRL_OFFSET       0x0000cc  /* Execution/behavioural settings for state machine 0 */
#define RP2040_PIO1_SM0_SHIFTCTRL_OFFSET      0x0000d0  /* Control behaviour of the input/output shift registers for state machine 0 */
#define RP2040_PIO1_SM0_ADDR_OFFSET           0x0000d4  /* Current instruction address of state machine 0 */
#define RP2040_PIO1_SM0_INSTR_OFFSET          0x0000d8  /* Instruction currently being executed by state machine 0 Write to execute an instruction immediately (including jumps) and then resume execution. */
#define RP2040_PIO1_SM0_PINCTRL_OFFSET        0x0000dc  /* State machine pin control */
#define RP2040_PIO1_SM1_CLKDIV_OFFSET         0x0000e0  /* Clock divider register for state machine 1 Frequency = clock freq / (CLKDIV_INT + CLKDIV_FRAC / 256) */
#define RP2040_PIO1_SM1_EXECCTRL_OFFSET       0x0000e4  /* Execution/behavioural settings for state machine 1 */
#define RP2040_PIO1_SM1_SHIFTCTRL_OFFSET      0x0000e8  /* Control behaviour of the input/output shift registers for state machine 1 */
#define RP2040_PIO1_SM1_ADDR_OFFSET           0x0000ec  /* Current instruction address of state machine 1 */
#define RP2040_PIO1_SM1_INSTR_OFFSET          0x0000f0  /* Instruction currently being executed by state machine 1 Write to execute an instruction immediately (including jumps) and then resume execution. */
#define RP2040_PIO1_SM1_PINCTRL_OFFSET        0x0000f4  /* State machine pin control */
#define RP2040_PIO1_SM2_CLKDIV_OFFSET         0x0000f8  /* Clock divider register for state machine 2 Frequency = clock freq / (CLKDIV_INT + CLKDIV_FRAC / 256) */
#define RP2040_PIO1_SM2_EXECCTRL_OFFSET       0x0000fc  /* Execution/behavioural settings for state machine 2 */
#define RP2040_PIO1_SM2_SHIFTCTRL_OFFSET      0x000100  /* Control behaviour of the input/output shift registers for state machine 2 */
#define RP2040_PIO1_SM2_ADDR_OFFSET           0x000104  /* Current instruction address of state machine 2 */
#define RP2040_PIO1_SM2_INSTR_OFFSET          0x000108  /* Instruction currently being executed by state machine 2 Write to execute an instruction immediately (including jumps) and then resume execution. */
#define RP2040_PIO1_SM2_PINCTRL_OFFSET        0x00010c  /* State machine pin control */
#define RP2040_PIO1_SM3_CLKDIV_OFFSET         0x000110  /* Clock divider register for state machine 3 Frequency = clock freq / (CLKDIV_INT + CLKDIV_FRAC / 256) */
#define RP2040_PIO1_SM3_EXECCTRL_OFFSET       0x000114  /* Execution/behavioural settings for state machine 3 */
#define RP2040_PIO1_SM3_SHIFTCTRL_OFFSET      0x000118  /* Control behaviour of the input/output shift registers for state machine 3 */
#define RP2040_PIO1_SM3_ADDR_OFFSET           0x00011c  /* Current instruction address of state machine 3 */
#define RP2040_PIO1_SM3_INSTR_OFFSET          0x000120  /* Instruction currently being executed by state machine 3 Write to execute an instruction immediately (including jumps) and then resume execution. */
#define RP2040_PIO1_SM3_PINCTRL_OFFSET        0x000124  /* State machine pin control */
#define RP2040_PIO1_INTR_OFFSET               0x000128  /* Raw Interrupts */
#define RP2040_PIO1_IRQ0_INTE_OFFSET          0x00012c  /* Interrupt Enable for irq0 */
#define RP2040_PIO1_IRQ0_INTF_OFFSET          0x000130  /* Interrupt Force for irq0 */
#define RP2040_PIO1_IRQ0_INTS_OFFSET          0x000134  /* Interrupt status after masking & forcing for irq0 */
#define RP2040_PIO1_IRQ1_INTE_OFFSET          0x000138  /* Interrupt Enable for irq1 */
#define RP2040_PIO1_IRQ1_INTF_OFFSET          0x00013c  /* Interrupt Force for irq1 */
#define RP2040_PIO1_IRQ1_INTS_OFFSET          0x000140  /* Interrupt status after masking & forcing for irq1 */

/* Register definitions *****************************************************/

#define RP2040_PIO1_CTRL               (RP2040_PIO1_BASE + RP2040_PIO1_CTRL_OFFSET)
#define RP2040_PIO1_FSTAT              (RP2040_PIO1_BASE + RP2040_PIO1_FSTAT_OFFSET)
#define RP2040_PIO1_FDEBUG             (RP2040_PIO1_BASE + RP2040_PIO1_FDEBUG_OFFSET)
#define RP2040_PIO1_FLEVEL             (RP2040_PIO1_BASE + RP2040_PIO1_FLEVEL_OFFSET)
#define RP2040_PIO1_TXF0               (RP2040_PIO1_BASE + RP2040_PIO1_TXF0_OFFSET)
#define RP2040_PIO1_TXF1               (RP2040_PIO1_BASE + RP2040_PIO1_TXF1_OFFSET)
#define RP2040_PIO1_TXF2               (RP2040_PIO1_BASE + RP2040_PIO1_TXF2_OFFSET)
#define RP2040_PIO1_TXF3               (RP2040_PIO1_BASE + RP2040_PIO1_TXF3_OFFSET)
#define RP2040_PIO1_RXF0               (RP2040_PIO1_BASE + RP2040_PIO1_RXF0_OFFSET)
#define RP2040_PIO1_RXF1               (RP2040_PIO1_BASE + RP2040_PIO1_RXF1_OFFSET)
#define RP2040_PIO1_RXF2               (RP2040_PIO1_BASE + RP2040_PIO1_RXF2_OFFSET)
#define RP2040_PIO1_RXF3               (RP2040_PIO1_BASE + RP2040_PIO1_RXF3_OFFSET)
#define RP2040_PIO1_IRQ                (RP2040_PIO1_BASE + RP2040_PIO1_IRQ_OFFSET)
#define RP2040_PIO1_IRQ_FORCE          (RP2040_PIO1_BASE + RP2040_PIO1_IRQ_FORCE_OFFSET)
#define RP2040_PIO1_INPUT_SYNC_BYPASS  (RP2040_PIO1_BASE + RP2040_PIO1_INPUT_SYNC_BYPASS_OFFSET)
#define RP2040_PIO1_DBG_PADOUT         (RP2040_PIO1_BASE + RP2040_PIO1_DBG_PADOUT_OFFSET)
#define RP2040_PIO1_DBG_PADOE          (RP2040_PIO1_BASE + RP2040_PIO1_DBG_PADOE_OFFSET)
#define RP2040_PIO1_DBG_CFGINFO        (RP2040_PIO1_BASE + RP2040_PIO1_DBG_CFGINFO_OFFSET)
#define RP2040_PIO1_INSTR_MEM0         (RP2040_PIO1_BASE + RP2040_PIO1_INSTR_MEM0_OFFSET)
#define RP2040_PIO1_INSTR_MEM1         (RP2040_PIO1_BASE + RP2040_PIO1_INSTR_MEM1_OFFSET)
#define RP2040_PIO1_INSTR_MEM2         (RP2040_PIO1_BASE + RP2040_PIO1_INSTR_MEM2_OFFSET)
#define RP2040_PIO1_INSTR_MEM3         (RP2040_PIO1_BASE + RP2040_PIO1_INSTR_MEM3_OFFSET)
#define RP2040_PIO1_INSTR_MEM4         (RP2040_PIO1_BASE + RP2040_PIO1_INSTR_MEM4_OFFSET)
#define RP2040_PIO1_INSTR_MEM5         (RP2040_PIO1_BASE + RP2040_PIO1_INSTR_MEM5_OFFSET)
#define RP2040_PIO1_INSTR_MEM6         (RP2040_PIO1_BASE + RP2040_PIO1_INSTR_MEM6_OFFSET)
#define RP2040_PIO1_INSTR_MEM7         (RP2040_PIO1_BASE + RP2040_PIO1_INSTR_MEM7_OFFSET)
#define RP2040_PIO1_INSTR_MEM8         (RP2040_PIO1_BASE + RP2040_PIO1_INSTR_MEM8_OFFSET)
#define RP2040_PIO1_INSTR_MEM9         (RP2040_PIO1_BASE + RP2040_PIO1_INSTR_MEM9_OFFSET)
#define RP2040_PIO1_INSTR_MEM10        (RP2040_PIO1_BASE + RP2040_PIO1_INSTR_MEM10_OFFSET)
#define RP2040_PIO1_INSTR_MEM11        (RP2040_PIO1_BASE + RP2040_PIO1_INSTR_MEM11_OFFSET)
#define RP2040_PIO1_INSTR_MEM12        (RP2040_PIO1_BASE + RP2040_PIO1_INSTR_MEM12_OFFSET)
#define RP2040_PIO1_INSTR_MEM13        (RP2040_PIO1_BASE + RP2040_PIO1_INSTR_MEM13_OFFSET)
#define RP2040_PIO1_INSTR_MEM14        (RP2040_PIO1_BASE + RP2040_PIO1_INSTR_MEM14_OFFSET)
#define RP2040_PIO1_INSTR_MEM15        (RP2040_PIO1_BASE + RP2040_PIO1_INSTR_MEM15_OFFSET)
#define RP2040_PIO1_INSTR_MEM16        (RP2040_PIO1_BASE + RP2040_PIO1_INSTR_MEM16_OFFSET)
#define RP2040_PIO1_INSTR_MEM17        (RP2040_PIO1_BASE + RP2040_PIO1_INSTR_MEM17_OFFSET)
#define RP2040_PIO1_INSTR_MEM18        (RP2040_PIO1_BASE + RP2040_PIO1_INSTR_MEM18_OFFSET)
#define RP2040_PIO1_INSTR_MEM19        (RP2040_PIO1_BASE + RP2040_PIO1_INSTR_MEM19_OFFSET)
#define RP2040_PIO1_INSTR_MEM20        (RP2040_PIO1_BASE + RP2040_PIO1_INSTR_MEM20_OFFSET)
#define RP2040_PIO1_INSTR_MEM21        (RP2040_PIO1_BASE + RP2040_PIO1_INSTR_MEM21_OFFSET)
#define RP2040_PIO1_INSTR_MEM22        (RP2040_PIO1_BASE + RP2040_PIO1_INSTR_MEM22_OFFSET)
#define RP2040_PIO1_INSTR_MEM23        (RP2040_PIO1_BASE + RP2040_PIO1_INSTR_MEM23_OFFSET)
#define RP2040_PIO1_INSTR_MEM24        (RP2040_PIO1_BASE + RP2040_PIO1_INSTR_MEM24_OFFSET)
#define RP2040_PIO1_INSTR_MEM25        (RP2040_PIO1_BASE + RP2040_PIO1_INSTR_MEM25_OFFSET)
#define RP2040_PIO1_INSTR_MEM26        (RP2040_PIO1_BASE + RP2040_PIO1_INSTR_MEM26_OFFSET)
#define RP2040_PIO1_INSTR_MEM27        (RP2040_PIO1_BASE + RP2040_PIO1_INSTR_MEM27_OFFSET)
#define RP2040_PIO1_INSTR_MEM28        (RP2040_PIO1_BASE + RP2040_PIO1_INSTR_MEM28_OFFSET)
#define RP2040_PIO1_INSTR_MEM29        (RP2040_PIO1_BASE + RP2040_PIO1_INSTR_MEM29_OFFSET)
#define RP2040_PIO1_INSTR_MEM30        (RP2040_PIO1_BASE + RP2040_PIO1_INSTR_MEM30_OFFSET)
#define RP2040_PIO1_INSTR_MEM31        (RP2040_PIO1_BASE + RP2040_PIO1_INSTR_MEM31_OFFSET)
#define RP2040_PIO1_SM0_CLKDIV         (RP2040_PIO1_BASE + RP2040_PIO1_SM0_CLKDIV_OFFSET)
#define RP2040_PIO1_SM0_EXECCTRL       (RP2040_PIO1_BASE + RP2040_PIO1_SM0_EXECCTRL_OFFSET)
#define RP2040_PIO1_SM0_SHIFTCTRL      (RP2040_PIO1_BASE + RP2040_PIO1_SM0_SHIFTCTRL_OFFSET)
#define RP2040_PIO1_SM0_ADDR           (RP2040_PIO1_BASE + RP2040_PIO1_SM0_ADDR_OFFSET)
#define RP2040_PIO1_SM0_INSTR          (RP2040_PIO1_BASE + RP2040_PIO1_SM0_INSTR_OFFSET)
#define RP2040_PIO1_SM0_PINCTRL        (RP2040_PIO1_BASE + RP2040_PIO1_SM0_PINCTRL_OFFSET)
#define RP2040_PIO1_SM1_CLKDIV         (RP2040_PIO1_BASE + RP2040_PIO1_SM1_CLKDIV_OFFSET)
#define RP2040_PIO1_SM1_EXECCTRL       (RP2040_PIO1_BASE + RP2040_PIO1_SM1_EXECCTRL_OFFSET)
#define RP2040_PIO1_SM1_SHIFTCTRL      (RP2040_PIO1_BASE + RP2040_PIO1_SM1_SHIFTCTRL_OFFSET)
#define RP2040_PIO1_SM1_ADDR           (RP2040_PIO1_BASE + RP2040_PIO1_SM1_ADDR_OFFSET)
#define RP2040_PIO1_SM1_INSTR          (RP2040_PIO1_BASE + RP2040_PIO1_SM1_INSTR_OFFSET)
#define RP2040_PIO1_SM1_PINCTRL        (RP2040_PIO1_BASE + RP2040_PIO1_SM1_PINCTRL_OFFSET)
#define RP2040_PIO1_SM2_CLKDIV         (RP2040_PIO1_BASE + RP2040_PIO1_SM2_CLKDIV_OFFSET)
#define RP2040_PIO1_SM2_EXECCTRL       (RP2040_PIO1_BASE + RP2040_PIO1_SM2_EXECCTRL_OFFSET)
#define RP2040_PIO1_SM2_SHIFTCTRL      (RP2040_PIO1_BASE + RP2040_PIO1_SM2_SHIFTCTRL_OFFSET)
#define RP2040_PIO1_SM2_ADDR           (RP2040_PIO1_BASE + RP2040_PIO1_SM2_ADDR_OFFSET)
#define RP2040_PIO1_SM2_INSTR          (RP2040_PIO1_BASE + RP2040_PIO1_SM2_INSTR_OFFSET)
#define RP2040_PIO1_SM2_PINCTRL        (RP2040_PIO1_BASE + RP2040_PIO1_SM2_PINCTRL_OFFSET)
#define RP2040_PIO1_SM3_CLKDIV         (RP2040_PIO1_BASE + RP2040_PIO1_SM3_CLKDIV_OFFSET)
#define RP2040_PIO1_SM3_EXECCTRL       (RP2040_PIO1_BASE + RP2040_PIO1_SM3_EXECCTRL_OFFSET)
#define RP2040_PIO1_SM3_SHIFTCTRL      (RP2040_PIO1_BASE + RP2040_PIO1_SM3_SHIFTCTRL_OFFSET)
#define RP2040_PIO1_SM3_ADDR           (RP2040_PIO1_BASE + RP2040_PIO1_SM3_ADDR_OFFSET)
#define RP2040_PIO1_SM3_INSTR          (RP2040_PIO1_BASE + RP2040_PIO1_SM3_INSTR_OFFSET)
#define RP2040_PIO1_SM3_PINCTRL        (RP2040_PIO1_BASE + RP2040_PIO1_SM3_PINCTRL_OFFSET)
#define RP2040_PIO1_INTR               (RP2040_PIO1_BASE + RP2040_PIO1_INTR_OFFSET)
#define RP2040_PIO1_IRQ0_INTE          (RP2040_PIO1_BASE + RP2040_PIO1_IRQ0_INTE_OFFSET)
#define RP2040_PIO1_IRQ0_INTF          (RP2040_PIO1_BASE + RP2040_PIO1_IRQ0_INTF_OFFSET)
#define RP2040_PIO1_IRQ0_INTS          (RP2040_PIO1_BASE + RP2040_PIO1_IRQ0_INTS_OFFSET)
#define RP2040_PIO1_IRQ1_INTE          (RP2040_PIO1_BASE + RP2040_PIO1_IRQ1_INTE_OFFSET)
#define RP2040_PIO1_IRQ1_INTF          (RP2040_PIO1_BASE + RP2040_PIO1_IRQ1_INTF_OFFSET)
#define RP2040_PIO1_IRQ1_INTS          (RP2040_PIO1_BASE + RP2040_PIO1_IRQ1_INTS_OFFSET)

/* Register bit definitions *************************************************/

#define RP2040_PIO1_CTRL_CLKDIV_RESTART_SHIFT        (8)  /* Force clock dividers to restart their count and clear fractional accumulators. Restart multiple dividers to synchronise them. */
#define RP2040_PIO1_CTRL_CLKDIV_RESTART_MASK         (0x0f << RP2040_PIO1_CTRL_CLKDIV_RESTART_SHIFT)
#define RP2040_PIO1_CTRL_SM_RESTART_SHIFT            (4)  /* Clear internal SM state which is otherwise difficult to access (e.g. shift counters). Self-clearing. */
#define RP2040_PIO1_CTRL_SM_RESTART_MASK             (0x0f << RP2040_PIO1_CTRL_SM_RESTART_SHIFT)
#define RP2040_PIO1_CTRL_SM_ENABLE_MASK              (0x0f)  /* Enable state machine */

#define RP2040_PIO1_FSTAT_TXEMPTY_SHIFT              (24)  /* State machine TX FIFO is empty */
#define RP2040_PIO1_FSTAT_TXEMPTY_MASK               (0x0f << RP2040_PIO1_FSTAT_TXEMPTY_SHIFT)
#define RP2040_PIO1_FSTAT_TXFULL_SHIFT               (16)  /* State machine TX FIFO is full */
#define RP2040_PIO1_FSTAT_TXFULL_MASK                (0x0f << RP2040_PIO1_FSTAT_TXFULL_SHIFT)
#define RP2040_PIO1_FSTAT_RXEMPTY_SHIFT              (8)  /* State machine RX FIFO is empty */
#define RP2040_PIO1_FSTAT_RXEMPTY_MASK               (0x0f << RP2040_PIO1_FSTAT_RXEMPTY_SHIFT)
#define RP2040_PIO1_FSTAT_RXFULL_MASK                (0x0f)  /* State machine RX FIFO is full */

#define RP2040_PIO1_FDEBUG_TXSTALL_SHIFT             (24)  /* State machine has stalled on empty TX FIFO. Write 1 to clear. */
#define RP2040_PIO1_FDEBUG_TXSTALL_MASK              (0x0f << RP2040_PIO1_FDEBUG_TXSTALL_SHIFT)
#define RP2040_PIO1_FDEBUG_TXOVER_SHIFT              (16)  /* TX FIFO overflow has occurred. Write 1 to clear. */
#define RP2040_PIO1_FDEBUG_TXOVER_MASK               (0x0f << RP2040_PIO1_FDEBUG_TXOVER_SHIFT)
#define RP2040_PIO1_FDEBUG_RXUNDER_SHIFT             (8)  /* RX FIFO underflow has occurred. Write 1 to clear. */
#define RP2040_PIO1_FDEBUG_RXUNDER_MASK              (0x0f << RP2040_PIO1_FDEBUG_RXUNDER_SHIFT)
#define RP2040_PIO1_FDEBUG_RXSTALL_MASK              (0x0f)  /* State machine has stalled on full RX FIFO. Write 1 to clear. */

#define RP2040_PIO1_FLEVEL_RX3_SHIFT                 (28)
#define RP2040_PIO1_FLEVEL_RX3_MASK                  (0x0f << RP2040_PIO1_FLEVEL_RX3_SHIFT)
#define RP2040_PIO1_FLEVEL_TX3_SHIFT                 (24)
#define RP2040_PIO1_FLEVEL_TX3_MASK                  (0x0f << RP2040_PIO1_FLEVEL_TX3_SHIFT)
#define RP2040_PIO1_FLEVEL_RX2_SHIFT                 (20)
#define RP2040_PIO1_FLEVEL_RX2_MASK                  (0x0f << RP2040_PIO1_FLEVEL_RX2_SHIFT)
#define RP2040_PIO1_FLEVEL_TX2_SHIFT                 (16)
#define RP2040_PIO1_FLEVEL_TX2_MASK                  (0x0f << RP2040_PIO1_FLEVEL_TX2_SHIFT)
#define RP2040_PIO1_FLEVEL_RX1_SHIFT                 (12)
#define RP2040_PIO1_FLEVEL_RX1_MASK                  (0x0f << RP2040_PIO1_FLEVEL_RX1_SHIFT)
#define RP2040_PIO1_FLEVEL_TX1_SHIFT                 (8)
#define RP2040_PIO1_FLEVEL_TX1_MASK                  (0x0f << RP2040_PIO1_FLEVEL_TX1_SHIFT)
#define RP2040_PIO1_FLEVEL_RX0_SHIFT                 (4)
#define RP2040_PIO1_FLEVEL_RX0_MASK                  (0x0f << RP2040_PIO1_FLEVEL_RX0_SHIFT)
#define RP2040_PIO1_FLEVEL_TX0_MASK                  (0x0f)

#define RP2040_PIO1_IRQ_MASK                         (0xff)

#define RP2040_PIO1_IRQ_FORCE_MASK                   (0xff)

#define RP2040_PIO1_DBG_CFGINFO_IMEM_SIZE_SHIFT      (16)  /* The size of the instruction memory, measured in units of one instruction */
#define RP2040_PIO1_DBG_CFGINFO_IMEM_SIZE_MASK       (0x3f << RP2040_PIO1_DBG_CFGINFO_IMEM_SIZE_SHIFT)
#define RP2040_PIO1_DBG_CFGINFO_SM_COUNT_SHIFT       (8)  /* The number of state machines this PIO instance is equipped with. */
#define RP2040_PIO1_DBG_CFGINFO_SM_COUNT_MASK        (0x0f << RP2040_PIO1_DBG_CFGINFO_SM_COUNT_SHIFT)
#define RP2040_PIO1_DBG_CFGINFO_FIFO_DEPTH_MASK      (0x3f)  /* The depth of the state machine TX/RX FIFOs, measured in words. Joining fifos via SHIFTCTRL_FJOIN gives one FIFO with double this depth. */

#define RP2040_PIO1_INSTR_MEM0_MASK                  (0xffff)

#define RP2040_PIO1_INSTR_MEM1_MASK                  (0xffff)

#define RP2040_PIO1_INSTR_MEM2_MASK                  (0xffff)

#define RP2040_PIO1_INSTR_MEM3_MASK                  (0xffff)

#define RP2040_PIO1_INSTR_MEM4_MASK                  (0xffff)

#define RP2040_PIO1_INSTR_MEM5_MASK                  (0xffff)

#define RP2040_PIO1_INSTR_MEM6_MASK                  (0xffff)

#define RP2040_PIO1_INSTR_MEM7_MASK                  (0xffff)

#define RP2040_PIO1_INSTR_MEM8_MASK                  (0xffff)

#define RP2040_PIO1_INSTR_MEM9_MASK                  (0xffff)

#define RP2040_PIO1_INSTR_MEM10_MASK                 (0xffff)

#define RP2040_PIO1_INSTR_MEM11_MASK                 (0xffff)

#define RP2040_PIO1_INSTR_MEM12_MASK                 (0xffff)

#define RP2040_PIO1_INSTR_MEM13_MASK                 (0xffff)

#define RP2040_PIO1_INSTR_MEM14_MASK                 (0xffff)

#define RP2040_PIO1_INSTR_MEM15_MASK                 (0xffff)

#define RP2040_PIO1_INSTR_MEM16_MASK                 (0xffff)

#define RP2040_PIO1_INSTR_MEM17_MASK                 (0xffff)

#define RP2040_PIO1_INSTR_MEM18_MASK                 (0xffff)

#define RP2040_PIO1_INSTR_MEM19_MASK                 (0xffff)

#define RP2040_PIO1_INSTR_MEM20_MASK                 (0xffff)

#define RP2040_PIO1_INSTR_MEM21_MASK                 (0xffff)

#define RP2040_PIO1_INSTR_MEM22_MASK                 (0xffff)

#define RP2040_PIO1_INSTR_MEM23_MASK                 (0xffff)

#define RP2040_PIO1_INSTR_MEM24_MASK                 (0xffff)

#define RP2040_PIO1_INSTR_MEM25_MASK                 (0xffff)

#define RP2040_PIO1_INSTR_MEM26_MASK                 (0xffff)

#define RP2040_PIO1_INSTR_MEM27_MASK                 (0xffff)

#define RP2040_PIO1_INSTR_MEM28_MASK                 (0xffff)

#define RP2040_PIO1_INSTR_MEM29_MASK                 (0xffff)

#define RP2040_PIO1_INSTR_MEM30_MASK                 (0xffff)

#define RP2040_PIO1_INSTR_MEM31_MASK                 (0xffff)

#define RP2040_PIO1_SM0_CLKDIV_INT_SHIFT             (16)  /* Effective frequency is sysclk/int. Value of 0 is interpreted as max possible value */
#define RP2040_PIO1_SM0_CLKDIV_INT_MASK              (0xffff << RP2040_PIO1_SM0_CLKDIV_INT_SHIFT)
#define RP2040_PIO1_SM0_CLKDIV_FRAC_SHIFT            (8)  /* Fractional part of clock divider */
#define RP2040_PIO1_SM0_CLKDIV_FRAC_MASK             (0xff << RP2040_PIO1_SM0_CLKDIV_FRAC_SHIFT)

#define RP2040_PIO1_SM0_EXECCTRL_EXEC_STALLED        (1 << 31)  /* An instruction written to SMx_INSTR is stalled, and latched by the state machine. Will clear once the instruction completes. */
#define RP2040_PIO1_SM0_EXECCTRL_SIDE_EN             (1 << 30)  /* If 1, the delay MSB is used as side-set enable, rather than a side-set data bit. This allows instructions to perform side-set optionally, rather than on every instruction. */
#define RP2040_PIO1_SM0_EXECCTRL_SIDE_PINDIR         (1 << 29)  /* Side-set data is asserted to pin OEs instead of pin values */
#define RP2040_PIO1_SM0_EXECCTRL_JMP_PIN_SHIFT       (24)  /* The GPIO number to use as condition for JMP PIN. Unaffected by input mapping. */
#define RP2040_PIO1_SM0_EXECCTRL_JMP_PIN_MASK        (0x1f << RP2040_PIO1_SM0_EXECCTRL_JMP_PIN_SHIFT)
#define RP2040_PIO1_SM0_EXECCTRL_OUT_EN_SEL_SHIFT    (19)  /* Which data bit to use for inline OUT enable */
#define RP2040_PIO1_SM0_EXECCTRL_OUT_EN_SEL_MASK     (0x1f << RP2040_PIO1_SM0_EXECCTRL_OUT_EN_SEL_SHIFT)
#define RP2040_PIO1_SM0_EXECCTRL_INLINE_OUT_EN       (1 << 18)  /* If 1, use a bit of OUT data as an auxiliary write enable When used in conjunction with OUT_STICKY, writes with an enable of 0 will deassert the latest pin write. This can create useful masking/override behaviour due to the priority ordering of state machine pin writes (SM0 < SM1 < ...) */
#define RP2040_PIO1_SM0_EXECCTRL_OUT_STICKY          (1 << 17)  /* Continuously assert the most recent OUT/SET to the pins */
#define RP2040_PIO1_SM0_EXECCTRL_WRAP_TOP_SHIFT      (12)  /* After reaching this address, execution is wrapped to wrap_bottom. If the instruction is a jump, and the jump condition is true, the jump takes priority. */
#define RP2040_PIO1_SM0_EXECCTRL_WRAP_TOP_MASK       (0x1f << RP2040_PIO1_SM0_EXECCTRL_WRAP_TOP_SHIFT)
#define RP2040_PIO1_SM0_EXECCTRL_WRAP_BOTTOM_SHIFT   (7)  /* After reaching wrap_top, execution is wrapped to this address. */
#define RP2040_PIO1_SM0_EXECCTRL_WRAP_BOTTOM_MASK    (0x1f << RP2040_PIO1_SM0_EXECCTRL_WRAP_BOTTOM_SHIFT)
#define RP2040_PIO1_SM0_EXECCTRL_STATUS_SEL          (1 << 4)  /* All-ones if RX FIFO level < N, otherwise all-zeroes */
#define RP2040_PIO1_SM0_EXECCTRL_STATUS_N_MASK       (0x0f)  /* Comparison level for the MOV x, STATUS instruction */

#define RP2040_PIO1_SM0_SHIFTCTRL_FJOIN_RX           (1 << 31)  /* When 1, RX FIFO steals the TX FIFO's storage, and becomes twice as deep. TX FIFO is disabled as a result (always reads as both full and empty). FIFOs are flushed when this bit is changed. */
#define RP2040_PIO1_SM0_SHIFTCTRL_FJOIN_TX           (1 << 30)  /* When 1, TX FIFO steals the RX FIFO's storage, and becomes twice as deep. RX FIFO is disabled as a result (always reads as both full and empty). FIFOs are flushed when this bit is changed. */
#define RP2040_PIO1_SM0_SHIFTCTRL_PULL_THRESH_SHIFT  (25)  /* Number of bits shifted out of TXSR before autopull or conditional pull. Write 0 for value of 32. */
#define RP2040_PIO1_SM0_SHIFTCTRL_PULL_THRESH_MASK   (0x1f << RP2040_PIO1_SM0_SHIFTCTRL_PULL_THRESH_SHIFT)
#define RP2040_PIO1_SM0_SHIFTCTRL_PUSH_THRESH_SHIFT  (20)  /* Number of bits shifted into RXSR before autopush or conditional push. Write 0 for value of 32. */
#define RP2040_PIO1_SM0_SHIFTCTRL_PUSH_THRESH_MASK   (0x1f << RP2040_PIO1_SM0_SHIFTCTRL_PUSH_THRESH_SHIFT)
#define RP2040_PIO1_SM0_SHIFTCTRL_OUT_SHIFTDIR       (1 << 19)  /* 1 = shift out of output shift register to right. 0 = to left. */
#define RP2040_PIO1_SM0_SHIFTCTRL_IN_SHIFTDIR        (1 << 18)  /* 1 = shift input shift register to right (data enters from left). 0 = to left. */
#define RP2040_PIO1_SM0_SHIFTCTRL_AUTOPULL           (1 << 17)  /* Pull automatically when the output shift register is emptied */
#define RP2040_PIO1_SM0_SHIFTCTRL_AUTOPUSH           (1 << 16)  /* Push automatically when the input shift register is filled */

#define RP2040_PIO1_SM0_ADDR_MASK                    (0x1f)

#define RP2040_PIO1_SM0_INSTR_MASK                   (0xffff)

#define RP2040_PIO1_SM0_PINCTRL_SIDESET_COUNT_SHIFT  (29)  /* The number of delay bits co-opted for side-set. Inclusive of the enable bit, if present. */
#define RP2040_PIO1_SM0_PINCTRL_SIDESET_COUNT_MASK   (0x07 << RP2040_PIO1_SM0_PINCTRL_SIDESET_COUNT_SHIFT)
#define RP2040_PIO1_SM0_PINCTRL_SET_COUNT_SHIFT      (26)  /* The number of pins asserted by a SET. Max of 5 */
#define RP2040_PIO1_SM0_PINCTRL_SET_COUNT_MASK       (0x07 << RP2040_PIO1_SM0_PINCTRL_SET_COUNT_SHIFT)
#define RP2040_PIO1_SM0_PINCTRL_OUT_COUNT_SHIFT      (20)  /* The number of pins asserted by an OUT. Value of 0 -> 32 pins */
#define RP2040_PIO1_SM0_PINCTRL_OUT_COUNT_MASK       (0x3f << RP2040_PIO1_SM0_PINCTRL_OUT_COUNT_SHIFT)
#define RP2040_PIO1_SM0_PINCTRL_IN_BASE_SHIFT        (15)  /* The virtual pin corresponding to IN bit 0 */
#define RP2040_PIO1_SM0_PINCTRL_IN_BASE_MASK         (0x1f << RP2040_PIO1_SM0_PINCTRL_IN_BASE_SHIFT)
#define RP2040_PIO1_SM0_PINCTRL_SIDESET_BASE_SHIFT   (10)  /* The virtual pin corresponding to delay field bit 0 */
#define RP2040_PIO1_SM0_PINCTRL_SIDESET_BASE_MASK    (0x1f << RP2040_PIO1_SM0_PINCTRL_SIDESET_BASE_SHIFT)
#define RP2040_PIO1_SM0_PINCTRL_SET_BASE_SHIFT       (5)  /* The virtual pin corresponding to SET bit 0 */
#define RP2040_PIO1_SM0_PINCTRL_SET_BASE_MASK        (0x1f << RP2040_PIO1_SM0_PINCTRL_SET_BASE_SHIFT)
#define RP2040_PIO1_SM0_PINCTRL_OUT_BASE_MASK        (0x1f)  /* The virtual pin corresponding to OUT bit 0 */

#define RP2040_PIO1_SM1_CLKDIV_INT_SHIFT             (16)  /* Effective frequency is sysclk/int. Value of 0 is interpreted as max possible value */
#define RP2040_PIO1_SM1_CLKDIV_INT_MASK              (0xffff << RP2040_PIO1_SM1_CLKDIV_INT_SHIFT)
#define RP2040_PIO1_SM1_CLKDIV_FRAC_SHIFT            (8)  /* Fractional part of clock divider */
#define RP2040_PIO1_SM1_CLKDIV_FRAC_MASK             (0xff << RP2040_PIO1_SM1_CLKDIV_FRAC_SHIFT)

#define RP2040_PIO1_SM1_EXECCTRL_EXEC_STALLED        (1 << 31)  /* An instruction written to SMx_INSTR is stalled, and latched by the state machine. Will clear once the instruction completes. */
#define RP2040_PIO1_SM1_EXECCTRL_SIDE_EN             (1 << 30)  /* If 1, the delay MSB is used as side-set enable, rather than a side-set data bit. This allows instructions to perform side-set optionally, rather than on every instruction. */
#define RP2040_PIO1_SM1_EXECCTRL_SIDE_PINDIR         (1 << 29)  /* Side-set data is asserted to pin OEs instead of pin values */
#define RP2040_PIO1_SM1_EXECCTRL_JMP_PIN_SHIFT       (24)  /* The GPIO number to use as condition for JMP PIN. Unaffected by input mapping. */
#define RP2040_PIO1_SM1_EXECCTRL_JMP_PIN_MASK        (0x1f << RP2040_PIO1_SM1_EXECCTRL_JMP_PIN_SHIFT)
#define RP2040_PIO1_SM1_EXECCTRL_OUT_EN_SEL_SHIFT    (19)  /* Which data bit to use for inline OUT enable */
#define RP2040_PIO1_SM1_EXECCTRL_OUT_EN_SEL_MASK     (0x1f << RP2040_PIO1_SM1_EXECCTRL_OUT_EN_SEL_SHIFT)
#define RP2040_PIO1_SM1_EXECCTRL_INLINE_OUT_EN       (1 << 18)  /* If 1, use a bit of OUT data as an auxiliary write enable When used in conjunction with OUT_STICKY, writes with an enable of 0 will deassert the latest pin write. This can create useful masking/override behaviour due to the priority ordering of state machine pin writes (SM0 < SM1 < ...) */
#define RP2040_PIO1_SM1_EXECCTRL_OUT_STICKY          (1 << 17)  /* Continuously assert the most recent OUT/SET to the pins */
#define RP2040_PIO1_SM1_EXECCTRL_WRAP_TOP_SHIFT      (12)  /* After reaching this address, execution is wrapped to wrap_bottom. If the instruction is a jump, and the jump condition is true, the jump takes priority. */
#define RP2040_PIO1_SM1_EXECCTRL_WRAP_TOP_MASK       (0x1f << RP2040_PIO1_SM1_EXECCTRL_WRAP_TOP_SHIFT)
#define RP2040_PIO1_SM1_EXECCTRL_WRAP_BOTTOM_SHIFT   (7)  /* After reaching wrap_top, execution is wrapped to this address. */
#define RP2040_PIO1_SM1_EXECCTRL_WRAP_BOTTOM_MASK    (0x1f << RP2040_PIO1_SM1_EXECCTRL_WRAP_BOTTOM_SHIFT)
#define RP2040_PIO1_SM1_EXECCTRL_STATUS_SEL          (1 << 4)  /* All-ones if RX FIFO level < N, otherwise all-zeroes */
#define RP2040_PIO1_SM1_EXECCTRL_STATUS_N_MASK       (0x0f)  /* Comparison level for the MOV x, STATUS instruction */

#define RP2040_PIO1_SM1_SHIFTCTRL_FJOIN_RX           (1 << 31)  /* When 1, RX FIFO steals the TX FIFO's storage, and becomes twice as deep. TX FIFO is disabled as a result (always reads as both full and empty). FIFOs are flushed when this bit is changed. */
#define RP2040_PIO1_SM1_SHIFTCTRL_FJOIN_TX           (1 << 30)  /* When 1, TX FIFO steals the RX FIFO's storage, and becomes twice as deep. RX FIFO is disabled as a result (always reads as both full and empty). FIFOs are flushed when this bit is changed. */
#define RP2040_PIO1_SM1_SHIFTCTRL_PULL_THRESH_SHIFT  (25)  /* Number of bits shifted out of TXSR before autopull or conditional pull. Write 0 for value of 32. */
#define RP2040_PIO1_SM1_SHIFTCTRL_PULL_THRESH_MASK   (0x1f << RP2040_PIO1_SM1_SHIFTCTRL_PULL_THRESH_SHIFT)
#define RP2040_PIO1_SM1_SHIFTCTRL_PUSH_THRESH_SHIFT  (20)  /* Number of bits shifted into RXSR before autopush or conditional push. Write 0 for value of 32. */
#define RP2040_PIO1_SM1_SHIFTCTRL_PUSH_THRESH_MASK   (0x1f << RP2040_PIO1_SM1_SHIFTCTRL_PUSH_THRESH_SHIFT)
#define RP2040_PIO1_SM1_SHIFTCTRL_OUT_SHIFTDIR       (1 << 19)  /* 1 = shift out of output shift register to right. 0 = to left. */
#define RP2040_PIO1_SM1_SHIFTCTRL_IN_SHIFTDIR        (1 << 18)  /* 1 = shift input shift register to right (data enters from left). 0 = to left. */
#define RP2040_PIO1_SM1_SHIFTCTRL_AUTOPULL           (1 << 17)  /* Pull automatically when the output shift register is emptied */
#define RP2040_PIO1_SM1_SHIFTCTRL_AUTOPUSH           (1 << 16)  /* Push automatically when the input shift register is filled */

#define RP2040_PIO1_SM1_ADDR_MASK                    (0x1f)

#define RP2040_PIO1_SM1_INSTR_MASK                   (0xffff)

#define RP2040_PIO1_SM1_PINCTRL_SIDESET_COUNT_SHIFT  (29)  /* The number of delay bits co-opted for side-set. Inclusive of the enable bit, if present. */
#define RP2040_PIO1_SM1_PINCTRL_SIDESET_COUNT_MASK   (0x07 << RP2040_PIO1_SM1_PINCTRL_SIDESET_COUNT_SHIFT)
#define RP2040_PIO1_SM1_PINCTRL_SET_COUNT_SHIFT      (26)  /* The number of pins asserted by a SET. Max of 5 */
#define RP2040_PIO1_SM1_PINCTRL_SET_COUNT_MASK       (0x07 << RP2040_PIO1_SM1_PINCTRL_SET_COUNT_SHIFT)
#define RP2040_PIO1_SM1_PINCTRL_OUT_COUNT_SHIFT      (20)  /* The number of pins asserted by an OUT. Value of 0 -> 32 pins */
#define RP2040_PIO1_SM1_PINCTRL_OUT_COUNT_MASK       (0x3f << RP2040_PIO1_SM1_PINCTRL_OUT_COUNT_SHIFT)
#define RP2040_PIO1_SM1_PINCTRL_IN_BASE_SHIFT        (15)  /* The virtual pin corresponding to IN bit 0 */
#define RP2040_PIO1_SM1_PINCTRL_IN_BASE_MASK         (0x1f << RP2040_PIO1_SM1_PINCTRL_IN_BASE_SHIFT)
#define RP2040_PIO1_SM1_PINCTRL_SIDESET_BASE_SHIFT   (10)  /* The virtual pin corresponding to delay field bit 0 */
#define RP2040_PIO1_SM1_PINCTRL_SIDESET_BASE_MASK    (0x1f << RP2040_PIO1_SM1_PINCTRL_SIDESET_BASE_SHIFT)
#define RP2040_PIO1_SM1_PINCTRL_SET_BASE_SHIFT       (5)  /* The virtual pin corresponding to SET bit 0 */
#define RP2040_PIO1_SM1_PINCTRL_SET_BASE_MASK        (0x1f << RP2040_PIO1_SM1_PINCTRL_SET_BASE_SHIFT)
#define RP2040_PIO1_SM1_PINCTRL_OUT_BASE_MASK        (0x1f)  /* The virtual pin corresponding to OUT bit 0 */

#define RP2040_PIO1_SM2_CLKDIV_INT_SHIFT             (16)  /* Effective frequency is sysclk/int. Value of 0 is interpreted as max possible value */
#define RP2040_PIO1_SM2_CLKDIV_INT_MASK              (0xffff << RP2040_PIO1_SM2_CLKDIV_INT_SHIFT)
#define RP2040_PIO1_SM2_CLKDIV_FRAC_SHIFT            (8)  /* Fractional part of clock divider */
#define RP2040_PIO1_SM2_CLKDIV_FRAC_MASK             (0xff << RP2040_PIO1_SM2_CLKDIV_FRAC_SHIFT)

#define RP2040_PIO1_SM2_EXECCTRL_EXEC_STALLED        (1 << 31)  /* An instruction written to SMx_INSTR is stalled, and latched by the state machine. Will clear once the instruction completes. */
#define RP2040_PIO1_SM2_EXECCTRL_SIDE_EN             (1 << 30)  /* If 1, the delay MSB is used as side-set enable, rather than a side-set data bit. This allows instructions to perform side-set optionally, rather than on every instruction. */
#define RP2040_PIO1_SM2_EXECCTRL_SIDE_PINDIR         (1 << 29)  /* Side-set data is asserted to pin OEs instead of pin values */
#define RP2040_PIO1_SM2_EXECCTRL_JMP_PIN_SHIFT       (24)  /* The GPIO number to use as condition for JMP PIN. Unaffected by input mapping. */
#define RP2040_PIO1_SM2_EXECCTRL_JMP_PIN_MASK        (0x1f << RP2040_PIO1_SM2_EXECCTRL_JMP_PIN_SHIFT)
#define RP2040_PIO1_SM2_EXECCTRL_OUT_EN_SEL_SHIFT    (19)  /* Which data bit to use for inline OUT enable */
#define RP2040_PIO1_SM2_EXECCTRL_OUT_EN_SEL_MASK     (0x1f << RP2040_PIO1_SM2_EXECCTRL_OUT_EN_SEL_SHIFT)
#define RP2040_PIO1_SM2_EXECCTRL_INLINE_OUT_EN       (1 << 18)  /* If 1, use a bit of OUT data as an auxiliary write enable When used in conjunction with OUT_STICKY, writes with an enable of 0 will deassert the latest pin write. This can create useful masking/override behaviour due to the priority ordering of state machine pin writes (SM0 < SM1 < ...) */
#define RP2040_PIO1_SM2_EXECCTRL_OUT_STICKY          (1 << 17)  /* Continuously assert the most recent OUT/SET to the pins */
#define RP2040_PIO1_SM2_EXECCTRL_WRAP_TOP_SHIFT      (12)  /* After reaching this address, execution is wrapped to wrap_bottom. If the instruction is a jump, and the jump condition is true, the jump takes priority. */
#define RP2040_PIO1_SM2_EXECCTRL_WRAP_TOP_MASK       (0x1f << RP2040_PIO1_SM2_EXECCTRL_WRAP_TOP_SHIFT)
#define RP2040_PIO1_SM2_EXECCTRL_WRAP_BOTTOM_SHIFT   (7)  /* After reaching wrap_top, execution is wrapped to this address. */
#define RP2040_PIO1_SM2_EXECCTRL_WRAP_BOTTOM_MASK    (0x1f << RP2040_PIO1_SM2_EXECCTRL_WRAP_BOTTOM_SHIFT)
#define RP2040_PIO1_SM2_EXECCTRL_STATUS_SEL          (1 << 4)  /* All-ones if RX FIFO level < N, otherwise all-zeroes */
#define RP2040_PIO1_SM2_EXECCTRL_STATUS_N_MASK       (0x0f)  /* Comparison level for the MOV x, STATUS instruction */

#define RP2040_PIO1_SM2_SHIFTCTRL_FJOIN_RX           (1 << 31)  /* When 1, RX FIFO steals the TX FIFO's storage, and becomes twice as deep. TX FIFO is disabled as a result (always reads as both full and empty). FIFOs are flushed when this bit is changed. */
#define RP2040_PIO1_SM2_SHIFTCTRL_FJOIN_TX           (1 << 30)  /* When 1, TX FIFO steals the RX FIFO's storage, and becomes twice as deep. RX FIFO is disabled as a result (always reads as both full and empty). FIFOs are flushed when this bit is changed. */
#define RP2040_PIO1_SM2_SHIFTCTRL_PULL_THRESH_SHIFT  (25)  /* Number of bits shifted out of TXSR before autopull or conditional pull. Write 0 for value of 32. */
#define RP2040_PIO1_SM2_SHIFTCTRL_PULL_THRESH_MASK   (0x1f << RP2040_PIO1_SM2_SHIFTCTRL_PULL_THRESH_SHIFT)
#define RP2040_PIO1_SM2_SHIFTCTRL_PUSH_THRESH_SHIFT  (20)  /* Number of bits shifted into RXSR before autopush or conditional push. Write 0 for value of 32. */
#define RP2040_PIO1_SM2_SHIFTCTRL_PUSH_THRESH_MASK   (0x1f << RP2040_PIO1_SM2_SHIFTCTRL_PUSH_THRESH_SHIFT)
#define RP2040_PIO1_SM2_SHIFTCTRL_OUT_SHIFTDIR       (1 << 19)  /* 1 = shift out of output shift register to right. 0 = to left. */
#define RP2040_PIO1_SM2_SHIFTCTRL_IN_SHIFTDIR        (1 << 18)  /* 1 = shift input shift register to right (data enters from left). 0 = to left. */
#define RP2040_PIO1_SM2_SHIFTCTRL_AUTOPULL           (1 << 17)  /* Pull automatically when the output shift register is emptied */
#define RP2040_PIO1_SM2_SHIFTCTRL_AUTOPUSH           (1 << 16)  /* Push automatically when the input shift register is filled */

#define RP2040_PIO1_SM2_ADDR_MASK                    (0x1f)

#define RP2040_PIO1_SM2_INSTR_MASK                   (0xffff)

#define RP2040_PIO1_SM2_PINCTRL_SIDESET_COUNT_SHIFT  (29)  /* The number of delay bits co-opted for side-set. Inclusive of the enable bit, if present. */
#define RP2040_PIO1_SM2_PINCTRL_SIDESET_COUNT_MASK   (0x07 << RP2040_PIO1_SM2_PINCTRL_SIDESET_COUNT_SHIFT)
#define RP2040_PIO1_SM2_PINCTRL_SET_COUNT_SHIFT      (26)  /* The number of pins asserted by a SET. Max of 5 */
#define RP2040_PIO1_SM2_PINCTRL_SET_COUNT_MASK       (0x07 << RP2040_PIO1_SM2_PINCTRL_SET_COUNT_SHIFT)
#define RP2040_PIO1_SM2_PINCTRL_OUT_COUNT_SHIFT      (20)  /* The number of pins asserted by an OUT. Value of 0 -> 32 pins */
#define RP2040_PIO1_SM2_PINCTRL_OUT_COUNT_MASK       (0x3f << RP2040_PIO1_SM2_PINCTRL_OUT_COUNT_SHIFT)
#define RP2040_PIO1_SM2_PINCTRL_IN_BASE_SHIFT        (15)  /* The virtual pin corresponding to IN bit 0 */
#define RP2040_PIO1_SM2_PINCTRL_IN_BASE_MASK         (0x1f << RP2040_PIO1_SM2_PINCTRL_IN_BASE_SHIFT)
#define RP2040_PIO1_SM2_PINCTRL_SIDESET_BASE_SHIFT   (10)  /* The virtual pin corresponding to delay field bit 0 */
#define RP2040_PIO1_SM2_PINCTRL_SIDESET_BASE_MASK    (0x1f << RP2040_PIO1_SM2_PINCTRL_SIDESET_BASE_SHIFT)
#define RP2040_PIO1_SM2_PINCTRL_SET_BASE_SHIFT       (5)  /* The virtual pin corresponding to SET bit 0 */
#define RP2040_PIO1_SM2_PINCTRL_SET_BASE_MASK        (0x1f << RP2040_PIO1_SM2_PINCTRL_SET_BASE_SHIFT)
#define RP2040_PIO1_SM2_PINCTRL_OUT_BASE_MASK        (0x1f)  /* The virtual pin corresponding to OUT bit 0 */

#define RP2040_PIO1_SM3_CLKDIV_INT_SHIFT             (16)  /* Effective frequency is sysclk/int. Value of 0 is interpreted as max possible value */
#define RP2040_PIO1_SM3_CLKDIV_INT_MASK              (0xffff << RP2040_PIO1_SM3_CLKDIV_INT_SHIFT)
#define RP2040_PIO1_SM3_CLKDIV_FRAC_SHIFT            (8)  /* Fractional part of clock divider */
#define RP2040_PIO1_SM3_CLKDIV_FRAC_MASK             (0xff << RP2040_PIO1_SM3_CLKDIV_FRAC_SHIFT)

#define RP2040_PIO1_SM3_EXECCTRL_EXEC_STALLED        (1 << 31)  /* An instruction written to SMx_INSTR is stalled, and latched by the state machine. Will clear once the instruction completes. */
#define RP2040_PIO1_SM3_EXECCTRL_SIDE_EN             (1 << 30)  /* If 1, the delay MSB is used as side-set enable, rather than a side-set data bit. This allows instructions to perform side-set optionally, rather than on every instruction. */
#define RP2040_PIO1_SM3_EXECCTRL_SIDE_PINDIR         (1 << 29)  /* Side-set data is asserted to pin OEs instead of pin values */
#define RP2040_PIO1_SM3_EXECCTRL_JMP_PIN_SHIFT       (24)  /* The GPIO number to use as condition for JMP PIN. Unaffected by input mapping. */
#define RP2040_PIO1_SM3_EXECCTRL_JMP_PIN_MASK        (0x1f << RP2040_PIO1_SM3_EXECCTRL_JMP_PIN_SHIFT)
#define RP2040_PIO1_SM3_EXECCTRL_OUT_EN_SEL_SHIFT    (19)  /* Which data bit to use for inline OUT enable */
#define RP2040_PIO1_SM3_EXECCTRL_OUT_EN_SEL_MASK     (0x1f << RP2040_PIO1_SM3_EXECCTRL_OUT_EN_SEL_SHIFT)
#define RP2040_PIO1_SM3_EXECCTRL_INLINE_OUT_EN       (1 << 18)  /* If 1, use a bit of OUT data as an auxiliary write enable When used in conjunction with OUT_STICKY, writes with an enable of 0 will deassert the latest pin write. This can create useful masking/override behaviour due to the priority ordering of state machine pin writes (SM0 < SM1 < ...) */
#define RP2040_PIO1_SM3_EXECCTRL_OUT_STICKY          (1 << 17)  /* Continuously assert the most recent OUT/SET to the pins */
#define RP2040_PIO1_SM3_EXECCTRL_WRAP_TOP_SHIFT      (12)  /* After reaching this address, execution is wrapped to wrap_bottom. If the instruction is a jump, and the jump condition is true, the jump takes priority. */
#define RP2040_PIO1_SM3_EXECCTRL_WRAP_TOP_MASK       (0x1f << RP2040_PIO1_SM3_EXECCTRL_WRAP_TOP_SHIFT)
#define RP2040_PIO1_SM3_EXECCTRL_WRAP_BOTTOM_SHIFT   (7)  /* After reaching wrap_top, execution is wrapped to this address. */
#define RP2040_PIO1_SM3_EXECCTRL_WRAP_BOTTOM_MASK    (0x1f << RP2040_PIO1_SM3_EXECCTRL_WRAP_BOTTOM_SHIFT)
#define RP2040_PIO1_SM3_EXECCTRL_STATUS_SEL          (1 << 4)  /* All-ones if RX FIFO level < N, otherwise all-zeroes */
#define RP2040_PIO1_SM3_EXECCTRL_STATUS_N_MASK       (0x0f)  /* Comparison level for the MOV x, STATUS instruction */

#define RP2040_PIO1_SM3_SHIFTCTRL_FJOIN_RX           (1 << 31)  /* When 1, RX FIFO steals the TX FIFO's storage, and becomes twice as deep. TX FIFO is disabled as a result (always reads as both full and empty). FIFOs are flushed when this bit is changed. */
#define RP2040_PIO1_SM3_SHIFTCTRL_FJOIN_TX           (1 << 30)  /* When 1, TX FIFO steals the RX FIFO's storage, and becomes twice as deep. RX FIFO is disabled as a result (always reads as both full and empty). FIFOs are flushed when this bit is changed. */
#define RP2040_PIO1_SM3_SHIFTCTRL_PULL_THRESH_SHIFT  (25)  /* Number of bits shifted out of TXSR before autopull or conditional pull. Write 0 for value of 32. */
#define RP2040_PIO1_SM3_SHIFTCTRL_PULL_THRESH_MASK   (0x1f << RP2040_PIO1_SM3_SHIFTCTRL_PULL_THRESH_SHIFT)
#define RP2040_PIO1_SM3_SHIFTCTRL_PUSH_THRESH_SHIFT  (20)  /* Number of bits shifted into RXSR before autopush or conditional push. Write 0 for value of 32. */
#define RP2040_PIO1_SM3_SHIFTCTRL_PUSH_THRESH_MASK   (0x1f << RP2040_PIO1_SM3_SHIFTCTRL_PUSH_THRESH_SHIFT)
#define RP2040_PIO1_SM3_SHIFTCTRL_OUT_SHIFTDIR       (1 << 19)  /* 1 = shift out of output shift register to right. 0 = to left. */
#define RP2040_PIO1_SM3_SHIFTCTRL_IN_SHIFTDIR        (1 << 18)  /* 1 = shift input shift register to right (data enters from left). 0 = to left. */
#define RP2040_PIO1_SM3_SHIFTCTRL_AUTOPULL           (1 << 17)  /* Pull automatically when the output shift register is emptied */
#define RP2040_PIO1_SM3_SHIFTCTRL_AUTOPUSH           (1 << 16)  /* Push automatically when the input shift register is filled */

#define RP2040_PIO1_SM3_ADDR_MASK                    (0x1f)

#define RP2040_PIO1_SM3_INSTR_MASK                   (0xffff)

#define RP2040_PIO1_SM3_PINCTRL_SIDESET_COUNT_SHIFT  (29)  /* The number of delay bits co-opted for side-set. Inclusive of the enable bit, if present. */
#define RP2040_PIO1_SM3_PINCTRL_SIDESET_COUNT_MASK   (0x07 << RP2040_PIO1_SM3_PINCTRL_SIDESET_COUNT_SHIFT)
#define RP2040_PIO1_SM3_PINCTRL_SET_COUNT_SHIFT      (26)  /* The number of pins asserted by a SET. Max of 5 */
#define RP2040_PIO1_SM3_PINCTRL_SET_COUNT_MASK       (0x07 << RP2040_PIO1_SM3_PINCTRL_SET_COUNT_SHIFT)
#define RP2040_PIO1_SM3_PINCTRL_OUT_COUNT_SHIFT      (20)  /* The number of pins asserted by an OUT. Value of 0 -> 32 pins */
#define RP2040_PIO1_SM3_PINCTRL_OUT_COUNT_MASK       (0x3f << RP2040_PIO1_SM3_PINCTRL_OUT_COUNT_SHIFT)
#define RP2040_PIO1_SM3_PINCTRL_IN_BASE_SHIFT        (15)  /* The virtual pin corresponding to IN bit 0 */
#define RP2040_PIO1_SM3_PINCTRL_IN_BASE_MASK         (0x1f << RP2040_PIO1_SM3_PINCTRL_IN_BASE_SHIFT)
#define RP2040_PIO1_SM3_PINCTRL_SIDESET_BASE_SHIFT   (10)  /* The virtual pin corresponding to delay field bit 0 */
#define RP2040_PIO1_SM3_PINCTRL_SIDESET_BASE_MASK    (0x1f << RP2040_PIO1_SM3_PINCTRL_SIDESET_BASE_SHIFT)
#define RP2040_PIO1_SM3_PINCTRL_SET_BASE_SHIFT       (5)  /* The virtual pin corresponding to SET bit 0 */
#define RP2040_PIO1_SM3_PINCTRL_SET_BASE_MASK        (0x1f << RP2040_PIO1_SM3_PINCTRL_SET_BASE_SHIFT)
#define RP2040_PIO1_SM3_PINCTRL_OUT_BASE_MASK        (0x1f)  /* The virtual pin corresponding to OUT bit 0 */

#define RP2040_PIO1_INTR_SM3                         (1 << 11)
#define RP2040_PIO1_INTR_SM2                         (1 << 10)
#define RP2040_PIO1_INTR_SM1                         (1 << 9)
#define RP2040_PIO1_INTR_SM0                         (1 << 8)
#define RP2040_PIO1_INTR_SM3_TXNFULL                 (1 << 7)
#define RP2040_PIO1_INTR_SM2_TXNFULL                 (1 << 6)
#define RP2040_PIO1_INTR_SM1_TXNFULL                 (1 << 5)
#define RP2040_PIO1_INTR_SM0_TXNFULL                 (1 << 4)
#define RP2040_PIO1_INTR_SM3_RXNEMPTY                (1 << 3)
#define RP2040_PIO1_INTR_SM2_RXNEMPTY                (1 << 2)
#define RP2040_PIO1_INTR_SM1_RXNEMPTY                (1 << 1)
#define RP2040_PIO1_INTR_SM0_RXNEMPTY                (1 << 0)

#define RP2040_PIO1_IRQ0_INTE_SM3                    (1 << 11)
#define RP2040_PIO1_IRQ0_INTE_SM2                    (1 << 10)
#define RP2040_PIO1_IRQ0_INTE_SM1                    (1 << 9)
#define RP2040_PIO1_IRQ0_INTE_SM0                    (1 << 8)
#define RP2040_PIO1_IRQ0_INTE_SM3_TXNFULL            (1 << 7)
#define RP2040_PIO1_IRQ0_INTE_SM2_TXNFULL            (1 << 6)
#define RP2040_PIO1_IRQ0_INTE_SM1_TXNFULL            (1 << 5)
#define RP2040_PIO1_IRQ0_INTE_SM0_TXNFULL            (1 << 4)
#define RP2040_PIO1_IRQ0_INTE_SM3_RXNEMPTY           (1 << 3)
#define RP2040_PIO1_IRQ0_INTE_SM2_RXNEMPTY           (1 << 2)
#define RP2040_PIO1_IRQ0_INTE_SM1_RXNEMPTY           (1 << 1)
#define RP2040_PIO1_IRQ0_INTE_SM0_RXNEMPTY           (1 << 0)

#define RP2040_PIO1_IRQ0_INTF_SM3                    (1 << 11)
#define RP2040_PIO1_IRQ0_INTF_SM2                    (1 << 10)
#define RP2040_PIO1_IRQ0_INTF_SM1                    (1 << 9)
#define RP2040_PIO1_IRQ0_INTF_SM0                    (1 << 8)
#define RP2040_PIO1_IRQ0_INTF_SM3_TXNFULL            (1 << 7)
#define RP2040_PIO1_IRQ0_INTF_SM2_TXNFULL            (1 << 6)
#define RP2040_PIO1_IRQ0_INTF_SM1_TXNFULL            (1 << 5)
#define RP2040_PIO1_IRQ0_INTF_SM0_TXNFULL            (1 << 4)
#define RP2040_PIO1_IRQ0_INTF_SM3_RXNEMPTY           (1 << 3)
#define RP2040_PIO1_IRQ0_INTF_SM2_RXNEMPTY           (1 << 2)
#define RP2040_PIO1_IRQ0_INTF_SM1_RXNEMPTY           (1 << 1)
#define RP2040_PIO1_IRQ0_INTF_SM0_RXNEMPTY           (1 << 0)

#define RP2040_PIO1_IRQ0_INTS_SM3                    (1 << 11)
#define RP2040_PIO1_IRQ0_INTS_SM2                    (1 << 10)
#define RP2040_PIO1_IRQ0_INTS_SM1                    (1 << 9)
#define RP2040_PIO1_IRQ0_INTS_SM0                    (1 << 8)
#define RP2040_PIO1_IRQ0_INTS_SM3_TXNFULL            (1 << 7)
#define RP2040_PIO1_IRQ0_INTS_SM2_TXNFULL            (1 << 6)
#define RP2040_PIO1_IRQ0_INTS_SM1_TXNFULL            (1 << 5)
#define RP2040_PIO1_IRQ0_INTS_SM0_TXNFULL            (1 << 4)
#define RP2040_PIO1_IRQ0_INTS_SM3_RXNEMPTY           (1 << 3)
#define RP2040_PIO1_IRQ0_INTS_SM2_RXNEMPTY           (1 << 2)
#define RP2040_PIO1_IRQ0_INTS_SM1_RXNEMPTY           (1 << 1)
#define RP2040_PIO1_IRQ0_INTS_SM0_RXNEMPTY           (1 << 0)

#define RP2040_PIO1_IRQ1_INTE_SM3                    (1 << 11)
#define RP2040_PIO1_IRQ1_INTE_SM2                    (1 << 10)
#define RP2040_PIO1_IRQ1_INTE_SM1                    (1 << 9)
#define RP2040_PIO1_IRQ1_INTE_SM0                    (1 << 8)
#define RP2040_PIO1_IRQ1_INTE_SM3_TXNFULL            (1 << 7)
#define RP2040_PIO1_IRQ1_INTE_SM2_TXNFULL            (1 << 6)
#define RP2040_PIO1_IRQ1_INTE_SM1_TXNFULL            (1 << 5)
#define RP2040_PIO1_IRQ1_INTE_SM0_TXNFULL            (1 << 4)
#define RP2040_PIO1_IRQ1_INTE_SM3_RXNEMPTY           (1 << 3)
#define RP2040_PIO1_IRQ1_INTE_SM2_RXNEMPTY           (1 << 2)
#define RP2040_PIO1_IRQ1_INTE_SM1_RXNEMPTY           (1 << 1)
#define RP2040_PIO1_IRQ1_INTE_SM0_RXNEMPTY           (1 << 0)

#define RP2040_PIO1_IRQ1_INTF_SM3                    (1 << 11)
#define RP2040_PIO1_IRQ1_INTF_SM2                    (1 << 10)
#define RP2040_PIO1_IRQ1_INTF_SM1                    (1 << 9)
#define RP2040_PIO1_IRQ1_INTF_SM0                    (1 << 8)
#define RP2040_PIO1_IRQ1_INTF_SM3_TXNFULL            (1 << 7)
#define RP2040_PIO1_IRQ1_INTF_SM2_TXNFULL            (1 << 6)
#define RP2040_PIO1_IRQ1_INTF_SM1_TXNFULL            (1 << 5)
#define RP2040_PIO1_IRQ1_INTF_SM0_TXNFULL            (1 << 4)
#define RP2040_PIO1_IRQ1_INTF_SM3_RXNEMPTY           (1 << 3)
#define RP2040_PIO1_IRQ1_INTF_SM2_RXNEMPTY           (1 << 2)
#define RP2040_PIO1_IRQ1_INTF_SM1_RXNEMPTY           (1 << 1)
#define RP2040_PIO1_IRQ1_INTF_SM0_RXNEMPTY           (1 << 0)

#define RP2040_PIO1_IRQ1_INTS_SM3                    (1 << 11)
#define RP2040_PIO1_IRQ1_INTS_SM2                    (1 << 10)
#define RP2040_PIO1_IRQ1_INTS_SM1                    (1 << 9)
#define RP2040_PIO1_IRQ1_INTS_SM0                    (1 << 8)
#define RP2040_PIO1_IRQ1_INTS_SM3_TXNFULL            (1 << 7)
#define RP2040_PIO1_IRQ1_INTS_SM2_TXNFULL            (1 << 6)
#define RP2040_PIO1_IRQ1_INTS_SM1_TXNFULL            (1 << 5)
#define RP2040_PIO1_IRQ1_INTS_SM0_TXNFULL            (1 << 4)
#define RP2040_PIO1_IRQ1_INTS_SM3_RXNEMPTY           (1 << 3)
#define RP2040_PIO1_IRQ1_INTS_SM2_RXNEMPTY           (1 << 2)
#define RP2040_PIO1_IRQ1_INTS_SM1_RXNEMPTY           (1 << 1)
#define RP2040_PIO1_IRQ1_INTS_SM0_RXNEMPTY           (1 << 0)

#endif /* __ARCH_ARM_SRC_RP2040_HARDWARE_RP2040_PIO1_H */
