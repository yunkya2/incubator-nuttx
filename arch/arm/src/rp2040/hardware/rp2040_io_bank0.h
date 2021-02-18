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

#define RP2040_IO_BANK0_GPIO0_STATUS_OFFSET        0x000000  /* GPIO status */
#define RP2040_IO_BANK0_GPIO0_CTRL_OFFSET          0x000004  /* GPIO control including function select and overrides. */
#define RP2040_IO_BANK0_GPIO1_STATUS_OFFSET        0x000008  /* GPIO status */
#define RP2040_IO_BANK0_GPIO1_CTRL_OFFSET          0x00000c  /* GPIO control including function select and overrides. */
#define RP2040_IO_BANK0_GPIO2_STATUS_OFFSET        0x000010  /* GPIO status */
#define RP2040_IO_BANK0_GPIO2_CTRL_OFFSET          0x000014  /* GPIO control including function select and overrides. */
#define RP2040_IO_BANK0_GPIO3_STATUS_OFFSET        0x000018  /* GPIO status */
#define RP2040_IO_BANK0_GPIO3_CTRL_OFFSET          0x00001c  /* GPIO control including function select and overrides. */
#define RP2040_IO_BANK0_GPIO4_STATUS_OFFSET        0x000020  /* GPIO status */
#define RP2040_IO_BANK0_GPIO4_CTRL_OFFSET          0x000024  /* GPIO control including function select and overrides. */
#define RP2040_IO_BANK0_GPIO5_STATUS_OFFSET        0x000028  /* GPIO status */
#define RP2040_IO_BANK0_GPIO5_CTRL_OFFSET          0x00002c  /* GPIO control including function select and overrides. */
#define RP2040_IO_BANK0_GPIO6_STATUS_OFFSET        0x000030  /* GPIO status */
#define RP2040_IO_BANK0_GPIO6_CTRL_OFFSET          0x000034  /* GPIO control including function select and overrides. */
#define RP2040_IO_BANK0_GPIO7_STATUS_OFFSET        0x000038  /* GPIO status */
#define RP2040_IO_BANK0_GPIO7_CTRL_OFFSET          0x00003c  /* GPIO control including function select and overrides. */
#define RP2040_IO_BANK0_GPIO8_STATUS_OFFSET        0x000040  /* GPIO status */
#define RP2040_IO_BANK0_GPIO8_CTRL_OFFSET          0x000044  /* GPIO control including function select and overrides. */
#define RP2040_IO_BANK0_GPIO9_STATUS_OFFSET        0x000048  /* GPIO status */
#define RP2040_IO_BANK0_GPIO9_CTRL_OFFSET          0x00004c  /* GPIO control including function select and overrides. */
#define RP2040_IO_BANK0_GPIO10_STATUS_OFFSET       0x000050  /* GPIO status */
#define RP2040_IO_BANK0_GPIO10_CTRL_OFFSET         0x000054  /* GPIO control including function select and overrides. */
#define RP2040_IO_BANK0_GPIO11_STATUS_OFFSET       0x000058  /* GPIO status */
#define RP2040_IO_BANK0_GPIO11_CTRL_OFFSET         0x00005c  /* GPIO control including function select and overrides. */
#define RP2040_IO_BANK0_GPIO12_STATUS_OFFSET       0x000060  /* GPIO status */
#define RP2040_IO_BANK0_GPIO12_CTRL_OFFSET         0x000064  /* GPIO control including function select and overrides. */
#define RP2040_IO_BANK0_GPIO13_STATUS_OFFSET       0x000068  /* GPIO status */
#define RP2040_IO_BANK0_GPIO13_CTRL_OFFSET         0x00006c  /* GPIO control including function select and overrides. */
#define RP2040_IO_BANK0_GPIO14_STATUS_OFFSET       0x000070  /* GPIO status */
#define RP2040_IO_BANK0_GPIO14_CTRL_OFFSET         0x000074  /* GPIO control including function select and overrides. */
#define RP2040_IO_BANK0_GPIO15_STATUS_OFFSET       0x000078  /* GPIO status */
#define RP2040_IO_BANK0_GPIO15_CTRL_OFFSET         0x00007c  /* GPIO control including function select and overrides. */
#define RP2040_IO_BANK0_GPIO16_STATUS_OFFSET       0x000080  /* GPIO status */
#define RP2040_IO_BANK0_GPIO16_CTRL_OFFSET         0x000084  /* GPIO control including function select and overrides. */
#define RP2040_IO_BANK0_GPIO17_STATUS_OFFSET       0x000088  /* GPIO status */
#define RP2040_IO_BANK0_GPIO17_CTRL_OFFSET         0x00008c  /* GPIO control including function select and overrides. */
#define RP2040_IO_BANK0_GPIO18_STATUS_OFFSET       0x000090  /* GPIO status */
#define RP2040_IO_BANK0_GPIO18_CTRL_OFFSET         0x000094  /* GPIO control including function select and overrides. */
#define RP2040_IO_BANK0_GPIO19_STATUS_OFFSET       0x000098  /* GPIO status */
#define RP2040_IO_BANK0_GPIO19_CTRL_OFFSET         0x00009c  /* GPIO control including function select and overrides. */
#define RP2040_IO_BANK0_GPIO20_STATUS_OFFSET       0x0000a0  /* GPIO status */
#define RP2040_IO_BANK0_GPIO20_CTRL_OFFSET         0x0000a4  /* GPIO control including function select and overrides. */
#define RP2040_IO_BANK0_GPIO21_STATUS_OFFSET       0x0000a8  /* GPIO status */
#define RP2040_IO_BANK0_GPIO21_CTRL_OFFSET         0x0000ac  /* GPIO control including function select and overrides. */
#define RP2040_IO_BANK0_GPIO22_STATUS_OFFSET       0x0000b0  /* GPIO status */
#define RP2040_IO_BANK0_GPIO22_CTRL_OFFSET         0x0000b4  /* GPIO control including function select and overrides. */
#define RP2040_IO_BANK0_GPIO23_STATUS_OFFSET       0x0000b8  /* GPIO status */
#define RP2040_IO_BANK0_GPIO23_CTRL_OFFSET         0x0000bc  /* GPIO control including function select and overrides. */
#define RP2040_IO_BANK0_GPIO24_STATUS_OFFSET       0x0000c0  /* GPIO status */
#define RP2040_IO_BANK0_GPIO24_CTRL_OFFSET         0x0000c4  /* GPIO control including function select and overrides. */
#define RP2040_IO_BANK0_GPIO25_STATUS_OFFSET       0x0000c8  /* GPIO status */
#define RP2040_IO_BANK0_GPIO25_CTRL_OFFSET         0x0000cc  /* GPIO control including function select and overrides. */
#define RP2040_IO_BANK0_GPIO26_STATUS_OFFSET       0x0000d0  /* GPIO status */
#define RP2040_IO_BANK0_GPIO26_CTRL_OFFSET         0x0000d4  /* GPIO control including function select and overrides. */
#define RP2040_IO_BANK0_GPIO27_STATUS_OFFSET       0x0000d8  /* GPIO status */
#define RP2040_IO_BANK0_GPIO27_CTRL_OFFSET         0x0000dc  /* GPIO control including function select and overrides. */
#define RP2040_IO_BANK0_GPIO28_STATUS_OFFSET       0x0000e0  /* GPIO status */
#define RP2040_IO_BANK0_GPIO28_CTRL_OFFSET         0x0000e4  /* GPIO control including function select and overrides. */
#define RP2040_IO_BANK0_GPIO29_STATUS_OFFSET       0x0000e8  /* GPIO status */
#define RP2040_IO_BANK0_GPIO29_CTRL_OFFSET         0x0000ec  /* GPIO control including function select and overrides. */
#define RP2040_IO_BANK0_INTR0_OFFSET               0x0000f0  /* Raw Interrupts */
#define RP2040_IO_BANK0_INTR1_OFFSET               0x0000f4  /* Raw Interrupts */
#define RP2040_IO_BANK0_INTR2_OFFSET               0x0000f8  /* Raw Interrupts */
#define RP2040_IO_BANK0_INTR3_OFFSET               0x0000fc  /* Raw Interrupts */
#define RP2040_IO_BANK0_PROC0_INTE0_OFFSET         0x000100  /* Interrupt Enable for proc0 */
#define RP2040_IO_BANK0_PROC0_INTE1_OFFSET         0x000104  /* Interrupt Enable for proc0 */
#define RP2040_IO_BANK0_PROC0_INTE2_OFFSET         0x000108  /* Interrupt Enable for proc0 */
#define RP2040_IO_BANK0_PROC0_INTE3_OFFSET         0x00010c  /* Interrupt Enable for proc0 */
#define RP2040_IO_BANK0_PROC0_INTF0_OFFSET         0x000110  /* Interrupt Force for proc0 */
#define RP2040_IO_BANK0_PROC0_INTF1_OFFSET         0x000114  /* Interrupt Force for proc0 */
#define RP2040_IO_BANK0_PROC0_INTF2_OFFSET         0x000118  /* Interrupt Force for proc0 */
#define RP2040_IO_BANK0_PROC0_INTF3_OFFSET         0x00011c  /* Interrupt Force for proc0 */
#define RP2040_IO_BANK0_PROC0_INTS0_OFFSET         0x000120  /* Interrupt status after masking & forcing for proc0 */
#define RP2040_IO_BANK0_PROC0_INTS1_OFFSET         0x000124  /* Interrupt status after masking & forcing for proc0 */
#define RP2040_IO_BANK0_PROC0_INTS2_OFFSET         0x000128  /* Interrupt status after masking & forcing for proc0 */
#define RP2040_IO_BANK0_PROC0_INTS3_OFFSET         0x00012c  /* Interrupt status after masking & forcing for proc0 */
#define RP2040_IO_BANK0_PROC1_INTE0_OFFSET         0x000130  /* Interrupt Enable for proc1 */
#define RP2040_IO_BANK0_PROC1_INTE1_OFFSET         0x000134  /* Interrupt Enable for proc1 */
#define RP2040_IO_BANK0_PROC1_INTE2_OFFSET         0x000138  /* Interrupt Enable for proc1 */
#define RP2040_IO_BANK0_PROC1_INTE3_OFFSET         0x00013c  /* Interrupt Enable for proc1 */
#define RP2040_IO_BANK0_PROC1_INTF0_OFFSET         0x000140  /* Interrupt Force for proc1 */
#define RP2040_IO_BANK0_PROC1_INTF1_OFFSET         0x000144  /* Interrupt Force for proc1 */
#define RP2040_IO_BANK0_PROC1_INTF2_OFFSET         0x000148  /* Interrupt Force for proc1 */
#define RP2040_IO_BANK0_PROC1_INTF3_OFFSET         0x00014c  /* Interrupt Force for proc1 */
#define RP2040_IO_BANK0_PROC1_INTS0_OFFSET         0x000150  /* Interrupt status after masking & forcing for proc1 */
#define RP2040_IO_BANK0_PROC1_INTS1_OFFSET         0x000154  /* Interrupt status after masking & forcing for proc1 */
#define RP2040_IO_BANK0_PROC1_INTS2_OFFSET         0x000158  /* Interrupt status after masking & forcing for proc1 */
#define RP2040_IO_BANK0_PROC1_INTS3_OFFSET         0x00015c  /* Interrupt status after masking & forcing for proc1 */
#define RP2040_IO_BANK0_DORMANT_WAKE_INTE0_OFFSET  0x000160  /* Interrupt Enable for dormant_wake */
#define RP2040_IO_BANK0_DORMANT_WAKE_INTE1_OFFSET  0x000164  /* Interrupt Enable for dormant_wake */
#define RP2040_IO_BANK0_DORMANT_WAKE_INTE2_OFFSET  0x000168  /* Interrupt Enable for dormant_wake */
#define RP2040_IO_BANK0_DORMANT_WAKE_INTE3_OFFSET  0x00016c  /* Interrupt Enable for dormant_wake */
#define RP2040_IO_BANK0_DORMANT_WAKE_INTF0_OFFSET  0x000170  /* Interrupt Force for dormant_wake */
#define RP2040_IO_BANK0_DORMANT_WAKE_INTF1_OFFSET  0x000174  /* Interrupt Force for dormant_wake */
#define RP2040_IO_BANK0_DORMANT_WAKE_INTF2_OFFSET  0x000178  /* Interrupt Force for dormant_wake */
#define RP2040_IO_BANK0_DORMANT_WAKE_INTF3_OFFSET  0x00017c  /* Interrupt Force for dormant_wake */
#define RP2040_IO_BANK0_DORMANT_WAKE_INTS0_OFFSET  0x000180  /* Interrupt status after masking & forcing for dormant_wake */
#define RP2040_IO_BANK0_DORMANT_WAKE_INTS1_OFFSET  0x000184  /* Interrupt status after masking & forcing for dormant_wake */
#define RP2040_IO_BANK0_DORMANT_WAKE_INTS2_OFFSET  0x000188  /* Interrupt status after masking & forcing for dormant_wake */
#define RP2040_IO_BANK0_DORMANT_WAKE_INTS3_OFFSET  0x00018c  /* Interrupt status after masking & forcing for dormant_wake */

/* Register definitions *****************************************************/

#define RP2040_IO_BANK0_GPIO0_STATUS        (RP2040_IO_BANK0_BASE + RP2040_IO_BANK0_GPIO0_STATUS_OFFSET)
#define RP2040_IO_BANK0_GPIO0_CTRL          (RP2040_IO_BANK0_BASE + RP2040_IO_BANK0_GPIO0_CTRL_OFFSET)
#define RP2040_IO_BANK0_GPIO1_STATUS        (RP2040_IO_BANK0_BASE + RP2040_IO_BANK0_GPIO1_STATUS_OFFSET)
#define RP2040_IO_BANK0_GPIO1_CTRL          (RP2040_IO_BANK0_BASE + RP2040_IO_BANK0_GPIO1_CTRL_OFFSET)
#define RP2040_IO_BANK0_GPIO2_STATUS        (RP2040_IO_BANK0_BASE + RP2040_IO_BANK0_GPIO2_STATUS_OFFSET)
#define RP2040_IO_BANK0_GPIO2_CTRL          (RP2040_IO_BANK0_BASE + RP2040_IO_BANK0_GPIO2_CTRL_OFFSET)
#define RP2040_IO_BANK0_GPIO3_STATUS        (RP2040_IO_BANK0_BASE + RP2040_IO_BANK0_GPIO3_STATUS_OFFSET)
#define RP2040_IO_BANK0_GPIO3_CTRL          (RP2040_IO_BANK0_BASE + RP2040_IO_BANK0_GPIO3_CTRL_OFFSET)
#define RP2040_IO_BANK0_GPIO4_STATUS        (RP2040_IO_BANK0_BASE + RP2040_IO_BANK0_GPIO4_STATUS_OFFSET)
#define RP2040_IO_BANK0_GPIO4_CTRL          (RP2040_IO_BANK0_BASE + RP2040_IO_BANK0_GPIO4_CTRL_OFFSET)
#define RP2040_IO_BANK0_GPIO5_STATUS        (RP2040_IO_BANK0_BASE + RP2040_IO_BANK0_GPIO5_STATUS_OFFSET)
#define RP2040_IO_BANK0_GPIO5_CTRL          (RP2040_IO_BANK0_BASE + RP2040_IO_BANK0_GPIO5_CTRL_OFFSET)
#define RP2040_IO_BANK0_GPIO6_STATUS        (RP2040_IO_BANK0_BASE + RP2040_IO_BANK0_GPIO6_STATUS_OFFSET)
#define RP2040_IO_BANK0_GPIO6_CTRL          (RP2040_IO_BANK0_BASE + RP2040_IO_BANK0_GPIO6_CTRL_OFFSET)
#define RP2040_IO_BANK0_GPIO7_STATUS        (RP2040_IO_BANK0_BASE + RP2040_IO_BANK0_GPIO7_STATUS_OFFSET)
#define RP2040_IO_BANK0_GPIO7_CTRL          (RP2040_IO_BANK0_BASE + RP2040_IO_BANK0_GPIO7_CTRL_OFFSET)
#define RP2040_IO_BANK0_GPIO8_STATUS        (RP2040_IO_BANK0_BASE + RP2040_IO_BANK0_GPIO8_STATUS_OFFSET)
#define RP2040_IO_BANK0_GPIO8_CTRL          (RP2040_IO_BANK0_BASE + RP2040_IO_BANK0_GPIO8_CTRL_OFFSET)
#define RP2040_IO_BANK0_GPIO9_STATUS        (RP2040_IO_BANK0_BASE + RP2040_IO_BANK0_GPIO9_STATUS_OFFSET)
#define RP2040_IO_BANK0_GPIO9_CTRL          (RP2040_IO_BANK0_BASE + RP2040_IO_BANK0_GPIO9_CTRL_OFFSET)
#define RP2040_IO_BANK0_GPIO10_STATUS       (RP2040_IO_BANK0_BASE + RP2040_IO_BANK0_GPIO10_STATUS_OFFSET)
#define RP2040_IO_BANK0_GPIO10_CTRL         (RP2040_IO_BANK0_BASE + RP2040_IO_BANK0_GPIO10_CTRL_OFFSET)
#define RP2040_IO_BANK0_GPIO11_STATUS       (RP2040_IO_BANK0_BASE + RP2040_IO_BANK0_GPIO11_STATUS_OFFSET)
#define RP2040_IO_BANK0_GPIO11_CTRL         (RP2040_IO_BANK0_BASE + RP2040_IO_BANK0_GPIO11_CTRL_OFFSET)
#define RP2040_IO_BANK0_GPIO12_STATUS       (RP2040_IO_BANK0_BASE + RP2040_IO_BANK0_GPIO12_STATUS_OFFSET)
#define RP2040_IO_BANK0_GPIO12_CTRL         (RP2040_IO_BANK0_BASE + RP2040_IO_BANK0_GPIO12_CTRL_OFFSET)
#define RP2040_IO_BANK0_GPIO13_STATUS       (RP2040_IO_BANK0_BASE + RP2040_IO_BANK0_GPIO13_STATUS_OFFSET)
#define RP2040_IO_BANK0_GPIO13_CTRL         (RP2040_IO_BANK0_BASE + RP2040_IO_BANK0_GPIO13_CTRL_OFFSET)
#define RP2040_IO_BANK0_GPIO14_STATUS       (RP2040_IO_BANK0_BASE + RP2040_IO_BANK0_GPIO14_STATUS_OFFSET)
#define RP2040_IO_BANK0_GPIO14_CTRL         (RP2040_IO_BANK0_BASE + RP2040_IO_BANK0_GPIO14_CTRL_OFFSET)
#define RP2040_IO_BANK0_GPIO15_STATUS       (RP2040_IO_BANK0_BASE + RP2040_IO_BANK0_GPIO15_STATUS_OFFSET)
#define RP2040_IO_BANK0_GPIO15_CTRL         (RP2040_IO_BANK0_BASE + RP2040_IO_BANK0_GPIO15_CTRL_OFFSET)
#define RP2040_IO_BANK0_GPIO16_STATUS       (RP2040_IO_BANK0_BASE + RP2040_IO_BANK0_GPIO16_STATUS_OFFSET)
#define RP2040_IO_BANK0_GPIO16_CTRL         (RP2040_IO_BANK0_BASE + RP2040_IO_BANK0_GPIO16_CTRL_OFFSET)
#define RP2040_IO_BANK0_GPIO17_STATUS       (RP2040_IO_BANK0_BASE + RP2040_IO_BANK0_GPIO17_STATUS_OFFSET)
#define RP2040_IO_BANK0_GPIO17_CTRL         (RP2040_IO_BANK0_BASE + RP2040_IO_BANK0_GPIO17_CTRL_OFFSET)
#define RP2040_IO_BANK0_GPIO18_STATUS       (RP2040_IO_BANK0_BASE + RP2040_IO_BANK0_GPIO18_STATUS_OFFSET)
#define RP2040_IO_BANK0_GPIO18_CTRL         (RP2040_IO_BANK0_BASE + RP2040_IO_BANK0_GPIO18_CTRL_OFFSET)
#define RP2040_IO_BANK0_GPIO19_STATUS       (RP2040_IO_BANK0_BASE + RP2040_IO_BANK0_GPIO19_STATUS_OFFSET)
#define RP2040_IO_BANK0_GPIO19_CTRL         (RP2040_IO_BANK0_BASE + RP2040_IO_BANK0_GPIO19_CTRL_OFFSET)
#define RP2040_IO_BANK0_GPIO20_STATUS       (RP2040_IO_BANK0_BASE + RP2040_IO_BANK0_GPIO20_STATUS_OFFSET)
#define RP2040_IO_BANK0_GPIO20_CTRL         (RP2040_IO_BANK0_BASE + RP2040_IO_BANK0_GPIO20_CTRL_OFFSET)
#define RP2040_IO_BANK0_GPIO21_STATUS       (RP2040_IO_BANK0_BASE + RP2040_IO_BANK0_GPIO21_STATUS_OFFSET)
#define RP2040_IO_BANK0_GPIO21_CTRL         (RP2040_IO_BANK0_BASE + RP2040_IO_BANK0_GPIO21_CTRL_OFFSET)
#define RP2040_IO_BANK0_GPIO22_STATUS       (RP2040_IO_BANK0_BASE + RP2040_IO_BANK0_GPIO22_STATUS_OFFSET)
#define RP2040_IO_BANK0_GPIO22_CTRL         (RP2040_IO_BANK0_BASE + RP2040_IO_BANK0_GPIO22_CTRL_OFFSET)
#define RP2040_IO_BANK0_GPIO23_STATUS       (RP2040_IO_BANK0_BASE + RP2040_IO_BANK0_GPIO23_STATUS_OFFSET)
#define RP2040_IO_BANK0_GPIO23_CTRL         (RP2040_IO_BANK0_BASE + RP2040_IO_BANK0_GPIO23_CTRL_OFFSET)
#define RP2040_IO_BANK0_GPIO24_STATUS       (RP2040_IO_BANK0_BASE + RP2040_IO_BANK0_GPIO24_STATUS_OFFSET)
#define RP2040_IO_BANK0_GPIO24_CTRL         (RP2040_IO_BANK0_BASE + RP2040_IO_BANK0_GPIO24_CTRL_OFFSET)
#define RP2040_IO_BANK0_GPIO25_STATUS       (RP2040_IO_BANK0_BASE + RP2040_IO_BANK0_GPIO25_STATUS_OFFSET)
#define RP2040_IO_BANK0_GPIO25_CTRL         (RP2040_IO_BANK0_BASE + RP2040_IO_BANK0_GPIO25_CTRL_OFFSET)
#define RP2040_IO_BANK0_GPIO26_STATUS       (RP2040_IO_BANK0_BASE + RP2040_IO_BANK0_GPIO26_STATUS_OFFSET)
#define RP2040_IO_BANK0_GPIO26_CTRL         (RP2040_IO_BANK0_BASE + RP2040_IO_BANK0_GPIO26_CTRL_OFFSET)
#define RP2040_IO_BANK0_GPIO27_STATUS       (RP2040_IO_BANK0_BASE + RP2040_IO_BANK0_GPIO27_STATUS_OFFSET)
#define RP2040_IO_BANK0_GPIO27_CTRL         (RP2040_IO_BANK0_BASE + RP2040_IO_BANK0_GPIO27_CTRL_OFFSET)
#define RP2040_IO_BANK0_GPIO28_STATUS       (RP2040_IO_BANK0_BASE + RP2040_IO_BANK0_GPIO28_STATUS_OFFSET)
#define RP2040_IO_BANK0_GPIO28_CTRL         (RP2040_IO_BANK0_BASE + RP2040_IO_BANK0_GPIO28_CTRL_OFFSET)
#define RP2040_IO_BANK0_GPIO29_STATUS       (RP2040_IO_BANK0_BASE + RP2040_IO_BANK0_GPIO29_STATUS_OFFSET)
#define RP2040_IO_BANK0_GPIO29_CTRL         (RP2040_IO_BANK0_BASE + RP2040_IO_BANK0_GPIO29_CTRL_OFFSET)
#define RP2040_IO_BANK0_INTR0               (RP2040_IO_BANK0_BASE + RP2040_IO_BANK0_INTR0_OFFSET)
#define RP2040_IO_BANK0_INTR1               (RP2040_IO_BANK0_BASE + RP2040_IO_BANK0_INTR1_OFFSET)
#define RP2040_IO_BANK0_INTR2               (RP2040_IO_BANK0_BASE + RP2040_IO_BANK0_INTR2_OFFSET)
#define RP2040_IO_BANK0_INTR3               (RP2040_IO_BANK0_BASE + RP2040_IO_BANK0_INTR3_OFFSET)
#define RP2040_IO_BANK0_PROC0_INTE0         (RP2040_IO_BANK0_BASE + RP2040_IO_BANK0_PROC0_INTE0_OFFSET)
#define RP2040_IO_BANK0_PROC0_INTE1         (RP2040_IO_BANK0_BASE + RP2040_IO_BANK0_PROC0_INTE1_OFFSET)
#define RP2040_IO_BANK0_PROC0_INTE2         (RP2040_IO_BANK0_BASE + RP2040_IO_BANK0_PROC0_INTE2_OFFSET)
#define RP2040_IO_BANK0_PROC0_INTE3         (RP2040_IO_BANK0_BASE + RP2040_IO_BANK0_PROC0_INTE3_OFFSET)
#define RP2040_IO_BANK0_PROC0_INTF0         (RP2040_IO_BANK0_BASE + RP2040_IO_BANK0_PROC0_INTF0_OFFSET)
#define RP2040_IO_BANK0_PROC0_INTF1         (RP2040_IO_BANK0_BASE + RP2040_IO_BANK0_PROC0_INTF1_OFFSET)
#define RP2040_IO_BANK0_PROC0_INTF2         (RP2040_IO_BANK0_BASE + RP2040_IO_BANK0_PROC0_INTF2_OFFSET)
#define RP2040_IO_BANK0_PROC0_INTF3         (RP2040_IO_BANK0_BASE + RP2040_IO_BANK0_PROC0_INTF3_OFFSET)
#define RP2040_IO_BANK0_PROC0_INTS0         (RP2040_IO_BANK0_BASE + RP2040_IO_BANK0_PROC0_INTS0_OFFSET)
#define RP2040_IO_BANK0_PROC0_INTS1         (RP2040_IO_BANK0_BASE + RP2040_IO_BANK0_PROC0_INTS1_OFFSET)
#define RP2040_IO_BANK0_PROC0_INTS2         (RP2040_IO_BANK0_BASE + RP2040_IO_BANK0_PROC0_INTS2_OFFSET)
#define RP2040_IO_BANK0_PROC0_INTS3         (RP2040_IO_BANK0_BASE + RP2040_IO_BANK0_PROC0_INTS3_OFFSET)
#define RP2040_IO_BANK0_PROC1_INTE0         (RP2040_IO_BANK0_BASE + RP2040_IO_BANK0_PROC1_INTE0_OFFSET)
#define RP2040_IO_BANK0_PROC1_INTE1         (RP2040_IO_BANK0_BASE + RP2040_IO_BANK0_PROC1_INTE1_OFFSET)
#define RP2040_IO_BANK0_PROC1_INTE2         (RP2040_IO_BANK0_BASE + RP2040_IO_BANK0_PROC1_INTE2_OFFSET)
#define RP2040_IO_BANK0_PROC1_INTE3         (RP2040_IO_BANK0_BASE + RP2040_IO_BANK0_PROC1_INTE3_OFFSET)
#define RP2040_IO_BANK0_PROC1_INTF0         (RP2040_IO_BANK0_BASE + RP2040_IO_BANK0_PROC1_INTF0_OFFSET)
#define RP2040_IO_BANK0_PROC1_INTF1         (RP2040_IO_BANK0_BASE + RP2040_IO_BANK0_PROC1_INTF1_OFFSET)
#define RP2040_IO_BANK0_PROC1_INTF2         (RP2040_IO_BANK0_BASE + RP2040_IO_BANK0_PROC1_INTF2_OFFSET)
#define RP2040_IO_BANK0_PROC1_INTF3         (RP2040_IO_BANK0_BASE + RP2040_IO_BANK0_PROC1_INTF3_OFFSET)
#define RP2040_IO_BANK0_PROC1_INTS0         (RP2040_IO_BANK0_BASE + RP2040_IO_BANK0_PROC1_INTS0_OFFSET)
#define RP2040_IO_BANK0_PROC1_INTS1         (RP2040_IO_BANK0_BASE + RP2040_IO_BANK0_PROC1_INTS1_OFFSET)
#define RP2040_IO_BANK0_PROC1_INTS2         (RP2040_IO_BANK0_BASE + RP2040_IO_BANK0_PROC1_INTS2_OFFSET)
#define RP2040_IO_BANK0_PROC1_INTS3         (RP2040_IO_BANK0_BASE + RP2040_IO_BANK0_PROC1_INTS3_OFFSET)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTE0  (RP2040_IO_BANK0_BASE + RP2040_IO_BANK0_DORMANT_WAKE_INTE0_OFFSET)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTE1  (RP2040_IO_BANK0_BASE + RP2040_IO_BANK0_DORMANT_WAKE_INTE1_OFFSET)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTE2  (RP2040_IO_BANK0_BASE + RP2040_IO_BANK0_DORMANT_WAKE_INTE2_OFFSET)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTE3  (RP2040_IO_BANK0_BASE + RP2040_IO_BANK0_DORMANT_WAKE_INTE3_OFFSET)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTF0  (RP2040_IO_BANK0_BASE + RP2040_IO_BANK0_DORMANT_WAKE_INTF0_OFFSET)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTF1  (RP2040_IO_BANK0_BASE + RP2040_IO_BANK0_DORMANT_WAKE_INTF1_OFFSET)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTF2  (RP2040_IO_BANK0_BASE + RP2040_IO_BANK0_DORMANT_WAKE_INTF2_OFFSET)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTF3  (RP2040_IO_BANK0_BASE + RP2040_IO_BANK0_DORMANT_WAKE_INTF3_OFFSET)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTS0  (RP2040_IO_BANK0_BASE + RP2040_IO_BANK0_DORMANT_WAKE_INTS0_OFFSET)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTS1  (RP2040_IO_BANK0_BASE + RP2040_IO_BANK0_DORMANT_WAKE_INTS1_OFFSET)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTS2  (RP2040_IO_BANK0_BASE + RP2040_IO_BANK0_DORMANT_WAKE_INTS2_OFFSET)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTS3  (RP2040_IO_BANK0_BASE + RP2040_IO_BANK0_DORMANT_WAKE_INTS3_OFFSET)


/* Register bit definitions *************************************************/


#define RP2040_IO_BANK0_GPIO0_STATUS_IRQTOPROC                          (1 << 26)  /* interrupt to processors, after override is applied */
#define RP2040_IO_BANK0_GPIO0_STATUS_IRQFROMPAD                         (1 << 24)  /* interrupt from pad before override is applied */
#define RP2040_IO_BANK0_GPIO0_STATUS_INTOPERI                           (1 << 19)  /* input signal to peripheral, after override is applied */
#define RP2040_IO_BANK0_GPIO0_STATUS_INFROMPAD                          (1 << 17)  /* input signal from pad, before override is applied */
#define RP2040_IO_BANK0_GPIO0_STATUS_OETOPAD                            (1 << 13)  /* output enable to pad after register override is applied */
#define RP2040_IO_BANK0_GPIO0_STATUS_OEFROMPERI                         (1 << 12)  /* output enable from selected peripheral, before register override is applied */
#define RP2040_IO_BANK0_GPIO0_STATUS_OUTTOPAD                           (1 << 9)  /* output signal to pad after register override is applied */
#define RP2040_IO_BANK0_GPIO0_STATUS_OUTFROMPERI                        (1 << 8)  /* output signal from selected peripheral, before register override is applied */

#define RP2040_IO_BANK0_GPIO0_CTRL_IRQOVER_SHIFT                        (28)
#define RP2040_IO_BANK0_GPIO0_CTRL_IRQOVER_MASK                         (0x03 << RP2040_IO_BANK0_GPIO0_CTRL_IRQOVER_SHIFT)
#define RP2040_IO_BANK0_GPIO0_CTRL_IRQOVER_NORMAL                       (0x0 << RP2040_IO_BANK0_GPIO0_CTRL_IRQOVER_SHIFT)  /* don't invert the interrupt */
#define RP2040_IO_BANK0_GPIO0_CTRL_IRQOVER_INVERT                       (0x1 << RP2040_IO_BANK0_GPIO0_CTRL_IRQOVER_SHIFT)  /* invert the interrupt */
#define RP2040_IO_BANK0_GPIO0_CTRL_IRQOVER_LOW                          (0x2 << RP2040_IO_BANK0_GPIO0_CTRL_IRQOVER_SHIFT)  /* drive interrupt low */
#define RP2040_IO_BANK0_GPIO0_CTRL_IRQOVER_HIGH                         (0x3 << RP2040_IO_BANK0_GPIO0_CTRL_IRQOVER_SHIFT)  /* drive interrupt high */
#define RP2040_IO_BANK0_GPIO0_CTRL_INOVER_SHIFT                         (16)
#define RP2040_IO_BANK0_GPIO0_CTRL_INOVER_MASK                          (0x03 << RP2040_IO_BANK0_GPIO0_CTRL_INOVER_SHIFT)
#define RP2040_IO_BANK0_GPIO0_CTRL_INOVER_NORMAL                        (0x0 << RP2040_IO_BANK0_GPIO0_CTRL_INOVER_SHIFT)  /* don't invert the peri input */
#define RP2040_IO_BANK0_GPIO0_CTRL_INOVER_INVERT                        (0x1 << RP2040_IO_BANK0_GPIO0_CTRL_INOVER_SHIFT)  /* invert the peri input */
#define RP2040_IO_BANK0_GPIO0_CTRL_INOVER_LOW                           (0x2 << RP2040_IO_BANK0_GPIO0_CTRL_INOVER_SHIFT)  /* drive peri input low */
#define RP2040_IO_BANK0_GPIO0_CTRL_INOVER_HIGH                          (0x3 << RP2040_IO_BANK0_GPIO0_CTRL_INOVER_SHIFT)  /* drive peri input high */
#define RP2040_IO_BANK0_GPIO0_CTRL_OEOVER_SHIFT                         (12)
#define RP2040_IO_BANK0_GPIO0_CTRL_OEOVER_MASK                          (0x03 << RP2040_IO_BANK0_GPIO0_CTRL_OEOVER_SHIFT)
#define RP2040_IO_BANK0_GPIO0_CTRL_OEOVER_NORMAL                        (0x0 << RP2040_IO_BANK0_GPIO0_CTRL_OEOVER_SHIFT)  /* drive output enable from peripheral signal selected by funcsel */
#define RP2040_IO_BANK0_GPIO0_CTRL_OEOVER_INVERT                        (0x1 << RP2040_IO_BANK0_GPIO0_CTRL_OEOVER_SHIFT)  /* drive output enable from inverse of peripheral signal selected by funcsel */
#define RP2040_IO_BANK0_GPIO0_CTRL_OEOVER_DISABLE                       (0x2 << RP2040_IO_BANK0_GPIO0_CTRL_OEOVER_SHIFT)  /* disable output */
#define RP2040_IO_BANK0_GPIO0_CTRL_OEOVER_ENABLE                        (0x3 << RP2040_IO_BANK0_GPIO0_CTRL_OEOVER_SHIFT)  /* enable output */
#define RP2040_IO_BANK0_GPIO0_CTRL_OUTOVER_SHIFT                        (8)
#define RP2040_IO_BANK0_GPIO0_CTRL_OUTOVER_MASK                         (0x03 << RP2040_IO_BANK0_GPIO0_CTRL_OUTOVER_SHIFT)
#define RP2040_IO_BANK0_GPIO0_CTRL_OUTOVER_NORMAL                       (0x0 << RP2040_IO_BANK0_GPIO0_CTRL_OUTOVER_SHIFT)  /* drive output from peripheral signal selected by funcsel */
#define RP2040_IO_BANK0_GPIO0_CTRL_OUTOVER_INVERT                       (0x1 << RP2040_IO_BANK0_GPIO0_CTRL_OUTOVER_SHIFT)  /* drive output from inverse of peripheral signal selected by funcsel */
#define RP2040_IO_BANK0_GPIO0_CTRL_OUTOVER_LOW                          (0x2 << RP2040_IO_BANK0_GPIO0_CTRL_OUTOVER_SHIFT)  /* drive output low */
#define RP2040_IO_BANK0_GPIO0_CTRL_OUTOVER_HIGH                         (0x3 << RP2040_IO_BANK0_GPIO0_CTRL_OUTOVER_SHIFT)  /* drive output high */
#define RP2040_IO_BANK0_GPIO0_CTRL_FUNCSEL_MASK                         (0x1f)
#define RP2040_IO_BANK0_GPIO0_CTRL_FUNCSEL_JTAG_TCK                     (0x0)
#define RP2040_IO_BANK0_GPIO0_CTRL_FUNCSEL_SPI0_RX                      (0x1)
#define RP2040_IO_BANK0_GPIO0_CTRL_FUNCSEL_UART0_TX                     (0x2)
#define RP2040_IO_BANK0_GPIO0_CTRL_FUNCSEL_I2C0_SDA                     (0x3)
#define RP2040_IO_BANK0_GPIO0_CTRL_FUNCSEL_PWM_A_0                      (0x4)
#define RP2040_IO_BANK0_GPIO0_CTRL_FUNCSEL_SIO_0                        (0x5)
#define RP2040_IO_BANK0_GPIO0_CTRL_FUNCSEL_PIO0_0                       (0x6)
#define RP2040_IO_BANK0_GPIO0_CTRL_FUNCSEL_PIO1_0                       (0x7)
#define RP2040_IO_BANK0_GPIO0_CTRL_FUNCSEL_USB_MUXING_OVERCURR_DETECT   (0x9)
#define RP2040_IO_BANK0_GPIO0_CTRL_FUNCSEL_NULL                         (0x1f)

#define RP2040_IO_BANK0_GPIO1_STATUS_IRQTOPROC                          (1 << 26)  /* interrupt to processors, after override is applied */
#define RP2040_IO_BANK0_GPIO1_STATUS_IRQFROMPAD                         (1 << 24)  /* interrupt from pad before override is applied */
#define RP2040_IO_BANK0_GPIO1_STATUS_INTOPERI                           (1 << 19)  /* input signal to peripheral, after override is applied */
#define RP2040_IO_BANK0_GPIO1_STATUS_INFROMPAD                          (1 << 17)  /* input signal from pad, before override is applied */
#define RP2040_IO_BANK0_GPIO1_STATUS_OETOPAD                            (1 << 13)  /* output enable to pad after register override is applied */
#define RP2040_IO_BANK0_GPIO1_STATUS_OEFROMPERI                         (1 << 12)  /* output enable from selected peripheral, before register override is applied */
#define RP2040_IO_BANK0_GPIO1_STATUS_OUTTOPAD                           (1 << 9)  /* output signal to pad after register override is applied */
#define RP2040_IO_BANK0_GPIO1_STATUS_OUTFROMPERI                        (1 << 8)  /* output signal from selected peripheral, before register override is applied */

#define RP2040_IO_BANK0_GPIO1_CTRL_IRQOVER_SHIFT                        (28)
#define RP2040_IO_BANK0_GPIO1_CTRL_IRQOVER_MASK                         (0x03 << RP2040_IO_BANK0_GPIO1_CTRL_IRQOVER_SHIFT)
#define RP2040_IO_BANK0_GPIO1_CTRL_IRQOVER_NORMAL                       (0x0 << RP2040_IO_BANK0_GPIO1_CTRL_IRQOVER_SHIFT)  /* don't invert the interrupt */
#define RP2040_IO_BANK0_GPIO1_CTRL_IRQOVER_INVERT                       (0x1 << RP2040_IO_BANK0_GPIO1_CTRL_IRQOVER_SHIFT)  /* invert the interrupt */
#define RP2040_IO_BANK0_GPIO1_CTRL_IRQOVER_LOW                          (0x2 << RP2040_IO_BANK0_GPIO1_CTRL_IRQOVER_SHIFT)  /* drive interrupt low */
#define RP2040_IO_BANK0_GPIO1_CTRL_IRQOVER_HIGH                         (0x3 << RP2040_IO_BANK0_GPIO1_CTRL_IRQOVER_SHIFT)  /* drive interrupt high */
#define RP2040_IO_BANK0_GPIO1_CTRL_INOVER_SHIFT                         (16)
#define RP2040_IO_BANK0_GPIO1_CTRL_INOVER_MASK                          (0x03 << RP2040_IO_BANK0_GPIO1_CTRL_INOVER_SHIFT)
#define RP2040_IO_BANK0_GPIO1_CTRL_INOVER_NORMAL                        (0x0 << RP2040_IO_BANK0_GPIO1_CTRL_INOVER_SHIFT)  /* don't invert the peri input */
#define RP2040_IO_BANK0_GPIO1_CTRL_INOVER_INVERT                        (0x1 << RP2040_IO_BANK0_GPIO1_CTRL_INOVER_SHIFT)  /* invert the peri input */
#define RP2040_IO_BANK0_GPIO1_CTRL_INOVER_LOW                           (0x2 << RP2040_IO_BANK0_GPIO1_CTRL_INOVER_SHIFT)  /* drive peri input low */
#define RP2040_IO_BANK0_GPIO1_CTRL_INOVER_HIGH                          (0x3 << RP2040_IO_BANK0_GPIO1_CTRL_INOVER_SHIFT)  /* drive peri input high */
#define RP2040_IO_BANK0_GPIO1_CTRL_OEOVER_SHIFT                         (12)
#define RP2040_IO_BANK0_GPIO1_CTRL_OEOVER_MASK                          (0x03 << RP2040_IO_BANK0_GPIO1_CTRL_OEOVER_SHIFT)
#define RP2040_IO_BANK0_GPIO1_CTRL_OEOVER_NORMAL                        (0x0 << RP2040_IO_BANK0_GPIO1_CTRL_OEOVER_SHIFT)  /* drive output enable from peripheral signal selected by funcsel */
#define RP2040_IO_BANK0_GPIO1_CTRL_OEOVER_INVERT                        (0x1 << RP2040_IO_BANK0_GPIO1_CTRL_OEOVER_SHIFT)  /* drive output enable from inverse of peripheral signal selected by funcsel */
#define RP2040_IO_BANK0_GPIO1_CTRL_OEOVER_DISABLE                       (0x2 << RP2040_IO_BANK0_GPIO1_CTRL_OEOVER_SHIFT)  /* disable output */
#define RP2040_IO_BANK0_GPIO1_CTRL_OEOVER_ENABLE                        (0x3 << RP2040_IO_BANK0_GPIO1_CTRL_OEOVER_SHIFT)  /* enable output */
#define RP2040_IO_BANK0_GPIO1_CTRL_OUTOVER_SHIFT                        (8)
#define RP2040_IO_BANK0_GPIO1_CTRL_OUTOVER_MASK                         (0x03 << RP2040_IO_BANK0_GPIO1_CTRL_OUTOVER_SHIFT)
#define RP2040_IO_BANK0_GPIO1_CTRL_OUTOVER_NORMAL                       (0x0 << RP2040_IO_BANK0_GPIO1_CTRL_OUTOVER_SHIFT)  /* drive output from peripheral signal selected by funcsel */
#define RP2040_IO_BANK0_GPIO1_CTRL_OUTOVER_INVERT                       (0x1 << RP2040_IO_BANK0_GPIO1_CTRL_OUTOVER_SHIFT)  /* drive output from inverse of peripheral signal selected by funcsel */
#define RP2040_IO_BANK0_GPIO1_CTRL_OUTOVER_LOW                          (0x2 << RP2040_IO_BANK0_GPIO1_CTRL_OUTOVER_SHIFT)  /* drive output low */
#define RP2040_IO_BANK0_GPIO1_CTRL_OUTOVER_HIGH                         (0x3 << RP2040_IO_BANK0_GPIO1_CTRL_OUTOVER_SHIFT)  /* drive output high */
#define RP2040_IO_BANK0_GPIO1_CTRL_FUNCSEL_MASK                         (0x1f)
#define RP2040_IO_BANK0_GPIO1_CTRL_FUNCSEL_JTAG_TMS                     (0x0)
#define RP2040_IO_BANK0_GPIO1_CTRL_FUNCSEL_SPI0_SS_N                    (0x1)
#define RP2040_IO_BANK0_GPIO1_CTRL_FUNCSEL_UART0_RX                     (0x2)
#define RP2040_IO_BANK0_GPIO1_CTRL_FUNCSEL_I2C0_SCL                     (0x3)
#define RP2040_IO_BANK0_GPIO1_CTRL_FUNCSEL_PWM_B_0                      (0x4)
#define RP2040_IO_BANK0_GPIO1_CTRL_FUNCSEL_SIO_1                        (0x5)
#define RP2040_IO_BANK0_GPIO1_CTRL_FUNCSEL_PIO0_1                       (0x6)
#define RP2040_IO_BANK0_GPIO1_CTRL_FUNCSEL_PIO1_1                       (0x7)
#define RP2040_IO_BANK0_GPIO1_CTRL_FUNCSEL_USB_MUXING_VBUS_DETECT       (0x9)
#define RP2040_IO_BANK0_GPIO1_CTRL_FUNCSEL_NULL                         (0x1f)

#define RP2040_IO_BANK0_GPIO2_STATUS_IRQTOPROC                          (1 << 26)  /* interrupt to processors, after override is applied */
#define RP2040_IO_BANK0_GPIO2_STATUS_IRQFROMPAD                         (1 << 24)  /* interrupt from pad before override is applied */
#define RP2040_IO_BANK0_GPIO2_STATUS_INTOPERI                           (1 << 19)  /* input signal to peripheral, after override is applied */
#define RP2040_IO_BANK0_GPIO2_STATUS_INFROMPAD                          (1 << 17)  /* input signal from pad, before override is applied */
#define RP2040_IO_BANK0_GPIO2_STATUS_OETOPAD                            (1 << 13)  /* output enable to pad after register override is applied */
#define RP2040_IO_BANK0_GPIO2_STATUS_OEFROMPERI                         (1 << 12)  /* output enable from selected peripheral, before register override is applied */
#define RP2040_IO_BANK0_GPIO2_STATUS_OUTTOPAD                           (1 << 9)  /* output signal to pad after register override is applied */
#define RP2040_IO_BANK0_GPIO2_STATUS_OUTFROMPERI                        (1 << 8)  /* output signal from selected peripheral, before register override is applied */

#define RP2040_IO_BANK0_GPIO2_CTRL_IRQOVER_SHIFT                        (28)
#define RP2040_IO_BANK0_GPIO2_CTRL_IRQOVER_MASK                         (0x03 << RP2040_IO_BANK0_GPIO2_CTRL_IRQOVER_SHIFT)
#define RP2040_IO_BANK0_GPIO2_CTRL_IRQOVER_NORMAL                       (0x0 << RP2040_IO_BANK0_GPIO2_CTRL_IRQOVER_SHIFT)  /* don't invert the interrupt */
#define RP2040_IO_BANK0_GPIO2_CTRL_IRQOVER_INVERT                       (0x1 << RP2040_IO_BANK0_GPIO2_CTRL_IRQOVER_SHIFT)  /* invert the interrupt */
#define RP2040_IO_BANK0_GPIO2_CTRL_IRQOVER_LOW                          (0x2 << RP2040_IO_BANK0_GPIO2_CTRL_IRQOVER_SHIFT)  /* drive interrupt low */
#define RP2040_IO_BANK0_GPIO2_CTRL_IRQOVER_HIGH                         (0x3 << RP2040_IO_BANK0_GPIO2_CTRL_IRQOVER_SHIFT)  /* drive interrupt high */
#define RP2040_IO_BANK0_GPIO2_CTRL_INOVER_SHIFT                         (16)
#define RP2040_IO_BANK0_GPIO2_CTRL_INOVER_MASK                          (0x03 << RP2040_IO_BANK0_GPIO2_CTRL_INOVER_SHIFT)
#define RP2040_IO_BANK0_GPIO2_CTRL_INOVER_NORMAL                        (0x0 << RP2040_IO_BANK0_GPIO2_CTRL_INOVER_SHIFT)  /* don't invert the peri input */
#define RP2040_IO_BANK0_GPIO2_CTRL_INOVER_INVERT                        (0x1 << RP2040_IO_BANK0_GPIO2_CTRL_INOVER_SHIFT)  /* invert the peri input */
#define RP2040_IO_BANK0_GPIO2_CTRL_INOVER_LOW                           (0x2 << RP2040_IO_BANK0_GPIO2_CTRL_INOVER_SHIFT)  /* drive peri input low */
#define RP2040_IO_BANK0_GPIO2_CTRL_INOVER_HIGH                          (0x3 << RP2040_IO_BANK0_GPIO2_CTRL_INOVER_SHIFT)  /* drive peri input high */
#define RP2040_IO_BANK0_GPIO2_CTRL_OEOVER_SHIFT                         (12)
#define RP2040_IO_BANK0_GPIO2_CTRL_OEOVER_MASK                          (0x03 << RP2040_IO_BANK0_GPIO2_CTRL_OEOVER_SHIFT)
#define RP2040_IO_BANK0_GPIO2_CTRL_OEOVER_NORMAL                        (0x0 << RP2040_IO_BANK0_GPIO2_CTRL_OEOVER_SHIFT)  /* drive output enable from peripheral signal selected by funcsel */
#define RP2040_IO_BANK0_GPIO2_CTRL_OEOVER_INVERT                        (0x1 << RP2040_IO_BANK0_GPIO2_CTRL_OEOVER_SHIFT)  /* drive output enable from inverse of peripheral signal selected by funcsel */
#define RP2040_IO_BANK0_GPIO2_CTRL_OEOVER_DISABLE                       (0x2 << RP2040_IO_BANK0_GPIO2_CTRL_OEOVER_SHIFT)  /* disable output */
#define RP2040_IO_BANK0_GPIO2_CTRL_OEOVER_ENABLE                        (0x3 << RP2040_IO_BANK0_GPIO2_CTRL_OEOVER_SHIFT)  /* enable output */
#define RP2040_IO_BANK0_GPIO2_CTRL_OUTOVER_SHIFT                        (8)
#define RP2040_IO_BANK0_GPIO2_CTRL_OUTOVER_MASK                         (0x03 << RP2040_IO_BANK0_GPIO2_CTRL_OUTOVER_SHIFT)
#define RP2040_IO_BANK0_GPIO2_CTRL_OUTOVER_NORMAL                       (0x0 << RP2040_IO_BANK0_GPIO2_CTRL_OUTOVER_SHIFT)  /* drive output from peripheral signal selected by funcsel */
#define RP2040_IO_BANK0_GPIO2_CTRL_OUTOVER_INVERT                       (0x1 << RP2040_IO_BANK0_GPIO2_CTRL_OUTOVER_SHIFT)  /* drive output from inverse of peripheral signal selected by funcsel */
#define RP2040_IO_BANK0_GPIO2_CTRL_OUTOVER_LOW                          (0x2 << RP2040_IO_BANK0_GPIO2_CTRL_OUTOVER_SHIFT)  /* drive output low */
#define RP2040_IO_BANK0_GPIO2_CTRL_OUTOVER_HIGH                         (0x3 << RP2040_IO_BANK0_GPIO2_CTRL_OUTOVER_SHIFT)  /* drive output high */
#define RP2040_IO_BANK0_GPIO2_CTRL_FUNCSEL_MASK                         (0x1f)
#define RP2040_IO_BANK0_GPIO2_CTRL_FUNCSEL_JTAG_TDI                     (0x0)
#define RP2040_IO_BANK0_GPIO2_CTRL_FUNCSEL_SPI0_SCLK                    (0x1)
#define RP2040_IO_BANK0_GPIO2_CTRL_FUNCSEL_UART0_CTS                    (0x2)
#define RP2040_IO_BANK0_GPIO2_CTRL_FUNCSEL_I2C1_SDA                     (0x3)
#define RP2040_IO_BANK0_GPIO2_CTRL_FUNCSEL_PWM_A_1                      (0x4)
#define RP2040_IO_BANK0_GPIO2_CTRL_FUNCSEL_SIO_2                        (0x5)
#define RP2040_IO_BANK0_GPIO2_CTRL_FUNCSEL_PIO0_2                       (0x6)
#define RP2040_IO_BANK0_GPIO2_CTRL_FUNCSEL_PIO1_2                       (0x7)
#define RP2040_IO_BANK0_GPIO2_CTRL_FUNCSEL_USB_MUXING_VBUS_EN           (0x9)
#define RP2040_IO_BANK0_GPIO2_CTRL_FUNCSEL_NULL                         (0x1f)

#define RP2040_IO_BANK0_GPIO3_STATUS_IRQTOPROC                          (1 << 26)  /* interrupt to processors, after override is applied */
#define RP2040_IO_BANK0_GPIO3_STATUS_IRQFROMPAD                         (1 << 24)  /* interrupt from pad before override is applied */
#define RP2040_IO_BANK0_GPIO3_STATUS_INTOPERI                           (1 << 19)  /* input signal to peripheral, after override is applied */
#define RP2040_IO_BANK0_GPIO3_STATUS_INFROMPAD                          (1 << 17)  /* input signal from pad, before override is applied */
#define RP2040_IO_BANK0_GPIO3_STATUS_OETOPAD                            (1 << 13)  /* output enable to pad after register override is applied */
#define RP2040_IO_BANK0_GPIO3_STATUS_OEFROMPERI                         (1 << 12)  /* output enable from selected peripheral, before register override is applied */
#define RP2040_IO_BANK0_GPIO3_STATUS_OUTTOPAD                           (1 << 9)  /* output signal to pad after register override is applied */
#define RP2040_IO_BANK0_GPIO3_STATUS_OUTFROMPERI                        (1 << 8)  /* output signal from selected peripheral, before register override is applied */

#define RP2040_IO_BANK0_GPIO3_CTRL_IRQOVER_SHIFT                        (28)
#define RP2040_IO_BANK0_GPIO3_CTRL_IRQOVER_MASK                         (0x03 << RP2040_IO_BANK0_GPIO3_CTRL_IRQOVER_SHIFT)
#define RP2040_IO_BANK0_GPIO3_CTRL_IRQOVER_NORMAL                       (0x0 << RP2040_IO_BANK0_GPIO3_CTRL_IRQOVER_SHIFT)  /* don't invert the interrupt */
#define RP2040_IO_BANK0_GPIO3_CTRL_IRQOVER_INVERT                       (0x1 << RP2040_IO_BANK0_GPIO3_CTRL_IRQOVER_SHIFT)  /* invert the interrupt */
#define RP2040_IO_BANK0_GPIO3_CTRL_IRQOVER_LOW                          (0x2 << RP2040_IO_BANK0_GPIO3_CTRL_IRQOVER_SHIFT)  /* drive interrupt low */
#define RP2040_IO_BANK0_GPIO3_CTRL_IRQOVER_HIGH                         (0x3 << RP2040_IO_BANK0_GPIO3_CTRL_IRQOVER_SHIFT)  /* drive interrupt high */
#define RP2040_IO_BANK0_GPIO3_CTRL_INOVER_SHIFT                         (16)
#define RP2040_IO_BANK0_GPIO3_CTRL_INOVER_MASK                          (0x03 << RP2040_IO_BANK0_GPIO3_CTRL_INOVER_SHIFT)
#define RP2040_IO_BANK0_GPIO3_CTRL_INOVER_NORMAL                        (0x0 << RP2040_IO_BANK0_GPIO3_CTRL_INOVER_SHIFT)  /* don't invert the peri input */
#define RP2040_IO_BANK0_GPIO3_CTRL_INOVER_INVERT                        (0x1 << RP2040_IO_BANK0_GPIO3_CTRL_INOVER_SHIFT)  /* invert the peri input */
#define RP2040_IO_BANK0_GPIO3_CTRL_INOVER_LOW                           (0x2 << RP2040_IO_BANK0_GPIO3_CTRL_INOVER_SHIFT)  /* drive peri input low */
#define RP2040_IO_BANK0_GPIO3_CTRL_INOVER_HIGH                          (0x3 << RP2040_IO_BANK0_GPIO3_CTRL_INOVER_SHIFT)  /* drive peri input high */
#define RP2040_IO_BANK0_GPIO3_CTRL_OEOVER_SHIFT                         (12)
#define RP2040_IO_BANK0_GPIO3_CTRL_OEOVER_MASK                          (0x03 << RP2040_IO_BANK0_GPIO3_CTRL_OEOVER_SHIFT)
#define RP2040_IO_BANK0_GPIO3_CTRL_OEOVER_NORMAL                        (0x0 << RP2040_IO_BANK0_GPIO3_CTRL_OEOVER_SHIFT)  /* drive output enable from peripheral signal selected by funcsel */
#define RP2040_IO_BANK0_GPIO3_CTRL_OEOVER_INVERT                        (0x1 << RP2040_IO_BANK0_GPIO3_CTRL_OEOVER_SHIFT)  /* drive output enable from inverse of peripheral signal selected by funcsel */
#define RP2040_IO_BANK0_GPIO3_CTRL_OEOVER_DISABLE                       (0x2 << RP2040_IO_BANK0_GPIO3_CTRL_OEOVER_SHIFT)  /* disable output */
#define RP2040_IO_BANK0_GPIO3_CTRL_OEOVER_ENABLE                        (0x3 << RP2040_IO_BANK0_GPIO3_CTRL_OEOVER_SHIFT)  /* enable output */
#define RP2040_IO_BANK0_GPIO3_CTRL_OUTOVER_SHIFT                        (8)
#define RP2040_IO_BANK0_GPIO3_CTRL_OUTOVER_MASK                         (0x03 << RP2040_IO_BANK0_GPIO3_CTRL_OUTOVER_SHIFT)
#define RP2040_IO_BANK0_GPIO3_CTRL_OUTOVER_NORMAL                       (0x0 << RP2040_IO_BANK0_GPIO3_CTRL_OUTOVER_SHIFT)  /* drive output from peripheral signal selected by funcsel */
#define RP2040_IO_BANK0_GPIO3_CTRL_OUTOVER_INVERT                       (0x1 << RP2040_IO_BANK0_GPIO3_CTRL_OUTOVER_SHIFT)  /* drive output from inverse of peripheral signal selected by funcsel */
#define RP2040_IO_BANK0_GPIO3_CTRL_OUTOVER_LOW                          (0x2 << RP2040_IO_BANK0_GPIO3_CTRL_OUTOVER_SHIFT)  /* drive output low */
#define RP2040_IO_BANK0_GPIO3_CTRL_OUTOVER_HIGH                         (0x3 << RP2040_IO_BANK0_GPIO3_CTRL_OUTOVER_SHIFT)  /* drive output high */
#define RP2040_IO_BANK0_GPIO3_CTRL_FUNCSEL_MASK                         (0x1f)
#define RP2040_IO_BANK0_GPIO3_CTRL_FUNCSEL_JTAG_TDO                     (0x0)
#define RP2040_IO_BANK0_GPIO3_CTRL_FUNCSEL_SPI0_TX                      (0x1)
#define RP2040_IO_BANK0_GPIO3_CTRL_FUNCSEL_UART0_RTS                    (0x2)
#define RP2040_IO_BANK0_GPIO3_CTRL_FUNCSEL_I2C1_SCL                     (0x3)
#define RP2040_IO_BANK0_GPIO3_CTRL_FUNCSEL_PWM_B_1                      (0x4)
#define RP2040_IO_BANK0_GPIO3_CTRL_FUNCSEL_SIO_3                        (0x5)
#define RP2040_IO_BANK0_GPIO3_CTRL_FUNCSEL_PIO0_3                       (0x6)
#define RP2040_IO_BANK0_GPIO3_CTRL_FUNCSEL_PIO1_3                       (0x7)
#define RP2040_IO_BANK0_GPIO3_CTRL_FUNCSEL_USB_MUXING_OVERCURR_DETECT   (0x9)
#define RP2040_IO_BANK0_GPIO3_CTRL_FUNCSEL_NULL                         (0x1f)

#define RP2040_IO_BANK0_GPIO4_STATUS_IRQTOPROC                          (1 << 26)  /* interrupt to processors, after override is applied */
#define RP2040_IO_BANK0_GPIO4_STATUS_IRQFROMPAD                         (1 << 24)  /* interrupt from pad before override is applied */
#define RP2040_IO_BANK0_GPIO4_STATUS_INTOPERI                           (1 << 19)  /* input signal to peripheral, after override is applied */
#define RP2040_IO_BANK0_GPIO4_STATUS_INFROMPAD                          (1 << 17)  /* input signal from pad, before override is applied */
#define RP2040_IO_BANK0_GPIO4_STATUS_OETOPAD                            (1 << 13)  /* output enable to pad after register override is applied */
#define RP2040_IO_BANK0_GPIO4_STATUS_OEFROMPERI                         (1 << 12)  /* output enable from selected peripheral, before register override is applied */
#define RP2040_IO_BANK0_GPIO4_STATUS_OUTTOPAD                           (1 << 9)  /* output signal to pad after register override is applied */
#define RP2040_IO_BANK0_GPIO4_STATUS_OUTFROMPERI                        (1 << 8)  /* output signal from selected peripheral, before register override is applied */

#define RP2040_IO_BANK0_GPIO4_CTRL_IRQOVER_SHIFT                        (28)
#define RP2040_IO_BANK0_GPIO4_CTRL_IRQOVER_MASK                         (0x03 << RP2040_IO_BANK0_GPIO4_CTRL_IRQOVER_SHIFT)
#define RP2040_IO_BANK0_GPIO4_CTRL_IRQOVER_NORMAL                       (0x0 << RP2040_IO_BANK0_GPIO4_CTRL_IRQOVER_SHIFT)  /* don't invert the interrupt */
#define RP2040_IO_BANK0_GPIO4_CTRL_IRQOVER_INVERT                       (0x1 << RP2040_IO_BANK0_GPIO4_CTRL_IRQOVER_SHIFT)  /* invert the interrupt */
#define RP2040_IO_BANK0_GPIO4_CTRL_IRQOVER_LOW                          (0x2 << RP2040_IO_BANK0_GPIO4_CTRL_IRQOVER_SHIFT)  /* drive interrupt low */
#define RP2040_IO_BANK0_GPIO4_CTRL_IRQOVER_HIGH                         (0x3 << RP2040_IO_BANK0_GPIO4_CTRL_IRQOVER_SHIFT)  /* drive interrupt high */
#define RP2040_IO_BANK0_GPIO4_CTRL_INOVER_SHIFT                         (16)
#define RP2040_IO_BANK0_GPIO4_CTRL_INOVER_MASK                          (0x03 << RP2040_IO_BANK0_GPIO4_CTRL_INOVER_SHIFT)
#define RP2040_IO_BANK0_GPIO4_CTRL_INOVER_NORMAL                        (0x0 << RP2040_IO_BANK0_GPIO4_CTRL_INOVER_SHIFT)  /* don't invert the peri input */
#define RP2040_IO_BANK0_GPIO4_CTRL_INOVER_INVERT                        (0x1 << RP2040_IO_BANK0_GPIO4_CTRL_INOVER_SHIFT)  /* invert the peri input */
#define RP2040_IO_BANK0_GPIO4_CTRL_INOVER_LOW                           (0x2 << RP2040_IO_BANK0_GPIO4_CTRL_INOVER_SHIFT)  /* drive peri input low */
#define RP2040_IO_BANK0_GPIO4_CTRL_INOVER_HIGH                          (0x3 << RP2040_IO_BANK0_GPIO4_CTRL_INOVER_SHIFT)  /* drive peri input high */
#define RP2040_IO_BANK0_GPIO4_CTRL_OEOVER_SHIFT                         (12)
#define RP2040_IO_BANK0_GPIO4_CTRL_OEOVER_MASK                          (0x03 << RP2040_IO_BANK0_GPIO4_CTRL_OEOVER_SHIFT)
#define RP2040_IO_BANK0_GPIO4_CTRL_OEOVER_NORMAL                        (0x0 << RP2040_IO_BANK0_GPIO4_CTRL_OEOVER_SHIFT)  /* drive output enable from peripheral signal selected by funcsel */
#define RP2040_IO_BANK0_GPIO4_CTRL_OEOVER_INVERT                        (0x1 << RP2040_IO_BANK0_GPIO4_CTRL_OEOVER_SHIFT)  /* drive output enable from inverse of peripheral signal selected by funcsel */
#define RP2040_IO_BANK0_GPIO4_CTRL_OEOVER_DISABLE                       (0x2 << RP2040_IO_BANK0_GPIO4_CTRL_OEOVER_SHIFT)  /* disable output */
#define RP2040_IO_BANK0_GPIO4_CTRL_OEOVER_ENABLE                        (0x3 << RP2040_IO_BANK0_GPIO4_CTRL_OEOVER_SHIFT)  /* enable output */
#define RP2040_IO_BANK0_GPIO4_CTRL_OUTOVER_SHIFT                        (8)
#define RP2040_IO_BANK0_GPIO4_CTRL_OUTOVER_MASK                         (0x03 << RP2040_IO_BANK0_GPIO4_CTRL_OUTOVER_SHIFT)
#define RP2040_IO_BANK0_GPIO4_CTRL_OUTOVER_NORMAL                       (0x0 << RP2040_IO_BANK0_GPIO4_CTRL_OUTOVER_SHIFT)  /* drive output from peripheral signal selected by funcsel */
#define RP2040_IO_BANK0_GPIO4_CTRL_OUTOVER_INVERT                       (0x1 << RP2040_IO_BANK0_GPIO4_CTRL_OUTOVER_SHIFT)  /* drive output from inverse of peripheral signal selected by funcsel */
#define RP2040_IO_BANK0_GPIO4_CTRL_OUTOVER_LOW                          (0x2 << RP2040_IO_BANK0_GPIO4_CTRL_OUTOVER_SHIFT)  /* drive output low */
#define RP2040_IO_BANK0_GPIO4_CTRL_OUTOVER_HIGH                         (0x3 << RP2040_IO_BANK0_GPIO4_CTRL_OUTOVER_SHIFT)  /* drive output high */
#define RP2040_IO_BANK0_GPIO4_CTRL_FUNCSEL_MASK                         (0x1f)
#define RP2040_IO_BANK0_GPIO4_CTRL_FUNCSEL_SPI0_RX                      (0x1)
#define RP2040_IO_BANK0_GPIO4_CTRL_FUNCSEL_UART1_TX                     (0x2)
#define RP2040_IO_BANK0_GPIO4_CTRL_FUNCSEL_I2C0_SDA                     (0x3)
#define RP2040_IO_BANK0_GPIO4_CTRL_FUNCSEL_PWM_A_2                      (0x4)
#define RP2040_IO_BANK0_GPIO4_CTRL_FUNCSEL_SIO_4                        (0x5)
#define RP2040_IO_BANK0_GPIO4_CTRL_FUNCSEL_PIO0_4                       (0x6)
#define RP2040_IO_BANK0_GPIO4_CTRL_FUNCSEL_PIO1_4                       (0x7)
#define RP2040_IO_BANK0_GPIO4_CTRL_FUNCSEL_USB_MUXING_VBUS_DETECT       (0x9)
#define RP2040_IO_BANK0_GPIO4_CTRL_FUNCSEL_NULL                         (0x1f)

#define RP2040_IO_BANK0_GPIO5_STATUS_IRQTOPROC                          (1 << 26)  /* interrupt to processors, after override is applied */
#define RP2040_IO_BANK0_GPIO5_STATUS_IRQFROMPAD                         (1 << 24)  /* interrupt from pad before override is applied */
#define RP2040_IO_BANK0_GPIO5_STATUS_INTOPERI                           (1 << 19)  /* input signal to peripheral, after override is applied */
#define RP2040_IO_BANK0_GPIO5_STATUS_INFROMPAD                          (1 << 17)  /* input signal from pad, before override is applied */
#define RP2040_IO_BANK0_GPIO5_STATUS_OETOPAD                            (1 << 13)  /* output enable to pad after register override is applied */
#define RP2040_IO_BANK0_GPIO5_STATUS_OEFROMPERI                         (1 << 12)  /* output enable from selected peripheral, before register override is applied */
#define RP2040_IO_BANK0_GPIO5_STATUS_OUTTOPAD                           (1 << 9)  /* output signal to pad after register override is applied */
#define RP2040_IO_BANK0_GPIO5_STATUS_OUTFROMPERI                        (1 << 8)  /* output signal from selected peripheral, before register override is applied */

#define RP2040_IO_BANK0_GPIO5_CTRL_IRQOVER_SHIFT                        (28)
#define RP2040_IO_BANK0_GPIO5_CTRL_IRQOVER_MASK                         (0x03 << RP2040_IO_BANK0_GPIO5_CTRL_IRQOVER_SHIFT)
#define RP2040_IO_BANK0_GPIO5_CTRL_IRQOVER_NORMAL                       (0x0 << RP2040_IO_BANK0_GPIO5_CTRL_IRQOVER_SHIFT)  /* don't invert the interrupt */
#define RP2040_IO_BANK0_GPIO5_CTRL_IRQOVER_INVERT                       (0x1 << RP2040_IO_BANK0_GPIO5_CTRL_IRQOVER_SHIFT)  /* invert the interrupt */
#define RP2040_IO_BANK0_GPIO5_CTRL_IRQOVER_LOW                          (0x2 << RP2040_IO_BANK0_GPIO5_CTRL_IRQOVER_SHIFT)  /* drive interrupt low */
#define RP2040_IO_BANK0_GPIO5_CTRL_IRQOVER_HIGH                         (0x3 << RP2040_IO_BANK0_GPIO5_CTRL_IRQOVER_SHIFT)  /* drive interrupt high */
#define RP2040_IO_BANK0_GPIO5_CTRL_INOVER_SHIFT                         (16)
#define RP2040_IO_BANK0_GPIO5_CTRL_INOVER_MASK                          (0x03 << RP2040_IO_BANK0_GPIO5_CTRL_INOVER_SHIFT)
#define RP2040_IO_BANK0_GPIO5_CTRL_INOVER_NORMAL                        (0x0 << RP2040_IO_BANK0_GPIO5_CTRL_INOVER_SHIFT)  /* don't invert the peri input */
#define RP2040_IO_BANK0_GPIO5_CTRL_INOVER_INVERT                        (0x1 << RP2040_IO_BANK0_GPIO5_CTRL_INOVER_SHIFT)  /* invert the peri input */
#define RP2040_IO_BANK0_GPIO5_CTRL_INOVER_LOW                           (0x2 << RP2040_IO_BANK0_GPIO5_CTRL_INOVER_SHIFT)  /* drive peri input low */
#define RP2040_IO_BANK0_GPIO5_CTRL_INOVER_HIGH                          (0x3 << RP2040_IO_BANK0_GPIO5_CTRL_INOVER_SHIFT)  /* drive peri input high */
#define RP2040_IO_BANK0_GPIO5_CTRL_OEOVER_SHIFT                         (12)
#define RP2040_IO_BANK0_GPIO5_CTRL_OEOVER_MASK                          (0x03 << RP2040_IO_BANK0_GPIO5_CTRL_OEOVER_SHIFT)
#define RP2040_IO_BANK0_GPIO5_CTRL_OEOVER_NORMAL                        (0x0 << RP2040_IO_BANK0_GPIO5_CTRL_OEOVER_SHIFT)  /* drive output enable from peripheral signal selected by funcsel */
#define RP2040_IO_BANK0_GPIO5_CTRL_OEOVER_INVERT                        (0x1 << RP2040_IO_BANK0_GPIO5_CTRL_OEOVER_SHIFT)  /* drive output enable from inverse of peripheral signal selected by funcsel */
#define RP2040_IO_BANK0_GPIO5_CTRL_OEOVER_DISABLE                       (0x2 << RP2040_IO_BANK0_GPIO5_CTRL_OEOVER_SHIFT)  /* disable output */
#define RP2040_IO_BANK0_GPIO5_CTRL_OEOVER_ENABLE                        (0x3 << RP2040_IO_BANK0_GPIO5_CTRL_OEOVER_SHIFT)  /* enable output */
#define RP2040_IO_BANK0_GPIO5_CTRL_OUTOVER_SHIFT                        (8)
#define RP2040_IO_BANK0_GPIO5_CTRL_OUTOVER_MASK                         (0x03 << RP2040_IO_BANK0_GPIO5_CTRL_OUTOVER_SHIFT)
#define RP2040_IO_BANK0_GPIO5_CTRL_OUTOVER_NORMAL                       (0x0 << RP2040_IO_BANK0_GPIO5_CTRL_OUTOVER_SHIFT)  /* drive output from peripheral signal selected by funcsel */
#define RP2040_IO_BANK0_GPIO5_CTRL_OUTOVER_INVERT                       (0x1 << RP2040_IO_BANK0_GPIO5_CTRL_OUTOVER_SHIFT)  /* drive output from inverse of peripheral signal selected by funcsel */
#define RP2040_IO_BANK0_GPIO5_CTRL_OUTOVER_LOW                          (0x2 << RP2040_IO_BANK0_GPIO5_CTRL_OUTOVER_SHIFT)  /* drive output low */
#define RP2040_IO_BANK0_GPIO5_CTRL_OUTOVER_HIGH                         (0x3 << RP2040_IO_BANK0_GPIO5_CTRL_OUTOVER_SHIFT)  /* drive output high */
#define RP2040_IO_BANK0_GPIO5_CTRL_FUNCSEL_MASK                         (0x1f)
#define RP2040_IO_BANK0_GPIO5_CTRL_FUNCSEL_SPI0_SS_N                    (0x1)
#define RP2040_IO_BANK0_GPIO5_CTRL_FUNCSEL_UART1_RX                     (0x2)
#define RP2040_IO_BANK0_GPIO5_CTRL_FUNCSEL_I2C0_SCL                     (0x3)
#define RP2040_IO_BANK0_GPIO5_CTRL_FUNCSEL_PWM_B_2                      (0x4)
#define RP2040_IO_BANK0_GPIO5_CTRL_FUNCSEL_SIO_5                        (0x5)
#define RP2040_IO_BANK0_GPIO5_CTRL_FUNCSEL_PIO0_5                       (0x6)
#define RP2040_IO_BANK0_GPIO5_CTRL_FUNCSEL_PIO1_5                       (0x7)
#define RP2040_IO_BANK0_GPIO5_CTRL_FUNCSEL_USB_MUXING_VBUS_EN           (0x9)
#define RP2040_IO_BANK0_GPIO5_CTRL_FUNCSEL_NULL                         (0x1f)

#define RP2040_IO_BANK0_GPIO6_STATUS_IRQTOPROC                          (1 << 26)  /* interrupt to processors, after override is applied */
#define RP2040_IO_BANK0_GPIO6_STATUS_IRQFROMPAD                         (1 << 24)  /* interrupt from pad before override is applied */
#define RP2040_IO_BANK0_GPIO6_STATUS_INTOPERI                           (1 << 19)  /* input signal to peripheral, after override is applied */
#define RP2040_IO_BANK0_GPIO6_STATUS_INFROMPAD                          (1 << 17)  /* input signal from pad, before override is applied */
#define RP2040_IO_BANK0_GPIO6_STATUS_OETOPAD                            (1 << 13)  /* output enable to pad after register override is applied */
#define RP2040_IO_BANK0_GPIO6_STATUS_OEFROMPERI                         (1 << 12)  /* output enable from selected peripheral, before register override is applied */
#define RP2040_IO_BANK0_GPIO6_STATUS_OUTTOPAD                           (1 << 9)  /* output signal to pad after register override is applied */
#define RP2040_IO_BANK0_GPIO6_STATUS_OUTFROMPERI                        (1 << 8)  /* output signal from selected peripheral, before register override is applied */

#define RP2040_IO_BANK0_GPIO6_CTRL_IRQOVER_SHIFT                        (28)
#define RP2040_IO_BANK0_GPIO6_CTRL_IRQOVER_MASK                         (0x03 << RP2040_IO_BANK0_GPIO6_CTRL_IRQOVER_SHIFT)
#define RP2040_IO_BANK0_GPIO6_CTRL_IRQOVER_NORMAL                       (0x0 << RP2040_IO_BANK0_GPIO6_CTRL_IRQOVER_SHIFT)  /* don't invert the interrupt */
#define RP2040_IO_BANK0_GPIO6_CTRL_IRQOVER_INVERT                       (0x1 << RP2040_IO_BANK0_GPIO6_CTRL_IRQOVER_SHIFT)  /* invert the interrupt */
#define RP2040_IO_BANK0_GPIO6_CTRL_IRQOVER_LOW                          (0x2 << RP2040_IO_BANK0_GPIO6_CTRL_IRQOVER_SHIFT)  /* drive interrupt low */
#define RP2040_IO_BANK0_GPIO6_CTRL_IRQOVER_HIGH                         (0x3 << RP2040_IO_BANK0_GPIO6_CTRL_IRQOVER_SHIFT)  /* drive interrupt high */
#define RP2040_IO_BANK0_GPIO6_CTRL_INOVER_SHIFT                         (16)
#define RP2040_IO_BANK0_GPIO6_CTRL_INOVER_MASK                          (0x03 << RP2040_IO_BANK0_GPIO6_CTRL_INOVER_SHIFT)
#define RP2040_IO_BANK0_GPIO6_CTRL_INOVER_NORMAL                        (0x0 << RP2040_IO_BANK0_GPIO6_CTRL_INOVER_SHIFT)  /* don't invert the peri input */
#define RP2040_IO_BANK0_GPIO6_CTRL_INOVER_INVERT                        (0x1 << RP2040_IO_BANK0_GPIO6_CTRL_INOVER_SHIFT)  /* invert the peri input */
#define RP2040_IO_BANK0_GPIO6_CTRL_INOVER_LOW                           (0x2 << RP2040_IO_BANK0_GPIO6_CTRL_INOVER_SHIFT)  /* drive peri input low */
#define RP2040_IO_BANK0_GPIO6_CTRL_INOVER_HIGH                          (0x3 << RP2040_IO_BANK0_GPIO6_CTRL_INOVER_SHIFT)  /* drive peri input high */
#define RP2040_IO_BANK0_GPIO6_CTRL_OEOVER_SHIFT                         (12)
#define RP2040_IO_BANK0_GPIO6_CTRL_OEOVER_MASK                          (0x03 << RP2040_IO_BANK0_GPIO6_CTRL_OEOVER_SHIFT)
#define RP2040_IO_BANK0_GPIO6_CTRL_OEOVER_NORMAL                        (0x0 << RP2040_IO_BANK0_GPIO6_CTRL_OEOVER_SHIFT)  /* drive output enable from peripheral signal selected by funcsel */
#define RP2040_IO_BANK0_GPIO6_CTRL_OEOVER_INVERT                        (0x1 << RP2040_IO_BANK0_GPIO6_CTRL_OEOVER_SHIFT)  /* drive output enable from inverse of peripheral signal selected by funcsel */
#define RP2040_IO_BANK0_GPIO6_CTRL_OEOVER_DISABLE                       (0x2 << RP2040_IO_BANK0_GPIO6_CTRL_OEOVER_SHIFT)  /* disable output */
#define RP2040_IO_BANK0_GPIO6_CTRL_OEOVER_ENABLE                        (0x3 << RP2040_IO_BANK0_GPIO6_CTRL_OEOVER_SHIFT)  /* enable output */
#define RP2040_IO_BANK0_GPIO6_CTRL_OUTOVER_SHIFT                        (8)
#define RP2040_IO_BANK0_GPIO6_CTRL_OUTOVER_MASK                         (0x03 << RP2040_IO_BANK0_GPIO6_CTRL_OUTOVER_SHIFT)
#define RP2040_IO_BANK0_GPIO6_CTRL_OUTOVER_NORMAL                       (0x0 << RP2040_IO_BANK0_GPIO6_CTRL_OUTOVER_SHIFT)  /* drive output from peripheral signal selected by funcsel */
#define RP2040_IO_BANK0_GPIO6_CTRL_OUTOVER_INVERT                       (0x1 << RP2040_IO_BANK0_GPIO6_CTRL_OUTOVER_SHIFT)  /* drive output from inverse of peripheral signal selected by funcsel */
#define RP2040_IO_BANK0_GPIO6_CTRL_OUTOVER_LOW                          (0x2 << RP2040_IO_BANK0_GPIO6_CTRL_OUTOVER_SHIFT)  /* drive output low */
#define RP2040_IO_BANK0_GPIO6_CTRL_OUTOVER_HIGH                         (0x3 << RP2040_IO_BANK0_GPIO6_CTRL_OUTOVER_SHIFT)  /* drive output high */
#define RP2040_IO_BANK0_GPIO6_CTRL_FUNCSEL_MASK                         (0x1f)
#define RP2040_IO_BANK0_GPIO6_CTRL_FUNCSEL_SPI0_SCLK                    (0x1)
#define RP2040_IO_BANK0_GPIO6_CTRL_FUNCSEL_UART1_CTS                    (0x2)
#define RP2040_IO_BANK0_GPIO6_CTRL_FUNCSEL_I2C1_SDA                     (0x3)
#define RP2040_IO_BANK0_GPIO6_CTRL_FUNCSEL_PWM_A_3                      (0x4)
#define RP2040_IO_BANK0_GPIO6_CTRL_FUNCSEL_SIO_6                        (0x5)
#define RP2040_IO_BANK0_GPIO6_CTRL_FUNCSEL_PIO0_6                       (0x6)
#define RP2040_IO_BANK0_GPIO6_CTRL_FUNCSEL_PIO1_6                       (0x7)
#define RP2040_IO_BANK0_GPIO6_CTRL_FUNCSEL_USB_MUXING_EXTPHY_SOFTCON    (0x8)
#define RP2040_IO_BANK0_GPIO6_CTRL_FUNCSEL_USB_MUXING_OVERCURR_DETECT   (0x9)
#define RP2040_IO_BANK0_GPIO6_CTRL_FUNCSEL_NULL                         (0x1f)

#define RP2040_IO_BANK0_GPIO7_STATUS_IRQTOPROC                          (1 << 26)  /* interrupt to processors, after override is applied */
#define RP2040_IO_BANK0_GPIO7_STATUS_IRQFROMPAD                         (1 << 24)  /* interrupt from pad before override is applied */
#define RP2040_IO_BANK0_GPIO7_STATUS_INTOPERI                           (1 << 19)  /* input signal to peripheral, after override is applied */
#define RP2040_IO_BANK0_GPIO7_STATUS_INFROMPAD                          (1 << 17)  /* input signal from pad, before override is applied */
#define RP2040_IO_BANK0_GPIO7_STATUS_OETOPAD                            (1 << 13)  /* output enable to pad after register override is applied */
#define RP2040_IO_BANK0_GPIO7_STATUS_OEFROMPERI                         (1 << 12)  /* output enable from selected peripheral, before register override is applied */
#define RP2040_IO_BANK0_GPIO7_STATUS_OUTTOPAD                           (1 << 9)  /* output signal to pad after register override is applied */
#define RP2040_IO_BANK0_GPIO7_STATUS_OUTFROMPERI                        (1 << 8)  /* output signal from selected peripheral, before register override is applied */

#define RP2040_IO_BANK0_GPIO7_CTRL_IRQOVER_SHIFT                        (28)
#define RP2040_IO_BANK0_GPIO7_CTRL_IRQOVER_MASK                         (0x03 << RP2040_IO_BANK0_GPIO7_CTRL_IRQOVER_SHIFT)
#define RP2040_IO_BANK0_GPIO7_CTRL_IRQOVER_NORMAL                       (0x0 << RP2040_IO_BANK0_GPIO7_CTRL_IRQOVER_SHIFT)  /* don't invert the interrupt */
#define RP2040_IO_BANK0_GPIO7_CTRL_IRQOVER_INVERT                       (0x1 << RP2040_IO_BANK0_GPIO7_CTRL_IRQOVER_SHIFT)  /* invert the interrupt */
#define RP2040_IO_BANK0_GPIO7_CTRL_IRQOVER_LOW                          (0x2 << RP2040_IO_BANK0_GPIO7_CTRL_IRQOVER_SHIFT)  /* drive interrupt low */
#define RP2040_IO_BANK0_GPIO7_CTRL_IRQOVER_HIGH                         (0x3 << RP2040_IO_BANK0_GPIO7_CTRL_IRQOVER_SHIFT)  /* drive interrupt high */
#define RP2040_IO_BANK0_GPIO7_CTRL_INOVER_SHIFT                         (16)
#define RP2040_IO_BANK0_GPIO7_CTRL_INOVER_MASK                          (0x03 << RP2040_IO_BANK0_GPIO7_CTRL_INOVER_SHIFT)
#define RP2040_IO_BANK0_GPIO7_CTRL_INOVER_NORMAL                        (0x0 << RP2040_IO_BANK0_GPIO7_CTRL_INOVER_SHIFT)  /* don't invert the peri input */
#define RP2040_IO_BANK0_GPIO7_CTRL_INOVER_INVERT                        (0x1 << RP2040_IO_BANK0_GPIO7_CTRL_INOVER_SHIFT)  /* invert the peri input */
#define RP2040_IO_BANK0_GPIO7_CTRL_INOVER_LOW                           (0x2 << RP2040_IO_BANK0_GPIO7_CTRL_INOVER_SHIFT)  /* drive peri input low */
#define RP2040_IO_BANK0_GPIO7_CTRL_INOVER_HIGH                          (0x3 << RP2040_IO_BANK0_GPIO7_CTRL_INOVER_SHIFT)  /* drive peri input high */
#define RP2040_IO_BANK0_GPIO7_CTRL_OEOVER_SHIFT                         (12)
#define RP2040_IO_BANK0_GPIO7_CTRL_OEOVER_MASK                          (0x03 << RP2040_IO_BANK0_GPIO7_CTRL_OEOVER_SHIFT)
#define RP2040_IO_BANK0_GPIO7_CTRL_OEOVER_NORMAL                        (0x0 << RP2040_IO_BANK0_GPIO7_CTRL_OEOVER_SHIFT)  /* drive output enable from peripheral signal selected by funcsel */
#define RP2040_IO_BANK0_GPIO7_CTRL_OEOVER_INVERT                        (0x1 << RP2040_IO_BANK0_GPIO7_CTRL_OEOVER_SHIFT)  /* drive output enable from inverse of peripheral signal selected by funcsel */
#define RP2040_IO_BANK0_GPIO7_CTRL_OEOVER_DISABLE                       (0x2 << RP2040_IO_BANK0_GPIO7_CTRL_OEOVER_SHIFT)  /* disable output */
#define RP2040_IO_BANK0_GPIO7_CTRL_OEOVER_ENABLE                        (0x3 << RP2040_IO_BANK0_GPIO7_CTRL_OEOVER_SHIFT)  /* enable output */
#define RP2040_IO_BANK0_GPIO7_CTRL_OUTOVER_SHIFT                        (8)
#define RP2040_IO_BANK0_GPIO7_CTRL_OUTOVER_MASK                         (0x03 << RP2040_IO_BANK0_GPIO7_CTRL_OUTOVER_SHIFT)
#define RP2040_IO_BANK0_GPIO7_CTRL_OUTOVER_NORMAL                       (0x0 << RP2040_IO_BANK0_GPIO7_CTRL_OUTOVER_SHIFT)  /* drive output from peripheral signal selected by funcsel */
#define RP2040_IO_BANK0_GPIO7_CTRL_OUTOVER_INVERT                       (0x1 << RP2040_IO_BANK0_GPIO7_CTRL_OUTOVER_SHIFT)  /* drive output from inverse of peripheral signal selected by funcsel */
#define RP2040_IO_BANK0_GPIO7_CTRL_OUTOVER_LOW                          (0x2 << RP2040_IO_BANK0_GPIO7_CTRL_OUTOVER_SHIFT)  /* drive output low */
#define RP2040_IO_BANK0_GPIO7_CTRL_OUTOVER_HIGH                         (0x3 << RP2040_IO_BANK0_GPIO7_CTRL_OUTOVER_SHIFT)  /* drive output high */
#define RP2040_IO_BANK0_GPIO7_CTRL_FUNCSEL_MASK                         (0x1f)
#define RP2040_IO_BANK0_GPIO7_CTRL_FUNCSEL_SPI0_TX                      (0x1)
#define RP2040_IO_BANK0_GPIO7_CTRL_FUNCSEL_UART1_RTS                    (0x2)
#define RP2040_IO_BANK0_GPIO7_CTRL_FUNCSEL_I2C1_SCL                     (0x3)
#define RP2040_IO_BANK0_GPIO7_CTRL_FUNCSEL_PWM_B_3                      (0x4)
#define RP2040_IO_BANK0_GPIO7_CTRL_FUNCSEL_SIO_7                        (0x5)
#define RP2040_IO_BANK0_GPIO7_CTRL_FUNCSEL_PIO0_7                       (0x6)
#define RP2040_IO_BANK0_GPIO7_CTRL_FUNCSEL_PIO1_7                       (0x7)
#define RP2040_IO_BANK0_GPIO7_CTRL_FUNCSEL_USB_MUXING_EXTPHY_OE_N       (0x8)
#define RP2040_IO_BANK0_GPIO7_CTRL_FUNCSEL_USB_MUXING_VBUS_DETECT       (0x9)
#define RP2040_IO_BANK0_GPIO7_CTRL_FUNCSEL_NULL                         (0x1f)

#define RP2040_IO_BANK0_GPIO8_STATUS_IRQTOPROC                          (1 << 26)  /* interrupt to processors, after override is applied */
#define RP2040_IO_BANK0_GPIO8_STATUS_IRQFROMPAD                         (1 << 24)  /* interrupt from pad before override is applied */
#define RP2040_IO_BANK0_GPIO8_STATUS_INTOPERI                           (1 << 19)  /* input signal to peripheral, after override is applied */
#define RP2040_IO_BANK0_GPIO8_STATUS_INFROMPAD                          (1 << 17)  /* input signal from pad, before override is applied */
#define RP2040_IO_BANK0_GPIO8_STATUS_OETOPAD                            (1 << 13)  /* output enable to pad after register override is applied */
#define RP2040_IO_BANK0_GPIO8_STATUS_OEFROMPERI                         (1 << 12)  /* output enable from selected peripheral, before register override is applied */
#define RP2040_IO_BANK0_GPIO8_STATUS_OUTTOPAD                           (1 << 9)  /* output signal to pad after register override is applied */
#define RP2040_IO_BANK0_GPIO8_STATUS_OUTFROMPERI                        (1 << 8)  /* output signal from selected peripheral, before register override is applied */

#define RP2040_IO_BANK0_GPIO8_CTRL_IRQOVER_SHIFT                        (28)
#define RP2040_IO_BANK0_GPIO8_CTRL_IRQOVER_MASK                         (0x03 << RP2040_IO_BANK0_GPIO8_CTRL_IRQOVER_SHIFT)
#define RP2040_IO_BANK0_GPIO8_CTRL_IRQOVER_NORMAL                       (0x0 << RP2040_IO_BANK0_GPIO8_CTRL_IRQOVER_SHIFT)  /* don't invert the interrupt */
#define RP2040_IO_BANK0_GPIO8_CTRL_IRQOVER_INVERT                       (0x1 << RP2040_IO_BANK0_GPIO8_CTRL_IRQOVER_SHIFT)  /* invert the interrupt */
#define RP2040_IO_BANK0_GPIO8_CTRL_IRQOVER_LOW                          (0x2 << RP2040_IO_BANK0_GPIO8_CTRL_IRQOVER_SHIFT)  /* drive interrupt low */
#define RP2040_IO_BANK0_GPIO8_CTRL_IRQOVER_HIGH                         (0x3 << RP2040_IO_BANK0_GPIO8_CTRL_IRQOVER_SHIFT)  /* drive interrupt high */
#define RP2040_IO_BANK0_GPIO8_CTRL_INOVER_SHIFT                         (16)
#define RP2040_IO_BANK0_GPIO8_CTRL_INOVER_MASK                          (0x03 << RP2040_IO_BANK0_GPIO8_CTRL_INOVER_SHIFT)
#define RP2040_IO_BANK0_GPIO8_CTRL_INOVER_NORMAL                        (0x0 << RP2040_IO_BANK0_GPIO8_CTRL_INOVER_SHIFT)  /* don't invert the peri input */
#define RP2040_IO_BANK0_GPIO8_CTRL_INOVER_INVERT                        (0x1 << RP2040_IO_BANK0_GPIO8_CTRL_INOVER_SHIFT)  /* invert the peri input */
#define RP2040_IO_BANK0_GPIO8_CTRL_INOVER_LOW                           (0x2 << RP2040_IO_BANK0_GPIO8_CTRL_INOVER_SHIFT)  /* drive peri input low */
#define RP2040_IO_BANK0_GPIO8_CTRL_INOVER_HIGH                          (0x3 << RP2040_IO_BANK0_GPIO8_CTRL_INOVER_SHIFT)  /* drive peri input high */
#define RP2040_IO_BANK0_GPIO8_CTRL_OEOVER_SHIFT                         (12)
#define RP2040_IO_BANK0_GPIO8_CTRL_OEOVER_MASK                          (0x03 << RP2040_IO_BANK0_GPIO8_CTRL_OEOVER_SHIFT)
#define RP2040_IO_BANK0_GPIO8_CTRL_OEOVER_NORMAL                        (0x0 << RP2040_IO_BANK0_GPIO8_CTRL_OEOVER_SHIFT)  /* drive output enable from peripheral signal selected by funcsel */
#define RP2040_IO_BANK0_GPIO8_CTRL_OEOVER_INVERT                        (0x1 << RP2040_IO_BANK0_GPIO8_CTRL_OEOVER_SHIFT)  /* drive output enable from inverse of peripheral signal selected by funcsel */
#define RP2040_IO_BANK0_GPIO8_CTRL_OEOVER_DISABLE                       (0x2 << RP2040_IO_BANK0_GPIO8_CTRL_OEOVER_SHIFT)  /* disable output */
#define RP2040_IO_BANK0_GPIO8_CTRL_OEOVER_ENABLE                        (0x3 << RP2040_IO_BANK0_GPIO8_CTRL_OEOVER_SHIFT)  /* enable output */
#define RP2040_IO_BANK0_GPIO8_CTRL_OUTOVER_SHIFT                        (8)
#define RP2040_IO_BANK0_GPIO8_CTRL_OUTOVER_MASK                         (0x03 << RP2040_IO_BANK0_GPIO8_CTRL_OUTOVER_SHIFT)
#define RP2040_IO_BANK0_GPIO8_CTRL_OUTOVER_NORMAL                       (0x0 << RP2040_IO_BANK0_GPIO8_CTRL_OUTOVER_SHIFT)  /* drive output from peripheral signal selected by funcsel */
#define RP2040_IO_BANK0_GPIO8_CTRL_OUTOVER_INVERT                       (0x1 << RP2040_IO_BANK0_GPIO8_CTRL_OUTOVER_SHIFT)  /* drive output from inverse of peripheral signal selected by funcsel */
#define RP2040_IO_BANK0_GPIO8_CTRL_OUTOVER_LOW                          (0x2 << RP2040_IO_BANK0_GPIO8_CTRL_OUTOVER_SHIFT)  /* drive output low */
#define RP2040_IO_BANK0_GPIO8_CTRL_OUTOVER_HIGH                         (0x3 << RP2040_IO_BANK0_GPIO8_CTRL_OUTOVER_SHIFT)  /* drive output high */
#define RP2040_IO_BANK0_GPIO8_CTRL_FUNCSEL_MASK                         (0x1f)
#define RP2040_IO_BANK0_GPIO8_CTRL_FUNCSEL_SPI1_RX                      (0x1)
#define RP2040_IO_BANK0_GPIO8_CTRL_FUNCSEL_UART1_TX                     (0x2)
#define RP2040_IO_BANK0_GPIO8_CTRL_FUNCSEL_I2C0_SDA                     (0x3)
#define RP2040_IO_BANK0_GPIO8_CTRL_FUNCSEL_PWM_A_4                      (0x4)
#define RP2040_IO_BANK0_GPIO8_CTRL_FUNCSEL_SIO_8                        (0x5)
#define RP2040_IO_BANK0_GPIO8_CTRL_FUNCSEL_PIO0_8                       (0x6)
#define RP2040_IO_BANK0_GPIO8_CTRL_FUNCSEL_PIO1_8                       (0x7)
#define RP2040_IO_BANK0_GPIO8_CTRL_FUNCSEL_USB_MUXING_EXTPHY_RCV        (0x8)
#define RP2040_IO_BANK0_GPIO8_CTRL_FUNCSEL_USB_MUXING_VBUS_EN           (0x9)
#define RP2040_IO_BANK0_GPIO8_CTRL_FUNCSEL_NULL                         (0x1f)

#define RP2040_IO_BANK0_GPIO9_STATUS_IRQTOPROC                          (1 << 26)  /* interrupt to processors, after override is applied */
#define RP2040_IO_BANK0_GPIO9_STATUS_IRQFROMPAD                         (1 << 24)  /* interrupt from pad before override is applied */
#define RP2040_IO_BANK0_GPIO9_STATUS_INTOPERI                           (1 << 19)  /* input signal to peripheral, after override is applied */
#define RP2040_IO_BANK0_GPIO9_STATUS_INFROMPAD                          (1 << 17)  /* input signal from pad, before override is applied */
#define RP2040_IO_BANK0_GPIO9_STATUS_OETOPAD                            (1 << 13)  /* output enable to pad after register override is applied */
#define RP2040_IO_BANK0_GPIO9_STATUS_OEFROMPERI                         (1 << 12)  /* output enable from selected peripheral, before register override is applied */
#define RP2040_IO_BANK0_GPIO9_STATUS_OUTTOPAD                           (1 << 9)  /* output signal to pad after register override is applied */
#define RP2040_IO_BANK0_GPIO9_STATUS_OUTFROMPERI                        (1 << 8)  /* output signal from selected peripheral, before register override is applied */

#define RP2040_IO_BANK0_GPIO9_CTRL_IRQOVER_SHIFT                        (28)
#define RP2040_IO_BANK0_GPIO9_CTRL_IRQOVER_MASK                         (0x03 << RP2040_IO_BANK0_GPIO9_CTRL_IRQOVER_SHIFT)
#define RP2040_IO_BANK0_GPIO9_CTRL_IRQOVER_NORMAL                       (0x0 << RP2040_IO_BANK0_GPIO9_CTRL_IRQOVER_SHIFT)  /* don't invert the interrupt */
#define RP2040_IO_BANK0_GPIO9_CTRL_IRQOVER_INVERT                       (0x1 << RP2040_IO_BANK0_GPIO9_CTRL_IRQOVER_SHIFT)  /* invert the interrupt */
#define RP2040_IO_BANK0_GPIO9_CTRL_IRQOVER_LOW                          (0x2 << RP2040_IO_BANK0_GPIO9_CTRL_IRQOVER_SHIFT)  /* drive interrupt low */
#define RP2040_IO_BANK0_GPIO9_CTRL_IRQOVER_HIGH                         (0x3 << RP2040_IO_BANK0_GPIO9_CTRL_IRQOVER_SHIFT)  /* drive interrupt high */
#define RP2040_IO_BANK0_GPIO9_CTRL_INOVER_SHIFT                         (16)
#define RP2040_IO_BANK0_GPIO9_CTRL_INOVER_MASK                          (0x03 << RP2040_IO_BANK0_GPIO9_CTRL_INOVER_SHIFT)
#define RP2040_IO_BANK0_GPIO9_CTRL_INOVER_NORMAL                        (0x0 << RP2040_IO_BANK0_GPIO9_CTRL_INOVER_SHIFT)  /* don't invert the peri input */
#define RP2040_IO_BANK0_GPIO9_CTRL_INOVER_INVERT                        (0x1 << RP2040_IO_BANK0_GPIO9_CTRL_INOVER_SHIFT)  /* invert the peri input */
#define RP2040_IO_BANK0_GPIO9_CTRL_INOVER_LOW                           (0x2 << RP2040_IO_BANK0_GPIO9_CTRL_INOVER_SHIFT)  /* drive peri input low */
#define RP2040_IO_BANK0_GPIO9_CTRL_INOVER_HIGH                          (0x3 << RP2040_IO_BANK0_GPIO9_CTRL_INOVER_SHIFT)  /* drive peri input high */
#define RP2040_IO_BANK0_GPIO9_CTRL_OEOVER_SHIFT                         (12)
#define RP2040_IO_BANK0_GPIO9_CTRL_OEOVER_MASK                          (0x03 << RP2040_IO_BANK0_GPIO9_CTRL_OEOVER_SHIFT)
#define RP2040_IO_BANK0_GPIO9_CTRL_OEOVER_NORMAL                        (0x0 << RP2040_IO_BANK0_GPIO9_CTRL_OEOVER_SHIFT)  /* drive output enable from peripheral signal selected by funcsel */
#define RP2040_IO_BANK0_GPIO9_CTRL_OEOVER_INVERT                        (0x1 << RP2040_IO_BANK0_GPIO9_CTRL_OEOVER_SHIFT)  /* drive output enable from inverse of peripheral signal selected by funcsel */
#define RP2040_IO_BANK0_GPIO9_CTRL_OEOVER_DISABLE                       (0x2 << RP2040_IO_BANK0_GPIO9_CTRL_OEOVER_SHIFT)  /* disable output */
#define RP2040_IO_BANK0_GPIO9_CTRL_OEOVER_ENABLE                        (0x3 << RP2040_IO_BANK0_GPIO9_CTRL_OEOVER_SHIFT)  /* enable output */
#define RP2040_IO_BANK0_GPIO9_CTRL_OUTOVER_SHIFT                        (8)
#define RP2040_IO_BANK0_GPIO9_CTRL_OUTOVER_MASK                         (0x03 << RP2040_IO_BANK0_GPIO9_CTRL_OUTOVER_SHIFT)
#define RP2040_IO_BANK0_GPIO9_CTRL_OUTOVER_NORMAL                       (0x0 << RP2040_IO_BANK0_GPIO9_CTRL_OUTOVER_SHIFT)  /* drive output from peripheral signal selected by funcsel */
#define RP2040_IO_BANK0_GPIO9_CTRL_OUTOVER_INVERT                       (0x1 << RP2040_IO_BANK0_GPIO9_CTRL_OUTOVER_SHIFT)  /* drive output from inverse of peripheral signal selected by funcsel */
#define RP2040_IO_BANK0_GPIO9_CTRL_OUTOVER_LOW                          (0x2 << RP2040_IO_BANK0_GPIO9_CTRL_OUTOVER_SHIFT)  /* drive output low */
#define RP2040_IO_BANK0_GPIO9_CTRL_OUTOVER_HIGH                         (0x3 << RP2040_IO_BANK0_GPIO9_CTRL_OUTOVER_SHIFT)  /* drive output high */
#define RP2040_IO_BANK0_GPIO9_CTRL_FUNCSEL_MASK                         (0x1f)
#define RP2040_IO_BANK0_GPIO9_CTRL_FUNCSEL_SPI1_SS_N                    (0x1)
#define RP2040_IO_BANK0_GPIO9_CTRL_FUNCSEL_UART1_RX                     (0x2)
#define RP2040_IO_BANK0_GPIO9_CTRL_FUNCSEL_I2C0_SCL                     (0x3)
#define RP2040_IO_BANK0_GPIO9_CTRL_FUNCSEL_PWM_B_4                      (0x4)
#define RP2040_IO_BANK0_GPIO9_CTRL_FUNCSEL_SIO_9                        (0x5)
#define RP2040_IO_BANK0_GPIO9_CTRL_FUNCSEL_PIO0_9                       (0x6)
#define RP2040_IO_BANK0_GPIO9_CTRL_FUNCSEL_PIO1_9                       (0x7)
#define RP2040_IO_BANK0_GPIO9_CTRL_FUNCSEL_USB_MUXING_EXTPHY_VP         (0x8)
#define RP2040_IO_BANK0_GPIO9_CTRL_FUNCSEL_USB_MUXING_OVERCURR_DETECT   (0x9)
#define RP2040_IO_BANK0_GPIO9_CTRL_FUNCSEL_NULL                         (0x1f)

#define RP2040_IO_BANK0_GPIO10_STATUS_IRQTOPROC                         (1 << 26)  /* interrupt to processors, after override is applied */
#define RP2040_IO_BANK0_GPIO10_STATUS_IRQFROMPAD                        (1 << 24)  /* interrupt from pad before override is applied */
#define RP2040_IO_BANK0_GPIO10_STATUS_INTOPERI                          (1 << 19)  /* input signal to peripheral, after override is applied */
#define RP2040_IO_BANK0_GPIO10_STATUS_INFROMPAD                         (1 << 17)  /* input signal from pad, before override is applied */
#define RP2040_IO_BANK0_GPIO10_STATUS_OETOPAD                           (1 << 13)  /* output enable to pad after register override is applied */
#define RP2040_IO_BANK0_GPIO10_STATUS_OEFROMPERI                        (1 << 12)  /* output enable from selected peripheral, before register override is applied */
#define RP2040_IO_BANK0_GPIO10_STATUS_OUTTOPAD                          (1 << 9)  /* output signal to pad after register override is applied */
#define RP2040_IO_BANK0_GPIO10_STATUS_OUTFROMPERI                       (1 << 8)  /* output signal from selected peripheral, before register override is applied */

#define RP2040_IO_BANK0_GPIO10_CTRL_IRQOVER_SHIFT                       (28)
#define RP2040_IO_BANK0_GPIO10_CTRL_IRQOVER_MASK                        (0x03 << RP2040_IO_BANK0_GPIO10_CTRL_IRQOVER_SHIFT)
#define RP2040_IO_BANK0_GPIO10_CTRL_IRQOVER_NORMAL                      (0x0 << RP2040_IO_BANK0_GPIO10_CTRL_IRQOVER_SHIFT)  /* don't invert the interrupt */
#define RP2040_IO_BANK0_GPIO10_CTRL_IRQOVER_INVERT                      (0x1 << RP2040_IO_BANK0_GPIO10_CTRL_IRQOVER_SHIFT)  /* invert the interrupt */
#define RP2040_IO_BANK0_GPIO10_CTRL_IRQOVER_LOW                         (0x2 << RP2040_IO_BANK0_GPIO10_CTRL_IRQOVER_SHIFT)  /* drive interrupt low */
#define RP2040_IO_BANK0_GPIO10_CTRL_IRQOVER_HIGH                        (0x3 << RP2040_IO_BANK0_GPIO10_CTRL_IRQOVER_SHIFT)  /* drive interrupt high */
#define RP2040_IO_BANK0_GPIO10_CTRL_INOVER_SHIFT                        (16)
#define RP2040_IO_BANK0_GPIO10_CTRL_INOVER_MASK                         (0x03 << RP2040_IO_BANK0_GPIO10_CTRL_INOVER_SHIFT)
#define RP2040_IO_BANK0_GPIO10_CTRL_INOVER_NORMAL                       (0x0 << RP2040_IO_BANK0_GPIO10_CTRL_INOVER_SHIFT)  /* don't invert the peri input */
#define RP2040_IO_BANK0_GPIO10_CTRL_INOVER_INVERT                       (0x1 << RP2040_IO_BANK0_GPIO10_CTRL_INOVER_SHIFT)  /* invert the peri input */
#define RP2040_IO_BANK0_GPIO10_CTRL_INOVER_LOW                          (0x2 << RP2040_IO_BANK0_GPIO10_CTRL_INOVER_SHIFT)  /* drive peri input low */
#define RP2040_IO_BANK0_GPIO10_CTRL_INOVER_HIGH                         (0x3 << RP2040_IO_BANK0_GPIO10_CTRL_INOVER_SHIFT)  /* drive peri input high */
#define RP2040_IO_BANK0_GPIO10_CTRL_OEOVER_SHIFT                        (12)
#define RP2040_IO_BANK0_GPIO10_CTRL_OEOVER_MASK                         (0x03 << RP2040_IO_BANK0_GPIO10_CTRL_OEOVER_SHIFT)
#define RP2040_IO_BANK0_GPIO10_CTRL_OEOVER_NORMAL                       (0x0 << RP2040_IO_BANK0_GPIO10_CTRL_OEOVER_SHIFT)  /* drive output enable from peripheral signal selected by funcsel */
#define RP2040_IO_BANK0_GPIO10_CTRL_OEOVER_INVERT                       (0x1 << RP2040_IO_BANK0_GPIO10_CTRL_OEOVER_SHIFT)  /* drive output enable from inverse of peripheral signal selected by funcsel */
#define RP2040_IO_BANK0_GPIO10_CTRL_OEOVER_DISABLE                      (0x2 << RP2040_IO_BANK0_GPIO10_CTRL_OEOVER_SHIFT)  /* disable output */
#define RP2040_IO_BANK0_GPIO10_CTRL_OEOVER_ENABLE                       (0x3 << RP2040_IO_BANK0_GPIO10_CTRL_OEOVER_SHIFT)  /* enable output */
#define RP2040_IO_BANK0_GPIO10_CTRL_OUTOVER_SHIFT                       (8)
#define RP2040_IO_BANK0_GPIO10_CTRL_OUTOVER_MASK                        (0x03 << RP2040_IO_BANK0_GPIO10_CTRL_OUTOVER_SHIFT)
#define RP2040_IO_BANK0_GPIO10_CTRL_OUTOVER_NORMAL                      (0x0 << RP2040_IO_BANK0_GPIO10_CTRL_OUTOVER_SHIFT)  /* drive output from peripheral signal selected by funcsel */
#define RP2040_IO_BANK0_GPIO10_CTRL_OUTOVER_INVERT                      (0x1 << RP2040_IO_BANK0_GPIO10_CTRL_OUTOVER_SHIFT)  /* drive output from inverse of peripheral signal selected by funcsel */
#define RP2040_IO_BANK0_GPIO10_CTRL_OUTOVER_LOW                         (0x2 << RP2040_IO_BANK0_GPIO10_CTRL_OUTOVER_SHIFT)  /* drive output low */
#define RP2040_IO_BANK0_GPIO10_CTRL_OUTOVER_HIGH                        (0x3 << RP2040_IO_BANK0_GPIO10_CTRL_OUTOVER_SHIFT)  /* drive output high */
#define RP2040_IO_BANK0_GPIO10_CTRL_FUNCSEL_MASK                        (0x1f)
#define RP2040_IO_BANK0_GPIO10_CTRL_FUNCSEL_SPI1_SCLK                   (0x1)
#define RP2040_IO_BANK0_GPIO10_CTRL_FUNCSEL_UART1_CTS                   (0x2)
#define RP2040_IO_BANK0_GPIO10_CTRL_FUNCSEL_I2C1_SDA                    (0x3)
#define RP2040_IO_BANK0_GPIO10_CTRL_FUNCSEL_PWM_A_5                     (0x4)
#define RP2040_IO_BANK0_GPIO10_CTRL_FUNCSEL_SIO_10                      (0x5)
#define RP2040_IO_BANK0_GPIO10_CTRL_FUNCSEL_PIO0_10                     (0x6)
#define RP2040_IO_BANK0_GPIO10_CTRL_FUNCSEL_PIO1_10                     (0x7)
#define RP2040_IO_BANK0_GPIO10_CTRL_FUNCSEL_USB_MUXING_EXTPHY_VM        (0x8)
#define RP2040_IO_BANK0_GPIO10_CTRL_FUNCSEL_USB_MUXING_VBUS_DETECT      (0x9)
#define RP2040_IO_BANK0_GPIO10_CTRL_FUNCSEL_NULL                        (0x1f)

#define RP2040_IO_BANK0_GPIO11_STATUS_IRQTOPROC                         (1 << 26)  /* interrupt to processors, after override is applied */
#define RP2040_IO_BANK0_GPIO11_STATUS_IRQFROMPAD                        (1 << 24)  /* interrupt from pad before override is applied */
#define RP2040_IO_BANK0_GPIO11_STATUS_INTOPERI                          (1 << 19)  /* input signal to peripheral, after override is applied */
#define RP2040_IO_BANK0_GPIO11_STATUS_INFROMPAD                         (1 << 17)  /* input signal from pad, before override is applied */
#define RP2040_IO_BANK0_GPIO11_STATUS_OETOPAD                           (1 << 13)  /* output enable to pad after register override is applied */
#define RP2040_IO_BANK0_GPIO11_STATUS_OEFROMPERI                        (1 << 12)  /* output enable from selected peripheral, before register override is applied */
#define RP2040_IO_BANK0_GPIO11_STATUS_OUTTOPAD                          (1 << 9)  /* output signal to pad after register override is applied */
#define RP2040_IO_BANK0_GPIO11_STATUS_OUTFROMPERI                       (1 << 8)  /* output signal from selected peripheral, before register override is applied */

#define RP2040_IO_BANK0_GPIO11_CTRL_IRQOVER_SHIFT                       (28)
#define RP2040_IO_BANK0_GPIO11_CTRL_IRQOVER_MASK                        (0x03 << RP2040_IO_BANK0_GPIO11_CTRL_IRQOVER_SHIFT)
#define RP2040_IO_BANK0_GPIO11_CTRL_IRQOVER_NORMAL                      (0x0 << RP2040_IO_BANK0_GPIO11_CTRL_IRQOVER_SHIFT)  /* don't invert the interrupt */
#define RP2040_IO_BANK0_GPIO11_CTRL_IRQOVER_INVERT                      (0x1 << RP2040_IO_BANK0_GPIO11_CTRL_IRQOVER_SHIFT)  /* invert the interrupt */
#define RP2040_IO_BANK0_GPIO11_CTRL_IRQOVER_LOW                         (0x2 << RP2040_IO_BANK0_GPIO11_CTRL_IRQOVER_SHIFT)  /* drive interrupt low */
#define RP2040_IO_BANK0_GPIO11_CTRL_IRQOVER_HIGH                        (0x3 << RP2040_IO_BANK0_GPIO11_CTRL_IRQOVER_SHIFT)  /* drive interrupt high */
#define RP2040_IO_BANK0_GPIO11_CTRL_INOVER_SHIFT                        (16)
#define RP2040_IO_BANK0_GPIO11_CTRL_INOVER_MASK                         (0x03 << RP2040_IO_BANK0_GPIO11_CTRL_INOVER_SHIFT)
#define RP2040_IO_BANK0_GPIO11_CTRL_INOVER_NORMAL                       (0x0 << RP2040_IO_BANK0_GPIO11_CTRL_INOVER_SHIFT)  /* don't invert the peri input */
#define RP2040_IO_BANK0_GPIO11_CTRL_INOVER_INVERT                       (0x1 << RP2040_IO_BANK0_GPIO11_CTRL_INOVER_SHIFT)  /* invert the peri input */
#define RP2040_IO_BANK0_GPIO11_CTRL_INOVER_LOW                          (0x2 << RP2040_IO_BANK0_GPIO11_CTRL_INOVER_SHIFT)  /* drive peri input low */
#define RP2040_IO_BANK0_GPIO11_CTRL_INOVER_HIGH                         (0x3 << RP2040_IO_BANK0_GPIO11_CTRL_INOVER_SHIFT)  /* drive peri input high */
#define RP2040_IO_BANK0_GPIO11_CTRL_OEOVER_SHIFT                        (12)
#define RP2040_IO_BANK0_GPIO11_CTRL_OEOVER_MASK                         (0x03 << RP2040_IO_BANK0_GPIO11_CTRL_OEOVER_SHIFT)
#define RP2040_IO_BANK0_GPIO11_CTRL_OEOVER_NORMAL                       (0x0 << RP2040_IO_BANK0_GPIO11_CTRL_OEOVER_SHIFT)  /* drive output enable from peripheral signal selected by funcsel */
#define RP2040_IO_BANK0_GPIO11_CTRL_OEOVER_INVERT                       (0x1 << RP2040_IO_BANK0_GPIO11_CTRL_OEOVER_SHIFT)  /* drive output enable from inverse of peripheral signal selected by funcsel */
#define RP2040_IO_BANK0_GPIO11_CTRL_OEOVER_DISABLE                      (0x2 << RP2040_IO_BANK0_GPIO11_CTRL_OEOVER_SHIFT)  /* disable output */
#define RP2040_IO_BANK0_GPIO11_CTRL_OEOVER_ENABLE                       (0x3 << RP2040_IO_BANK0_GPIO11_CTRL_OEOVER_SHIFT)  /* enable output */
#define RP2040_IO_BANK0_GPIO11_CTRL_OUTOVER_SHIFT                       (8)
#define RP2040_IO_BANK0_GPIO11_CTRL_OUTOVER_MASK                        (0x03 << RP2040_IO_BANK0_GPIO11_CTRL_OUTOVER_SHIFT)
#define RP2040_IO_BANK0_GPIO11_CTRL_OUTOVER_NORMAL                      (0x0 << RP2040_IO_BANK0_GPIO11_CTRL_OUTOVER_SHIFT)  /* drive output from peripheral signal selected by funcsel */
#define RP2040_IO_BANK0_GPIO11_CTRL_OUTOVER_INVERT                      (0x1 << RP2040_IO_BANK0_GPIO11_CTRL_OUTOVER_SHIFT)  /* drive output from inverse of peripheral signal selected by funcsel */
#define RP2040_IO_BANK0_GPIO11_CTRL_OUTOVER_LOW                         (0x2 << RP2040_IO_BANK0_GPIO11_CTRL_OUTOVER_SHIFT)  /* drive output low */
#define RP2040_IO_BANK0_GPIO11_CTRL_OUTOVER_HIGH                        (0x3 << RP2040_IO_BANK0_GPIO11_CTRL_OUTOVER_SHIFT)  /* drive output high */
#define RP2040_IO_BANK0_GPIO11_CTRL_FUNCSEL_MASK                        (0x1f)
#define RP2040_IO_BANK0_GPIO11_CTRL_FUNCSEL_SPI1_TX                     (0x1)
#define RP2040_IO_BANK0_GPIO11_CTRL_FUNCSEL_UART1_RTS                   (0x2)
#define RP2040_IO_BANK0_GPIO11_CTRL_FUNCSEL_I2C1_SCL                    (0x3)
#define RP2040_IO_BANK0_GPIO11_CTRL_FUNCSEL_PWM_B_5                     (0x4)
#define RP2040_IO_BANK0_GPIO11_CTRL_FUNCSEL_SIO_11                      (0x5)
#define RP2040_IO_BANK0_GPIO11_CTRL_FUNCSEL_PIO0_11                     (0x6)
#define RP2040_IO_BANK0_GPIO11_CTRL_FUNCSEL_PIO1_11                     (0x7)
#define RP2040_IO_BANK0_GPIO11_CTRL_FUNCSEL_USB_MUXING_EXTPHY_SUSPND    (0x8)
#define RP2040_IO_BANK0_GPIO11_CTRL_FUNCSEL_USB_MUXING_VBUS_EN          (0x9)
#define RP2040_IO_BANK0_GPIO11_CTRL_FUNCSEL_NULL                        (0x1f)

#define RP2040_IO_BANK0_GPIO12_STATUS_IRQTOPROC                         (1 << 26)  /* interrupt to processors, after override is applied */
#define RP2040_IO_BANK0_GPIO12_STATUS_IRQFROMPAD                        (1 << 24)  /* interrupt from pad before override is applied */
#define RP2040_IO_BANK0_GPIO12_STATUS_INTOPERI                          (1 << 19)  /* input signal to peripheral, after override is applied */
#define RP2040_IO_BANK0_GPIO12_STATUS_INFROMPAD                         (1 << 17)  /* input signal from pad, before override is applied */
#define RP2040_IO_BANK0_GPIO12_STATUS_OETOPAD                           (1 << 13)  /* output enable to pad after register override is applied */
#define RP2040_IO_BANK0_GPIO12_STATUS_OEFROMPERI                        (1 << 12)  /* output enable from selected peripheral, before register override is applied */
#define RP2040_IO_BANK0_GPIO12_STATUS_OUTTOPAD                          (1 << 9)  /* output signal to pad after register override is applied */
#define RP2040_IO_BANK0_GPIO12_STATUS_OUTFROMPERI                       (1 << 8)  /* output signal from selected peripheral, before register override is applied */

#define RP2040_IO_BANK0_GPIO12_CTRL_IRQOVER_SHIFT                       (28)
#define RP2040_IO_BANK0_GPIO12_CTRL_IRQOVER_MASK                        (0x03 << RP2040_IO_BANK0_GPIO12_CTRL_IRQOVER_SHIFT)
#define RP2040_IO_BANK0_GPIO12_CTRL_IRQOVER_NORMAL                      (0x0 << RP2040_IO_BANK0_GPIO12_CTRL_IRQOVER_SHIFT)  /* don't invert the interrupt */
#define RP2040_IO_BANK0_GPIO12_CTRL_IRQOVER_INVERT                      (0x1 << RP2040_IO_BANK0_GPIO12_CTRL_IRQOVER_SHIFT)  /* invert the interrupt */
#define RP2040_IO_BANK0_GPIO12_CTRL_IRQOVER_LOW                         (0x2 << RP2040_IO_BANK0_GPIO12_CTRL_IRQOVER_SHIFT)  /* drive interrupt low */
#define RP2040_IO_BANK0_GPIO12_CTRL_IRQOVER_HIGH                        (0x3 << RP2040_IO_BANK0_GPIO12_CTRL_IRQOVER_SHIFT)  /* drive interrupt high */
#define RP2040_IO_BANK0_GPIO12_CTRL_INOVER_SHIFT                        (16)
#define RP2040_IO_BANK0_GPIO12_CTRL_INOVER_MASK                         (0x03 << RP2040_IO_BANK0_GPIO12_CTRL_INOVER_SHIFT)
#define RP2040_IO_BANK0_GPIO12_CTRL_INOVER_NORMAL                       (0x0 << RP2040_IO_BANK0_GPIO12_CTRL_INOVER_SHIFT)  /* don't invert the peri input */
#define RP2040_IO_BANK0_GPIO12_CTRL_INOVER_INVERT                       (0x1 << RP2040_IO_BANK0_GPIO12_CTRL_INOVER_SHIFT)  /* invert the peri input */
#define RP2040_IO_BANK0_GPIO12_CTRL_INOVER_LOW                          (0x2 << RP2040_IO_BANK0_GPIO12_CTRL_INOVER_SHIFT)  /* drive peri input low */
#define RP2040_IO_BANK0_GPIO12_CTRL_INOVER_HIGH                         (0x3 << RP2040_IO_BANK0_GPIO12_CTRL_INOVER_SHIFT)  /* drive peri input high */
#define RP2040_IO_BANK0_GPIO12_CTRL_OEOVER_SHIFT                        (12)
#define RP2040_IO_BANK0_GPIO12_CTRL_OEOVER_MASK                         (0x03 << RP2040_IO_BANK0_GPIO12_CTRL_OEOVER_SHIFT)
#define RP2040_IO_BANK0_GPIO12_CTRL_OEOVER_NORMAL                       (0x0 << RP2040_IO_BANK0_GPIO12_CTRL_OEOVER_SHIFT)  /* drive output enable from peripheral signal selected by funcsel */
#define RP2040_IO_BANK0_GPIO12_CTRL_OEOVER_INVERT                       (0x1 << RP2040_IO_BANK0_GPIO12_CTRL_OEOVER_SHIFT)  /* drive output enable from inverse of peripheral signal selected by funcsel */
#define RP2040_IO_BANK0_GPIO12_CTRL_OEOVER_DISABLE                      (0x2 << RP2040_IO_BANK0_GPIO12_CTRL_OEOVER_SHIFT)  /* disable output */
#define RP2040_IO_BANK0_GPIO12_CTRL_OEOVER_ENABLE                       (0x3 << RP2040_IO_BANK0_GPIO12_CTRL_OEOVER_SHIFT)  /* enable output */
#define RP2040_IO_BANK0_GPIO12_CTRL_OUTOVER_SHIFT                       (8)
#define RP2040_IO_BANK0_GPIO12_CTRL_OUTOVER_MASK                        (0x03 << RP2040_IO_BANK0_GPIO12_CTRL_OUTOVER_SHIFT)
#define RP2040_IO_BANK0_GPIO12_CTRL_OUTOVER_NORMAL                      (0x0 << RP2040_IO_BANK0_GPIO12_CTRL_OUTOVER_SHIFT)  /* drive output from peripheral signal selected by funcsel */
#define RP2040_IO_BANK0_GPIO12_CTRL_OUTOVER_INVERT                      (0x1 << RP2040_IO_BANK0_GPIO12_CTRL_OUTOVER_SHIFT)  /* drive output from inverse of peripheral signal selected by funcsel */
#define RP2040_IO_BANK0_GPIO12_CTRL_OUTOVER_LOW                         (0x2 << RP2040_IO_BANK0_GPIO12_CTRL_OUTOVER_SHIFT)  /* drive output low */
#define RP2040_IO_BANK0_GPIO12_CTRL_OUTOVER_HIGH                        (0x3 << RP2040_IO_BANK0_GPIO12_CTRL_OUTOVER_SHIFT)  /* drive output high */
#define RP2040_IO_BANK0_GPIO12_CTRL_FUNCSEL_MASK                        (0x1f)
#define RP2040_IO_BANK0_GPIO12_CTRL_FUNCSEL_SPI1_RX                     (0x1)
#define RP2040_IO_BANK0_GPIO12_CTRL_FUNCSEL_UART0_TX                    (0x2)
#define RP2040_IO_BANK0_GPIO12_CTRL_FUNCSEL_I2C0_SDA                    (0x3)
#define RP2040_IO_BANK0_GPIO12_CTRL_FUNCSEL_PWM_A_6                     (0x4)
#define RP2040_IO_BANK0_GPIO12_CTRL_FUNCSEL_SIO_12                      (0x5)
#define RP2040_IO_BANK0_GPIO12_CTRL_FUNCSEL_PIO0_12                     (0x6)
#define RP2040_IO_BANK0_GPIO12_CTRL_FUNCSEL_PIO1_12                     (0x7)
#define RP2040_IO_BANK0_GPIO12_CTRL_FUNCSEL_USB_MUXING_EXTPHY_SPEED     (0x8)
#define RP2040_IO_BANK0_GPIO12_CTRL_FUNCSEL_USB_MUXING_OVERCURR_DETECT  (0x9)
#define RP2040_IO_BANK0_GPIO12_CTRL_FUNCSEL_NULL                        (0x1f)

#define RP2040_IO_BANK0_GPIO13_STATUS_IRQTOPROC                         (1 << 26)  /* interrupt to processors, after override is applied */
#define RP2040_IO_BANK0_GPIO13_STATUS_IRQFROMPAD                        (1 << 24)  /* interrupt from pad before override is applied */
#define RP2040_IO_BANK0_GPIO13_STATUS_INTOPERI                          (1 << 19)  /* input signal to peripheral, after override is applied */
#define RP2040_IO_BANK0_GPIO13_STATUS_INFROMPAD                         (1 << 17)  /* input signal from pad, before override is applied */
#define RP2040_IO_BANK0_GPIO13_STATUS_OETOPAD                           (1 << 13)  /* output enable to pad after register override is applied */
#define RP2040_IO_BANK0_GPIO13_STATUS_OEFROMPERI                        (1 << 12)  /* output enable from selected peripheral, before register override is applied */
#define RP2040_IO_BANK0_GPIO13_STATUS_OUTTOPAD                          (1 << 9)  /* output signal to pad after register override is applied */
#define RP2040_IO_BANK0_GPIO13_STATUS_OUTFROMPERI                       (1 << 8)  /* output signal from selected peripheral, before register override is applied */

#define RP2040_IO_BANK0_GPIO13_CTRL_IRQOVER_SHIFT                       (28)
#define RP2040_IO_BANK0_GPIO13_CTRL_IRQOVER_MASK                        (0x03 << RP2040_IO_BANK0_GPIO13_CTRL_IRQOVER_SHIFT)
#define RP2040_IO_BANK0_GPIO13_CTRL_IRQOVER_NORMAL                      (0x0 << RP2040_IO_BANK0_GPIO13_CTRL_IRQOVER_SHIFT)  /* don't invert the interrupt */
#define RP2040_IO_BANK0_GPIO13_CTRL_IRQOVER_INVERT                      (0x1 << RP2040_IO_BANK0_GPIO13_CTRL_IRQOVER_SHIFT)  /* invert the interrupt */
#define RP2040_IO_BANK0_GPIO13_CTRL_IRQOVER_LOW                         (0x2 << RP2040_IO_BANK0_GPIO13_CTRL_IRQOVER_SHIFT)  /* drive interrupt low */
#define RP2040_IO_BANK0_GPIO13_CTRL_IRQOVER_HIGH                        (0x3 << RP2040_IO_BANK0_GPIO13_CTRL_IRQOVER_SHIFT)  /* drive interrupt high */
#define RP2040_IO_BANK0_GPIO13_CTRL_INOVER_SHIFT                        (16)
#define RP2040_IO_BANK0_GPIO13_CTRL_INOVER_MASK                         (0x03 << RP2040_IO_BANK0_GPIO13_CTRL_INOVER_SHIFT)
#define RP2040_IO_BANK0_GPIO13_CTRL_INOVER_NORMAL                       (0x0 << RP2040_IO_BANK0_GPIO13_CTRL_INOVER_SHIFT)  /* don't invert the peri input */
#define RP2040_IO_BANK0_GPIO13_CTRL_INOVER_INVERT                       (0x1 << RP2040_IO_BANK0_GPIO13_CTRL_INOVER_SHIFT)  /* invert the peri input */
#define RP2040_IO_BANK0_GPIO13_CTRL_INOVER_LOW                          (0x2 << RP2040_IO_BANK0_GPIO13_CTRL_INOVER_SHIFT)  /* drive peri input low */
#define RP2040_IO_BANK0_GPIO13_CTRL_INOVER_HIGH                         (0x3 << RP2040_IO_BANK0_GPIO13_CTRL_INOVER_SHIFT)  /* drive peri input high */
#define RP2040_IO_BANK0_GPIO13_CTRL_OEOVER_SHIFT                        (12)
#define RP2040_IO_BANK0_GPIO13_CTRL_OEOVER_MASK                         (0x03 << RP2040_IO_BANK0_GPIO13_CTRL_OEOVER_SHIFT)
#define RP2040_IO_BANK0_GPIO13_CTRL_OEOVER_NORMAL                       (0x0 << RP2040_IO_BANK0_GPIO13_CTRL_OEOVER_SHIFT)  /* drive output enable from peripheral signal selected by funcsel */
#define RP2040_IO_BANK0_GPIO13_CTRL_OEOVER_INVERT                       (0x1 << RP2040_IO_BANK0_GPIO13_CTRL_OEOVER_SHIFT)  /* drive output enable from inverse of peripheral signal selected by funcsel */
#define RP2040_IO_BANK0_GPIO13_CTRL_OEOVER_DISABLE                      (0x2 << RP2040_IO_BANK0_GPIO13_CTRL_OEOVER_SHIFT)  /* disable output */
#define RP2040_IO_BANK0_GPIO13_CTRL_OEOVER_ENABLE                       (0x3 << RP2040_IO_BANK0_GPIO13_CTRL_OEOVER_SHIFT)  /* enable output */
#define RP2040_IO_BANK0_GPIO13_CTRL_OUTOVER_SHIFT                       (8)
#define RP2040_IO_BANK0_GPIO13_CTRL_OUTOVER_MASK                        (0x03 << RP2040_IO_BANK0_GPIO13_CTRL_OUTOVER_SHIFT)
#define RP2040_IO_BANK0_GPIO13_CTRL_OUTOVER_NORMAL                      (0x0 << RP2040_IO_BANK0_GPIO13_CTRL_OUTOVER_SHIFT)  /* drive output from peripheral signal selected by funcsel */
#define RP2040_IO_BANK0_GPIO13_CTRL_OUTOVER_INVERT                      (0x1 << RP2040_IO_BANK0_GPIO13_CTRL_OUTOVER_SHIFT)  /* drive output from inverse of peripheral signal selected by funcsel */
#define RP2040_IO_BANK0_GPIO13_CTRL_OUTOVER_LOW                         (0x2 << RP2040_IO_BANK0_GPIO13_CTRL_OUTOVER_SHIFT)  /* drive output low */
#define RP2040_IO_BANK0_GPIO13_CTRL_OUTOVER_HIGH                        (0x3 << RP2040_IO_BANK0_GPIO13_CTRL_OUTOVER_SHIFT)  /* drive output high */
#define RP2040_IO_BANK0_GPIO13_CTRL_FUNCSEL_MASK                        (0x1f)
#define RP2040_IO_BANK0_GPIO13_CTRL_FUNCSEL_SPI1_SS_N                   (0x1)
#define RP2040_IO_BANK0_GPIO13_CTRL_FUNCSEL_UART0_RX                    (0x2)
#define RP2040_IO_BANK0_GPIO13_CTRL_FUNCSEL_I2C0_SCL                    (0x3)
#define RP2040_IO_BANK0_GPIO13_CTRL_FUNCSEL_PWM_B_6                     (0x4)
#define RP2040_IO_BANK0_GPIO13_CTRL_FUNCSEL_SIO_13                      (0x5)
#define RP2040_IO_BANK0_GPIO13_CTRL_FUNCSEL_PIO0_13                     (0x6)
#define RP2040_IO_BANK0_GPIO13_CTRL_FUNCSEL_PIO1_13                     (0x7)
#define RP2040_IO_BANK0_GPIO13_CTRL_FUNCSEL_USB_MUXING_EXTPHY_VPO       (0x8)
#define RP2040_IO_BANK0_GPIO13_CTRL_FUNCSEL_USB_MUXING_VBUS_DETECT      (0x9)
#define RP2040_IO_BANK0_GPIO13_CTRL_FUNCSEL_NULL                        (0x1f)

#define RP2040_IO_BANK0_GPIO14_STATUS_IRQTOPROC                         (1 << 26)  /* interrupt to processors, after override is applied */
#define RP2040_IO_BANK0_GPIO14_STATUS_IRQFROMPAD                        (1 << 24)  /* interrupt from pad before override is applied */
#define RP2040_IO_BANK0_GPIO14_STATUS_INTOPERI                          (1 << 19)  /* input signal to peripheral, after override is applied */
#define RP2040_IO_BANK0_GPIO14_STATUS_INFROMPAD                         (1 << 17)  /* input signal from pad, before override is applied */
#define RP2040_IO_BANK0_GPIO14_STATUS_OETOPAD                           (1 << 13)  /* output enable to pad after register override is applied */
#define RP2040_IO_BANK0_GPIO14_STATUS_OEFROMPERI                        (1 << 12)  /* output enable from selected peripheral, before register override is applied */
#define RP2040_IO_BANK0_GPIO14_STATUS_OUTTOPAD                          (1 << 9)  /* output signal to pad after register override is applied */
#define RP2040_IO_BANK0_GPIO14_STATUS_OUTFROMPERI                       (1 << 8)  /* output signal from selected peripheral, before register override is applied */

#define RP2040_IO_BANK0_GPIO14_CTRL_IRQOVER_SHIFT                       (28)
#define RP2040_IO_BANK0_GPIO14_CTRL_IRQOVER_MASK                        (0x03 << RP2040_IO_BANK0_GPIO14_CTRL_IRQOVER_SHIFT)
#define RP2040_IO_BANK0_GPIO14_CTRL_IRQOVER_NORMAL                      (0x0 << RP2040_IO_BANK0_GPIO14_CTRL_IRQOVER_SHIFT)  /* don't invert the interrupt */
#define RP2040_IO_BANK0_GPIO14_CTRL_IRQOVER_INVERT                      (0x1 << RP2040_IO_BANK0_GPIO14_CTRL_IRQOVER_SHIFT)  /* invert the interrupt */
#define RP2040_IO_BANK0_GPIO14_CTRL_IRQOVER_LOW                         (0x2 << RP2040_IO_BANK0_GPIO14_CTRL_IRQOVER_SHIFT)  /* drive interrupt low */
#define RP2040_IO_BANK0_GPIO14_CTRL_IRQOVER_HIGH                        (0x3 << RP2040_IO_BANK0_GPIO14_CTRL_IRQOVER_SHIFT)  /* drive interrupt high */
#define RP2040_IO_BANK0_GPIO14_CTRL_INOVER_SHIFT                        (16)
#define RP2040_IO_BANK0_GPIO14_CTRL_INOVER_MASK                         (0x03 << RP2040_IO_BANK0_GPIO14_CTRL_INOVER_SHIFT)
#define RP2040_IO_BANK0_GPIO14_CTRL_INOVER_NORMAL                       (0x0 << RP2040_IO_BANK0_GPIO14_CTRL_INOVER_SHIFT)  /* don't invert the peri input */
#define RP2040_IO_BANK0_GPIO14_CTRL_INOVER_INVERT                       (0x1 << RP2040_IO_BANK0_GPIO14_CTRL_INOVER_SHIFT)  /* invert the peri input */
#define RP2040_IO_BANK0_GPIO14_CTRL_INOVER_LOW                          (0x2 << RP2040_IO_BANK0_GPIO14_CTRL_INOVER_SHIFT)  /* drive peri input low */
#define RP2040_IO_BANK0_GPIO14_CTRL_INOVER_HIGH                         (0x3 << RP2040_IO_BANK0_GPIO14_CTRL_INOVER_SHIFT)  /* drive peri input high */
#define RP2040_IO_BANK0_GPIO14_CTRL_OEOVER_SHIFT                        (12)
#define RP2040_IO_BANK0_GPIO14_CTRL_OEOVER_MASK                         (0x03 << RP2040_IO_BANK0_GPIO14_CTRL_OEOVER_SHIFT)
#define RP2040_IO_BANK0_GPIO14_CTRL_OEOVER_NORMAL                       (0x0 << RP2040_IO_BANK0_GPIO14_CTRL_OEOVER_SHIFT)  /* drive output enable from peripheral signal selected by funcsel */
#define RP2040_IO_BANK0_GPIO14_CTRL_OEOVER_INVERT                       (0x1 << RP2040_IO_BANK0_GPIO14_CTRL_OEOVER_SHIFT)  /* drive output enable from inverse of peripheral signal selected by funcsel */
#define RP2040_IO_BANK0_GPIO14_CTRL_OEOVER_DISABLE                      (0x2 << RP2040_IO_BANK0_GPIO14_CTRL_OEOVER_SHIFT)  /* disable output */
#define RP2040_IO_BANK0_GPIO14_CTRL_OEOVER_ENABLE                       (0x3 << RP2040_IO_BANK0_GPIO14_CTRL_OEOVER_SHIFT)  /* enable output */
#define RP2040_IO_BANK0_GPIO14_CTRL_OUTOVER_SHIFT                       (8)
#define RP2040_IO_BANK0_GPIO14_CTRL_OUTOVER_MASK                        (0x03 << RP2040_IO_BANK0_GPIO14_CTRL_OUTOVER_SHIFT)
#define RP2040_IO_BANK0_GPIO14_CTRL_OUTOVER_NORMAL                      (0x0 << RP2040_IO_BANK0_GPIO14_CTRL_OUTOVER_SHIFT)  /* drive output from peripheral signal selected by funcsel */
#define RP2040_IO_BANK0_GPIO14_CTRL_OUTOVER_INVERT                      (0x1 << RP2040_IO_BANK0_GPIO14_CTRL_OUTOVER_SHIFT)  /* drive output from inverse of peripheral signal selected by funcsel */
#define RP2040_IO_BANK0_GPIO14_CTRL_OUTOVER_LOW                         (0x2 << RP2040_IO_BANK0_GPIO14_CTRL_OUTOVER_SHIFT)  /* drive output low */
#define RP2040_IO_BANK0_GPIO14_CTRL_OUTOVER_HIGH                        (0x3 << RP2040_IO_BANK0_GPIO14_CTRL_OUTOVER_SHIFT)  /* drive output high */
#define RP2040_IO_BANK0_GPIO14_CTRL_FUNCSEL_MASK                        (0x1f)
#define RP2040_IO_BANK0_GPIO14_CTRL_FUNCSEL_SPI1_SCLK                   (0x1)
#define RP2040_IO_BANK0_GPIO14_CTRL_FUNCSEL_UART0_CTS                   (0x2)
#define RP2040_IO_BANK0_GPIO14_CTRL_FUNCSEL_I2C1_SDA                    (0x3)
#define RP2040_IO_BANK0_GPIO14_CTRL_FUNCSEL_PWM_A_7                     (0x4)
#define RP2040_IO_BANK0_GPIO14_CTRL_FUNCSEL_SIO_14                      (0x5)
#define RP2040_IO_BANK0_GPIO14_CTRL_FUNCSEL_PIO0_14                     (0x6)
#define RP2040_IO_BANK0_GPIO14_CTRL_FUNCSEL_PIO1_14                     (0x7)
#define RP2040_IO_BANK0_GPIO14_CTRL_FUNCSEL_USB_MUXING_EXTPHY_VMO       (0x8)
#define RP2040_IO_BANK0_GPIO14_CTRL_FUNCSEL_USB_MUXING_VBUS_EN          (0x9)
#define RP2040_IO_BANK0_GPIO14_CTRL_FUNCSEL_NULL                        (0x1f)

#define RP2040_IO_BANK0_GPIO15_STATUS_IRQTOPROC                         (1 << 26)  /* interrupt to processors, after override is applied */
#define RP2040_IO_BANK0_GPIO15_STATUS_IRQFROMPAD                        (1 << 24)  /* interrupt from pad before override is applied */
#define RP2040_IO_BANK0_GPIO15_STATUS_INTOPERI                          (1 << 19)  /* input signal to peripheral, after override is applied */
#define RP2040_IO_BANK0_GPIO15_STATUS_INFROMPAD                         (1 << 17)  /* input signal from pad, before override is applied */
#define RP2040_IO_BANK0_GPIO15_STATUS_OETOPAD                           (1 << 13)  /* output enable to pad after register override is applied */
#define RP2040_IO_BANK0_GPIO15_STATUS_OEFROMPERI                        (1 << 12)  /* output enable from selected peripheral, before register override is applied */
#define RP2040_IO_BANK0_GPIO15_STATUS_OUTTOPAD                          (1 << 9)  /* output signal to pad after register override is applied */
#define RP2040_IO_BANK0_GPIO15_STATUS_OUTFROMPERI                       (1 << 8)  /* output signal from selected peripheral, before register override is applied */

#define RP2040_IO_BANK0_GPIO15_CTRL_IRQOVER_SHIFT                       (28)
#define RP2040_IO_BANK0_GPIO15_CTRL_IRQOVER_MASK                        (0x03 << RP2040_IO_BANK0_GPIO15_CTRL_IRQOVER_SHIFT)
#define RP2040_IO_BANK0_GPIO15_CTRL_IRQOVER_NORMAL                      (0x0 << RP2040_IO_BANK0_GPIO15_CTRL_IRQOVER_SHIFT)  /* don't invert the interrupt */
#define RP2040_IO_BANK0_GPIO15_CTRL_IRQOVER_INVERT                      (0x1 << RP2040_IO_BANK0_GPIO15_CTRL_IRQOVER_SHIFT)  /* invert the interrupt */
#define RP2040_IO_BANK0_GPIO15_CTRL_IRQOVER_LOW                         (0x2 << RP2040_IO_BANK0_GPIO15_CTRL_IRQOVER_SHIFT)  /* drive interrupt low */
#define RP2040_IO_BANK0_GPIO15_CTRL_IRQOVER_HIGH                        (0x3 << RP2040_IO_BANK0_GPIO15_CTRL_IRQOVER_SHIFT)  /* drive interrupt high */
#define RP2040_IO_BANK0_GPIO15_CTRL_INOVER_SHIFT                        (16)
#define RP2040_IO_BANK0_GPIO15_CTRL_INOVER_MASK                         (0x03 << RP2040_IO_BANK0_GPIO15_CTRL_INOVER_SHIFT)
#define RP2040_IO_BANK0_GPIO15_CTRL_INOVER_NORMAL                       (0x0 << RP2040_IO_BANK0_GPIO15_CTRL_INOVER_SHIFT)  /* don't invert the peri input */
#define RP2040_IO_BANK0_GPIO15_CTRL_INOVER_INVERT                       (0x1 << RP2040_IO_BANK0_GPIO15_CTRL_INOVER_SHIFT)  /* invert the peri input */
#define RP2040_IO_BANK0_GPIO15_CTRL_INOVER_LOW                          (0x2 << RP2040_IO_BANK0_GPIO15_CTRL_INOVER_SHIFT)  /* drive peri input low */
#define RP2040_IO_BANK0_GPIO15_CTRL_INOVER_HIGH                         (0x3 << RP2040_IO_BANK0_GPIO15_CTRL_INOVER_SHIFT)  /* drive peri input high */
#define RP2040_IO_BANK0_GPIO15_CTRL_OEOVER_SHIFT                        (12)
#define RP2040_IO_BANK0_GPIO15_CTRL_OEOVER_MASK                         (0x03 << RP2040_IO_BANK0_GPIO15_CTRL_OEOVER_SHIFT)
#define RP2040_IO_BANK0_GPIO15_CTRL_OEOVER_NORMAL                       (0x0 << RP2040_IO_BANK0_GPIO15_CTRL_OEOVER_SHIFT)  /* drive output enable from peripheral signal selected by funcsel */
#define RP2040_IO_BANK0_GPIO15_CTRL_OEOVER_INVERT                       (0x1 << RP2040_IO_BANK0_GPIO15_CTRL_OEOVER_SHIFT)  /* drive output enable from inverse of peripheral signal selected by funcsel */
#define RP2040_IO_BANK0_GPIO15_CTRL_OEOVER_DISABLE                      (0x2 << RP2040_IO_BANK0_GPIO15_CTRL_OEOVER_SHIFT)  /* disable output */
#define RP2040_IO_BANK0_GPIO15_CTRL_OEOVER_ENABLE                       (0x3 << RP2040_IO_BANK0_GPIO15_CTRL_OEOVER_SHIFT)  /* enable output */
#define RP2040_IO_BANK0_GPIO15_CTRL_OUTOVER_SHIFT                       (8)
#define RP2040_IO_BANK0_GPIO15_CTRL_OUTOVER_MASK                        (0x03 << RP2040_IO_BANK0_GPIO15_CTRL_OUTOVER_SHIFT)
#define RP2040_IO_BANK0_GPIO15_CTRL_OUTOVER_NORMAL                      (0x0 << RP2040_IO_BANK0_GPIO15_CTRL_OUTOVER_SHIFT)  /* drive output from peripheral signal selected by funcsel */
#define RP2040_IO_BANK0_GPIO15_CTRL_OUTOVER_INVERT                      (0x1 << RP2040_IO_BANK0_GPIO15_CTRL_OUTOVER_SHIFT)  /* drive output from inverse of peripheral signal selected by funcsel */
#define RP2040_IO_BANK0_GPIO15_CTRL_OUTOVER_LOW                         (0x2 << RP2040_IO_BANK0_GPIO15_CTRL_OUTOVER_SHIFT)  /* drive output low */
#define RP2040_IO_BANK0_GPIO15_CTRL_OUTOVER_HIGH                        (0x3 << RP2040_IO_BANK0_GPIO15_CTRL_OUTOVER_SHIFT)  /* drive output high */
#define RP2040_IO_BANK0_GPIO15_CTRL_FUNCSEL_MASK                        (0x1f)
#define RP2040_IO_BANK0_GPIO15_CTRL_FUNCSEL_SPI1_TX                     (0x1)
#define RP2040_IO_BANK0_GPIO15_CTRL_FUNCSEL_UART0_RTS                   (0x2)
#define RP2040_IO_BANK0_GPIO15_CTRL_FUNCSEL_I2C1_SCL                    (0x3)
#define RP2040_IO_BANK0_GPIO15_CTRL_FUNCSEL_PWM_B_7                     (0x4)
#define RP2040_IO_BANK0_GPIO15_CTRL_FUNCSEL_SIO_15                      (0x5)
#define RP2040_IO_BANK0_GPIO15_CTRL_FUNCSEL_PIO0_15                     (0x6)
#define RP2040_IO_BANK0_GPIO15_CTRL_FUNCSEL_PIO1_15                     (0x7)
#define RP2040_IO_BANK0_GPIO15_CTRL_FUNCSEL_USB_MUXING_DIGITAL_DP       (0x8)
#define RP2040_IO_BANK0_GPIO15_CTRL_FUNCSEL_USB_MUXING_OVERCURR_DETECT  (0x9)
#define RP2040_IO_BANK0_GPIO15_CTRL_FUNCSEL_NULL                        (0x1f)

#define RP2040_IO_BANK0_GPIO16_STATUS_IRQTOPROC                         (1 << 26)  /* interrupt to processors, after override is applied */
#define RP2040_IO_BANK0_GPIO16_STATUS_IRQFROMPAD                        (1 << 24)  /* interrupt from pad before override is applied */
#define RP2040_IO_BANK0_GPIO16_STATUS_INTOPERI                          (1 << 19)  /* input signal to peripheral, after override is applied */
#define RP2040_IO_BANK0_GPIO16_STATUS_INFROMPAD                         (1 << 17)  /* input signal from pad, before override is applied */
#define RP2040_IO_BANK0_GPIO16_STATUS_OETOPAD                           (1 << 13)  /* output enable to pad after register override is applied */
#define RP2040_IO_BANK0_GPIO16_STATUS_OEFROMPERI                        (1 << 12)  /* output enable from selected peripheral, before register override is applied */
#define RP2040_IO_BANK0_GPIO16_STATUS_OUTTOPAD                          (1 << 9)  /* output signal to pad after register override is applied */
#define RP2040_IO_BANK0_GPIO16_STATUS_OUTFROMPERI                       (1 << 8)  /* output signal from selected peripheral, before register override is applied */

#define RP2040_IO_BANK0_GPIO16_CTRL_IRQOVER_SHIFT                       (28)
#define RP2040_IO_BANK0_GPIO16_CTRL_IRQOVER_MASK                        (0x03 << RP2040_IO_BANK0_GPIO16_CTRL_IRQOVER_SHIFT)
#define RP2040_IO_BANK0_GPIO16_CTRL_IRQOVER_NORMAL                      (0x0 << RP2040_IO_BANK0_GPIO16_CTRL_IRQOVER_SHIFT)  /* don't invert the interrupt */
#define RP2040_IO_BANK0_GPIO16_CTRL_IRQOVER_INVERT                      (0x1 << RP2040_IO_BANK0_GPIO16_CTRL_IRQOVER_SHIFT)  /* invert the interrupt */
#define RP2040_IO_BANK0_GPIO16_CTRL_IRQOVER_LOW                         (0x2 << RP2040_IO_BANK0_GPIO16_CTRL_IRQOVER_SHIFT)  /* drive interrupt low */
#define RP2040_IO_BANK0_GPIO16_CTRL_IRQOVER_HIGH                        (0x3 << RP2040_IO_BANK0_GPIO16_CTRL_IRQOVER_SHIFT)  /* drive interrupt high */
#define RP2040_IO_BANK0_GPIO16_CTRL_INOVER_SHIFT                        (16)
#define RP2040_IO_BANK0_GPIO16_CTRL_INOVER_MASK                         (0x03 << RP2040_IO_BANK0_GPIO16_CTRL_INOVER_SHIFT)
#define RP2040_IO_BANK0_GPIO16_CTRL_INOVER_NORMAL                       (0x0 << RP2040_IO_BANK0_GPIO16_CTRL_INOVER_SHIFT)  /* don't invert the peri input */
#define RP2040_IO_BANK0_GPIO16_CTRL_INOVER_INVERT                       (0x1 << RP2040_IO_BANK0_GPIO16_CTRL_INOVER_SHIFT)  /* invert the peri input */
#define RP2040_IO_BANK0_GPIO16_CTRL_INOVER_LOW                          (0x2 << RP2040_IO_BANK0_GPIO16_CTRL_INOVER_SHIFT)  /* drive peri input low */
#define RP2040_IO_BANK0_GPIO16_CTRL_INOVER_HIGH                         (0x3 << RP2040_IO_BANK0_GPIO16_CTRL_INOVER_SHIFT)  /* drive peri input high */
#define RP2040_IO_BANK0_GPIO16_CTRL_OEOVER_SHIFT                        (12)
#define RP2040_IO_BANK0_GPIO16_CTRL_OEOVER_MASK                         (0x03 << RP2040_IO_BANK0_GPIO16_CTRL_OEOVER_SHIFT)
#define RP2040_IO_BANK0_GPIO16_CTRL_OEOVER_NORMAL                       (0x0 << RP2040_IO_BANK0_GPIO16_CTRL_OEOVER_SHIFT)  /* drive output enable from peripheral signal selected by funcsel */
#define RP2040_IO_BANK0_GPIO16_CTRL_OEOVER_INVERT                       (0x1 << RP2040_IO_BANK0_GPIO16_CTRL_OEOVER_SHIFT)  /* drive output enable from inverse of peripheral signal selected by funcsel */
#define RP2040_IO_BANK0_GPIO16_CTRL_OEOVER_DISABLE                      (0x2 << RP2040_IO_BANK0_GPIO16_CTRL_OEOVER_SHIFT)  /* disable output */
#define RP2040_IO_BANK0_GPIO16_CTRL_OEOVER_ENABLE                       (0x3 << RP2040_IO_BANK0_GPIO16_CTRL_OEOVER_SHIFT)  /* enable output */
#define RP2040_IO_BANK0_GPIO16_CTRL_OUTOVER_SHIFT                       (8)
#define RP2040_IO_BANK0_GPIO16_CTRL_OUTOVER_MASK                        (0x03 << RP2040_IO_BANK0_GPIO16_CTRL_OUTOVER_SHIFT)
#define RP2040_IO_BANK0_GPIO16_CTRL_OUTOVER_NORMAL                      (0x0 << RP2040_IO_BANK0_GPIO16_CTRL_OUTOVER_SHIFT)  /* drive output from peripheral signal selected by funcsel */
#define RP2040_IO_BANK0_GPIO16_CTRL_OUTOVER_INVERT                      (0x1 << RP2040_IO_BANK0_GPIO16_CTRL_OUTOVER_SHIFT)  /* drive output from inverse of peripheral signal selected by funcsel */
#define RP2040_IO_BANK0_GPIO16_CTRL_OUTOVER_LOW                         (0x2 << RP2040_IO_BANK0_GPIO16_CTRL_OUTOVER_SHIFT)  /* drive output low */
#define RP2040_IO_BANK0_GPIO16_CTRL_OUTOVER_HIGH                        (0x3 << RP2040_IO_BANK0_GPIO16_CTRL_OUTOVER_SHIFT)  /* drive output high */
#define RP2040_IO_BANK0_GPIO16_CTRL_FUNCSEL_MASK                        (0x1f)
#define RP2040_IO_BANK0_GPIO16_CTRL_FUNCSEL_SPI0_RX                     (0x1)
#define RP2040_IO_BANK0_GPIO16_CTRL_FUNCSEL_UART0_TX                    (0x2)
#define RP2040_IO_BANK0_GPIO16_CTRL_FUNCSEL_I2C0_SDA                    (0x3)
#define RP2040_IO_BANK0_GPIO16_CTRL_FUNCSEL_PWM_A_0                     (0x4)
#define RP2040_IO_BANK0_GPIO16_CTRL_FUNCSEL_SIO_16                      (0x5)
#define RP2040_IO_BANK0_GPIO16_CTRL_FUNCSEL_PIO0_16                     (0x6)
#define RP2040_IO_BANK0_GPIO16_CTRL_FUNCSEL_PIO1_16                     (0x7)
#define RP2040_IO_BANK0_GPIO16_CTRL_FUNCSEL_USB_MUXING_DIGITAL_DM       (0x8)
#define RP2040_IO_BANK0_GPIO16_CTRL_FUNCSEL_USB_MUXING_VBUS_DETECT      (0x9)
#define RP2040_IO_BANK0_GPIO16_CTRL_FUNCSEL_NULL                        (0x1f)

#define RP2040_IO_BANK0_GPIO17_STATUS_IRQTOPROC                         (1 << 26)  /* interrupt to processors, after override is applied */
#define RP2040_IO_BANK0_GPIO17_STATUS_IRQFROMPAD                        (1 << 24)  /* interrupt from pad before override is applied */
#define RP2040_IO_BANK0_GPIO17_STATUS_INTOPERI                          (1 << 19)  /* input signal to peripheral, after override is applied */
#define RP2040_IO_BANK0_GPIO17_STATUS_INFROMPAD                         (1 << 17)  /* input signal from pad, before override is applied */
#define RP2040_IO_BANK0_GPIO17_STATUS_OETOPAD                           (1 << 13)  /* output enable to pad after register override is applied */
#define RP2040_IO_BANK0_GPIO17_STATUS_OEFROMPERI                        (1 << 12)  /* output enable from selected peripheral, before register override is applied */
#define RP2040_IO_BANK0_GPIO17_STATUS_OUTTOPAD                          (1 << 9)  /* output signal to pad after register override is applied */
#define RP2040_IO_BANK0_GPIO17_STATUS_OUTFROMPERI                       (1 << 8)  /* output signal from selected peripheral, before register override is applied */

#define RP2040_IO_BANK0_GPIO17_CTRL_IRQOVER_SHIFT                       (28)
#define RP2040_IO_BANK0_GPIO17_CTRL_IRQOVER_MASK                        (0x03 << RP2040_IO_BANK0_GPIO17_CTRL_IRQOVER_SHIFT)
#define RP2040_IO_BANK0_GPIO17_CTRL_IRQOVER_NORMAL                      (0x0 << RP2040_IO_BANK0_GPIO17_CTRL_IRQOVER_SHIFT)  /* don't invert the interrupt */
#define RP2040_IO_BANK0_GPIO17_CTRL_IRQOVER_INVERT                      (0x1 << RP2040_IO_BANK0_GPIO17_CTRL_IRQOVER_SHIFT)  /* invert the interrupt */
#define RP2040_IO_BANK0_GPIO17_CTRL_IRQOVER_LOW                         (0x2 << RP2040_IO_BANK0_GPIO17_CTRL_IRQOVER_SHIFT)  /* drive interrupt low */
#define RP2040_IO_BANK0_GPIO17_CTRL_IRQOVER_HIGH                        (0x3 << RP2040_IO_BANK0_GPIO17_CTRL_IRQOVER_SHIFT)  /* drive interrupt high */
#define RP2040_IO_BANK0_GPIO17_CTRL_INOVER_SHIFT                        (16)
#define RP2040_IO_BANK0_GPIO17_CTRL_INOVER_MASK                         (0x03 << RP2040_IO_BANK0_GPIO17_CTRL_INOVER_SHIFT)
#define RP2040_IO_BANK0_GPIO17_CTRL_INOVER_NORMAL                       (0x0 << RP2040_IO_BANK0_GPIO17_CTRL_INOVER_SHIFT)  /* don't invert the peri input */
#define RP2040_IO_BANK0_GPIO17_CTRL_INOVER_INVERT                       (0x1 << RP2040_IO_BANK0_GPIO17_CTRL_INOVER_SHIFT)  /* invert the peri input */
#define RP2040_IO_BANK0_GPIO17_CTRL_INOVER_LOW                          (0x2 << RP2040_IO_BANK0_GPIO17_CTRL_INOVER_SHIFT)  /* drive peri input low */
#define RP2040_IO_BANK0_GPIO17_CTRL_INOVER_HIGH                         (0x3 << RP2040_IO_BANK0_GPIO17_CTRL_INOVER_SHIFT)  /* drive peri input high */
#define RP2040_IO_BANK0_GPIO17_CTRL_OEOVER_SHIFT                        (12)
#define RP2040_IO_BANK0_GPIO17_CTRL_OEOVER_MASK                         (0x03 << RP2040_IO_BANK0_GPIO17_CTRL_OEOVER_SHIFT)
#define RP2040_IO_BANK0_GPIO17_CTRL_OEOVER_NORMAL                       (0x0 << RP2040_IO_BANK0_GPIO17_CTRL_OEOVER_SHIFT)  /* drive output enable from peripheral signal selected by funcsel */
#define RP2040_IO_BANK0_GPIO17_CTRL_OEOVER_INVERT                       (0x1 << RP2040_IO_BANK0_GPIO17_CTRL_OEOVER_SHIFT)  /* drive output enable from inverse of peripheral signal selected by funcsel */
#define RP2040_IO_BANK0_GPIO17_CTRL_OEOVER_DISABLE                      (0x2 << RP2040_IO_BANK0_GPIO17_CTRL_OEOVER_SHIFT)  /* disable output */
#define RP2040_IO_BANK0_GPIO17_CTRL_OEOVER_ENABLE                       (0x3 << RP2040_IO_BANK0_GPIO17_CTRL_OEOVER_SHIFT)  /* enable output */
#define RP2040_IO_BANK0_GPIO17_CTRL_OUTOVER_SHIFT                       (8)
#define RP2040_IO_BANK0_GPIO17_CTRL_OUTOVER_MASK                        (0x03 << RP2040_IO_BANK0_GPIO17_CTRL_OUTOVER_SHIFT)
#define RP2040_IO_BANK0_GPIO17_CTRL_OUTOVER_NORMAL                      (0x0 << RP2040_IO_BANK0_GPIO17_CTRL_OUTOVER_SHIFT)  /* drive output from peripheral signal selected by funcsel */
#define RP2040_IO_BANK0_GPIO17_CTRL_OUTOVER_INVERT                      (0x1 << RP2040_IO_BANK0_GPIO17_CTRL_OUTOVER_SHIFT)  /* drive output from inverse of peripheral signal selected by funcsel */
#define RP2040_IO_BANK0_GPIO17_CTRL_OUTOVER_LOW                         (0x2 << RP2040_IO_BANK0_GPIO17_CTRL_OUTOVER_SHIFT)  /* drive output low */
#define RP2040_IO_BANK0_GPIO17_CTRL_OUTOVER_HIGH                        (0x3 << RP2040_IO_BANK0_GPIO17_CTRL_OUTOVER_SHIFT)  /* drive output high */
#define RP2040_IO_BANK0_GPIO17_CTRL_FUNCSEL_MASK                        (0x1f)
#define RP2040_IO_BANK0_GPIO17_CTRL_FUNCSEL_SPI0_SS_N                   (0x1)
#define RP2040_IO_BANK0_GPIO17_CTRL_FUNCSEL_UART0_RX                    (0x2)
#define RP2040_IO_BANK0_GPIO17_CTRL_FUNCSEL_I2C0_SCL                    (0x3)
#define RP2040_IO_BANK0_GPIO17_CTRL_FUNCSEL_PWM_B_0                     (0x4)
#define RP2040_IO_BANK0_GPIO17_CTRL_FUNCSEL_SIO_17                      (0x5)
#define RP2040_IO_BANK0_GPIO17_CTRL_FUNCSEL_PIO0_17                     (0x6)
#define RP2040_IO_BANK0_GPIO17_CTRL_FUNCSEL_PIO1_17                     (0x7)
#define RP2040_IO_BANK0_GPIO17_CTRL_FUNCSEL_USB_MUXING_VBUS_EN          (0x9)
#define RP2040_IO_BANK0_GPIO17_CTRL_FUNCSEL_NULL                        (0x1f)

#define RP2040_IO_BANK0_GPIO18_STATUS_IRQTOPROC                         (1 << 26)  /* interrupt to processors, after override is applied */
#define RP2040_IO_BANK0_GPIO18_STATUS_IRQFROMPAD                        (1 << 24)  /* interrupt from pad before override is applied */
#define RP2040_IO_BANK0_GPIO18_STATUS_INTOPERI                          (1 << 19)  /* input signal to peripheral, after override is applied */
#define RP2040_IO_BANK0_GPIO18_STATUS_INFROMPAD                         (1 << 17)  /* input signal from pad, before override is applied */
#define RP2040_IO_BANK0_GPIO18_STATUS_OETOPAD                           (1 << 13)  /* output enable to pad after register override is applied */
#define RP2040_IO_BANK0_GPIO18_STATUS_OEFROMPERI                        (1 << 12)  /* output enable from selected peripheral, before register override is applied */
#define RP2040_IO_BANK0_GPIO18_STATUS_OUTTOPAD                          (1 << 9)  /* output signal to pad after register override is applied */
#define RP2040_IO_BANK0_GPIO18_STATUS_OUTFROMPERI                       (1 << 8)  /* output signal from selected peripheral, before register override is applied */

#define RP2040_IO_BANK0_GPIO18_CTRL_IRQOVER_SHIFT                       (28)
#define RP2040_IO_BANK0_GPIO18_CTRL_IRQOVER_MASK                        (0x03 << RP2040_IO_BANK0_GPIO18_CTRL_IRQOVER_SHIFT)
#define RP2040_IO_BANK0_GPIO18_CTRL_IRQOVER_NORMAL                      (0x0 << RP2040_IO_BANK0_GPIO18_CTRL_IRQOVER_SHIFT)  /* don't invert the interrupt */
#define RP2040_IO_BANK0_GPIO18_CTRL_IRQOVER_INVERT                      (0x1 << RP2040_IO_BANK0_GPIO18_CTRL_IRQOVER_SHIFT)  /* invert the interrupt */
#define RP2040_IO_BANK0_GPIO18_CTRL_IRQOVER_LOW                         (0x2 << RP2040_IO_BANK0_GPIO18_CTRL_IRQOVER_SHIFT)  /* drive interrupt low */
#define RP2040_IO_BANK0_GPIO18_CTRL_IRQOVER_HIGH                        (0x3 << RP2040_IO_BANK0_GPIO18_CTRL_IRQOVER_SHIFT)  /* drive interrupt high */
#define RP2040_IO_BANK0_GPIO18_CTRL_INOVER_SHIFT                        (16)
#define RP2040_IO_BANK0_GPIO18_CTRL_INOVER_MASK                         (0x03 << RP2040_IO_BANK0_GPIO18_CTRL_INOVER_SHIFT)
#define RP2040_IO_BANK0_GPIO18_CTRL_INOVER_NORMAL                       (0x0 << RP2040_IO_BANK0_GPIO18_CTRL_INOVER_SHIFT)  /* don't invert the peri input */
#define RP2040_IO_BANK0_GPIO18_CTRL_INOVER_INVERT                       (0x1 << RP2040_IO_BANK0_GPIO18_CTRL_INOVER_SHIFT)  /* invert the peri input */
#define RP2040_IO_BANK0_GPIO18_CTRL_INOVER_LOW                          (0x2 << RP2040_IO_BANK0_GPIO18_CTRL_INOVER_SHIFT)  /* drive peri input low */
#define RP2040_IO_BANK0_GPIO18_CTRL_INOVER_HIGH                         (0x3 << RP2040_IO_BANK0_GPIO18_CTRL_INOVER_SHIFT)  /* drive peri input high */
#define RP2040_IO_BANK0_GPIO18_CTRL_OEOVER_SHIFT                        (12)
#define RP2040_IO_BANK0_GPIO18_CTRL_OEOVER_MASK                         (0x03 << RP2040_IO_BANK0_GPIO18_CTRL_OEOVER_SHIFT)
#define RP2040_IO_BANK0_GPIO18_CTRL_OEOVER_NORMAL                       (0x0 << RP2040_IO_BANK0_GPIO18_CTRL_OEOVER_SHIFT)  /* drive output enable from peripheral signal selected by funcsel */
#define RP2040_IO_BANK0_GPIO18_CTRL_OEOVER_INVERT                       (0x1 << RP2040_IO_BANK0_GPIO18_CTRL_OEOVER_SHIFT)  /* drive output enable from inverse of peripheral signal selected by funcsel */
#define RP2040_IO_BANK0_GPIO18_CTRL_OEOVER_DISABLE                      (0x2 << RP2040_IO_BANK0_GPIO18_CTRL_OEOVER_SHIFT)  /* disable output */
#define RP2040_IO_BANK0_GPIO18_CTRL_OEOVER_ENABLE                       (0x3 << RP2040_IO_BANK0_GPIO18_CTRL_OEOVER_SHIFT)  /* enable output */
#define RP2040_IO_BANK0_GPIO18_CTRL_OUTOVER_SHIFT                       (8)
#define RP2040_IO_BANK0_GPIO18_CTRL_OUTOVER_MASK                        (0x03 << RP2040_IO_BANK0_GPIO18_CTRL_OUTOVER_SHIFT)
#define RP2040_IO_BANK0_GPIO18_CTRL_OUTOVER_NORMAL                      (0x0 << RP2040_IO_BANK0_GPIO18_CTRL_OUTOVER_SHIFT)  /* drive output from peripheral signal selected by funcsel */
#define RP2040_IO_BANK0_GPIO18_CTRL_OUTOVER_INVERT                      (0x1 << RP2040_IO_BANK0_GPIO18_CTRL_OUTOVER_SHIFT)  /* drive output from inverse of peripheral signal selected by funcsel */
#define RP2040_IO_BANK0_GPIO18_CTRL_OUTOVER_LOW                         (0x2 << RP2040_IO_BANK0_GPIO18_CTRL_OUTOVER_SHIFT)  /* drive output low */
#define RP2040_IO_BANK0_GPIO18_CTRL_OUTOVER_HIGH                        (0x3 << RP2040_IO_BANK0_GPIO18_CTRL_OUTOVER_SHIFT)  /* drive output high */
#define RP2040_IO_BANK0_GPIO18_CTRL_FUNCSEL_MASK                        (0x1f)
#define RP2040_IO_BANK0_GPIO18_CTRL_FUNCSEL_SPI0_SCLK                   (0x1)
#define RP2040_IO_BANK0_GPIO18_CTRL_FUNCSEL_UART0_CTS                   (0x2)
#define RP2040_IO_BANK0_GPIO18_CTRL_FUNCSEL_I2C1_SDA                    (0x3)
#define RP2040_IO_BANK0_GPIO18_CTRL_FUNCSEL_PWM_A_1                     (0x4)
#define RP2040_IO_BANK0_GPIO18_CTRL_FUNCSEL_SIO_18                      (0x5)
#define RP2040_IO_BANK0_GPIO18_CTRL_FUNCSEL_PIO0_18                     (0x6)
#define RP2040_IO_BANK0_GPIO18_CTRL_FUNCSEL_PIO1_18                     (0x7)
#define RP2040_IO_BANK0_GPIO18_CTRL_FUNCSEL_USB_MUXING_OVERCURR_DETECT  (0x9)
#define RP2040_IO_BANK0_GPIO18_CTRL_FUNCSEL_NULL                        (0x1f)

#define RP2040_IO_BANK0_GPIO19_STATUS_IRQTOPROC                         (1 << 26)  /* interrupt to processors, after override is applied */
#define RP2040_IO_BANK0_GPIO19_STATUS_IRQFROMPAD                        (1 << 24)  /* interrupt from pad before override is applied */
#define RP2040_IO_BANK0_GPIO19_STATUS_INTOPERI                          (1 << 19)  /* input signal to peripheral, after override is applied */
#define RP2040_IO_BANK0_GPIO19_STATUS_INFROMPAD                         (1 << 17)  /* input signal from pad, before override is applied */
#define RP2040_IO_BANK0_GPIO19_STATUS_OETOPAD                           (1 << 13)  /* output enable to pad after register override is applied */
#define RP2040_IO_BANK0_GPIO19_STATUS_OEFROMPERI                        (1 << 12)  /* output enable from selected peripheral, before register override is applied */
#define RP2040_IO_BANK0_GPIO19_STATUS_OUTTOPAD                          (1 << 9)  /* output signal to pad after register override is applied */
#define RP2040_IO_BANK0_GPIO19_STATUS_OUTFROMPERI                       (1 << 8)  /* output signal from selected peripheral, before register override is applied */

#define RP2040_IO_BANK0_GPIO19_CTRL_IRQOVER_SHIFT                       (28)
#define RP2040_IO_BANK0_GPIO19_CTRL_IRQOVER_MASK                        (0x03 << RP2040_IO_BANK0_GPIO19_CTRL_IRQOVER_SHIFT)
#define RP2040_IO_BANK0_GPIO19_CTRL_IRQOVER_NORMAL                      (0x0 << RP2040_IO_BANK0_GPIO19_CTRL_IRQOVER_SHIFT)  /* don't invert the interrupt */
#define RP2040_IO_BANK0_GPIO19_CTRL_IRQOVER_INVERT                      (0x1 << RP2040_IO_BANK0_GPIO19_CTRL_IRQOVER_SHIFT)  /* invert the interrupt */
#define RP2040_IO_BANK0_GPIO19_CTRL_IRQOVER_LOW                         (0x2 << RP2040_IO_BANK0_GPIO19_CTRL_IRQOVER_SHIFT)  /* drive interrupt low */
#define RP2040_IO_BANK0_GPIO19_CTRL_IRQOVER_HIGH                        (0x3 << RP2040_IO_BANK0_GPIO19_CTRL_IRQOVER_SHIFT)  /* drive interrupt high */
#define RP2040_IO_BANK0_GPIO19_CTRL_INOVER_SHIFT                        (16)
#define RP2040_IO_BANK0_GPIO19_CTRL_INOVER_MASK                         (0x03 << RP2040_IO_BANK0_GPIO19_CTRL_INOVER_SHIFT)
#define RP2040_IO_BANK0_GPIO19_CTRL_INOVER_NORMAL                       (0x0 << RP2040_IO_BANK0_GPIO19_CTRL_INOVER_SHIFT)  /* don't invert the peri input */
#define RP2040_IO_BANK0_GPIO19_CTRL_INOVER_INVERT                       (0x1 << RP2040_IO_BANK0_GPIO19_CTRL_INOVER_SHIFT)  /* invert the peri input */
#define RP2040_IO_BANK0_GPIO19_CTRL_INOVER_LOW                          (0x2 << RP2040_IO_BANK0_GPIO19_CTRL_INOVER_SHIFT)  /* drive peri input low */
#define RP2040_IO_BANK0_GPIO19_CTRL_INOVER_HIGH                         (0x3 << RP2040_IO_BANK0_GPIO19_CTRL_INOVER_SHIFT)  /* drive peri input high */
#define RP2040_IO_BANK0_GPIO19_CTRL_OEOVER_SHIFT                        (12)
#define RP2040_IO_BANK0_GPIO19_CTRL_OEOVER_MASK                         (0x03 << RP2040_IO_BANK0_GPIO19_CTRL_OEOVER_SHIFT)
#define RP2040_IO_BANK0_GPIO19_CTRL_OEOVER_NORMAL                       (0x0 << RP2040_IO_BANK0_GPIO19_CTRL_OEOVER_SHIFT)  /* drive output enable from peripheral signal selected by funcsel */
#define RP2040_IO_BANK0_GPIO19_CTRL_OEOVER_INVERT                       (0x1 << RP2040_IO_BANK0_GPIO19_CTRL_OEOVER_SHIFT)  /* drive output enable from inverse of peripheral signal selected by funcsel */
#define RP2040_IO_BANK0_GPIO19_CTRL_OEOVER_DISABLE                      (0x2 << RP2040_IO_BANK0_GPIO19_CTRL_OEOVER_SHIFT)  /* disable output */
#define RP2040_IO_BANK0_GPIO19_CTRL_OEOVER_ENABLE                       (0x3 << RP2040_IO_BANK0_GPIO19_CTRL_OEOVER_SHIFT)  /* enable output */
#define RP2040_IO_BANK0_GPIO19_CTRL_OUTOVER_SHIFT                       (8)
#define RP2040_IO_BANK0_GPIO19_CTRL_OUTOVER_MASK                        (0x03 << RP2040_IO_BANK0_GPIO19_CTRL_OUTOVER_SHIFT)
#define RP2040_IO_BANK0_GPIO19_CTRL_OUTOVER_NORMAL                      (0x0 << RP2040_IO_BANK0_GPIO19_CTRL_OUTOVER_SHIFT)  /* drive output from peripheral signal selected by funcsel */
#define RP2040_IO_BANK0_GPIO19_CTRL_OUTOVER_INVERT                      (0x1 << RP2040_IO_BANK0_GPIO19_CTRL_OUTOVER_SHIFT)  /* drive output from inverse of peripheral signal selected by funcsel */
#define RP2040_IO_BANK0_GPIO19_CTRL_OUTOVER_LOW                         (0x2 << RP2040_IO_BANK0_GPIO19_CTRL_OUTOVER_SHIFT)  /* drive output low */
#define RP2040_IO_BANK0_GPIO19_CTRL_OUTOVER_HIGH                        (0x3 << RP2040_IO_BANK0_GPIO19_CTRL_OUTOVER_SHIFT)  /* drive output high */
#define RP2040_IO_BANK0_GPIO19_CTRL_FUNCSEL_MASK                        (0x1f)
#define RP2040_IO_BANK0_GPIO19_CTRL_FUNCSEL_SPI0_TX                     (0x1)
#define RP2040_IO_BANK0_GPIO19_CTRL_FUNCSEL_UART0_RTS                   (0x2)
#define RP2040_IO_BANK0_GPIO19_CTRL_FUNCSEL_I2C1_SCL                    (0x3)
#define RP2040_IO_BANK0_GPIO19_CTRL_FUNCSEL_PWM_B_1                     (0x4)
#define RP2040_IO_BANK0_GPIO19_CTRL_FUNCSEL_SIO_19                      (0x5)
#define RP2040_IO_BANK0_GPIO19_CTRL_FUNCSEL_PIO0_19                     (0x6)
#define RP2040_IO_BANK0_GPIO19_CTRL_FUNCSEL_PIO1_19                     (0x7)
#define RP2040_IO_BANK0_GPIO19_CTRL_FUNCSEL_USB_MUXING_VBUS_DETECT      (0x9)
#define RP2040_IO_BANK0_GPIO19_CTRL_FUNCSEL_NULL                        (0x1f)

#define RP2040_IO_BANK0_GPIO20_STATUS_IRQTOPROC                         (1 << 26)  /* interrupt to processors, after override is applied */
#define RP2040_IO_BANK0_GPIO20_STATUS_IRQFROMPAD                        (1 << 24)  /* interrupt from pad before override is applied */
#define RP2040_IO_BANK0_GPIO20_STATUS_INTOPERI                          (1 << 19)  /* input signal to peripheral, after override is applied */
#define RP2040_IO_BANK0_GPIO20_STATUS_INFROMPAD                         (1 << 17)  /* input signal from pad, before override is applied */
#define RP2040_IO_BANK0_GPIO20_STATUS_OETOPAD                           (1 << 13)  /* output enable to pad after register override is applied */
#define RP2040_IO_BANK0_GPIO20_STATUS_OEFROMPERI                        (1 << 12)  /* output enable from selected peripheral, before register override is applied */
#define RP2040_IO_BANK0_GPIO20_STATUS_OUTTOPAD                          (1 << 9)  /* output signal to pad after register override is applied */
#define RP2040_IO_BANK0_GPIO20_STATUS_OUTFROMPERI                       (1 << 8)  /* output signal from selected peripheral, before register override is applied */

#define RP2040_IO_BANK0_GPIO20_CTRL_IRQOVER_SHIFT                       (28)
#define RP2040_IO_BANK0_GPIO20_CTRL_IRQOVER_MASK                        (0x03 << RP2040_IO_BANK0_GPIO20_CTRL_IRQOVER_SHIFT)
#define RP2040_IO_BANK0_GPIO20_CTRL_IRQOVER_NORMAL                      (0x0 << RP2040_IO_BANK0_GPIO20_CTRL_IRQOVER_SHIFT)  /* don't invert the interrupt */
#define RP2040_IO_BANK0_GPIO20_CTRL_IRQOVER_INVERT                      (0x1 << RP2040_IO_BANK0_GPIO20_CTRL_IRQOVER_SHIFT)  /* invert the interrupt */
#define RP2040_IO_BANK0_GPIO20_CTRL_IRQOVER_LOW                         (0x2 << RP2040_IO_BANK0_GPIO20_CTRL_IRQOVER_SHIFT)  /* drive interrupt low */
#define RP2040_IO_BANK0_GPIO20_CTRL_IRQOVER_HIGH                        (0x3 << RP2040_IO_BANK0_GPIO20_CTRL_IRQOVER_SHIFT)  /* drive interrupt high */
#define RP2040_IO_BANK0_GPIO20_CTRL_INOVER_SHIFT                        (16)
#define RP2040_IO_BANK0_GPIO20_CTRL_INOVER_MASK                         (0x03 << RP2040_IO_BANK0_GPIO20_CTRL_INOVER_SHIFT)
#define RP2040_IO_BANK0_GPIO20_CTRL_INOVER_NORMAL                       (0x0 << RP2040_IO_BANK0_GPIO20_CTRL_INOVER_SHIFT)  /* don't invert the peri input */
#define RP2040_IO_BANK0_GPIO20_CTRL_INOVER_INVERT                       (0x1 << RP2040_IO_BANK0_GPIO20_CTRL_INOVER_SHIFT)  /* invert the peri input */
#define RP2040_IO_BANK0_GPIO20_CTRL_INOVER_LOW                          (0x2 << RP2040_IO_BANK0_GPIO20_CTRL_INOVER_SHIFT)  /* drive peri input low */
#define RP2040_IO_BANK0_GPIO20_CTRL_INOVER_HIGH                         (0x3 << RP2040_IO_BANK0_GPIO20_CTRL_INOVER_SHIFT)  /* drive peri input high */
#define RP2040_IO_BANK0_GPIO20_CTRL_OEOVER_SHIFT                        (12)
#define RP2040_IO_BANK0_GPIO20_CTRL_OEOVER_MASK                         (0x03 << RP2040_IO_BANK0_GPIO20_CTRL_OEOVER_SHIFT)
#define RP2040_IO_BANK0_GPIO20_CTRL_OEOVER_NORMAL                       (0x0 << RP2040_IO_BANK0_GPIO20_CTRL_OEOVER_SHIFT)  /* drive output enable from peripheral signal selected by funcsel */
#define RP2040_IO_BANK0_GPIO20_CTRL_OEOVER_INVERT                       (0x1 << RP2040_IO_BANK0_GPIO20_CTRL_OEOVER_SHIFT)  /* drive output enable from inverse of peripheral signal selected by funcsel */
#define RP2040_IO_BANK0_GPIO20_CTRL_OEOVER_DISABLE                      (0x2 << RP2040_IO_BANK0_GPIO20_CTRL_OEOVER_SHIFT)  /* disable output */
#define RP2040_IO_BANK0_GPIO20_CTRL_OEOVER_ENABLE                       (0x3 << RP2040_IO_BANK0_GPIO20_CTRL_OEOVER_SHIFT)  /* enable output */
#define RP2040_IO_BANK0_GPIO20_CTRL_OUTOVER_SHIFT                       (8)
#define RP2040_IO_BANK0_GPIO20_CTRL_OUTOVER_MASK                        (0x03 << RP2040_IO_BANK0_GPIO20_CTRL_OUTOVER_SHIFT)
#define RP2040_IO_BANK0_GPIO20_CTRL_OUTOVER_NORMAL                      (0x0 << RP2040_IO_BANK0_GPIO20_CTRL_OUTOVER_SHIFT)  /* drive output from peripheral signal selected by funcsel */
#define RP2040_IO_BANK0_GPIO20_CTRL_OUTOVER_INVERT                      (0x1 << RP2040_IO_BANK0_GPIO20_CTRL_OUTOVER_SHIFT)  /* drive output from inverse of peripheral signal selected by funcsel */
#define RP2040_IO_BANK0_GPIO20_CTRL_OUTOVER_LOW                         (0x2 << RP2040_IO_BANK0_GPIO20_CTRL_OUTOVER_SHIFT)  /* drive output low */
#define RP2040_IO_BANK0_GPIO20_CTRL_OUTOVER_HIGH                        (0x3 << RP2040_IO_BANK0_GPIO20_CTRL_OUTOVER_SHIFT)  /* drive output high */
#define RP2040_IO_BANK0_GPIO20_CTRL_FUNCSEL_MASK                        (0x1f)
#define RP2040_IO_BANK0_GPIO20_CTRL_FUNCSEL_SPI0_RX                     (0x1)
#define RP2040_IO_BANK0_GPIO20_CTRL_FUNCSEL_UART1_TX                    (0x2)
#define RP2040_IO_BANK0_GPIO20_CTRL_FUNCSEL_I2C0_SDA                    (0x3)
#define RP2040_IO_BANK0_GPIO20_CTRL_FUNCSEL_PWM_A_2                     (0x4)
#define RP2040_IO_BANK0_GPIO20_CTRL_FUNCSEL_SIO_20                      (0x5)
#define RP2040_IO_BANK0_GPIO20_CTRL_FUNCSEL_PIO0_20                     (0x6)
#define RP2040_IO_BANK0_GPIO20_CTRL_FUNCSEL_PIO1_20                     (0x7)
#define RP2040_IO_BANK0_GPIO20_CTRL_FUNCSEL_CLOCKS_GPIN_0               (0x8)
#define RP2040_IO_BANK0_GPIO20_CTRL_FUNCSEL_USB_MUXING_VBUS_EN          (0x9)
#define RP2040_IO_BANK0_GPIO20_CTRL_FUNCSEL_NULL                        (0x1f)

#define RP2040_IO_BANK0_GPIO21_STATUS_IRQTOPROC                         (1 << 26)  /* interrupt to processors, after override is applied */
#define RP2040_IO_BANK0_GPIO21_STATUS_IRQFROMPAD                        (1 << 24)  /* interrupt from pad before override is applied */
#define RP2040_IO_BANK0_GPIO21_STATUS_INTOPERI                          (1 << 19)  /* input signal to peripheral, after override is applied */
#define RP2040_IO_BANK0_GPIO21_STATUS_INFROMPAD                         (1 << 17)  /* input signal from pad, before override is applied */
#define RP2040_IO_BANK0_GPIO21_STATUS_OETOPAD                           (1 << 13)  /* output enable to pad after register override is applied */
#define RP2040_IO_BANK0_GPIO21_STATUS_OEFROMPERI                        (1 << 12)  /* output enable from selected peripheral, before register override is applied */
#define RP2040_IO_BANK0_GPIO21_STATUS_OUTTOPAD                          (1 << 9)  /* output signal to pad after register override is applied */
#define RP2040_IO_BANK0_GPIO21_STATUS_OUTFROMPERI                       (1 << 8)  /* output signal from selected peripheral, before register override is applied */

#define RP2040_IO_BANK0_GPIO21_CTRL_IRQOVER_SHIFT                       (28)
#define RP2040_IO_BANK0_GPIO21_CTRL_IRQOVER_MASK                        (0x03 << RP2040_IO_BANK0_GPIO21_CTRL_IRQOVER_SHIFT)
#define RP2040_IO_BANK0_GPIO21_CTRL_IRQOVER_NORMAL                      (0x0 << RP2040_IO_BANK0_GPIO21_CTRL_IRQOVER_SHIFT)  /* don't invert the interrupt */
#define RP2040_IO_BANK0_GPIO21_CTRL_IRQOVER_INVERT                      (0x1 << RP2040_IO_BANK0_GPIO21_CTRL_IRQOVER_SHIFT)  /* invert the interrupt */
#define RP2040_IO_BANK0_GPIO21_CTRL_IRQOVER_LOW                         (0x2 << RP2040_IO_BANK0_GPIO21_CTRL_IRQOVER_SHIFT)  /* drive interrupt low */
#define RP2040_IO_BANK0_GPIO21_CTRL_IRQOVER_HIGH                        (0x3 << RP2040_IO_BANK0_GPIO21_CTRL_IRQOVER_SHIFT)  /* drive interrupt high */
#define RP2040_IO_BANK0_GPIO21_CTRL_INOVER_SHIFT                        (16)
#define RP2040_IO_BANK0_GPIO21_CTRL_INOVER_MASK                         (0x03 << RP2040_IO_BANK0_GPIO21_CTRL_INOVER_SHIFT)
#define RP2040_IO_BANK0_GPIO21_CTRL_INOVER_NORMAL                       (0x0 << RP2040_IO_BANK0_GPIO21_CTRL_INOVER_SHIFT)  /* don't invert the peri input */
#define RP2040_IO_BANK0_GPIO21_CTRL_INOVER_INVERT                       (0x1 << RP2040_IO_BANK0_GPIO21_CTRL_INOVER_SHIFT)  /* invert the peri input */
#define RP2040_IO_BANK0_GPIO21_CTRL_INOVER_LOW                          (0x2 << RP2040_IO_BANK0_GPIO21_CTRL_INOVER_SHIFT)  /* drive peri input low */
#define RP2040_IO_BANK0_GPIO21_CTRL_INOVER_HIGH                         (0x3 << RP2040_IO_BANK0_GPIO21_CTRL_INOVER_SHIFT)  /* drive peri input high */
#define RP2040_IO_BANK0_GPIO21_CTRL_OEOVER_SHIFT                        (12)
#define RP2040_IO_BANK0_GPIO21_CTRL_OEOVER_MASK                         (0x03 << RP2040_IO_BANK0_GPIO21_CTRL_OEOVER_SHIFT)
#define RP2040_IO_BANK0_GPIO21_CTRL_OEOVER_NORMAL                       (0x0 << RP2040_IO_BANK0_GPIO21_CTRL_OEOVER_SHIFT)  /* drive output enable from peripheral signal selected by funcsel */
#define RP2040_IO_BANK0_GPIO21_CTRL_OEOVER_INVERT                       (0x1 << RP2040_IO_BANK0_GPIO21_CTRL_OEOVER_SHIFT)  /* drive output enable from inverse of peripheral signal selected by funcsel */
#define RP2040_IO_BANK0_GPIO21_CTRL_OEOVER_DISABLE                      (0x2 << RP2040_IO_BANK0_GPIO21_CTRL_OEOVER_SHIFT)  /* disable output */
#define RP2040_IO_BANK0_GPIO21_CTRL_OEOVER_ENABLE                       (0x3 << RP2040_IO_BANK0_GPIO21_CTRL_OEOVER_SHIFT)  /* enable output */
#define RP2040_IO_BANK0_GPIO21_CTRL_OUTOVER_SHIFT                       (8)
#define RP2040_IO_BANK0_GPIO21_CTRL_OUTOVER_MASK                        (0x03 << RP2040_IO_BANK0_GPIO21_CTRL_OUTOVER_SHIFT)
#define RP2040_IO_BANK0_GPIO21_CTRL_OUTOVER_NORMAL                      (0x0 << RP2040_IO_BANK0_GPIO21_CTRL_OUTOVER_SHIFT)  /* drive output from peripheral signal selected by funcsel */
#define RP2040_IO_BANK0_GPIO21_CTRL_OUTOVER_INVERT                      (0x1 << RP2040_IO_BANK0_GPIO21_CTRL_OUTOVER_SHIFT)  /* drive output from inverse of peripheral signal selected by funcsel */
#define RP2040_IO_BANK0_GPIO21_CTRL_OUTOVER_LOW                         (0x2 << RP2040_IO_BANK0_GPIO21_CTRL_OUTOVER_SHIFT)  /* drive output low */
#define RP2040_IO_BANK0_GPIO21_CTRL_OUTOVER_HIGH                        (0x3 << RP2040_IO_BANK0_GPIO21_CTRL_OUTOVER_SHIFT)  /* drive output high */
#define RP2040_IO_BANK0_GPIO21_CTRL_FUNCSEL_MASK                        (0x1f)
#define RP2040_IO_BANK0_GPIO21_CTRL_FUNCSEL_SPI0_SS_N                   (0x1)
#define RP2040_IO_BANK0_GPIO21_CTRL_FUNCSEL_UART1_RX                    (0x2)
#define RP2040_IO_BANK0_GPIO21_CTRL_FUNCSEL_I2C0_SCL                    (0x3)
#define RP2040_IO_BANK0_GPIO21_CTRL_FUNCSEL_PWM_B_2                     (0x4)
#define RP2040_IO_BANK0_GPIO21_CTRL_FUNCSEL_SIO_21                      (0x5)
#define RP2040_IO_BANK0_GPIO21_CTRL_FUNCSEL_PIO0_21                     (0x6)
#define RP2040_IO_BANK0_GPIO21_CTRL_FUNCSEL_PIO1_21                     (0x7)
#define RP2040_IO_BANK0_GPIO21_CTRL_FUNCSEL_CLOCKS_GPOUT_0              (0x8)
#define RP2040_IO_BANK0_GPIO21_CTRL_FUNCSEL_USB_MUXING_OVERCURR_DETECT  (0x9)
#define RP2040_IO_BANK0_GPIO21_CTRL_FUNCSEL_NULL                        (0x1f)

#define RP2040_IO_BANK0_GPIO22_STATUS_IRQTOPROC                         (1 << 26)  /* interrupt to processors, after override is applied */
#define RP2040_IO_BANK0_GPIO22_STATUS_IRQFROMPAD                        (1 << 24)  /* interrupt from pad before override is applied */
#define RP2040_IO_BANK0_GPIO22_STATUS_INTOPERI                          (1 << 19)  /* input signal to peripheral, after override is applied */
#define RP2040_IO_BANK0_GPIO22_STATUS_INFROMPAD                         (1 << 17)  /* input signal from pad, before override is applied */
#define RP2040_IO_BANK0_GPIO22_STATUS_OETOPAD                           (1 << 13)  /* output enable to pad after register override is applied */
#define RP2040_IO_BANK0_GPIO22_STATUS_OEFROMPERI                        (1 << 12)  /* output enable from selected peripheral, before register override is applied */
#define RP2040_IO_BANK0_GPIO22_STATUS_OUTTOPAD                          (1 << 9)  /* output signal to pad after register override is applied */
#define RP2040_IO_BANK0_GPIO22_STATUS_OUTFROMPERI                       (1 << 8)  /* output signal from selected peripheral, before register override is applied */

#define RP2040_IO_BANK0_GPIO22_CTRL_IRQOVER_SHIFT                       (28)
#define RP2040_IO_BANK0_GPIO22_CTRL_IRQOVER_MASK                        (0x03 << RP2040_IO_BANK0_GPIO22_CTRL_IRQOVER_SHIFT)
#define RP2040_IO_BANK0_GPIO22_CTRL_IRQOVER_NORMAL                      (0x0 << RP2040_IO_BANK0_GPIO22_CTRL_IRQOVER_SHIFT)  /* don't invert the interrupt */
#define RP2040_IO_BANK0_GPIO22_CTRL_IRQOVER_INVERT                      (0x1 << RP2040_IO_BANK0_GPIO22_CTRL_IRQOVER_SHIFT)  /* invert the interrupt */
#define RP2040_IO_BANK0_GPIO22_CTRL_IRQOVER_LOW                         (0x2 << RP2040_IO_BANK0_GPIO22_CTRL_IRQOVER_SHIFT)  /* drive interrupt low */
#define RP2040_IO_BANK0_GPIO22_CTRL_IRQOVER_HIGH                        (0x3 << RP2040_IO_BANK0_GPIO22_CTRL_IRQOVER_SHIFT)  /* drive interrupt high */
#define RP2040_IO_BANK0_GPIO22_CTRL_INOVER_SHIFT                        (16)
#define RP2040_IO_BANK0_GPIO22_CTRL_INOVER_MASK                         (0x03 << RP2040_IO_BANK0_GPIO22_CTRL_INOVER_SHIFT)
#define RP2040_IO_BANK0_GPIO22_CTRL_INOVER_NORMAL                       (0x0 << RP2040_IO_BANK0_GPIO22_CTRL_INOVER_SHIFT)  /* don't invert the peri input */
#define RP2040_IO_BANK0_GPIO22_CTRL_INOVER_INVERT                       (0x1 << RP2040_IO_BANK0_GPIO22_CTRL_INOVER_SHIFT)  /* invert the peri input */
#define RP2040_IO_BANK0_GPIO22_CTRL_INOVER_LOW                          (0x2 << RP2040_IO_BANK0_GPIO22_CTRL_INOVER_SHIFT)  /* drive peri input low */
#define RP2040_IO_BANK0_GPIO22_CTRL_INOVER_HIGH                         (0x3 << RP2040_IO_BANK0_GPIO22_CTRL_INOVER_SHIFT)  /* drive peri input high */
#define RP2040_IO_BANK0_GPIO22_CTRL_OEOVER_SHIFT                        (12)
#define RP2040_IO_BANK0_GPIO22_CTRL_OEOVER_MASK                         (0x03 << RP2040_IO_BANK0_GPIO22_CTRL_OEOVER_SHIFT)
#define RP2040_IO_BANK0_GPIO22_CTRL_OEOVER_NORMAL                       (0x0 << RP2040_IO_BANK0_GPIO22_CTRL_OEOVER_SHIFT)  /* drive output enable from peripheral signal selected by funcsel */
#define RP2040_IO_BANK0_GPIO22_CTRL_OEOVER_INVERT                       (0x1 << RP2040_IO_BANK0_GPIO22_CTRL_OEOVER_SHIFT)  /* drive output enable from inverse of peripheral signal selected by funcsel */
#define RP2040_IO_BANK0_GPIO22_CTRL_OEOVER_DISABLE                      (0x2 << RP2040_IO_BANK0_GPIO22_CTRL_OEOVER_SHIFT)  /* disable output */
#define RP2040_IO_BANK0_GPIO22_CTRL_OEOVER_ENABLE                       (0x3 << RP2040_IO_BANK0_GPIO22_CTRL_OEOVER_SHIFT)  /* enable output */
#define RP2040_IO_BANK0_GPIO22_CTRL_OUTOVER_SHIFT                       (8)
#define RP2040_IO_BANK0_GPIO22_CTRL_OUTOVER_MASK                        (0x03 << RP2040_IO_BANK0_GPIO22_CTRL_OUTOVER_SHIFT)
#define RP2040_IO_BANK0_GPIO22_CTRL_OUTOVER_NORMAL                      (0x0 << RP2040_IO_BANK0_GPIO22_CTRL_OUTOVER_SHIFT)  /* drive output from peripheral signal selected by funcsel */
#define RP2040_IO_BANK0_GPIO22_CTRL_OUTOVER_INVERT                      (0x1 << RP2040_IO_BANK0_GPIO22_CTRL_OUTOVER_SHIFT)  /* drive output from inverse of peripheral signal selected by funcsel */
#define RP2040_IO_BANK0_GPIO22_CTRL_OUTOVER_LOW                         (0x2 << RP2040_IO_BANK0_GPIO22_CTRL_OUTOVER_SHIFT)  /* drive output low */
#define RP2040_IO_BANK0_GPIO22_CTRL_OUTOVER_HIGH                        (0x3 << RP2040_IO_BANK0_GPIO22_CTRL_OUTOVER_SHIFT)  /* drive output high */
#define RP2040_IO_BANK0_GPIO22_CTRL_FUNCSEL_MASK                        (0x1f)
#define RP2040_IO_BANK0_GPIO22_CTRL_FUNCSEL_SPI0_SCLK                   (0x1)
#define RP2040_IO_BANK0_GPIO22_CTRL_FUNCSEL_UART1_CTS                   (0x2)
#define RP2040_IO_BANK0_GPIO22_CTRL_FUNCSEL_I2C1_SDA                    (0x3)
#define RP2040_IO_BANK0_GPIO22_CTRL_FUNCSEL_PWM_A_3                     (0x4)
#define RP2040_IO_BANK0_GPIO22_CTRL_FUNCSEL_SIO_22                      (0x5)
#define RP2040_IO_BANK0_GPIO22_CTRL_FUNCSEL_PIO0_22                     (0x6)
#define RP2040_IO_BANK0_GPIO22_CTRL_FUNCSEL_PIO1_22                     (0x7)
#define RP2040_IO_BANK0_GPIO22_CTRL_FUNCSEL_CLOCKS_GPIN_1               (0x8)
#define RP2040_IO_BANK0_GPIO22_CTRL_FUNCSEL_USB_MUXING_VBUS_DETECT      (0x9)
#define RP2040_IO_BANK0_GPIO22_CTRL_FUNCSEL_NULL                        (0x1f)

#define RP2040_IO_BANK0_GPIO23_STATUS_IRQTOPROC                         (1 << 26)  /* interrupt to processors, after override is applied */
#define RP2040_IO_BANK0_GPIO23_STATUS_IRQFROMPAD                        (1 << 24)  /* interrupt from pad before override is applied */
#define RP2040_IO_BANK0_GPIO23_STATUS_INTOPERI                          (1 << 19)  /* input signal to peripheral, after override is applied */
#define RP2040_IO_BANK0_GPIO23_STATUS_INFROMPAD                         (1 << 17)  /* input signal from pad, before override is applied */
#define RP2040_IO_BANK0_GPIO23_STATUS_OETOPAD                           (1 << 13)  /* output enable to pad after register override is applied */
#define RP2040_IO_BANK0_GPIO23_STATUS_OEFROMPERI                        (1 << 12)  /* output enable from selected peripheral, before register override is applied */
#define RP2040_IO_BANK0_GPIO23_STATUS_OUTTOPAD                          (1 << 9)  /* output signal to pad after register override is applied */
#define RP2040_IO_BANK0_GPIO23_STATUS_OUTFROMPERI                       (1 << 8)  /* output signal from selected peripheral, before register override is applied */

#define RP2040_IO_BANK0_GPIO23_CTRL_IRQOVER_SHIFT                       (28)
#define RP2040_IO_BANK0_GPIO23_CTRL_IRQOVER_MASK                        (0x03 << RP2040_IO_BANK0_GPIO23_CTRL_IRQOVER_SHIFT)
#define RP2040_IO_BANK0_GPIO23_CTRL_IRQOVER_NORMAL                      (0x0 << RP2040_IO_BANK0_GPIO23_CTRL_IRQOVER_SHIFT)  /* don't invert the interrupt */
#define RP2040_IO_BANK0_GPIO23_CTRL_IRQOVER_INVERT                      (0x1 << RP2040_IO_BANK0_GPIO23_CTRL_IRQOVER_SHIFT)  /* invert the interrupt */
#define RP2040_IO_BANK0_GPIO23_CTRL_IRQOVER_LOW                         (0x2 << RP2040_IO_BANK0_GPIO23_CTRL_IRQOVER_SHIFT)  /* drive interrupt low */
#define RP2040_IO_BANK0_GPIO23_CTRL_IRQOVER_HIGH                        (0x3 << RP2040_IO_BANK0_GPIO23_CTRL_IRQOVER_SHIFT)  /* drive interrupt high */
#define RP2040_IO_BANK0_GPIO23_CTRL_INOVER_SHIFT                        (16)
#define RP2040_IO_BANK0_GPIO23_CTRL_INOVER_MASK                         (0x03 << RP2040_IO_BANK0_GPIO23_CTRL_INOVER_SHIFT)
#define RP2040_IO_BANK0_GPIO23_CTRL_INOVER_NORMAL                       (0x0 << RP2040_IO_BANK0_GPIO23_CTRL_INOVER_SHIFT)  /* don't invert the peri input */
#define RP2040_IO_BANK0_GPIO23_CTRL_INOVER_INVERT                       (0x1 << RP2040_IO_BANK0_GPIO23_CTRL_INOVER_SHIFT)  /* invert the peri input */
#define RP2040_IO_BANK0_GPIO23_CTRL_INOVER_LOW                          (0x2 << RP2040_IO_BANK0_GPIO23_CTRL_INOVER_SHIFT)  /* drive peri input low */
#define RP2040_IO_BANK0_GPIO23_CTRL_INOVER_HIGH                         (0x3 << RP2040_IO_BANK0_GPIO23_CTRL_INOVER_SHIFT)  /* drive peri input high */
#define RP2040_IO_BANK0_GPIO23_CTRL_OEOVER_SHIFT                        (12)
#define RP2040_IO_BANK0_GPIO23_CTRL_OEOVER_MASK                         (0x03 << RP2040_IO_BANK0_GPIO23_CTRL_OEOVER_SHIFT)
#define RP2040_IO_BANK0_GPIO23_CTRL_OEOVER_NORMAL                       (0x0 << RP2040_IO_BANK0_GPIO23_CTRL_OEOVER_SHIFT)  /* drive output enable from peripheral signal selected by funcsel */
#define RP2040_IO_BANK0_GPIO23_CTRL_OEOVER_INVERT                       (0x1 << RP2040_IO_BANK0_GPIO23_CTRL_OEOVER_SHIFT)  /* drive output enable from inverse of peripheral signal selected by funcsel */
#define RP2040_IO_BANK0_GPIO23_CTRL_OEOVER_DISABLE                      (0x2 << RP2040_IO_BANK0_GPIO23_CTRL_OEOVER_SHIFT)  /* disable output */
#define RP2040_IO_BANK0_GPIO23_CTRL_OEOVER_ENABLE                       (0x3 << RP2040_IO_BANK0_GPIO23_CTRL_OEOVER_SHIFT)  /* enable output */
#define RP2040_IO_BANK0_GPIO23_CTRL_OUTOVER_SHIFT                       (8)
#define RP2040_IO_BANK0_GPIO23_CTRL_OUTOVER_MASK                        (0x03 << RP2040_IO_BANK0_GPIO23_CTRL_OUTOVER_SHIFT)
#define RP2040_IO_BANK0_GPIO23_CTRL_OUTOVER_NORMAL                      (0x0 << RP2040_IO_BANK0_GPIO23_CTRL_OUTOVER_SHIFT)  /* drive output from peripheral signal selected by funcsel */
#define RP2040_IO_BANK0_GPIO23_CTRL_OUTOVER_INVERT                      (0x1 << RP2040_IO_BANK0_GPIO23_CTRL_OUTOVER_SHIFT)  /* drive output from inverse of peripheral signal selected by funcsel */
#define RP2040_IO_BANK0_GPIO23_CTRL_OUTOVER_LOW                         (0x2 << RP2040_IO_BANK0_GPIO23_CTRL_OUTOVER_SHIFT)  /* drive output low */
#define RP2040_IO_BANK0_GPIO23_CTRL_OUTOVER_HIGH                        (0x3 << RP2040_IO_BANK0_GPIO23_CTRL_OUTOVER_SHIFT)  /* drive output high */
#define RP2040_IO_BANK0_GPIO23_CTRL_FUNCSEL_MASK                        (0x1f)
#define RP2040_IO_BANK0_GPIO23_CTRL_FUNCSEL_SPI0_TX                     (0x1)
#define RP2040_IO_BANK0_GPIO23_CTRL_FUNCSEL_UART1_RTS                   (0x2)
#define RP2040_IO_BANK0_GPIO23_CTRL_FUNCSEL_I2C1_SCL                    (0x3)
#define RP2040_IO_BANK0_GPIO23_CTRL_FUNCSEL_PWM_B_3                     (0x4)
#define RP2040_IO_BANK0_GPIO23_CTRL_FUNCSEL_SIO_23                      (0x5)
#define RP2040_IO_BANK0_GPIO23_CTRL_FUNCSEL_PIO0_23                     (0x6)
#define RP2040_IO_BANK0_GPIO23_CTRL_FUNCSEL_PIO1_23                     (0x7)
#define RP2040_IO_BANK0_GPIO23_CTRL_FUNCSEL_CLOCKS_GPOUT_1              (0x8)
#define RP2040_IO_BANK0_GPIO23_CTRL_FUNCSEL_USB_MUXING_VBUS_EN          (0x9)
#define RP2040_IO_BANK0_GPIO23_CTRL_FUNCSEL_NULL                        (0x1f)

#define RP2040_IO_BANK0_GPIO24_STATUS_IRQTOPROC                         (1 << 26)  /* interrupt to processors, after override is applied */
#define RP2040_IO_BANK0_GPIO24_STATUS_IRQFROMPAD                        (1 << 24)  /* interrupt from pad before override is applied */
#define RP2040_IO_BANK0_GPIO24_STATUS_INTOPERI                          (1 << 19)  /* input signal to peripheral, after override is applied */
#define RP2040_IO_BANK0_GPIO24_STATUS_INFROMPAD                         (1 << 17)  /* input signal from pad, before override is applied */
#define RP2040_IO_BANK0_GPIO24_STATUS_OETOPAD                           (1 << 13)  /* output enable to pad after register override is applied */
#define RP2040_IO_BANK0_GPIO24_STATUS_OEFROMPERI                        (1 << 12)  /* output enable from selected peripheral, before register override is applied */
#define RP2040_IO_BANK0_GPIO24_STATUS_OUTTOPAD                          (1 << 9)  /* output signal to pad after register override is applied */
#define RP2040_IO_BANK0_GPIO24_STATUS_OUTFROMPERI                       (1 << 8)  /* output signal from selected peripheral, before register override is applied */

#define RP2040_IO_BANK0_GPIO24_CTRL_IRQOVER_SHIFT                       (28)
#define RP2040_IO_BANK0_GPIO24_CTRL_IRQOVER_MASK                        (0x03 << RP2040_IO_BANK0_GPIO24_CTRL_IRQOVER_SHIFT)
#define RP2040_IO_BANK0_GPIO24_CTRL_IRQOVER_NORMAL                      (0x0 << RP2040_IO_BANK0_GPIO24_CTRL_IRQOVER_SHIFT)  /* don't invert the interrupt */
#define RP2040_IO_BANK0_GPIO24_CTRL_IRQOVER_INVERT                      (0x1 << RP2040_IO_BANK0_GPIO24_CTRL_IRQOVER_SHIFT)  /* invert the interrupt */
#define RP2040_IO_BANK0_GPIO24_CTRL_IRQOVER_LOW                         (0x2 << RP2040_IO_BANK0_GPIO24_CTRL_IRQOVER_SHIFT)  /* drive interrupt low */
#define RP2040_IO_BANK0_GPIO24_CTRL_IRQOVER_HIGH                        (0x3 << RP2040_IO_BANK0_GPIO24_CTRL_IRQOVER_SHIFT)  /* drive interrupt high */
#define RP2040_IO_BANK0_GPIO24_CTRL_INOVER_SHIFT                        (16)
#define RP2040_IO_BANK0_GPIO24_CTRL_INOVER_MASK                         (0x03 << RP2040_IO_BANK0_GPIO24_CTRL_INOVER_SHIFT)
#define RP2040_IO_BANK0_GPIO24_CTRL_INOVER_NORMAL                       (0x0 << RP2040_IO_BANK0_GPIO24_CTRL_INOVER_SHIFT)  /* don't invert the peri input */
#define RP2040_IO_BANK0_GPIO24_CTRL_INOVER_INVERT                       (0x1 << RP2040_IO_BANK0_GPIO24_CTRL_INOVER_SHIFT)  /* invert the peri input */
#define RP2040_IO_BANK0_GPIO24_CTRL_INOVER_LOW                          (0x2 << RP2040_IO_BANK0_GPIO24_CTRL_INOVER_SHIFT)  /* drive peri input low */
#define RP2040_IO_BANK0_GPIO24_CTRL_INOVER_HIGH                         (0x3 << RP2040_IO_BANK0_GPIO24_CTRL_INOVER_SHIFT)  /* drive peri input high */
#define RP2040_IO_BANK0_GPIO24_CTRL_OEOVER_SHIFT                        (12)
#define RP2040_IO_BANK0_GPIO24_CTRL_OEOVER_MASK                         (0x03 << RP2040_IO_BANK0_GPIO24_CTRL_OEOVER_SHIFT)
#define RP2040_IO_BANK0_GPIO24_CTRL_OEOVER_NORMAL                       (0x0 << RP2040_IO_BANK0_GPIO24_CTRL_OEOVER_SHIFT)  /* drive output enable from peripheral signal selected by funcsel */
#define RP2040_IO_BANK0_GPIO24_CTRL_OEOVER_INVERT                       (0x1 << RP2040_IO_BANK0_GPIO24_CTRL_OEOVER_SHIFT)  /* drive output enable from inverse of peripheral signal selected by funcsel */
#define RP2040_IO_BANK0_GPIO24_CTRL_OEOVER_DISABLE                      (0x2 << RP2040_IO_BANK0_GPIO24_CTRL_OEOVER_SHIFT)  /* disable output */
#define RP2040_IO_BANK0_GPIO24_CTRL_OEOVER_ENABLE                       (0x3 << RP2040_IO_BANK0_GPIO24_CTRL_OEOVER_SHIFT)  /* enable output */
#define RP2040_IO_BANK0_GPIO24_CTRL_OUTOVER_SHIFT                       (8)
#define RP2040_IO_BANK0_GPIO24_CTRL_OUTOVER_MASK                        (0x03 << RP2040_IO_BANK0_GPIO24_CTRL_OUTOVER_SHIFT)
#define RP2040_IO_BANK0_GPIO24_CTRL_OUTOVER_NORMAL                      (0x0 << RP2040_IO_BANK0_GPIO24_CTRL_OUTOVER_SHIFT)  /* drive output from peripheral signal selected by funcsel */
#define RP2040_IO_BANK0_GPIO24_CTRL_OUTOVER_INVERT                      (0x1 << RP2040_IO_BANK0_GPIO24_CTRL_OUTOVER_SHIFT)  /* drive output from inverse of peripheral signal selected by funcsel */
#define RP2040_IO_BANK0_GPIO24_CTRL_OUTOVER_LOW                         (0x2 << RP2040_IO_BANK0_GPIO24_CTRL_OUTOVER_SHIFT)  /* drive output low */
#define RP2040_IO_BANK0_GPIO24_CTRL_OUTOVER_HIGH                        (0x3 << RP2040_IO_BANK0_GPIO24_CTRL_OUTOVER_SHIFT)  /* drive output high */
#define RP2040_IO_BANK0_GPIO24_CTRL_FUNCSEL_MASK                        (0x1f)
#define RP2040_IO_BANK0_GPIO24_CTRL_FUNCSEL_SPI1_RX                     (0x1)
#define RP2040_IO_BANK0_GPIO24_CTRL_FUNCSEL_UART1_TX                    (0x2)
#define RP2040_IO_BANK0_GPIO24_CTRL_FUNCSEL_I2C0_SDA                    (0x3)
#define RP2040_IO_BANK0_GPIO24_CTRL_FUNCSEL_PWM_A_4                     (0x4)
#define RP2040_IO_BANK0_GPIO24_CTRL_FUNCSEL_SIO_24                      (0x5)
#define RP2040_IO_BANK0_GPIO24_CTRL_FUNCSEL_PIO0_24                     (0x6)
#define RP2040_IO_BANK0_GPIO24_CTRL_FUNCSEL_PIO1_24                     (0x7)
#define RP2040_IO_BANK0_GPIO24_CTRL_FUNCSEL_CLOCKS_GPOUT_2              (0x8)
#define RP2040_IO_BANK0_GPIO24_CTRL_FUNCSEL_USB_MUXING_OVERCURR_DETECT  (0x9)
#define RP2040_IO_BANK0_GPIO24_CTRL_FUNCSEL_NULL                        (0x1f)

#define RP2040_IO_BANK0_GPIO25_STATUS_IRQTOPROC                         (1 << 26)  /* interrupt to processors, after override is applied */
#define RP2040_IO_BANK0_GPIO25_STATUS_IRQFROMPAD                        (1 << 24)  /* interrupt from pad before override is applied */
#define RP2040_IO_BANK0_GPIO25_STATUS_INTOPERI                          (1 << 19)  /* input signal to peripheral, after override is applied */
#define RP2040_IO_BANK0_GPIO25_STATUS_INFROMPAD                         (1 << 17)  /* input signal from pad, before override is applied */
#define RP2040_IO_BANK0_GPIO25_STATUS_OETOPAD                           (1 << 13)  /* output enable to pad after register override is applied */
#define RP2040_IO_BANK0_GPIO25_STATUS_OEFROMPERI                        (1 << 12)  /* output enable from selected peripheral, before register override is applied */
#define RP2040_IO_BANK0_GPIO25_STATUS_OUTTOPAD                          (1 << 9)  /* output signal to pad after register override is applied */
#define RP2040_IO_BANK0_GPIO25_STATUS_OUTFROMPERI                       (1 << 8)  /* output signal from selected peripheral, before register override is applied */

#define RP2040_IO_BANK0_GPIO25_CTRL_IRQOVER_SHIFT                       (28)
#define RP2040_IO_BANK0_GPIO25_CTRL_IRQOVER_MASK                        (0x03 << RP2040_IO_BANK0_GPIO25_CTRL_IRQOVER_SHIFT)
#define RP2040_IO_BANK0_GPIO25_CTRL_IRQOVER_NORMAL                      (0x0 << RP2040_IO_BANK0_GPIO25_CTRL_IRQOVER_SHIFT)  /* don't invert the interrupt */
#define RP2040_IO_BANK0_GPIO25_CTRL_IRQOVER_INVERT                      (0x1 << RP2040_IO_BANK0_GPIO25_CTRL_IRQOVER_SHIFT)  /* invert the interrupt */
#define RP2040_IO_BANK0_GPIO25_CTRL_IRQOVER_LOW                         (0x2 << RP2040_IO_BANK0_GPIO25_CTRL_IRQOVER_SHIFT)  /* drive interrupt low */
#define RP2040_IO_BANK0_GPIO25_CTRL_IRQOVER_HIGH                        (0x3 << RP2040_IO_BANK0_GPIO25_CTRL_IRQOVER_SHIFT)  /* drive interrupt high */
#define RP2040_IO_BANK0_GPIO25_CTRL_INOVER_SHIFT                        (16)
#define RP2040_IO_BANK0_GPIO25_CTRL_INOVER_MASK                         (0x03 << RP2040_IO_BANK0_GPIO25_CTRL_INOVER_SHIFT)
#define RP2040_IO_BANK0_GPIO25_CTRL_INOVER_NORMAL                       (0x0 << RP2040_IO_BANK0_GPIO25_CTRL_INOVER_SHIFT)  /* don't invert the peri input */
#define RP2040_IO_BANK0_GPIO25_CTRL_INOVER_INVERT                       (0x1 << RP2040_IO_BANK0_GPIO25_CTRL_INOVER_SHIFT)  /* invert the peri input */
#define RP2040_IO_BANK0_GPIO25_CTRL_INOVER_LOW                          (0x2 << RP2040_IO_BANK0_GPIO25_CTRL_INOVER_SHIFT)  /* drive peri input low */
#define RP2040_IO_BANK0_GPIO25_CTRL_INOVER_HIGH                         (0x3 << RP2040_IO_BANK0_GPIO25_CTRL_INOVER_SHIFT)  /* drive peri input high */
#define RP2040_IO_BANK0_GPIO25_CTRL_OEOVER_SHIFT                        (12)
#define RP2040_IO_BANK0_GPIO25_CTRL_OEOVER_MASK                         (0x03 << RP2040_IO_BANK0_GPIO25_CTRL_OEOVER_SHIFT)
#define RP2040_IO_BANK0_GPIO25_CTRL_OEOVER_NORMAL                       (0x0 << RP2040_IO_BANK0_GPIO25_CTRL_OEOVER_SHIFT)  /* drive output enable from peripheral signal selected by funcsel */
#define RP2040_IO_BANK0_GPIO25_CTRL_OEOVER_INVERT                       (0x1 << RP2040_IO_BANK0_GPIO25_CTRL_OEOVER_SHIFT)  /* drive output enable from inverse of peripheral signal selected by funcsel */
#define RP2040_IO_BANK0_GPIO25_CTRL_OEOVER_DISABLE                      (0x2 << RP2040_IO_BANK0_GPIO25_CTRL_OEOVER_SHIFT)  /* disable output */
#define RP2040_IO_BANK0_GPIO25_CTRL_OEOVER_ENABLE                       (0x3 << RP2040_IO_BANK0_GPIO25_CTRL_OEOVER_SHIFT)  /* enable output */
#define RP2040_IO_BANK0_GPIO25_CTRL_OUTOVER_SHIFT                       (8)
#define RP2040_IO_BANK0_GPIO25_CTRL_OUTOVER_MASK                        (0x03 << RP2040_IO_BANK0_GPIO25_CTRL_OUTOVER_SHIFT)
#define RP2040_IO_BANK0_GPIO25_CTRL_OUTOVER_NORMAL                      (0x0 << RP2040_IO_BANK0_GPIO25_CTRL_OUTOVER_SHIFT)  /* drive output from peripheral signal selected by funcsel */
#define RP2040_IO_BANK0_GPIO25_CTRL_OUTOVER_INVERT                      (0x1 << RP2040_IO_BANK0_GPIO25_CTRL_OUTOVER_SHIFT)  /* drive output from inverse of peripheral signal selected by funcsel */
#define RP2040_IO_BANK0_GPIO25_CTRL_OUTOVER_LOW                         (0x2 << RP2040_IO_BANK0_GPIO25_CTRL_OUTOVER_SHIFT)  /* drive output low */
#define RP2040_IO_BANK0_GPIO25_CTRL_OUTOVER_HIGH                        (0x3 << RP2040_IO_BANK0_GPIO25_CTRL_OUTOVER_SHIFT)  /* drive output high */
#define RP2040_IO_BANK0_GPIO25_CTRL_FUNCSEL_MASK                        (0x1f)
#define RP2040_IO_BANK0_GPIO25_CTRL_FUNCSEL_SPI1_SS_N                   (0x1)
#define RP2040_IO_BANK0_GPIO25_CTRL_FUNCSEL_UART1_RX                    (0x2)
#define RP2040_IO_BANK0_GPIO25_CTRL_FUNCSEL_I2C0_SCL                    (0x3)
#define RP2040_IO_BANK0_GPIO25_CTRL_FUNCSEL_PWM_B_4                     (0x4)
#define RP2040_IO_BANK0_GPIO25_CTRL_FUNCSEL_SIO_25                      (0x5)
#define RP2040_IO_BANK0_GPIO25_CTRL_FUNCSEL_PIO0_25                     (0x6)
#define RP2040_IO_BANK0_GPIO25_CTRL_FUNCSEL_PIO1_25                     (0x7)
#define RP2040_IO_BANK0_GPIO25_CTRL_FUNCSEL_CLOCKS_GPOUT_3              (0x8)
#define RP2040_IO_BANK0_GPIO25_CTRL_FUNCSEL_USB_MUXING_VBUS_DETECT      (0x9)
#define RP2040_IO_BANK0_GPIO25_CTRL_FUNCSEL_NULL                        (0x1f)

#define RP2040_IO_BANK0_GPIO26_STATUS_IRQTOPROC                         (1 << 26)  /* interrupt to processors, after override is applied */
#define RP2040_IO_BANK0_GPIO26_STATUS_IRQFROMPAD                        (1 << 24)  /* interrupt from pad before override is applied */
#define RP2040_IO_BANK0_GPIO26_STATUS_INTOPERI                          (1 << 19)  /* input signal to peripheral, after override is applied */
#define RP2040_IO_BANK0_GPIO26_STATUS_INFROMPAD                         (1 << 17)  /* input signal from pad, before override is applied */
#define RP2040_IO_BANK0_GPIO26_STATUS_OETOPAD                           (1 << 13)  /* output enable to pad after register override is applied */
#define RP2040_IO_BANK0_GPIO26_STATUS_OEFROMPERI                        (1 << 12)  /* output enable from selected peripheral, before register override is applied */
#define RP2040_IO_BANK0_GPIO26_STATUS_OUTTOPAD                          (1 << 9)  /* output signal to pad after register override is applied */
#define RP2040_IO_BANK0_GPIO26_STATUS_OUTFROMPERI                       (1 << 8)  /* output signal from selected peripheral, before register override is applied */

#define RP2040_IO_BANK0_GPIO26_CTRL_IRQOVER_SHIFT                       (28)
#define RP2040_IO_BANK0_GPIO26_CTRL_IRQOVER_MASK                        (0x03 << RP2040_IO_BANK0_GPIO26_CTRL_IRQOVER_SHIFT)
#define RP2040_IO_BANK0_GPIO26_CTRL_IRQOVER_NORMAL                      (0x0 << RP2040_IO_BANK0_GPIO26_CTRL_IRQOVER_SHIFT)  /* don't invert the interrupt */
#define RP2040_IO_BANK0_GPIO26_CTRL_IRQOVER_INVERT                      (0x1 << RP2040_IO_BANK0_GPIO26_CTRL_IRQOVER_SHIFT)  /* invert the interrupt */
#define RP2040_IO_BANK0_GPIO26_CTRL_IRQOVER_LOW                         (0x2 << RP2040_IO_BANK0_GPIO26_CTRL_IRQOVER_SHIFT)  /* drive interrupt low */
#define RP2040_IO_BANK0_GPIO26_CTRL_IRQOVER_HIGH                        (0x3 << RP2040_IO_BANK0_GPIO26_CTRL_IRQOVER_SHIFT)  /* drive interrupt high */
#define RP2040_IO_BANK0_GPIO26_CTRL_INOVER_SHIFT                        (16)
#define RP2040_IO_BANK0_GPIO26_CTRL_INOVER_MASK                         (0x03 << RP2040_IO_BANK0_GPIO26_CTRL_INOVER_SHIFT)
#define RP2040_IO_BANK0_GPIO26_CTRL_INOVER_NORMAL                       (0x0 << RP2040_IO_BANK0_GPIO26_CTRL_INOVER_SHIFT)  /* don't invert the peri input */
#define RP2040_IO_BANK0_GPIO26_CTRL_INOVER_INVERT                       (0x1 << RP2040_IO_BANK0_GPIO26_CTRL_INOVER_SHIFT)  /* invert the peri input */
#define RP2040_IO_BANK0_GPIO26_CTRL_INOVER_LOW                          (0x2 << RP2040_IO_BANK0_GPIO26_CTRL_INOVER_SHIFT)  /* drive peri input low */
#define RP2040_IO_BANK0_GPIO26_CTRL_INOVER_HIGH                         (0x3 << RP2040_IO_BANK0_GPIO26_CTRL_INOVER_SHIFT)  /* drive peri input high */
#define RP2040_IO_BANK0_GPIO26_CTRL_OEOVER_SHIFT                        (12)
#define RP2040_IO_BANK0_GPIO26_CTRL_OEOVER_MASK                         (0x03 << RP2040_IO_BANK0_GPIO26_CTRL_OEOVER_SHIFT)
#define RP2040_IO_BANK0_GPIO26_CTRL_OEOVER_NORMAL                       (0x0 << RP2040_IO_BANK0_GPIO26_CTRL_OEOVER_SHIFT)  /* drive output enable from peripheral signal selected by funcsel */
#define RP2040_IO_BANK0_GPIO26_CTRL_OEOVER_INVERT                       (0x1 << RP2040_IO_BANK0_GPIO26_CTRL_OEOVER_SHIFT)  /* drive output enable from inverse of peripheral signal selected by funcsel */
#define RP2040_IO_BANK0_GPIO26_CTRL_OEOVER_DISABLE                      (0x2 << RP2040_IO_BANK0_GPIO26_CTRL_OEOVER_SHIFT)  /* disable output */
#define RP2040_IO_BANK0_GPIO26_CTRL_OEOVER_ENABLE                       (0x3 << RP2040_IO_BANK0_GPIO26_CTRL_OEOVER_SHIFT)  /* enable output */
#define RP2040_IO_BANK0_GPIO26_CTRL_OUTOVER_SHIFT                       (8)
#define RP2040_IO_BANK0_GPIO26_CTRL_OUTOVER_MASK                        (0x03 << RP2040_IO_BANK0_GPIO26_CTRL_OUTOVER_SHIFT)
#define RP2040_IO_BANK0_GPIO26_CTRL_OUTOVER_NORMAL                      (0x0 << RP2040_IO_BANK0_GPIO26_CTRL_OUTOVER_SHIFT)  /* drive output from peripheral signal selected by funcsel */
#define RP2040_IO_BANK0_GPIO26_CTRL_OUTOVER_INVERT                      (0x1 << RP2040_IO_BANK0_GPIO26_CTRL_OUTOVER_SHIFT)  /* drive output from inverse of peripheral signal selected by funcsel */
#define RP2040_IO_BANK0_GPIO26_CTRL_OUTOVER_LOW                         (0x2 << RP2040_IO_BANK0_GPIO26_CTRL_OUTOVER_SHIFT)  /* drive output low */
#define RP2040_IO_BANK0_GPIO26_CTRL_OUTOVER_HIGH                        (0x3 << RP2040_IO_BANK0_GPIO26_CTRL_OUTOVER_SHIFT)  /* drive output high */
#define RP2040_IO_BANK0_GPIO26_CTRL_FUNCSEL_MASK                        (0x1f)
#define RP2040_IO_BANK0_GPIO26_CTRL_FUNCSEL_SPI1_SCLK                   (0x1)
#define RP2040_IO_BANK0_GPIO26_CTRL_FUNCSEL_UART1_CTS                   (0x2)
#define RP2040_IO_BANK0_GPIO26_CTRL_FUNCSEL_I2C1_SDA                    (0x3)
#define RP2040_IO_BANK0_GPIO26_CTRL_FUNCSEL_PWM_A_5                     (0x4)
#define RP2040_IO_BANK0_GPIO26_CTRL_FUNCSEL_SIO_26                      (0x5)
#define RP2040_IO_BANK0_GPIO26_CTRL_FUNCSEL_PIO0_26                     (0x6)
#define RP2040_IO_BANK0_GPIO26_CTRL_FUNCSEL_PIO1_26                     (0x7)
#define RP2040_IO_BANK0_GPIO26_CTRL_FUNCSEL_USB_MUXING_VBUS_EN          (0x9)
#define RP2040_IO_BANK0_GPIO26_CTRL_FUNCSEL_NULL                        (0x1f)

#define RP2040_IO_BANK0_GPIO27_STATUS_IRQTOPROC                         (1 << 26)  /* interrupt to processors, after override is applied */
#define RP2040_IO_BANK0_GPIO27_STATUS_IRQFROMPAD                        (1 << 24)  /* interrupt from pad before override is applied */
#define RP2040_IO_BANK0_GPIO27_STATUS_INTOPERI                          (1 << 19)  /* input signal to peripheral, after override is applied */
#define RP2040_IO_BANK0_GPIO27_STATUS_INFROMPAD                         (1 << 17)  /* input signal from pad, before override is applied */
#define RP2040_IO_BANK0_GPIO27_STATUS_OETOPAD                           (1 << 13)  /* output enable to pad after register override is applied */
#define RP2040_IO_BANK0_GPIO27_STATUS_OEFROMPERI                        (1 << 12)  /* output enable from selected peripheral, before register override is applied */
#define RP2040_IO_BANK0_GPIO27_STATUS_OUTTOPAD                          (1 << 9)  /* output signal to pad after register override is applied */
#define RP2040_IO_BANK0_GPIO27_STATUS_OUTFROMPERI                       (1 << 8)  /* output signal from selected peripheral, before register override is applied */

#define RP2040_IO_BANK0_GPIO27_CTRL_IRQOVER_SHIFT                       (28)
#define RP2040_IO_BANK0_GPIO27_CTRL_IRQOVER_MASK                        (0x03 << RP2040_IO_BANK0_GPIO27_CTRL_IRQOVER_SHIFT)
#define RP2040_IO_BANK0_GPIO27_CTRL_IRQOVER_NORMAL                      (0x0 << RP2040_IO_BANK0_GPIO27_CTRL_IRQOVER_SHIFT)  /* don't invert the interrupt */
#define RP2040_IO_BANK0_GPIO27_CTRL_IRQOVER_INVERT                      (0x1 << RP2040_IO_BANK0_GPIO27_CTRL_IRQOVER_SHIFT)  /* invert the interrupt */
#define RP2040_IO_BANK0_GPIO27_CTRL_IRQOVER_LOW                         (0x2 << RP2040_IO_BANK0_GPIO27_CTRL_IRQOVER_SHIFT)  /* drive interrupt low */
#define RP2040_IO_BANK0_GPIO27_CTRL_IRQOVER_HIGH                        (0x3 << RP2040_IO_BANK0_GPIO27_CTRL_IRQOVER_SHIFT)  /* drive interrupt high */
#define RP2040_IO_BANK0_GPIO27_CTRL_INOVER_SHIFT                        (16)
#define RP2040_IO_BANK0_GPIO27_CTRL_INOVER_MASK                         (0x03 << RP2040_IO_BANK0_GPIO27_CTRL_INOVER_SHIFT)
#define RP2040_IO_BANK0_GPIO27_CTRL_INOVER_NORMAL                       (0x0 << RP2040_IO_BANK0_GPIO27_CTRL_INOVER_SHIFT)  /* don't invert the peri input */
#define RP2040_IO_BANK0_GPIO27_CTRL_INOVER_INVERT                       (0x1 << RP2040_IO_BANK0_GPIO27_CTRL_INOVER_SHIFT)  /* invert the peri input */
#define RP2040_IO_BANK0_GPIO27_CTRL_INOVER_LOW                          (0x2 << RP2040_IO_BANK0_GPIO27_CTRL_INOVER_SHIFT)  /* drive peri input low */
#define RP2040_IO_BANK0_GPIO27_CTRL_INOVER_HIGH                         (0x3 << RP2040_IO_BANK0_GPIO27_CTRL_INOVER_SHIFT)  /* drive peri input high */
#define RP2040_IO_BANK0_GPIO27_CTRL_OEOVER_SHIFT                        (12)
#define RP2040_IO_BANK0_GPIO27_CTRL_OEOVER_MASK                         (0x03 << RP2040_IO_BANK0_GPIO27_CTRL_OEOVER_SHIFT)
#define RP2040_IO_BANK0_GPIO27_CTRL_OEOVER_NORMAL                       (0x0 << RP2040_IO_BANK0_GPIO27_CTRL_OEOVER_SHIFT)  /* drive output enable from peripheral signal selected by funcsel */
#define RP2040_IO_BANK0_GPIO27_CTRL_OEOVER_INVERT                       (0x1 << RP2040_IO_BANK0_GPIO27_CTRL_OEOVER_SHIFT)  /* drive output enable from inverse of peripheral signal selected by funcsel */
#define RP2040_IO_BANK0_GPIO27_CTRL_OEOVER_DISABLE                      (0x2 << RP2040_IO_BANK0_GPIO27_CTRL_OEOVER_SHIFT)  /* disable output */
#define RP2040_IO_BANK0_GPIO27_CTRL_OEOVER_ENABLE                       (0x3 << RP2040_IO_BANK0_GPIO27_CTRL_OEOVER_SHIFT)  /* enable output */
#define RP2040_IO_BANK0_GPIO27_CTRL_OUTOVER_SHIFT                       (8)
#define RP2040_IO_BANK0_GPIO27_CTRL_OUTOVER_MASK                        (0x03 << RP2040_IO_BANK0_GPIO27_CTRL_OUTOVER_SHIFT)
#define RP2040_IO_BANK0_GPIO27_CTRL_OUTOVER_NORMAL                      (0x0 << RP2040_IO_BANK0_GPIO27_CTRL_OUTOVER_SHIFT)  /* drive output from peripheral signal selected by funcsel */
#define RP2040_IO_BANK0_GPIO27_CTRL_OUTOVER_INVERT                      (0x1 << RP2040_IO_BANK0_GPIO27_CTRL_OUTOVER_SHIFT)  /* drive output from inverse of peripheral signal selected by funcsel */
#define RP2040_IO_BANK0_GPIO27_CTRL_OUTOVER_LOW                         (0x2 << RP2040_IO_BANK0_GPIO27_CTRL_OUTOVER_SHIFT)  /* drive output low */
#define RP2040_IO_BANK0_GPIO27_CTRL_OUTOVER_HIGH                        (0x3 << RP2040_IO_BANK0_GPIO27_CTRL_OUTOVER_SHIFT)  /* drive output high */
#define RP2040_IO_BANK0_GPIO27_CTRL_FUNCSEL_MASK                        (0x1f)
#define RP2040_IO_BANK0_GPIO27_CTRL_FUNCSEL_SPI1_TX                     (0x1)
#define RP2040_IO_BANK0_GPIO27_CTRL_FUNCSEL_UART1_RTS                   (0x2)
#define RP2040_IO_BANK0_GPIO27_CTRL_FUNCSEL_I2C1_SCL                    (0x3)
#define RP2040_IO_BANK0_GPIO27_CTRL_FUNCSEL_PWM_B_5                     (0x4)
#define RP2040_IO_BANK0_GPIO27_CTRL_FUNCSEL_SIO_27                      (0x5)
#define RP2040_IO_BANK0_GPIO27_CTRL_FUNCSEL_PIO0_27                     (0x6)
#define RP2040_IO_BANK0_GPIO27_CTRL_FUNCSEL_PIO1_27                     (0x7)
#define RP2040_IO_BANK0_GPIO27_CTRL_FUNCSEL_USB_MUXING_OVERCURR_DETECT  (0x9)
#define RP2040_IO_BANK0_GPIO27_CTRL_FUNCSEL_NULL                        (0x1f)

#define RP2040_IO_BANK0_GPIO28_STATUS_IRQTOPROC                         (1 << 26)  /* interrupt to processors, after override is applied */
#define RP2040_IO_BANK0_GPIO28_STATUS_IRQFROMPAD                        (1 << 24)  /* interrupt from pad before override is applied */
#define RP2040_IO_BANK0_GPIO28_STATUS_INTOPERI                          (1 << 19)  /* input signal to peripheral, after override is applied */
#define RP2040_IO_BANK0_GPIO28_STATUS_INFROMPAD                         (1 << 17)  /* input signal from pad, before override is applied */
#define RP2040_IO_BANK0_GPIO28_STATUS_OETOPAD                           (1 << 13)  /* output enable to pad after register override is applied */
#define RP2040_IO_BANK0_GPIO28_STATUS_OEFROMPERI                        (1 << 12)  /* output enable from selected peripheral, before register override is applied */
#define RP2040_IO_BANK0_GPIO28_STATUS_OUTTOPAD                          (1 << 9)  /* output signal to pad after register override is applied */
#define RP2040_IO_BANK0_GPIO28_STATUS_OUTFROMPERI                       (1 << 8)  /* output signal from selected peripheral, before register override is applied */

#define RP2040_IO_BANK0_GPIO28_CTRL_IRQOVER_SHIFT                       (28)
#define RP2040_IO_BANK0_GPIO28_CTRL_IRQOVER_MASK                        (0x03 << RP2040_IO_BANK0_GPIO28_CTRL_IRQOVER_SHIFT)
#define RP2040_IO_BANK0_GPIO28_CTRL_IRQOVER_NORMAL                      (0x0 << RP2040_IO_BANK0_GPIO28_CTRL_IRQOVER_SHIFT)  /* don't invert the interrupt */
#define RP2040_IO_BANK0_GPIO28_CTRL_IRQOVER_INVERT                      (0x1 << RP2040_IO_BANK0_GPIO28_CTRL_IRQOVER_SHIFT)  /* invert the interrupt */
#define RP2040_IO_BANK0_GPIO28_CTRL_IRQOVER_LOW                         (0x2 << RP2040_IO_BANK0_GPIO28_CTRL_IRQOVER_SHIFT)  /* drive interrupt low */
#define RP2040_IO_BANK0_GPIO28_CTRL_IRQOVER_HIGH                        (0x3 << RP2040_IO_BANK0_GPIO28_CTRL_IRQOVER_SHIFT)  /* drive interrupt high */
#define RP2040_IO_BANK0_GPIO28_CTRL_INOVER_SHIFT                        (16)
#define RP2040_IO_BANK0_GPIO28_CTRL_INOVER_MASK                         (0x03 << RP2040_IO_BANK0_GPIO28_CTRL_INOVER_SHIFT)
#define RP2040_IO_BANK0_GPIO28_CTRL_INOVER_NORMAL                       (0x0 << RP2040_IO_BANK0_GPIO28_CTRL_INOVER_SHIFT)  /* don't invert the peri input */
#define RP2040_IO_BANK0_GPIO28_CTRL_INOVER_INVERT                       (0x1 << RP2040_IO_BANK0_GPIO28_CTRL_INOVER_SHIFT)  /* invert the peri input */
#define RP2040_IO_BANK0_GPIO28_CTRL_INOVER_LOW                          (0x2 << RP2040_IO_BANK0_GPIO28_CTRL_INOVER_SHIFT)  /* drive peri input low */
#define RP2040_IO_BANK0_GPIO28_CTRL_INOVER_HIGH                         (0x3 << RP2040_IO_BANK0_GPIO28_CTRL_INOVER_SHIFT)  /* drive peri input high */
#define RP2040_IO_BANK0_GPIO28_CTRL_OEOVER_SHIFT                        (12)
#define RP2040_IO_BANK0_GPIO28_CTRL_OEOVER_MASK                         (0x03 << RP2040_IO_BANK0_GPIO28_CTRL_OEOVER_SHIFT)
#define RP2040_IO_BANK0_GPIO28_CTRL_OEOVER_NORMAL                       (0x0 << RP2040_IO_BANK0_GPIO28_CTRL_OEOVER_SHIFT)  /* drive output enable from peripheral signal selected by funcsel */
#define RP2040_IO_BANK0_GPIO28_CTRL_OEOVER_INVERT                       (0x1 << RP2040_IO_BANK0_GPIO28_CTRL_OEOVER_SHIFT)  /* drive output enable from inverse of peripheral signal selected by funcsel */
#define RP2040_IO_BANK0_GPIO28_CTRL_OEOVER_DISABLE                      (0x2 << RP2040_IO_BANK0_GPIO28_CTRL_OEOVER_SHIFT)  /* disable output */
#define RP2040_IO_BANK0_GPIO28_CTRL_OEOVER_ENABLE                       (0x3 << RP2040_IO_BANK0_GPIO28_CTRL_OEOVER_SHIFT)  /* enable output */
#define RP2040_IO_BANK0_GPIO28_CTRL_OUTOVER_SHIFT                       (8)
#define RP2040_IO_BANK0_GPIO28_CTRL_OUTOVER_MASK                        (0x03 << RP2040_IO_BANK0_GPIO28_CTRL_OUTOVER_SHIFT)
#define RP2040_IO_BANK0_GPIO28_CTRL_OUTOVER_NORMAL                      (0x0 << RP2040_IO_BANK0_GPIO28_CTRL_OUTOVER_SHIFT)  /* drive output from peripheral signal selected by funcsel */
#define RP2040_IO_BANK0_GPIO28_CTRL_OUTOVER_INVERT                      (0x1 << RP2040_IO_BANK0_GPIO28_CTRL_OUTOVER_SHIFT)  /* drive output from inverse of peripheral signal selected by funcsel */
#define RP2040_IO_BANK0_GPIO28_CTRL_OUTOVER_LOW                         (0x2 << RP2040_IO_BANK0_GPIO28_CTRL_OUTOVER_SHIFT)  /* drive output low */
#define RP2040_IO_BANK0_GPIO28_CTRL_OUTOVER_HIGH                        (0x3 << RP2040_IO_BANK0_GPIO28_CTRL_OUTOVER_SHIFT)  /* drive output high */
#define RP2040_IO_BANK0_GPIO28_CTRL_FUNCSEL_MASK                        (0x1f)
#define RP2040_IO_BANK0_GPIO28_CTRL_FUNCSEL_SPI1_RX                     (0x1)
#define RP2040_IO_BANK0_GPIO28_CTRL_FUNCSEL_UART0_TX                    (0x2)
#define RP2040_IO_BANK0_GPIO28_CTRL_FUNCSEL_I2C0_SDA                    (0x3)
#define RP2040_IO_BANK0_GPIO28_CTRL_FUNCSEL_PWM_A_6                     (0x4)
#define RP2040_IO_BANK0_GPIO28_CTRL_FUNCSEL_SIO_28                      (0x5)
#define RP2040_IO_BANK0_GPIO28_CTRL_FUNCSEL_PIO0_28                     (0x6)
#define RP2040_IO_BANK0_GPIO28_CTRL_FUNCSEL_PIO1_28                     (0x7)
#define RP2040_IO_BANK0_GPIO28_CTRL_FUNCSEL_USB_MUXING_VBUS_DETECT      (0x9)
#define RP2040_IO_BANK0_GPIO28_CTRL_FUNCSEL_NULL                        (0x1f)

#define RP2040_IO_BANK0_GPIO29_STATUS_IRQTOPROC                         (1 << 26)  /* interrupt to processors, after override is applied */
#define RP2040_IO_BANK0_GPIO29_STATUS_IRQFROMPAD                        (1 << 24)  /* interrupt from pad before override is applied */
#define RP2040_IO_BANK0_GPIO29_STATUS_INTOPERI                          (1 << 19)  /* input signal to peripheral, after override is applied */
#define RP2040_IO_BANK0_GPIO29_STATUS_INFROMPAD                         (1 << 17)  /* input signal from pad, before override is applied */
#define RP2040_IO_BANK0_GPIO29_STATUS_OETOPAD                           (1 << 13)  /* output enable to pad after register override is applied */
#define RP2040_IO_BANK0_GPIO29_STATUS_OEFROMPERI                        (1 << 12)  /* output enable from selected peripheral, before register override is applied */
#define RP2040_IO_BANK0_GPIO29_STATUS_OUTTOPAD                          (1 << 9)  /* output signal to pad after register override is applied */
#define RP2040_IO_BANK0_GPIO29_STATUS_OUTFROMPERI                       (1 << 8)  /* output signal from selected peripheral, before register override is applied */

#define RP2040_IO_BANK0_GPIO29_CTRL_IRQOVER_SHIFT                       (28)
#define RP2040_IO_BANK0_GPIO29_CTRL_IRQOVER_MASK                        (0x03 << RP2040_IO_BANK0_GPIO29_CTRL_IRQOVER_SHIFT)
#define RP2040_IO_BANK0_GPIO29_CTRL_IRQOVER_NORMAL                      (0x0 << RP2040_IO_BANK0_GPIO29_CTRL_IRQOVER_SHIFT)  /* don't invert the interrupt */
#define RP2040_IO_BANK0_GPIO29_CTRL_IRQOVER_INVERT                      (0x1 << RP2040_IO_BANK0_GPIO29_CTRL_IRQOVER_SHIFT)  /* invert the interrupt */
#define RP2040_IO_BANK0_GPIO29_CTRL_IRQOVER_LOW                         (0x2 << RP2040_IO_BANK0_GPIO29_CTRL_IRQOVER_SHIFT)  /* drive interrupt low */
#define RP2040_IO_BANK0_GPIO29_CTRL_IRQOVER_HIGH                        (0x3 << RP2040_IO_BANK0_GPIO29_CTRL_IRQOVER_SHIFT)  /* drive interrupt high */
#define RP2040_IO_BANK0_GPIO29_CTRL_INOVER_SHIFT                        (16)
#define RP2040_IO_BANK0_GPIO29_CTRL_INOVER_MASK                         (0x03 << RP2040_IO_BANK0_GPIO29_CTRL_INOVER_SHIFT)
#define RP2040_IO_BANK0_GPIO29_CTRL_INOVER_NORMAL                       (0x0 << RP2040_IO_BANK0_GPIO29_CTRL_INOVER_SHIFT)  /* don't invert the peri input */
#define RP2040_IO_BANK0_GPIO29_CTRL_INOVER_INVERT                       (0x1 << RP2040_IO_BANK0_GPIO29_CTRL_INOVER_SHIFT)  /* invert the peri input */
#define RP2040_IO_BANK0_GPIO29_CTRL_INOVER_LOW                          (0x2 << RP2040_IO_BANK0_GPIO29_CTRL_INOVER_SHIFT)  /* drive peri input low */
#define RP2040_IO_BANK0_GPIO29_CTRL_INOVER_HIGH                         (0x3 << RP2040_IO_BANK0_GPIO29_CTRL_INOVER_SHIFT)  /* drive peri input high */
#define RP2040_IO_BANK0_GPIO29_CTRL_OEOVER_SHIFT                        (12)
#define RP2040_IO_BANK0_GPIO29_CTRL_OEOVER_MASK                         (0x03 << RP2040_IO_BANK0_GPIO29_CTRL_OEOVER_SHIFT)
#define RP2040_IO_BANK0_GPIO29_CTRL_OEOVER_NORMAL                       (0x0 << RP2040_IO_BANK0_GPIO29_CTRL_OEOVER_SHIFT)  /* drive output enable from peripheral signal selected by funcsel */
#define RP2040_IO_BANK0_GPIO29_CTRL_OEOVER_INVERT                       (0x1 << RP2040_IO_BANK0_GPIO29_CTRL_OEOVER_SHIFT)  /* drive output enable from inverse of peripheral signal selected by funcsel */
#define RP2040_IO_BANK0_GPIO29_CTRL_OEOVER_DISABLE                      (0x2 << RP2040_IO_BANK0_GPIO29_CTRL_OEOVER_SHIFT)  /* disable output */
#define RP2040_IO_BANK0_GPIO29_CTRL_OEOVER_ENABLE                       (0x3 << RP2040_IO_BANK0_GPIO29_CTRL_OEOVER_SHIFT)  /* enable output */
#define RP2040_IO_BANK0_GPIO29_CTRL_OUTOVER_SHIFT                       (8)
#define RP2040_IO_BANK0_GPIO29_CTRL_OUTOVER_MASK                        (0x03 << RP2040_IO_BANK0_GPIO29_CTRL_OUTOVER_SHIFT)
#define RP2040_IO_BANK0_GPIO29_CTRL_OUTOVER_NORMAL                      (0x0 << RP2040_IO_BANK0_GPIO29_CTRL_OUTOVER_SHIFT)  /* drive output from peripheral signal selected by funcsel */
#define RP2040_IO_BANK0_GPIO29_CTRL_OUTOVER_INVERT                      (0x1 << RP2040_IO_BANK0_GPIO29_CTRL_OUTOVER_SHIFT)  /* drive output from inverse of peripheral signal selected by funcsel */
#define RP2040_IO_BANK0_GPIO29_CTRL_OUTOVER_LOW                         (0x2 << RP2040_IO_BANK0_GPIO29_CTRL_OUTOVER_SHIFT)  /* drive output low */
#define RP2040_IO_BANK0_GPIO29_CTRL_OUTOVER_HIGH                        (0x3 << RP2040_IO_BANK0_GPIO29_CTRL_OUTOVER_SHIFT)  /* drive output high */
#define RP2040_IO_BANK0_GPIO29_CTRL_FUNCSEL_MASK                        (0x1f)
#define RP2040_IO_BANK0_GPIO29_CTRL_FUNCSEL_SPI1_SS_N                   (0x1)
#define RP2040_IO_BANK0_GPIO29_CTRL_FUNCSEL_UART0_RX                    (0x2)
#define RP2040_IO_BANK0_GPIO29_CTRL_FUNCSEL_I2C0_SCL                    (0x3)
#define RP2040_IO_BANK0_GPIO29_CTRL_FUNCSEL_PWM_B_6                     (0x4)
#define RP2040_IO_BANK0_GPIO29_CTRL_FUNCSEL_SIO_29                      (0x5)
#define RP2040_IO_BANK0_GPIO29_CTRL_FUNCSEL_PIO0_29                     (0x6)
#define RP2040_IO_BANK0_GPIO29_CTRL_FUNCSEL_PIO1_29                     (0x7)
#define RP2040_IO_BANK0_GPIO29_CTRL_FUNCSEL_USB_MUXING_VBUS_EN          (0x9)
#define RP2040_IO_BANK0_GPIO29_CTRL_FUNCSEL_NULL                        (0x1f)

#define RP2040_IO_BANK0_INTR0_GPIO7_EDGE_HIGH                           (1 << 31)
#define RP2040_IO_BANK0_INTR0_GPIO7_EDGE_LOW                            (1 << 30)
#define RP2040_IO_BANK0_INTR0_GPIO7_LEVEL_HIGH                          (1 << 29)
#define RP2040_IO_BANK0_INTR0_GPIO7_LEVEL_LOW                           (1 << 28)
#define RP2040_IO_BANK0_INTR0_GPIO6_EDGE_HIGH                           (1 << 27)
#define RP2040_IO_BANK0_INTR0_GPIO6_EDGE_LOW                            (1 << 26)
#define RP2040_IO_BANK0_INTR0_GPIO6_LEVEL_HIGH                          (1 << 25)
#define RP2040_IO_BANK0_INTR0_GPIO6_LEVEL_LOW                           (1 << 24)
#define RP2040_IO_BANK0_INTR0_GPIO5_EDGE_HIGH                           (1 << 23)
#define RP2040_IO_BANK0_INTR0_GPIO5_EDGE_LOW                            (1 << 22)
#define RP2040_IO_BANK0_INTR0_GPIO5_LEVEL_HIGH                          (1 << 21)
#define RP2040_IO_BANK0_INTR0_GPIO5_LEVEL_LOW                           (1 << 20)
#define RP2040_IO_BANK0_INTR0_GPIO4_EDGE_HIGH                           (1 << 19)
#define RP2040_IO_BANK0_INTR0_GPIO4_EDGE_LOW                            (1 << 18)
#define RP2040_IO_BANK0_INTR0_GPIO4_LEVEL_HIGH                          (1 << 17)
#define RP2040_IO_BANK0_INTR0_GPIO4_LEVEL_LOW                           (1 << 16)
#define RP2040_IO_BANK0_INTR0_GPIO3_EDGE_HIGH                           (1 << 15)
#define RP2040_IO_BANK0_INTR0_GPIO3_EDGE_LOW                            (1 << 14)
#define RP2040_IO_BANK0_INTR0_GPIO3_LEVEL_HIGH                          (1 << 13)
#define RP2040_IO_BANK0_INTR0_GPIO3_LEVEL_LOW                           (1 << 12)
#define RP2040_IO_BANK0_INTR0_GPIO2_EDGE_HIGH                           (1 << 11)
#define RP2040_IO_BANK0_INTR0_GPIO2_EDGE_LOW                            (1 << 10)
#define RP2040_IO_BANK0_INTR0_GPIO2_LEVEL_HIGH                          (1 << 9)
#define RP2040_IO_BANK0_INTR0_GPIO2_LEVEL_LOW                           (1 << 8)
#define RP2040_IO_BANK0_INTR0_GPIO1_EDGE_HIGH                           (1 << 7)
#define RP2040_IO_BANK0_INTR0_GPIO1_EDGE_LOW                            (1 << 6)
#define RP2040_IO_BANK0_INTR0_GPIO1_LEVEL_HIGH                          (1 << 5)
#define RP2040_IO_BANK0_INTR0_GPIO1_LEVEL_LOW                           (1 << 4)
#define RP2040_IO_BANK0_INTR0_GPIO0_EDGE_HIGH                           (1 << 3)
#define RP2040_IO_BANK0_INTR0_GPIO0_EDGE_LOW                            (1 << 2)
#define RP2040_IO_BANK0_INTR0_GPIO0_LEVEL_HIGH                          (1 << 1)
#define RP2040_IO_BANK0_INTR0_GPIO0_LEVEL_LOW                           (1 << 0)

#define RP2040_IO_BANK0_INTR1_GPIO15_EDGE_HIGH                          (1 << 31)
#define RP2040_IO_BANK0_INTR1_GPIO15_EDGE_LOW                           (1 << 30)
#define RP2040_IO_BANK0_INTR1_GPIO15_LEVEL_HIGH                         (1 << 29)
#define RP2040_IO_BANK0_INTR1_GPIO15_LEVEL_LOW                          (1 << 28)
#define RP2040_IO_BANK0_INTR1_GPIO14_EDGE_HIGH                          (1 << 27)
#define RP2040_IO_BANK0_INTR1_GPIO14_EDGE_LOW                           (1 << 26)
#define RP2040_IO_BANK0_INTR1_GPIO14_LEVEL_HIGH                         (1 << 25)
#define RP2040_IO_BANK0_INTR1_GPIO14_LEVEL_LOW                          (1 << 24)
#define RP2040_IO_BANK0_INTR1_GPIO13_EDGE_HIGH                          (1 << 23)
#define RP2040_IO_BANK0_INTR1_GPIO13_EDGE_LOW                           (1 << 22)
#define RP2040_IO_BANK0_INTR1_GPIO13_LEVEL_HIGH                         (1 << 21)
#define RP2040_IO_BANK0_INTR1_GPIO13_LEVEL_LOW                          (1 << 20)
#define RP2040_IO_BANK0_INTR1_GPIO12_EDGE_HIGH                          (1 << 19)
#define RP2040_IO_BANK0_INTR1_GPIO12_EDGE_LOW                           (1 << 18)
#define RP2040_IO_BANK0_INTR1_GPIO12_LEVEL_HIGH                         (1 << 17)
#define RP2040_IO_BANK0_INTR1_GPIO12_LEVEL_LOW                          (1 << 16)
#define RP2040_IO_BANK0_INTR1_GPIO11_EDGE_HIGH                          (1 << 15)
#define RP2040_IO_BANK0_INTR1_GPIO11_EDGE_LOW                           (1 << 14)
#define RP2040_IO_BANK0_INTR1_GPIO11_LEVEL_HIGH                         (1 << 13)
#define RP2040_IO_BANK0_INTR1_GPIO11_LEVEL_LOW                          (1 << 12)
#define RP2040_IO_BANK0_INTR1_GPIO10_EDGE_HIGH                          (1 << 11)
#define RP2040_IO_BANK0_INTR1_GPIO10_EDGE_LOW                           (1 << 10)
#define RP2040_IO_BANK0_INTR1_GPIO10_LEVEL_HIGH                         (1 << 9)
#define RP2040_IO_BANK0_INTR1_GPIO10_LEVEL_LOW                          (1 << 8)
#define RP2040_IO_BANK0_INTR1_GPIO9_EDGE_HIGH                           (1 << 7)
#define RP2040_IO_BANK0_INTR1_GPIO9_EDGE_LOW                            (1 << 6)
#define RP2040_IO_BANK0_INTR1_GPIO9_LEVEL_HIGH                          (1 << 5)
#define RP2040_IO_BANK0_INTR1_GPIO9_LEVEL_LOW                           (1 << 4)
#define RP2040_IO_BANK0_INTR1_GPIO8_EDGE_HIGH                           (1 << 3)
#define RP2040_IO_BANK0_INTR1_GPIO8_EDGE_LOW                            (1 << 2)
#define RP2040_IO_BANK0_INTR1_GPIO8_LEVEL_HIGH                          (1 << 1)
#define RP2040_IO_BANK0_INTR1_GPIO8_LEVEL_LOW                           (1 << 0)

#define RP2040_IO_BANK0_INTR2_GPIO23_EDGE_HIGH                          (1 << 31)
#define RP2040_IO_BANK0_INTR2_GPIO23_EDGE_LOW                           (1 << 30)
#define RP2040_IO_BANK0_INTR2_GPIO23_LEVEL_HIGH                         (1 << 29)
#define RP2040_IO_BANK0_INTR2_GPIO23_LEVEL_LOW                          (1 << 28)
#define RP2040_IO_BANK0_INTR2_GPIO22_EDGE_HIGH                          (1 << 27)
#define RP2040_IO_BANK0_INTR2_GPIO22_EDGE_LOW                           (1 << 26)
#define RP2040_IO_BANK0_INTR2_GPIO22_LEVEL_HIGH                         (1 << 25)
#define RP2040_IO_BANK0_INTR2_GPIO22_LEVEL_LOW                          (1 << 24)
#define RP2040_IO_BANK0_INTR2_GPIO21_EDGE_HIGH                          (1 << 23)
#define RP2040_IO_BANK0_INTR2_GPIO21_EDGE_LOW                           (1 << 22)
#define RP2040_IO_BANK0_INTR2_GPIO21_LEVEL_HIGH                         (1 << 21)
#define RP2040_IO_BANK0_INTR2_GPIO21_LEVEL_LOW                          (1 << 20)
#define RP2040_IO_BANK0_INTR2_GPIO20_EDGE_HIGH                          (1 << 19)
#define RP2040_IO_BANK0_INTR2_GPIO20_EDGE_LOW                           (1 << 18)
#define RP2040_IO_BANK0_INTR2_GPIO20_LEVEL_HIGH                         (1 << 17)
#define RP2040_IO_BANK0_INTR2_GPIO20_LEVEL_LOW                          (1 << 16)
#define RP2040_IO_BANK0_INTR2_GPIO19_EDGE_HIGH                          (1 << 15)
#define RP2040_IO_BANK0_INTR2_GPIO19_EDGE_LOW                           (1 << 14)
#define RP2040_IO_BANK0_INTR2_GPIO19_LEVEL_HIGH                         (1 << 13)
#define RP2040_IO_BANK0_INTR2_GPIO19_LEVEL_LOW                          (1 << 12)
#define RP2040_IO_BANK0_INTR2_GPIO18_EDGE_HIGH                          (1 << 11)
#define RP2040_IO_BANK0_INTR2_GPIO18_EDGE_LOW                           (1 << 10)
#define RP2040_IO_BANK0_INTR2_GPIO18_LEVEL_HIGH                         (1 << 9)
#define RP2040_IO_BANK0_INTR2_GPIO18_LEVEL_LOW                          (1 << 8)
#define RP2040_IO_BANK0_INTR2_GPIO17_EDGE_HIGH                          (1 << 7)
#define RP2040_IO_BANK0_INTR2_GPIO17_EDGE_LOW                           (1 << 6)
#define RP2040_IO_BANK0_INTR2_GPIO17_LEVEL_HIGH                         (1 << 5)
#define RP2040_IO_BANK0_INTR2_GPIO17_LEVEL_LOW                          (1 << 4)
#define RP2040_IO_BANK0_INTR2_GPIO16_EDGE_HIGH                          (1 << 3)
#define RP2040_IO_BANK0_INTR2_GPIO16_EDGE_LOW                           (1 << 2)
#define RP2040_IO_BANK0_INTR2_GPIO16_LEVEL_HIGH                         (1 << 1)
#define RP2040_IO_BANK0_INTR2_GPIO16_LEVEL_LOW                          (1 << 0)

#define RP2040_IO_BANK0_INTR3_GPIO29_EDGE_HIGH                          (1 << 23)
#define RP2040_IO_BANK0_INTR3_GPIO29_EDGE_LOW                           (1 << 22)
#define RP2040_IO_BANK0_INTR3_GPIO29_LEVEL_HIGH                         (1 << 21)
#define RP2040_IO_BANK0_INTR3_GPIO29_LEVEL_LOW                          (1 << 20)
#define RP2040_IO_BANK0_INTR3_GPIO28_EDGE_HIGH                          (1 << 19)
#define RP2040_IO_BANK0_INTR3_GPIO28_EDGE_LOW                           (1 << 18)
#define RP2040_IO_BANK0_INTR3_GPIO28_LEVEL_HIGH                         (1 << 17)
#define RP2040_IO_BANK0_INTR3_GPIO28_LEVEL_LOW                          (1 << 16)
#define RP2040_IO_BANK0_INTR3_GPIO27_EDGE_HIGH                          (1 << 15)
#define RP2040_IO_BANK0_INTR3_GPIO27_EDGE_LOW                           (1 << 14)
#define RP2040_IO_BANK0_INTR3_GPIO27_LEVEL_HIGH                         (1 << 13)
#define RP2040_IO_BANK0_INTR3_GPIO27_LEVEL_LOW                          (1 << 12)
#define RP2040_IO_BANK0_INTR3_GPIO26_EDGE_HIGH                          (1 << 11)
#define RP2040_IO_BANK0_INTR3_GPIO26_EDGE_LOW                           (1 << 10)
#define RP2040_IO_BANK0_INTR3_GPIO26_LEVEL_HIGH                         (1 << 9)
#define RP2040_IO_BANK0_INTR3_GPIO26_LEVEL_LOW                          (1 << 8)
#define RP2040_IO_BANK0_INTR3_GPIO25_EDGE_HIGH                          (1 << 7)
#define RP2040_IO_BANK0_INTR3_GPIO25_EDGE_LOW                           (1 << 6)
#define RP2040_IO_BANK0_INTR3_GPIO25_LEVEL_HIGH                         (1 << 5)
#define RP2040_IO_BANK0_INTR3_GPIO25_LEVEL_LOW                          (1 << 4)
#define RP2040_IO_BANK0_INTR3_GPIO24_EDGE_HIGH                          (1 << 3)
#define RP2040_IO_BANK0_INTR3_GPIO24_EDGE_LOW                           (1 << 2)
#define RP2040_IO_BANK0_INTR3_GPIO24_LEVEL_HIGH                         (1 << 1)
#define RP2040_IO_BANK0_INTR3_GPIO24_LEVEL_LOW                          (1 << 0)

#define RP2040_IO_BANK0_PROC0_INTE0_GPIO7_EDGE_HIGH                     (1 << 31)
#define RP2040_IO_BANK0_PROC0_INTE0_GPIO7_EDGE_LOW                      (1 << 30)
#define RP2040_IO_BANK0_PROC0_INTE0_GPIO7_LEVEL_HIGH                    (1 << 29)
#define RP2040_IO_BANK0_PROC0_INTE0_GPIO7_LEVEL_LOW                     (1 << 28)
#define RP2040_IO_BANK0_PROC0_INTE0_GPIO6_EDGE_HIGH                     (1 << 27)
#define RP2040_IO_BANK0_PROC0_INTE0_GPIO6_EDGE_LOW                      (1 << 26)
#define RP2040_IO_BANK0_PROC0_INTE0_GPIO6_LEVEL_HIGH                    (1 << 25)
#define RP2040_IO_BANK0_PROC0_INTE0_GPIO6_LEVEL_LOW                     (1 << 24)
#define RP2040_IO_BANK0_PROC0_INTE0_GPIO5_EDGE_HIGH                     (1 << 23)
#define RP2040_IO_BANK0_PROC0_INTE0_GPIO5_EDGE_LOW                      (1 << 22)
#define RP2040_IO_BANK0_PROC0_INTE0_GPIO5_LEVEL_HIGH                    (1 << 21)
#define RP2040_IO_BANK0_PROC0_INTE0_GPIO5_LEVEL_LOW                     (1 << 20)
#define RP2040_IO_BANK0_PROC0_INTE0_GPIO4_EDGE_HIGH                     (1 << 19)
#define RP2040_IO_BANK0_PROC0_INTE0_GPIO4_EDGE_LOW                      (1 << 18)
#define RP2040_IO_BANK0_PROC0_INTE0_GPIO4_LEVEL_HIGH                    (1 << 17)
#define RP2040_IO_BANK0_PROC0_INTE0_GPIO4_LEVEL_LOW                     (1 << 16)
#define RP2040_IO_BANK0_PROC0_INTE0_GPIO3_EDGE_HIGH                     (1 << 15)
#define RP2040_IO_BANK0_PROC0_INTE0_GPIO3_EDGE_LOW                      (1 << 14)
#define RP2040_IO_BANK0_PROC0_INTE0_GPIO3_LEVEL_HIGH                    (1 << 13)
#define RP2040_IO_BANK0_PROC0_INTE0_GPIO3_LEVEL_LOW                     (1 << 12)
#define RP2040_IO_BANK0_PROC0_INTE0_GPIO2_EDGE_HIGH                     (1 << 11)
#define RP2040_IO_BANK0_PROC0_INTE0_GPIO2_EDGE_LOW                      (1 << 10)
#define RP2040_IO_BANK0_PROC0_INTE0_GPIO2_LEVEL_HIGH                    (1 << 9)
#define RP2040_IO_BANK0_PROC0_INTE0_GPIO2_LEVEL_LOW                     (1 << 8)
#define RP2040_IO_BANK0_PROC0_INTE0_GPIO1_EDGE_HIGH                     (1 << 7)
#define RP2040_IO_BANK0_PROC0_INTE0_GPIO1_EDGE_LOW                      (1 << 6)
#define RP2040_IO_BANK0_PROC0_INTE0_GPIO1_LEVEL_HIGH                    (1 << 5)
#define RP2040_IO_BANK0_PROC0_INTE0_GPIO1_LEVEL_LOW                     (1 << 4)
#define RP2040_IO_BANK0_PROC0_INTE0_GPIO0_EDGE_HIGH                     (1 << 3)
#define RP2040_IO_BANK0_PROC0_INTE0_GPIO0_EDGE_LOW                      (1 << 2)
#define RP2040_IO_BANK0_PROC0_INTE0_GPIO0_LEVEL_HIGH                    (1 << 1)
#define RP2040_IO_BANK0_PROC0_INTE0_GPIO0_LEVEL_LOW                     (1 << 0)

#define RP2040_IO_BANK0_PROC0_INTE1_GPIO15_EDGE_HIGH                    (1 << 31)
#define RP2040_IO_BANK0_PROC0_INTE1_GPIO15_EDGE_LOW                     (1 << 30)
#define RP2040_IO_BANK0_PROC0_INTE1_GPIO15_LEVEL_HIGH                   (1 << 29)
#define RP2040_IO_BANK0_PROC0_INTE1_GPIO15_LEVEL_LOW                    (1 << 28)
#define RP2040_IO_BANK0_PROC0_INTE1_GPIO14_EDGE_HIGH                    (1 << 27)
#define RP2040_IO_BANK0_PROC0_INTE1_GPIO14_EDGE_LOW                     (1 << 26)
#define RP2040_IO_BANK0_PROC0_INTE1_GPIO14_LEVEL_HIGH                   (1 << 25)
#define RP2040_IO_BANK0_PROC0_INTE1_GPIO14_LEVEL_LOW                    (1 << 24)
#define RP2040_IO_BANK0_PROC0_INTE1_GPIO13_EDGE_HIGH                    (1 << 23)
#define RP2040_IO_BANK0_PROC0_INTE1_GPIO13_EDGE_LOW                     (1 << 22)
#define RP2040_IO_BANK0_PROC0_INTE1_GPIO13_LEVEL_HIGH                   (1 << 21)
#define RP2040_IO_BANK0_PROC0_INTE1_GPIO13_LEVEL_LOW                    (1 << 20)
#define RP2040_IO_BANK0_PROC0_INTE1_GPIO12_EDGE_HIGH                    (1 << 19)
#define RP2040_IO_BANK0_PROC0_INTE1_GPIO12_EDGE_LOW                     (1 << 18)
#define RP2040_IO_BANK0_PROC0_INTE1_GPIO12_LEVEL_HIGH                   (1 << 17)
#define RP2040_IO_BANK0_PROC0_INTE1_GPIO12_LEVEL_LOW                    (1 << 16)
#define RP2040_IO_BANK0_PROC0_INTE1_GPIO11_EDGE_HIGH                    (1 << 15)
#define RP2040_IO_BANK0_PROC0_INTE1_GPIO11_EDGE_LOW                     (1 << 14)
#define RP2040_IO_BANK0_PROC0_INTE1_GPIO11_LEVEL_HIGH                   (1 << 13)
#define RP2040_IO_BANK0_PROC0_INTE1_GPIO11_LEVEL_LOW                    (1 << 12)
#define RP2040_IO_BANK0_PROC0_INTE1_GPIO10_EDGE_HIGH                    (1 << 11)
#define RP2040_IO_BANK0_PROC0_INTE1_GPIO10_EDGE_LOW                     (1 << 10)
#define RP2040_IO_BANK0_PROC0_INTE1_GPIO10_LEVEL_HIGH                   (1 << 9)
#define RP2040_IO_BANK0_PROC0_INTE1_GPIO10_LEVEL_LOW                    (1 << 8)
#define RP2040_IO_BANK0_PROC0_INTE1_GPIO9_EDGE_HIGH                     (1 << 7)
#define RP2040_IO_BANK0_PROC0_INTE1_GPIO9_EDGE_LOW                      (1 << 6)
#define RP2040_IO_BANK0_PROC0_INTE1_GPIO9_LEVEL_HIGH                    (1 << 5)
#define RP2040_IO_BANK0_PROC0_INTE1_GPIO9_LEVEL_LOW                     (1 << 4)
#define RP2040_IO_BANK0_PROC0_INTE1_GPIO8_EDGE_HIGH                     (1 << 3)
#define RP2040_IO_BANK0_PROC0_INTE1_GPIO8_EDGE_LOW                      (1 << 2)
#define RP2040_IO_BANK0_PROC0_INTE1_GPIO8_LEVEL_HIGH                    (1 << 1)
#define RP2040_IO_BANK0_PROC0_INTE1_GPIO8_LEVEL_LOW                     (1 << 0)

#define RP2040_IO_BANK0_PROC0_INTE2_GPIO23_EDGE_HIGH                    (1 << 31)
#define RP2040_IO_BANK0_PROC0_INTE2_GPIO23_EDGE_LOW                     (1 << 30)
#define RP2040_IO_BANK0_PROC0_INTE2_GPIO23_LEVEL_HIGH                   (1 << 29)
#define RP2040_IO_BANK0_PROC0_INTE2_GPIO23_LEVEL_LOW                    (1 << 28)
#define RP2040_IO_BANK0_PROC0_INTE2_GPIO22_EDGE_HIGH                    (1 << 27)
#define RP2040_IO_BANK0_PROC0_INTE2_GPIO22_EDGE_LOW                     (1 << 26)
#define RP2040_IO_BANK0_PROC0_INTE2_GPIO22_LEVEL_HIGH                   (1 << 25)
#define RP2040_IO_BANK0_PROC0_INTE2_GPIO22_LEVEL_LOW                    (1 << 24)
#define RP2040_IO_BANK0_PROC0_INTE2_GPIO21_EDGE_HIGH                    (1 << 23)
#define RP2040_IO_BANK0_PROC0_INTE2_GPIO21_EDGE_LOW                     (1 << 22)
#define RP2040_IO_BANK0_PROC0_INTE2_GPIO21_LEVEL_HIGH                   (1 << 21)
#define RP2040_IO_BANK0_PROC0_INTE2_GPIO21_LEVEL_LOW                    (1 << 20)
#define RP2040_IO_BANK0_PROC0_INTE2_GPIO20_EDGE_HIGH                    (1 << 19)
#define RP2040_IO_BANK0_PROC0_INTE2_GPIO20_EDGE_LOW                     (1 << 18)
#define RP2040_IO_BANK0_PROC0_INTE2_GPIO20_LEVEL_HIGH                   (1 << 17)
#define RP2040_IO_BANK0_PROC0_INTE2_GPIO20_LEVEL_LOW                    (1 << 16)
#define RP2040_IO_BANK0_PROC0_INTE2_GPIO19_EDGE_HIGH                    (1 << 15)
#define RP2040_IO_BANK0_PROC0_INTE2_GPIO19_EDGE_LOW                     (1 << 14)
#define RP2040_IO_BANK0_PROC0_INTE2_GPIO19_LEVEL_HIGH                   (1 << 13)
#define RP2040_IO_BANK0_PROC0_INTE2_GPIO19_LEVEL_LOW                    (1 << 12)
#define RP2040_IO_BANK0_PROC0_INTE2_GPIO18_EDGE_HIGH                    (1 << 11)
#define RP2040_IO_BANK0_PROC0_INTE2_GPIO18_EDGE_LOW                     (1 << 10)
#define RP2040_IO_BANK0_PROC0_INTE2_GPIO18_LEVEL_HIGH                   (1 << 9)
#define RP2040_IO_BANK0_PROC0_INTE2_GPIO18_LEVEL_LOW                    (1 << 8)
#define RP2040_IO_BANK0_PROC0_INTE2_GPIO17_EDGE_HIGH                    (1 << 7)
#define RP2040_IO_BANK0_PROC0_INTE2_GPIO17_EDGE_LOW                     (1 << 6)
#define RP2040_IO_BANK0_PROC0_INTE2_GPIO17_LEVEL_HIGH                   (1 << 5)
#define RP2040_IO_BANK0_PROC0_INTE2_GPIO17_LEVEL_LOW                    (1 << 4)
#define RP2040_IO_BANK0_PROC0_INTE2_GPIO16_EDGE_HIGH                    (1 << 3)
#define RP2040_IO_BANK0_PROC0_INTE2_GPIO16_EDGE_LOW                     (1 << 2)
#define RP2040_IO_BANK0_PROC0_INTE2_GPIO16_LEVEL_HIGH                   (1 << 1)
#define RP2040_IO_BANK0_PROC0_INTE2_GPIO16_LEVEL_LOW                    (1 << 0)

#define RP2040_IO_BANK0_PROC0_INTE3_GPIO29_EDGE_HIGH                    (1 << 23)
#define RP2040_IO_BANK0_PROC0_INTE3_GPIO29_EDGE_LOW                     (1 << 22)
#define RP2040_IO_BANK0_PROC0_INTE3_GPIO29_LEVEL_HIGH                   (1 << 21)
#define RP2040_IO_BANK0_PROC0_INTE3_GPIO29_LEVEL_LOW                    (1 << 20)
#define RP2040_IO_BANK0_PROC0_INTE3_GPIO28_EDGE_HIGH                    (1 << 19)
#define RP2040_IO_BANK0_PROC0_INTE3_GPIO28_EDGE_LOW                     (1 << 18)
#define RP2040_IO_BANK0_PROC0_INTE3_GPIO28_LEVEL_HIGH                   (1 << 17)
#define RP2040_IO_BANK0_PROC0_INTE3_GPIO28_LEVEL_LOW                    (1 << 16)
#define RP2040_IO_BANK0_PROC0_INTE3_GPIO27_EDGE_HIGH                    (1 << 15)
#define RP2040_IO_BANK0_PROC0_INTE3_GPIO27_EDGE_LOW                     (1 << 14)
#define RP2040_IO_BANK0_PROC0_INTE3_GPIO27_LEVEL_HIGH                   (1 << 13)
#define RP2040_IO_BANK0_PROC0_INTE3_GPIO27_LEVEL_LOW                    (1 << 12)
#define RP2040_IO_BANK0_PROC0_INTE3_GPIO26_EDGE_HIGH                    (1 << 11)
#define RP2040_IO_BANK0_PROC0_INTE3_GPIO26_EDGE_LOW                     (1 << 10)
#define RP2040_IO_BANK0_PROC0_INTE3_GPIO26_LEVEL_HIGH                   (1 << 9)
#define RP2040_IO_BANK0_PROC0_INTE3_GPIO26_LEVEL_LOW                    (1 << 8)
#define RP2040_IO_BANK0_PROC0_INTE3_GPIO25_EDGE_HIGH                    (1 << 7)
#define RP2040_IO_BANK0_PROC0_INTE3_GPIO25_EDGE_LOW                     (1 << 6)
#define RP2040_IO_BANK0_PROC0_INTE3_GPIO25_LEVEL_HIGH                   (1 << 5)
#define RP2040_IO_BANK0_PROC0_INTE3_GPIO25_LEVEL_LOW                    (1 << 4)
#define RP2040_IO_BANK0_PROC0_INTE3_GPIO24_EDGE_HIGH                    (1 << 3)
#define RP2040_IO_BANK0_PROC0_INTE3_GPIO24_EDGE_LOW                     (1 << 2)
#define RP2040_IO_BANK0_PROC0_INTE3_GPIO24_LEVEL_HIGH                   (1 << 1)
#define RP2040_IO_BANK0_PROC0_INTE3_GPIO24_LEVEL_LOW                    (1 << 0)

#define RP2040_IO_BANK0_PROC0_INTF0_GPIO7_EDGE_HIGH                     (1 << 31)
#define RP2040_IO_BANK0_PROC0_INTF0_GPIO7_EDGE_LOW                      (1 << 30)
#define RP2040_IO_BANK0_PROC0_INTF0_GPIO7_LEVEL_HIGH                    (1 << 29)
#define RP2040_IO_BANK0_PROC0_INTF0_GPIO7_LEVEL_LOW                     (1 << 28)
#define RP2040_IO_BANK0_PROC0_INTF0_GPIO6_EDGE_HIGH                     (1 << 27)
#define RP2040_IO_BANK0_PROC0_INTF0_GPIO6_EDGE_LOW                      (1 << 26)
#define RP2040_IO_BANK0_PROC0_INTF0_GPIO6_LEVEL_HIGH                    (1 << 25)
#define RP2040_IO_BANK0_PROC0_INTF0_GPIO6_LEVEL_LOW                     (1 << 24)
#define RP2040_IO_BANK0_PROC0_INTF0_GPIO5_EDGE_HIGH                     (1 << 23)
#define RP2040_IO_BANK0_PROC0_INTF0_GPIO5_EDGE_LOW                      (1 << 22)
#define RP2040_IO_BANK0_PROC0_INTF0_GPIO5_LEVEL_HIGH                    (1 << 21)
#define RP2040_IO_BANK0_PROC0_INTF0_GPIO5_LEVEL_LOW                     (1 << 20)
#define RP2040_IO_BANK0_PROC0_INTF0_GPIO4_EDGE_HIGH                     (1 << 19)
#define RP2040_IO_BANK0_PROC0_INTF0_GPIO4_EDGE_LOW                      (1 << 18)
#define RP2040_IO_BANK0_PROC0_INTF0_GPIO4_LEVEL_HIGH                    (1 << 17)
#define RP2040_IO_BANK0_PROC0_INTF0_GPIO4_LEVEL_LOW                     (1 << 16)
#define RP2040_IO_BANK0_PROC0_INTF0_GPIO3_EDGE_HIGH                     (1 << 15)
#define RP2040_IO_BANK0_PROC0_INTF0_GPIO3_EDGE_LOW                      (1 << 14)
#define RP2040_IO_BANK0_PROC0_INTF0_GPIO3_LEVEL_HIGH                    (1 << 13)
#define RP2040_IO_BANK0_PROC0_INTF0_GPIO3_LEVEL_LOW                     (1 << 12)
#define RP2040_IO_BANK0_PROC0_INTF0_GPIO2_EDGE_HIGH                     (1 << 11)
#define RP2040_IO_BANK0_PROC0_INTF0_GPIO2_EDGE_LOW                      (1 << 10)
#define RP2040_IO_BANK0_PROC0_INTF0_GPIO2_LEVEL_HIGH                    (1 << 9)
#define RP2040_IO_BANK0_PROC0_INTF0_GPIO2_LEVEL_LOW                     (1 << 8)
#define RP2040_IO_BANK0_PROC0_INTF0_GPIO1_EDGE_HIGH                     (1 << 7)
#define RP2040_IO_BANK0_PROC0_INTF0_GPIO1_EDGE_LOW                      (1 << 6)
#define RP2040_IO_BANK0_PROC0_INTF0_GPIO1_LEVEL_HIGH                    (1 << 5)
#define RP2040_IO_BANK0_PROC0_INTF0_GPIO1_LEVEL_LOW                     (1 << 4)
#define RP2040_IO_BANK0_PROC0_INTF0_GPIO0_EDGE_HIGH                     (1 << 3)
#define RP2040_IO_BANK0_PROC0_INTF0_GPIO0_EDGE_LOW                      (1 << 2)
#define RP2040_IO_BANK0_PROC0_INTF0_GPIO0_LEVEL_HIGH                    (1 << 1)
#define RP2040_IO_BANK0_PROC0_INTF0_GPIO0_LEVEL_LOW                     (1 << 0)

#define RP2040_IO_BANK0_PROC0_INTF1_GPIO15_EDGE_HIGH                    (1 << 31)
#define RP2040_IO_BANK0_PROC0_INTF1_GPIO15_EDGE_LOW                     (1 << 30)
#define RP2040_IO_BANK0_PROC0_INTF1_GPIO15_LEVEL_HIGH                   (1 << 29)
#define RP2040_IO_BANK0_PROC0_INTF1_GPIO15_LEVEL_LOW                    (1 << 28)
#define RP2040_IO_BANK0_PROC0_INTF1_GPIO14_EDGE_HIGH                    (1 << 27)
#define RP2040_IO_BANK0_PROC0_INTF1_GPIO14_EDGE_LOW                     (1 << 26)
#define RP2040_IO_BANK0_PROC0_INTF1_GPIO14_LEVEL_HIGH                   (1 << 25)
#define RP2040_IO_BANK0_PROC0_INTF1_GPIO14_LEVEL_LOW                    (1 << 24)
#define RP2040_IO_BANK0_PROC0_INTF1_GPIO13_EDGE_HIGH                    (1 << 23)
#define RP2040_IO_BANK0_PROC0_INTF1_GPIO13_EDGE_LOW                     (1 << 22)
#define RP2040_IO_BANK0_PROC0_INTF1_GPIO13_LEVEL_HIGH                   (1 << 21)
#define RP2040_IO_BANK0_PROC0_INTF1_GPIO13_LEVEL_LOW                    (1 << 20)
#define RP2040_IO_BANK0_PROC0_INTF1_GPIO12_EDGE_HIGH                    (1 << 19)
#define RP2040_IO_BANK0_PROC0_INTF1_GPIO12_EDGE_LOW                     (1 << 18)
#define RP2040_IO_BANK0_PROC0_INTF1_GPIO12_LEVEL_HIGH                   (1 << 17)
#define RP2040_IO_BANK0_PROC0_INTF1_GPIO12_LEVEL_LOW                    (1 << 16)
#define RP2040_IO_BANK0_PROC0_INTF1_GPIO11_EDGE_HIGH                    (1 << 15)
#define RP2040_IO_BANK0_PROC0_INTF1_GPIO11_EDGE_LOW                     (1 << 14)
#define RP2040_IO_BANK0_PROC0_INTF1_GPIO11_LEVEL_HIGH                   (1 << 13)
#define RP2040_IO_BANK0_PROC0_INTF1_GPIO11_LEVEL_LOW                    (1 << 12)
#define RP2040_IO_BANK0_PROC0_INTF1_GPIO10_EDGE_HIGH                    (1 << 11)
#define RP2040_IO_BANK0_PROC0_INTF1_GPIO10_EDGE_LOW                     (1 << 10)
#define RP2040_IO_BANK0_PROC0_INTF1_GPIO10_LEVEL_HIGH                   (1 << 9)
#define RP2040_IO_BANK0_PROC0_INTF1_GPIO10_LEVEL_LOW                    (1 << 8)
#define RP2040_IO_BANK0_PROC0_INTF1_GPIO9_EDGE_HIGH                     (1 << 7)
#define RP2040_IO_BANK0_PROC0_INTF1_GPIO9_EDGE_LOW                      (1 << 6)
#define RP2040_IO_BANK0_PROC0_INTF1_GPIO9_LEVEL_HIGH                    (1 << 5)
#define RP2040_IO_BANK0_PROC0_INTF1_GPIO9_LEVEL_LOW                     (1 << 4)
#define RP2040_IO_BANK0_PROC0_INTF1_GPIO8_EDGE_HIGH                     (1 << 3)
#define RP2040_IO_BANK0_PROC0_INTF1_GPIO8_EDGE_LOW                      (1 << 2)
#define RP2040_IO_BANK0_PROC0_INTF1_GPIO8_LEVEL_HIGH                    (1 << 1)
#define RP2040_IO_BANK0_PROC0_INTF1_GPIO8_LEVEL_LOW                     (1 << 0)

#define RP2040_IO_BANK0_PROC0_INTF2_GPIO23_EDGE_HIGH                    (1 << 31)
#define RP2040_IO_BANK0_PROC0_INTF2_GPIO23_EDGE_LOW                     (1 << 30)
#define RP2040_IO_BANK0_PROC0_INTF2_GPIO23_LEVEL_HIGH                   (1 << 29)
#define RP2040_IO_BANK0_PROC0_INTF2_GPIO23_LEVEL_LOW                    (1 << 28)
#define RP2040_IO_BANK0_PROC0_INTF2_GPIO22_EDGE_HIGH                    (1 << 27)
#define RP2040_IO_BANK0_PROC0_INTF2_GPIO22_EDGE_LOW                     (1 << 26)
#define RP2040_IO_BANK0_PROC0_INTF2_GPIO22_LEVEL_HIGH                   (1 << 25)
#define RP2040_IO_BANK0_PROC0_INTF2_GPIO22_LEVEL_LOW                    (1 << 24)
#define RP2040_IO_BANK0_PROC0_INTF2_GPIO21_EDGE_HIGH                    (1 << 23)
#define RP2040_IO_BANK0_PROC0_INTF2_GPIO21_EDGE_LOW                     (1 << 22)
#define RP2040_IO_BANK0_PROC0_INTF2_GPIO21_LEVEL_HIGH                   (1 << 21)
#define RP2040_IO_BANK0_PROC0_INTF2_GPIO21_LEVEL_LOW                    (1 << 20)
#define RP2040_IO_BANK0_PROC0_INTF2_GPIO20_EDGE_HIGH                    (1 << 19)
#define RP2040_IO_BANK0_PROC0_INTF2_GPIO20_EDGE_LOW                     (1 << 18)
#define RP2040_IO_BANK0_PROC0_INTF2_GPIO20_LEVEL_HIGH                   (1 << 17)
#define RP2040_IO_BANK0_PROC0_INTF2_GPIO20_LEVEL_LOW                    (1 << 16)
#define RP2040_IO_BANK0_PROC0_INTF2_GPIO19_EDGE_HIGH                    (1 << 15)
#define RP2040_IO_BANK0_PROC0_INTF2_GPIO19_EDGE_LOW                     (1 << 14)
#define RP2040_IO_BANK0_PROC0_INTF2_GPIO19_LEVEL_HIGH                   (1 << 13)
#define RP2040_IO_BANK0_PROC0_INTF2_GPIO19_LEVEL_LOW                    (1 << 12)
#define RP2040_IO_BANK0_PROC0_INTF2_GPIO18_EDGE_HIGH                    (1 << 11)
#define RP2040_IO_BANK0_PROC0_INTF2_GPIO18_EDGE_LOW                     (1 << 10)
#define RP2040_IO_BANK0_PROC0_INTF2_GPIO18_LEVEL_HIGH                   (1 << 9)
#define RP2040_IO_BANK0_PROC0_INTF2_GPIO18_LEVEL_LOW                    (1 << 8)
#define RP2040_IO_BANK0_PROC0_INTF2_GPIO17_EDGE_HIGH                    (1 << 7)
#define RP2040_IO_BANK0_PROC0_INTF2_GPIO17_EDGE_LOW                     (1 << 6)
#define RP2040_IO_BANK0_PROC0_INTF2_GPIO17_LEVEL_HIGH                   (1 << 5)
#define RP2040_IO_BANK0_PROC0_INTF2_GPIO17_LEVEL_LOW                    (1 << 4)
#define RP2040_IO_BANK0_PROC0_INTF2_GPIO16_EDGE_HIGH                    (1 << 3)
#define RP2040_IO_BANK0_PROC0_INTF2_GPIO16_EDGE_LOW                     (1 << 2)
#define RP2040_IO_BANK0_PROC0_INTF2_GPIO16_LEVEL_HIGH                   (1 << 1)
#define RP2040_IO_BANK0_PROC0_INTF2_GPIO16_LEVEL_LOW                    (1 << 0)

#define RP2040_IO_BANK0_PROC0_INTF3_GPIO29_EDGE_HIGH                    (1 << 23)
#define RP2040_IO_BANK0_PROC0_INTF3_GPIO29_EDGE_LOW                     (1 << 22)
#define RP2040_IO_BANK0_PROC0_INTF3_GPIO29_LEVEL_HIGH                   (1 << 21)
#define RP2040_IO_BANK0_PROC0_INTF3_GPIO29_LEVEL_LOW                    (1 << 20)
#define RP2040_IO_BANK0_PROC0_INTF3_GPIO28_EDGE_HIGH                    (1 << 19)
#define RP2040_IO_BANK0_PROC0_INTF3_GPIO28_EDGE_LOW                     (1 << 18)
#define RP2040_IO_BANK0_PROC0_INTF3_GPIO28_LEVEL_HIGH                   (1 << 17)
#define RP2040_IO_BANK0_PROC0_INTF3_GPIO28_LEVEL_LOW                    (1 << 16)
#define RP2040_IO_BANK0_PROC0_INTF3_GPIO27_EDGE_HIGH                    (1 << 15)
#define RP2040_IO_BANK0_PROC0_INTF3_GPIO27_EDGE_LOW                     (1 << 14)
#define RP2040_IO_BANK0_PROC0_INTF3_GPIO27_LEVEL_HIGH                   (1 << 13)
#define RP2040_IO_BANK0_PROC0_INTF3_GPIO27_LEVEL_LOW                    (1 << 12)
#define RP2040_IO_BANK0_PROC0_INTF3_GPIO26_EDGE_HIGH                    (1 << 11)
#define RP2040_IO_BANK0_PROC0_INTF3_GPIO26_EDGE_LOW                     (1 << 10)
#define RP2040_IO_BANK0_PROC0_INTF3_GPIO26_LEVEL_HIGH                   (1 << 9)
#define RP2040_IO_BANK0_PROC0_INTF3_GPIO26_LEVEL_LOW                    (1 << 8)
#define RP2040_IO_BANK0_PROC0_INTF3_GPIO25_EDGE_HIGH                    (1 << 7)
#define RP2040_IO_BANK0_PROC0_INTF3_GPIO25_EDGE_LOW                     (1 << 6)
#define RP2040_IO_BANK0_PROC0_INTF3_GPIO25_LEVEL_HIGH                   (1 << 5)
#define RP2040_IO_BANK0_PROC0_INTF3_GPIO25_LEVEL_LOW                    (1 << 4)
#define RP2040_IO_BANK0_PROC0_INTF3_GPIO24_EDGE_HIGH                    (1 << 3)
#define RP2040_IO_BANK0_PROC0_INTF3_GPIO24_EDGE_LOW                     (1 << 2)
#define RP2040_IO_BANK0_PROC0_INTF3_GPIO24_LEVEL_HIGH                   (1 << 1)
#define RP2040_IO_BANK0_PROC0_INTF3_GPIO24_LEVEL_LOW                    (1 << 0)

#define RP2040_IO_BANK0_PROC0_INTS0_GPIO7_EDGE_HIGH                     (1 << 31)
#define RP2040_IO_BANK0_PROC0_INTS0_GPIO7_EDGE_LOW                      (1 << 30)
#define RP2040_IO_BANK0_PROC0_INTS0_GPIO7_LEVEL_HIGH                    (1 << 29)
#define RP2040_IO_BANK0_PROC0_INTS0_GPIO7_LEVEL_LOW                     (1 << 28)
#define RP2040_IO_BANK0_PROC0_INTS0_GPIO6_EDGE_HIGH                     (1 << 27)
#define RP2040_IO_BANK0_PROC0_INTS0_GPIO6_EDGE_LOW                      (1 << 26)
#define RP2040_IO_BANK0_PROC0_INTS0_GPIO6_LEVEL_HIGH                    (1 << 25)
#define RP2040_IO_BANK0_PROC0_INTS0_GPIO6_LEVEL_LOW                     (1 << 24)
#define RP2040_IO_BANK0_PROC0_INTS0_GPIO5_EDGE_HIGH                     (1 << 23)
#define RP2040_IO_BANK0_PROC0_INTS0_GPIO5_EDGE_LOW                      (1 << 22)
#define RP2040_IO_BANK0_PROC0_INTS0_GPIO5_LEVEL_HIGH                    (1 << 21)
#define RP2040_IO_BANK0_PROC0_INTS0_GPIO5_LEVEL_LOW                     (1 << 20)
#define RP2040_IO_BANK0_PROC0_INTS0_GPIO4_EDGE_HIGH                     (1 << 19)
#define RP2040_IO_BANK0_PROC0_INTS0_GPIO4_EDGE_LOW                      (1 << 18)
#define RP2040_IO_BANK0_PROC0_INTS0_GPIO4_LEVEL_HIGH                    (1 << 17)
#define RP2040_IO_BANK0_PROC0_INTS0_GPIO4_LEVEL_LOW                     (1 << 16)
#define RP2040_IO_BANK0_PROC0_INTS0_GPIO3_EDGE_HIGH                     (1 << 15)
#define RP2040_IO_BANK0_PROC0_INTS0_GPIO3_EDGE_LOW                      (1 << 14)
#define RP2040_IO_BANK0_PROC0_INTS0_GPIO3_LEVEL_HIGH                    (1 << 13)
#define RP2040_IO_BANK0_PROC0_INTS0_GPIO3_LEVEL_LOW                     (1 << 12)
#define RP2040_IO_BANK0_PROC0_INTS0_GPIO2_EDGE_HIGH                     (1 << 11)
#define RP2040_IO_BANK0_PROC0_INTS0_GPIO2_EDGE_LOW                      (1 << 10)
#define RP2040_IO_BANK0_PROC0_INTS0_GPIO2_LEVEL_HIGH                    (1 << 9)
#define RP2040_IO_BANK0_PROC0_INTS0_GPIO2_LEVEL_LOW                     (1 << 8)
#define RP2040_IO_BANK0_PROC0_INTS0_GPIO1_EDGE_HIGH                     (1 << 7)
#define RP2040_IO_BANK0_PROC0_INTS0_GPIO1_EDGE_LOW                      (1 << 6)
#define RP2040_IO_BANK0_PROC0_INTS0_GPIO1_LEVEL_HIGH                    (1 << 5)
#define RP2040_IO_BANK0_PROC0_INTS0_GPIO1_LEVEL_LOW                     (1 << 4)
#define RP2040_IO_BANK0_PROC0_INTS0_GPIO0_EDGE_HIGH                     (1 << 3)
#define RP2040_IO_BANK0_PROC0_INTS0_GPIO0_EDGE_LOW                      (1 << 2)
#define RP2040_IO_BANK0_PROC0_INTS0_GPIO0_LEVEL_HIGH                    (1 << 1)
#define RP2040_IO_BANK0_PROC0_INTS0_GPIO0_LEVEL_LOW                     (1 << 0)

#define RP2040_IO_BANK0_PROC0_INTS1_GPIO15_EDGE_HIGH                    (1 << 31)
#define RP2040_IO_BANK0_PROC0_INTS1_GPIO15_EDGE_LOW                     (1 << 30)
#define RP2040_IO_BANK0_PROC0_INTS1_GPIO15_LEVEL_HIGH                   (1 << 29)
#define RP2040_IO_BANK0_PROC0_INTS1_GPIO15_LEVEL_LOW                    (1 << 28)
#define RP2040_IO_BANK0_PROC0_INTS1_GPIO14_EDGE_HIGH                    (1 << 27)
#define RP2040_IO_BANK0_PROC0_INTS1_GPIO14_EDGE_LOW                     (1 << 26)
#define RP2040_IO_BANK0_PROC0_INTS1_GPIO14_LEVEL_HIGH                   (1 << 25)
#define RP2040_IO_BANK0_PROC0_INTS1_GPIO14_LEVEL_LOW                    (1 << 24)
#define RP2040_IO_BANK0_PROC0_INTS1_GPIO13_EDGE_HIGH                    (1 << 23)
#define RP2040_IO_BANK0_PROC0_INTS1_GPIO13_EDGE_LOW                     (1 << 22)
#define RP2040_IO_BANK0_PROC0_INTS1_GPIO13_LEVEL_HIGH                   (1 << 21)
#define RP2040_IO_BANK0_PROC0_INTS1_GPIO13_LEVEL_LOW                    (1 << 20)
#define RP2040_IO_BANK0_PROC0_INTS1_GPIO12_EDGE_HIGH                    (1 << 19)
#define RP2040_IO_BANK0_PROC0_INTS1_GPIO12_EDGE_LOW                     (1 << 18)
#define RP2040_IO_BANK0_PROC0_INTS1_GPIO12_LEVEL_HIGH                   (1 << 17)
#define RP2040_IO_BANK0_PROC0_INTS1_GPIO12_LEVEL_LOW                    (1 << 16)
#define RP2040_IO_BANK0_PROC0_INTS1_GPIO11_EDGE_HIGH                    (1 << 15)
#define RP2040_IO_BANK0_PROC0_INTS1_GPIO11_EDGE_LOW                     (1 << 14)
#define RP2040_IO_BANK0_PROC0_INTS1_GPIO11_LEVEL_HIGH                   (1 << 13)
#define RP2040_IO_BANK0_PROC0_INTS1_GPIO11_LEVEL_LOW                    (1 << 12)
#define RP2040_IO_BANK0_PROC0_INTS1_GPIO10_EDGE_HIGH                    (1 << 11)
#define RP2040_IO_BANK0_PROC0_INTS1_GPIO10_EDGE_LOW                     (1 << 10)
#define RP2040_IO_BANK0_PROC0_INTS1_GPIO10_LEVEL_HIGH                   (1 << 9)
#define RP2040_IO_BANK0_PROC0_INTS1_GPIO10_LEVEL_LOW                    (1 << 8)
#define RP2040_IO_BANK0_PROC0_INTS1_GPIO9_EDGE_HIGH                     (1 << 7)
#define RP2040_IO_BANK0_PROC0_INTS1_GPIO9_EDGE_LOW                      (1 << 6)
#define RP2040_IO_BANK0_PROC0_INTS1_GPIO9_LEVEL_HIGH                    (1 << 5)
#define RP2040_IO_BANK0_PROC0_INTS1_GPIO9_LEVEL_LOW                     (1 << 4)
#define RP2040_IO_BANK0_PROC0_INTS1_GPIO8_EDGE_HIGH                     (1 << 3)
#define RP2040_IO_BANK0_PROC0_INTS1_GPIO8_EDGE_LOW                      (1 << 2)
#define RP2040_IO_BANK0_PROC0_INTS1_GPIO8_LEVEL_HIGH                    (1 << 1)
#define RP2040_IO_BANK0_PROC0_INTS1_GPIO8_LEVEL_LOW                     (1 << 0)

#define RP2040_IO_BANK0_PROC0_INTS2_GPIO23_EDGE_HIGH                    (1 << 31)
#define RP2040_IO_BANK0_PROC0_INTS2_GPIO23_EDGE_LOW                     (1 << 30)
#define RP2040_IO_BANK0_PROC0_INTS2_GPIO23_LEVEL_HIGH                   (1 << 29)
#define RP2040_IO_BANK0_PROC0_INTS2_GPIO23_LEVEL_LOW                    (1 << 28)
#define RP2040_IO_BANK0_PROC0_INTS2_GPIO22_EDGE_HIGH                    (1 << 27)
#define RP2040_IO_BANK0_PROC0_INTS2_GPIO22_EDGE_LOW                     (1 << 26)
#define RP2040_IO_BANK0_PROC0_INTS2_GPIO22_LEVEL_HIGH                   (1 << 25)
#define RP2040_IO_BANK0_PROC0_INTS2_GPIO22_LEVEL_LOW                    (1 << 24)
#define RP2040_IO_BANK0_PROC0_INTS2_GPIO21_EDGE_HIGH                    (1 << 23)
#define RP2040_IO_BANK0_PROC0_INTS2_GPIO21_EDGE_LOW                     (1 << 22)
#define RP2040_IO_BANK0_PROC0_INTS2_GPIO21_LEVEL_HIGH                   (1 << 21)
#define RP2040_IO_BANK0_PROC0_INTS2_GPIO21_LEVEL_LOW                    (1 << 20)
#define RP2040_IO_BANK0_PROC0_INTS2_GPIO20_EDGE_HIGH                    (1 << 19)
#define RP2040_IO_BANK0_PROC0_INTS2_GPIO20_EDGE_LOW                     (1 << 18)
#define RP2040_IO_BANK0_PROC0_INTS2_GPIO20_LEVEL_HIGH                   (1 << 17)
#define RP2040_IO_BANK0_PROC0_INTS2_GPIO20_LEVEL_LOW                    (1 << 16)
#define RP2040_IO_BANK0_PROC0_INTS2_GPIO19_EDGE_HIGH                    (1 << 15)
#define RP2040_IO_BANK0_PROC0_INTS2_GPIO19_EDGE_LOW                     (1 << 14)
#define RP2040_IO_BANK0_PROC0_INTS2_GPIO19_LEVEL_HIGH                   (1 << 13)
#define RP2040_IO_BANK0_PROC0_INTS2_GPIO19_LEVEL_LOW                    (1 << 12)
#define RP2040_IO_BANK0_PROC0_INTS2_GPIO18_EDGE_HIGH                    (1 << 11)
#define RP2040_IO_BANK0_PROC0_INTS2_GPIO18_EDGE_LOW                     (1 << 10)
#define RP2040_IO_BANK0_PROC0_INTS2_GPIO18_LEVEL_HIGH                   (1 << 9)
#define RP2040_IO_BANK0_PROC0_INTS2_GPIO18_LEVEL_LOW                    (1 << 8)
#define RP2040_IO_BANK0_PROC0_INTS2_GPIO17_EDGE_HIGH                    (1 << 7)
#define RP2040_IO_BANK0_PROC0_INTS2_GPIO17_EDGE_LOW                     (1 << 6)
#define RP2040_IO_BANK0_PROC0_INTS2_GPIO17_LEVEL_HIGH                   (1 << 5)
#define RP2040_IO_BANK0_PROC0_INTS2_GPIO17_LEVEL_LOW                    (1 << 4)
#define RP2040_IO_BANK0_PROC0_INTS2_GPIO16_EDGE_HIGH                    (1 << 3)
#define RP2040_IO_BANK0_PROC0_INTS2_GPIO16_EDGE_LOW                     (1 << 2)
#define RP2040_IO_BANK0_PROC0_INTS2_GPIO16_LEVEL_HIGH                   (1 << 1)
#define RP2040_IO_BANK0_PROC0_INTS2_GPIO16_LEVEL_LOW                    (1 << 0)

#define RP2040_IO_BANK0_PROC0_INTS3_GPIO29_EDGE_HIGH                    (1 << 23)
#define RP2040_IO_BANK0_PROC0_INTS3_GPIO29_EDGE_LOW                     (1 << 22)
#define RP2040_IO_BANK0_PROC0_INTS3_GPIO29_LEVEL_HIGH                   (1 << 21)
#define RP2040_IO_BANK0_PROC0_INTS3_GPIO29_LEVEL_LOW                    (1 << 20)
#define RP2040_IO_BANK0_PROC0_INTS3_GPIO28_EDGE_HIGH                    (1 << 19)
#define RP2040_IO_BANK0_PROC0_INTS3_GPIO28_EDGE_LOW                     (1 << 18)
#define RP2040_IO_BANK0_PROC0_INTS3_GPIO28_LEVEL_HIGH                   (1 << 17)
#define RP2040_IO_BANK0_PROC0_INTS3_GPIO28_LEVEL_LOW                    (1 << 16)
#define RP2040_IO_BANK0_PROC0_INTS3_GPIO27_EDGE_HIGH                    (1 << 15)
#define RP2040_IO_BANK0_PROC0_INTS3_GPIO27_EDGE_LOW                     (1 << 14)
#define RP2040_IO_BANK0_PROC0_INTS3_GPIO27_LEVEL_HIGH                   (1 << 13)
#define RP2040_IO_BANK0_PROC0_INTS3_GPIO27_LEVEL_LOW                    (1 << 12)
#define RP2040_IO_BANK0_PROC0_INTS3_GPIO26_EDGE_HIGH                    (1 << 11)
#define RP2040_IO_BANK0_PROC0_INTS3_GPIO26_EDGE_LOW                     (1 << 10)
#define RP2040_IO_BANK0_PROC0_INTS3_GPIO26_LEVEL_HIGH                   (1 << 9)
#define RP2040_IO_BANK0_PROC0_INTS3_GPIO26_LEVEL_LOW                    (1 << 8)
#define RP2040_IO_BANK0_PROC0_INTS3_GPIO25_EDGE_HIGH                    (1 << 7)
#define RP2040_IO_BANK0_PROC0_INTS3_GPIO25_EDGE_LOW                     (1 << 6)
#define RP2040_IO_BANK0_PROC0_INTS3_GPIO25_LEVEL_HIGH                   (1 << 5)
#define RP2040_IO_BANK0_PROC0_INTS3_GPIO25_LEVEL_LOW                    (1 << 4)
#define RP2040_IO_BANK0_PROC0_INTS3_GPIO24_EDGE_HIGH                    (1 << 3)
#define RP2040_IO_BANK0_PROC0_INTS3_GPIO24_EDGE_LOW                     (1 << 2)
#define RP2040_IO_BANK0_PROC0_INTS3_GPIO24_LEVEL_HIGH                   (1 << 1)
#define RP2040_IO_BANK0_PROC0_INTS3_GPIO24_LEVEL_LOW                    (1 << 0)

#define RP2040_IO_BANK0_PROC1_INTE0_GPIO7_EDGE_HIGH                     (1 << 31)
#define RP2040_IO_BANK0_PROC1_INTE0_GPIO7_EDGE_LOW                      (1 << 30)
#define RP2040_IO_BANK0_PROC1_INTE0_GPIO7_LEVEL_HIGH                    (1 << 29)
#define RP2040_IO_BANK0_PROC1_INTE0_GPIO7_LEVEL_LOW                     (1 << 28)
#define RP2040_IO_BANK0_PROC1_INTE0_GPIO6_EDGE_HIGH                     (1 << 27)
#define RP2040_IO_BANK0_PROC1_INTE0_GPIO6_EDGE_LOW                      (1 << 26)
#define RP2040_IO_BANK0_PROC1_INTE0_GPIO6_LEVEL_HIGH                    (1 << 25)
#define RP2040_IO_BANK0_PROC1_INTE0_GPIO6_LEVEL_LOW                     (1 << 24)
#define RP2040_IO_BANK0_PROC1_INTE0_GPIO5_EDGE_HIGH                     (1 << 23)
#define RP2040_IO_BANK0_PROC1_INTE0_GPIO5_EDGE_LOW                      (1 << 22)
#define RP2040_IO_BANK0_PROC1_INTE0_GPIO5_LEVEL_HIGH                    (1 << 21)
#define RP2040_IO_BANK0_PROC1_INTE0_GPIO5_LEVEL_LOW                     (1 << 20)
#define RP2040_IO_BANK0_PROC1_INTE0_GPIO4_EDGE_HIGH                     (1 << 19)
#define RP2040_IO_BANK0_PROC1_INTE0_GPIO4_EDGE_LOW                      (1 << 18)
#define RP2040_IO_BANK0_PROC1_INTE0_GPIO4_LEVEL_HIGH                    (1 << 17)
#define RP2040_IO_BANK0_PROC1_INTE0_GPIO4_LEVEL_LOW                     (1 << 16)
#define RP2040_IO_BANK0_PROC1_INTE0_GPIO3_EDGE_HIGH                     (1 << 15)
#define RP2040_IO_BANK0_PROC1_INTE0_GPIO3_EDGE_LOW                      (1 << 14)
#define RP2040_IO_BANK0_PROC1_INTE0_GPIO3_LEVEL_HIGH                    (1 << 13)
#define RP2040_IO_BANK0_PROC1_INTE0_GPIO3_LEVEL_LOW                     (1 << 12)
#define RP2040_IO_BANK0_PROC1_INTE0_GPIO2_EDGE_HIGH                     (1 << 11)
#define RP2040_IO_BANK0_PROC1_INTE0_GPIO2_EDGE_LOW                      (1 << 10)
#define RP2040_IO_BANK0_PROC1_INTE0_GPIO2_LEVEL_HIGH                    (1 << 9)
#define RP2040_IO_BANK0_PROC1_INTE0_GPIO2_LEVEL_LOW                     (1 << 8)
#define RP2040_IO_BANK0_PROC1_INTE0_GPIO1_EDGE_HIGH                     (1 << 7)
#define RP2040_IO_BANK0_PROC1_INTE0_GPIO1_EDGE_LOW                      (1 << 6)
#define RP2040_IO_BANK0_PROC1_INTE0_GPIO1_LEVEL_HIGH                    (1 << 5)
#define RP2040_IO_BANK0_PROC1_INTE0_GPIO1_LEVEL_LOW                     (1 << 4)
#define RP2040_IO_BANK0_PROC1_INTE0_GPIO0_EDGE_HIGH                     (1 << 3)
#define RP2040_IO_BANK0_PROC1_INTE0_GPIO0_EDGE_LOW                      (1 << 2)
#define RP2040_IO_BANK0_PROC1_INTE0_GPIO0_LEVEL_HIGH                    (1 << 1)
#define RP2040_IO_BANK0_PROC1_INTE0_GPIO0_LEVEL_LOW                     (1 << 0)

#define RP2040_IO_BANK0_PROC1_INTE1_GPIO15_EDGE_HIGH                    (1 << 31)
#define RP2040_IO_BANK0_PROC1_INTE1_GPIO15_EDGE_LOW                     (1 << 30)
#define RP2040_IO_BANK0_PROC1_INTE1_GPIO15_LEVEL_HIGH                   (1 << 29)
#define RP2040_IO_BANK0_PROC1_INTE1_GPIO15_LEVEL_LOW                    (1 << 28)
#define RP2040_IO_BANK0_PROC1_INTE1_GPIO14_EDGE_HIGH                    (1 << 27)
#define RP2040_IO_BANK0_PROC1_INTE1_GPIO14_EDGE_LOW                     (1 << 26)
#define RP2040_IO_BANK0_PROC1_INTE1_GPIO14_LEVEL_HIGH                   (1 << 25)
#define RP2040_IO_BANK0_PROC1_INTE1_GPIO14_LEVEL_LOW                    (1 << 24)
#define RP2040_IO_BANK0_PROC1_INTE1_GPIO13_EDGE_HIGH                    (1 << 23)
#define RP2040_IO_BANK0_PROC1_INTE1_GPIO13_EDGE_LOW                     (1 << 22)
#define RP2040_IO_BANK0_PROC1_INTE1_GPIO13_LEVEL_HIGH                   (1 << 21)
#define RP2040_IO_BANK0_PROC1_INTE1_GPIO13_LEVEL_LOW                    (1 << 20)
#define RP2040_IO_BANK0_PROC1_INTE1_GPIO12_EDGE_HIGH                    (1 << 19)
#define RP2040_IO_BANK0_PROC1_INTE1_GPIO12_EDGE_LOW                     (1 << 18)
#define RP2040_IO_BANK0_PROC1_INTE1_GPIO12_LEVEL_HIGH                   (1 << 17)
#define RP2040_IO_BANK0_PROC1_INTE1_GPIO12_LEVEL_LOW                    (1 << 16)
#define RP2040_IO_BANK0_PROC1_INTE1_GPIO11_EDGE_HIGH                    (1 << 15)
#define RP2040_IO_BANK0_PROC1_INTE1_GPIO11_EDGE_LOW                     (1 << 14)
#define RP2040_IO_BANK0_PROC1_INTE1_GPIO11_LEVEL_HIGH                   (1 << 13)
#define RP2040_IO_BANK0_PROC1_INTE1_GPIO11_LEVEL_LOW                    (1 << 12)
#define RP2040_IO_BANK0_PROC1_INTE1_GPIO10_EDGE_HIGH                    (1 << 11)
#define RP2040_IO_BANK0_PROC1_INTE1_GPIO10_EDGE_LOW                     (1 << 10)
#define RP2040_IO_BANK0_PROC1_INTE1_GPIO10_LEVEL_HIGH                   (1 << 9)
#define RP2040_IO_BANK0_PROC1_INTE1_GPIO10_LEVEL_LOW                    (1 << 8)
#define RP2040_IO_BANK0_PROC1_INTE1_GPIO9_EDGE_HIGH                     (1 << 7)
#define RP2040_IO_BANK0_PROC1_INTE1_GPIO9_EDGE_LOW                      (1 << 6)
#define RP2040_IO_BANK0_PROC1_INTE1_GPIO9_LEVEL_HIGH                    (1 << 5)
#define RP2040_IO_BANK0_PROC1_INTE1_GPIO9_LEVEL_LOW                     (1 << 4)
#define RP2040_IO_BANK0_PROC1_INTE1_GPIO8_EDGE_HIGH                     (1 << 3)
#define RP2040_IO_BANK0_PROC1_INTE1_GPIO8_EDGE_LOW                      (1 << 2)
#define RP2040_IO_BANK0_PROC1_INTE1_GPIO8_LEVEL_HIGH                    (1 << 1)
#define RP2040_IO_BANK0_PROC1_INTE1_GPIO8_LEVEL_LOW                     (1 << 0)

#define RP2040_IO_BANK0_PROC1_INTE2_GPIO23_EDGE_HIGH                    (1 << 31)
#define RP2040_IO_BANK0_PROC1_INTE2_GPIO23_EDGE_LOW                     (1 << 30)
#define RP2040_IO_BANK0_PROC1_INTE2_GPIO23_LEVEL_HIGH                   (1 << 29)
#define RP2040_IO_BANK0_PROC1_INTE2_GPIO23_LEVEL_LOW                    (1 << 28)
#define RP2040_IO_BANK0_PROC1_INTE2_GPIO22_EDGE_HIGH                    (1 << 27)
#define RP2040_IO_BANK0_PROC1_INTE2_GPIO22_EDGE_LOW                     (1 << 26)
#define RP2040_IO_BANK0_PROC1_INTE2_GPIO22_LEVEL_HIGH                   (1 << 25)
#define RP2040_IO_BANK0_PROC1_INTE2_GPIO22_LEVEL_LOW                    (1 << 24)
#define RP2040_IO_BANK0_PROC1_INTE2_GPIO21_EDGE_HIGH                    (1 << 23)
#define RP2040_IO_BANK0_PROC1_INTE2_GPIO21_EDGE_LOW                     (1 << 22)
#define RP2040_IO_BANK0_PROC1_INTE2_GPIO21_LEVEL_HIGH                   (1 << 21)
#define RP2040_IO_BANK0_PROC1_INTE2_GPIO21_LEVEL_LOW                    (1 << 20)
#define RP2040_IO_BANK0_PROC1_INTE2_GPIO20_EDGE_HIGH                    (1 << 19)
#define RP2040_IO_BANK0_PROC1_INTE2_GPIO20_EDGE_LOW                     (1 << 18)
#define RP2040_IO_BANK0_PROC1_INTE2_GPIO20_LEVEL_HIGH                   (1 << 17)
#define RP2040_IO_BANK0_PROC1_INTE2_GPIO20_LEVEL_LOW                    (1 << 16)
#define RP2040_IO_BANK0_PROC1_INTE2_GPIO19_EDGE_HIGH                    (1 << 15)
#define RP2040_IO_BANK0_PROC1_INTE2_GPIO19_EDGE_LOW                     (1 << 14)
#define RP2040_IO_BANK0_PROC1_INTE2_GPIO19_LEVEL_HIGH                   (1 << 13)
#define RP2040_IO_BANK0_PROC1_INTE2_GPIO19_LEVEL_LOW                    (1 << 12)
#define RP2040_IO_BANK0_PROC1_INTE2_GPIO18_EDGE_HIGH                    (1 << 11)
#define RP2040_IO_BANK0_PROC1_INTE2_GPIO18_EDGE_LOW                     (1 << 10)
#define RP2040_IO_BANK0_PROC1_INTE2_GPIO18_LEVEL_HIGH                   (1 << 9)
#define RP2040_IO_BANK0_PROC1_INTE2_GPIO18_LEVEL_LOW                    (1 << 8)
#define RP2040_IO_BANK0_PROC1_INTE2_GPIO17_EDGE_HIGH                    (1 << 7)
#define RP2040_IO_BANK0_PROC1_INTE2_GPIO17_EDGE_LOW                     (1 << 6)
#define RP2040_IO_BANK0_PROC1_INTE2_GPIO17_LEVEL_HIGH                   (1 << 5)
#define RP2040_IO_BANK0_PROC1_INTE2_GPIO17_LEVEL_LOW                    (1 << 4)
#define RP2040_IO_BANK0_PROC1_INTE2_GPIO16_EDGE_HIGH                    (1 << 3)
#define RP2040_IO_BANK0_PROC1_INTE2_GPIO16_EDGE_LOW                     (1 << 2)
#define RP2040_IO_BANK0_PROC1_INTE2_GPIO16_LEVEL_HIGH                   (1 << 1)
#define RP2040_IO_BANK0_PROC1_INTE2_GPIO16_LEVEL_LOW                    (1 << 0)

#define RP2040_IO_BANK0_PROC1_INTE3_GPIO29_EDGE_HIGH                    (1 << 23)
#define RP2040_IO_BANK0_PROC1_INTE3_GPIO29_EDGE_LOW                     (1 << 22)
#define RP2040_IO_BANK0_PROC1_INTE3_GPIO29_LEVEL_HIGH                   (1 << 21)
#define RP2040_IO_BANK0_PROC1_INTE3_GPIO29_LEVEL_LOW                    (1 << 20)
#define RP2040_IO_BANK0_PROC1_INTE3_GPIO28_EDGE_HIGH                    (1 << 19)
#define RP2040_IO_BANK0_PROC1_INTE3_GPIO28_EDGE_LOW                     (1 << 18)
#define RP2040_IO_BANK0_PROC1_INTE3_GPIO28_LEVEL_HIGH                   (1 << 17)
#define RP2040_IO_BANK0_PROC1_INTE3_GPIO28_LEVEL_LOW                    (1 << 16)
#define RP2040_IO_BANK0_PROC1_INTE3_GPIO27_EDGE_HIGH                    (1 << 15)
#define RP2040_IO_BANK0_PROC1_INTE3_GPIO27_EDGE_LOW                     (1 << 14)
#define RP2040_IO_BANK0_PROC1_INTE3_GPIO27_LEVEL_HIGH                   (1 << 13)
#define RP2040_IO_BANK0_PROC1_INTE3_GPIO27_LEVEL_LOW                    (1 << 12)
#define RP2040_IO_BANK0_PROC1_INTE3_GPIO26_EDGE_HIGH                    (1 << 11)
#define RP2040_IO_BANK0_PROC1_INTE3_GPIO26_EDGE_LOW                     (1 << 10)
#define RP2040_IO_BANK0_PROC1_INTE3_GPIO26_LEVEL_HIGH                   (1 << 9)
#define RP2040_IO_BANK0_PROC1_INTE3_GPIO26_LEVEL_LOW                    (1 << 8)
#define RP2040_IO_BANK0_PROC1_INTE3_GPIO25_EDGE_HIGH                    (1 << 7)
#define RP2040_IO_BANK0_PROC1_INTE3_GPIO25_EDGE_LOW                     (1 << 6)
#define RP2040_IO_BANK0_PROC1_INTE3_GPIO25_LEVEL_HIGH                   (1 << 5)
#define RP2040_IO_BANK0_PROC1_INTE3_GPIO25_LEVEL_LOW                    (1 << 4)
#define RP2040_IO_BANK0_PROC1_INTE3_GPIO24_EDGE_HIGH                    (1 << 3)
#define RP2040_IO_BANK0_PROC1_INTE3_GPIO24_EDGE_LOW                     (1 << 2)
#define RP2040_IO_BANK0_PROC1_INTE3_GPIO24_LEVEL_HIGH                   (1 << 1)
#define RP2040_IO_BANK0_PROC1_INTE3_GPIO24_LEVEL_LOW                    (1 << 0)

#define RP2040_IO_BANK0_PROC1_INTF0_GPIO7_EDGE_HIGH                     (1 << 31)
#define RP2040_IO_BANK0_PROC1_INTF0_GPIO7_EDGE_LOW                      (1 << 30)
#define RP2040_IO_BANK0_PROC1_INTF0_GPIO7_LEVEL_HIGH                    (1 << 29)
#define RP2040_IO_BANK0_PROC1_INTF0_GPIO7_LEVEL_LOW                     (1 << 28)
#define RP2040_IO_BANK0_PROC1_INTF0_GPIO6_EDGE_HIGH                     (1 << 27)
#define RP2040_IO_BANK0_PROC1_INTF0_GPIO6_EDGE_LOW                      (1 << 26)
#define RP2040_IO_BANK0_PROC1_INTF0_GPIO6_LEVEL_HIGH                    (1 << 25)
#define RP2040_IO_BANK0_PROC1_INTF0_GPIO6_LEVEL_LOW                     (1 << 24)
#define RP2040_IO_BANK0_PROC1_INTF0_GPIO5_EDGE_HIGH                     (1 << 23)
#define RP2040_IO_BANK0_PROC1_INTF0_GPIO5_EDGE_LOW                      (1 << 22)
#define RP2040_IO_BANK0_PROC1_INTF0_GPIO5_LEVEL_HIGH                    (1 << 21)
#define RP2040_IO_BANK0_PROC1_INTF0_GPIO5_LEVEL_LOW                     (1 << 20)
#define RP2040_IO_BANK0_PROC1_INTF0_GPIO4_EDGE_HIGH                     (1 << 19)
#define RP2040_IO_BANK0_PROC1_INTF0_GPIO4_EDGE_LOW                      (1 << 18)
#define RP2040_IO_BANK0_PROC1_INTF0_GPIO4_LEVEL_HIGH                    (1 << 17)
#define RP2040_IO_BANK0_PROC1_INTF0_GPIO4_LEVEL_LOW                     (1 << 16)
#define RP2040_IO_BANK0_PROC1_INTF0_GPIO3_EDGE_HIGH                     (1 << 15)
#define RP2040_IO_BANK0_PROC1_INTF0_GPIO3_EDGE_LOW                      (1 << 14)
#define RP2040_IO_BANK0_PROC1_INTF0_GPIO3_LEVEL_HIGH                    (1 << 13)
#define RP2040_IO_BANK0_PROC1_INTF0_GPIO3_LEVEL_LOW                     (1 << 12)
#define RP2040_IO_BANK0_PROC1_INTF0_GPIO2_EDGE_HIGH                     (1 << 11)
#define RP2040_IO_BANK0_PROC1_INTF0_GPIO2_EDGE_LOW                      (1 << 10)
#define RP2040_IO_BANK0_PROC1_INTF0_GPIO2_LEVEL_HIGH                    (1 << 9)
#define RP2040_IO_BANK0_PROC1_INTF0_GPIO2_LEVEL_LOW                     (1 << 8)
#define RP2040_IO_BANK0_PROC1_INTF0_GPIO1_EDGE_HIGH                     (1 << 7)
#define RP2040_IO_BANK0_PROC1_INTF0_GPIO1_EDGE_LOW                      (1 << 6)
#define RP2040_IO_BANK0_PROC1_INTF0_GPIO1_LEVEL_HIGH                    (1 << 5)
#define RP2040_IO_BANK0_PROC1_INTF0_GPIO1_LEVEL_LOW                     (1 << 4)
#define RP2040_IO_BANK0_PROC1_INTF0_GPIO0_EDGE_HIGH                     (1 << 3)
#define RP2040_IO_BANK0_PROC1_INTF0_GPIO0_EDGE_LOW                      (1 << 2)
#define RP2040_IO_BANK0_PROC1_INTF0_GPIO0_LEVEL_HIGH                    (1 << 1)
#define RP2040_IO_BANK0_PROC1_INTF0_GPIO0_LEVEL_LOW                     (1 << 0)

#define RP2040_IO_BANK0_PROC1_INTF1_GPIO15_EDGE_HIGH                    (1 << 31)
#define RP2040_IO_BANK0_PROC1_INTF1_GPIO15_EDGE_LOW                     (1 << 30)
#define RP2040_IO_BANK0_PROC1_INTF1_GPIO15_LEVEL_HIGH                   (1 << 29)
#define RP2040_IO_BANK0_PROC1_INTF1_GPIO15_LEVEL_LOW                    (1 << 28)
#define RP2040_IO_BANK0_PROC1_INTF1_GPIO14_EDGE_HIGH                    (1 << 27)
#define RP2040_IO_BANK0_PROC1_INTF1_GPIO14_EDGE_LOW                     (1 << 26)
#define RP2040_IO_BANK0_PROC1_INTF1_GPIO14_LEVEL_HIGH                   (1 << 25)
#define RP2040_IO_BANK0_PROC1_INTF1_GPIO14_LEVEL_LOW                    (1 << 24)
#define RP2040_IO_BANK0_PROC1_INTF1_GPIO13_EDGE_HIGH                    (1 << 23)
#define RP2040_IO_BANK0_PROC1_INTF1_GPIO13_EDGE_LOW                     (1 << 22)
#define RP2040_IO_BANK0_PROC1_INTF1_GPIO13_LEVEL_HIGH                   (1 << 21)
#define RP2040_IO_BANK0_PROC1_INTF1_GPIO13_LEVEL_LOW                    (1 << 20)
#define RP2040_IO_BANK0_PROC1_INTF1_GPIO12_EDGE_HIGH                    (1 << 19)
#define RP2040_IO_BANK0_PROC1_INTF1_GPIO12_EDGE_LOW                     (1 << 18)
#define RP2040_IO_BANK0_PROC1_INTF1_GPIO12_LEVEL_HIGH                   (1 << 17)
#define RP2040_IO_BANK0_PROC1_INTF1_GPIO12_LEVEL_LOW                    (1 << 16)
#define RP2040_IO_BANK0_PROC1_INTF1_GPIO11_EDGE_HIGH                    (1 << 15)
#define RP2040_IO_BANK0_PROC1_INTF1_GPIO11_EDGE_LOW                     (1 << 14)
#define RP2040_IO_BANK0_PROC1_INTF1_GPIO11_LEVEL_HIGH                   (1 << 13)
#define RP2040_IO_BANK0_PROC1_INTF1_GPIO11_LEVEL_LOW                    (1 << 12)
#define RP2040_IO_BANK0_PROC1_INTF1_GPIO10_EDGE_HIGH                    (1 << 11)
#define RP2040_IO_BANK0_PROC1_INTF1_GPIO10_EDGE_LOW                     (1 << 10)
#define RP2040_IO_BANK0_PROC1_INTF1_GPIO10_LEVEL_HIGH                   (1 << 9)
#define RP2040_IO_BANK0_PROC1_INTF1_GPIO10_LEVEL_LOW                    (1 << 8)
#define RP2040_IO_BANK0_PROC1_INTF1_GPIO9_EDGE_HIGH                     (1 << 7)
#define RP2040_IO_BANK0_PROC1_INTF1_GPIO9_EDGE_LOW                      (1 << 6)
#define RP2040_IO_BANK0_PROC1_INTF1_GPIO9_LEVEL_HIGH                    (1 << 5)
#define RP2040_IO_BANK0_PROC1_INTF1_GPIO9_LEVEL_LOW                     (1 << 4)
#define RP2040_IO_BANK0_PROC1_INTF1_GPIO8_EDGE_HIGH                     (1 << 3)
#define RP2040_IO_BANK0_PROC1_INTF1_GPIO8_EDGE_LOW                      (1 << 2)
#define RP2040_IO_BANK0_PROC1_INTF1_GPIO8_LEVEL_HIGH                    (1 << 1)
#define RP2040_IO_BANK0_PROC1_INTF1_GPIO8_LEVEL_LOW                     (1 << 0)

#define RP2040_IO_BANK0_PROC1_INTF2_GPIO23_EDGE_HIGH                    (1 << 31)
#define RP2040_IO_BANK0_PROC1_INTF2_GPIO23_EDGE_LOW                     (1 << 30)
#define RP2040_IO_BANK0_PROC1_INTF2_GPIO23_LEVEL_HIGH                   (1 << 29)
#define RP2040_IO_BANK0_PROC1_INTF2_GPIO23_LEVEL_LOW                    (1 << 28)
#define RP2040_IO_BANK0_PROC1_INTF2_GPIO22_EDGE_HIGH                    (1 << 27)
#define RP2040_IO_BANK0_PROC1_INTF2_GPIO22_EDGE_LOW                     (1 << 26)
#define RP2040_IO_BANK0_PROC1_INTF2_GPIO22_LEVEL_HIGH                   (1 << 25)
#define RP2040_IO_BANK0_PROC1_INTF2_GPIO22_LEVEL_LOW                    (1 << 24)
#define RP2040_IO_BANK0_PROC1_INTF2_GPIO21_EDGE_HIGH                    (1 << 23)
#define RP2040_IO_BANK0_PROC1_INTF2_GPIO21_EDGE_LOW                     (1 << 22)
#define RP2040_IO_BANK0_PROC1_INTF2_GPIO21_LEVEL_HIGH                   (1 << 21)
#define RP2040_IO_BANK0_PROC1_INTF2_GPIO21_LEVEL_LOW                    (1 << 20)
#define RP2040_IO_BANK0_PROC1_INTF2_GPIO20_EDGE_HIGH                    (1 << 19)
#define RP2040_IO_BANK0_PROC1_INTF2_GPIO20_EDGE_LOW                     (1 << 18)
#define RP2040_IO_BANK0_PROC1_INTF2_GPIO20_LEVEL_HIGH                   (1 << 17)
#define RP2040_IO_BANK0_PROC1_INTF2_GPIO20_LEVEL_LOW                    (1 << 16)
#define RP2040_IO_BANK0_PROC1_INTF2_GPIO19_EDGE_HIGH                    (1 << 15)
#define RP2040_IO_BANK0_PROC1_INTF2_GPIO19_EDGE_LOW                     (1 << 14)
#define RP2040_IO_BANK0_PROC1_INTF2_GPIO19_LEVEL_HIGH                   (1 << 13)
#define RP2040_IO_BANK0_PROC1_INTF2_GPIO19_LEVEL_LOW                    (1 << 12)
#define RP2040_IO_BANK0_PROC1_INTF2_GPIO18_EDGE_HIGH                    (1 << 11)
#define RP2040_IO_BANK0_PROC1_INTF2_GPIO18_EDGE_LOW                     (1 << 10)
#define RP2040_IO_BANK0_PROC1_INTF2_GPIO18_LEVEL_HIGH                   (1 << 9)
#define RP2040_IO_BANK0_PROC1_INTF2_GPIO18_LEVEL_LOW                    (1 << 8)
#define RP2040_IO_BANK0_PROC1_INTF2_GPIO17_EDGE_HIGH                    (1 << 7)
#define RP2040_IO_BANK0_PROC1_INTF2_GPIO17_EDGE_LOW                     (1 << 6)
#define RP2040_IO_BANK0_PROC1_INTF2_GPIO17_LEVEL_HIGH                   (1 << 5)
#define RP2040_IO_BANK0_PROC1_INTF2_GPIO17_LEVEL_LOW                    (1 << 4)
#define RP2040_IO_BANK0_PROC1_INTF2_GPIO16_EDGE_HIGH                    (1 << 3)
#define RP2040_IO_BANK0_PROC1_INTF2_GPIO16_EDGE_LOW                     (1 << 2)
#define RP2040_IO_BANK0_PROC1_INTF2_GPIO16_LEVEL_HIGH                   (1 << 1)
#define RP2040_IO_BANK0_PROC1_INTF2_GPIO16_LEVEL_LOW                    (1 << 0)

#define RP2040_IO_BANK0_PROC1_INTF3_GPIO29_EDGE_HIGH                    (1 << 23)
#define RP2040_IO_BANK0_PROC1_INTF3_GPIO29_EDGE_LOW                     (1 << 22)
#define RP2040_IO_BANK0_PROC1_INTF3_GPIO29_LEVEL_HIGH                   (1 << 21)
#define RP2040_IO_BANK0_PROC1_INTF3_GPIO29_LEVEL_LOW                    (1 << 20)
#define RP2040_IO_BANK0_PROC1_INTF3_GPIO28_EDGE_HIGH                    (1 << 19)
#define RP2040_IO_BANK0_PROC1_INTF3_GPIO28_EDGE_LOW                     (1 << 18)
#define RP2040_IO_BANK0_PROC1_INTF3_GPIO28_LEVEL_HIGH                   (1 << 17)
#define RP2040_IO_BANK0_PROC1_INTF3_GPIO28_LEVEL_LOW                    (1 << 16)
#define RP2040_IO_BANK0_PROC1_INTF3_GPIO27_EDGE_HIGH                    (1 << 15)
#define RP2040_IO_BANK0_PROC1_INTF3_GPIO27_EDGE_LOW                     (1 << 14)
#define RP2040_IO_BANK0_PROC1_INTF3_GPIO27_LEVEL_HIGH                   (1 << 13)
#define RP2040_IO_BANK0_PROC1_INTF3_GPIO27_LEVEL_LOW                    (1 << 12)
#define RP2040_IO_BANK0_PROC1_INTF3_GPIO26_EDGE_HIGH                    (1 << 11)
#define RP2040_IO_BANK0_PROC1_INTF3_GPIO26_EDGE_LOW                     (1 << 10)
#define RP2040_IO_BANK0_PROC1_INTF3_GPIO26_LEVEL_HIGH                   (1 << 9)
#define RP2040_IO_BANK0_PROC1_INTF3_GPIO26_LEVEL_LOW                    (1 << 8)
#define RP2040_IO_BANK0_PROC1_INTF3_GPIO25_EDGE_HIGH                    (1 << 7)
#define RP2040_IO_BANK0_PROC1_INTF3_GPIO25_EDGE_LOW                     (1 << 6)
#define RP2040_IO_BANK0_PROC1_INTF3_GPIO25_LEVEL_HIGH                   (1 << 5)
#define RP2040_IO_BANK0_PROC1_INTF3_GPIO25_LEVEL_LOW                    (1 << 4)
#define RP2040_IO_BANK0_PROC1_INTF3_GPIO24_EDGE_HIGH                    (1 << 3)
#define RP2040_IO_BANK0_PROC1_INTF3_GPIO24_EDGE_LOW                     (1 << 2)
#define RP2040_IO_BANK0_PROC1_INTF3_GPIO24_LEVEL_HIGH                   (1 << 1)
#define RP2040_IO_BANK0_PROC1_INTF3_GPIO24_LEVEL_LOW                    (1 << 0)

#define RP2040_IO_BANK0_PROC1_INTS0_GPIO7_EDGE_HIGH                     (1 << 31)
#define RP2040_IO_BANK0_PROC1_INTS0_GPIO7_EDGE_LOW                      (1 << 30)
#define RP2040_IO_BANK0_PROC1_INTS0_GPIO7_LEVEL_HIGH                    (1 << 29)
#define RP2040_IO_BANK0_PROC1_INTS0_GPIO7_LEVEL_LOW                     (1 << 28)
#define RP2040_IO_BANK0_PROC1_INTS0_GPIO6_EDGE_HIGH                     (1 << 27)
#define RP2040_IO_BANK0_PROC1_INTS0_GPIO6_EDGE_LOW                      (1 << 26)
#define RP2040_IO_BANK0_PROC1_INTS0_GPIO6_LEVEL_HIGH                    (1 << 25)
#define RP2040_IO_BANK0_PROC1_INTS0_GPIO6_LEVEL_LOW                     (1 << 24)
#define RP2040_IO_BANK0_PROC1_INTS0_GPIO5_EDGE_HIGH                     (1 << 23)
#define RP2040_IO_BANK0_PROC1_INTS0_GPIO5_EDGE_LOW                      (1 << 22)
#define RP2040_IO_BANK0_PROC1_INTS0_GPIO5_LEVEL_HIGH                    (1 << 21)
#define RP2040_IO_BANK0_PROC1_INTS0_GPIO5_LEVEL_LOW                     (1 << 20)
#define RP2040_IO_BANK0_PROC1_INTS0_GPIO4_EDGE_HIGH                     (1 << 19)
#define RP2040_IO_BANK0_PROC1_INTS0_GPIO4_EDGE_LOW                      (1 << 18)
#define RP2040_IO_BANK0_PROC1_INTS0_GPIO4_LEVEL_HIGH                    (1 << 17)
#define RP2040_IO_BANK0_PROC1_INTS0_GPIO4_LEVEL_LOW                     (1 << 16)
#define RP2040_IO_BANK0_PROC1_INTS0_GPIO3_EDGE_HIGH                     (1 << 15)
#define RP2040_IO_BANK0_PROC1_INTS0_GPIO3_EDGE_LOW                      (1 << 14)
#define RP2040_IO_BANK0_PROC1_INTS0_GPIO3_LEVEL_HIGH                    (1 << 13)
#define RP2040_IO_BANK0_PROC1_INTS0_GPIO3_LEVEL_LOW                     (1 << 12)
#define RP2040_IO_BANK0_PROC1_INTS0_GPIO2_EDGE_HIGH                     (1 << 11)
#define RP2040_IO_BANK0_PROC1_INTS0_GPIO2_EDGE_LOW                      (1 << 10)
#define RP2040_IO_BANK0_PROC1_INTS0_GPIO2_LEVEL_HIGH                    (1 << 9)
#define RP2040_IO_BANK0_PROC1_INTS0_GPIO2_LEVEL_LOW                     (1 << 8)
#define RP2040_IO_BANK0_PROC1_INTS0_GPIO1_EDGE_HIGH                     (1 << 7)
#define RP2040_IO_BANK0_PROC1_INTS0_GPIO1_EDGE_LOW                      (1 << 6)
#define RP2040_IO_BANK0_PROC1_INTS0_GPIO1_LEVEL_HIGH                    (1 << 5)
#define RP2040_IO_BANK0_PROC1_INTS0_GPIO1_LEVEL_LOW                     (1 << 4)
#define RP2040_IO_BANK0_PROC1_INTS0_GPIO0_EDGE_HIGH                     (1 << 3)
#define RP2040_IO_BANK0_PROC1_INTS0_GPIO0_EDGE_LOW                      (1 << 2)
#define RP2040_IO_BANK0_PROC1_INTS0_GPIO0_LEVEL_HIGH                    (1 << 1)
#define RP2040_IO_BANK0_PROC1_INTS0_GPIO0_LEVEL_LOW                     (1 << 0)

#define RP2040_IO_BANK0_PROC1_INTS1_GPIO15_EDGE_HIGH                    (1 << 31)
#define RP2040_IO_BANK0_PROC1_INTS1_GPIO15_EDGE_LOW                     (1 << 30)
#define RP2040_IO_BANK0_PROC1_INTS1_GPIO15_LEVEL_HIGH                   (1 << 29)
#define RP2040_IO_BANK0_PROC1_INTS1_GPIO15_LEVEL_LOW                    (1 << 28)
#define RP2040_IO_BANK0_PROC1_INTS1_GPIO14_EDGE_HIGH                    (1 << 27)
#define RP2040_IO_BANK0_PROC1_INTS1_GPIO14_EDGE_LOW                     (1 << 26)
#define RP2040_IO_BANK0_PROC1_INTS1_GPIO14_LEVEL_HIGH                   (1 << 25)
#define RP2040_IO_BANK0_PROC1_INTS1_GPIO14_LEVEL_LOW                    (1 << 24)
#define RP2040_IO_BANK0_PROC1_INTS1_GPIO13_EDGE_HIGH                    (1 << 23)
#define RP2040_IO_BANK0_PROC1_INTS1_GPIO13_EDGE_LOW                     (1 << 22)
#define RP2040_IO_BANK0_PROC1_INTS1_GPIO13_LEVEL_HIGH                   (1 << 21)
#define RP2040_IO_BANK0_PROC1_INTS1_GPIO13_LEVEL_LOW                    (1 << 20)
#define RP2040_IO_BANK0_PROC1_INTS1_GPIO12_EDGE_HIGH                    (1 << 19)
#define RP2040_IO_BANK0_PROC1_INTS1_GPIO12_EDGE_LOW                     (1 << 18)
#define RP2040_IO_BANK0_PROC1_INTS1_GPIO12_LEVEL_HIGH                   (1 << 17)
#define RP2040_IO_BANK0_PROC1_INTS1_GPIO12_LEVEL_LOW                    (1 << 16)
#define RP2040_IO_BANK0_PROC1_INTS1_GPIO11_EDGE_HIGH                    (1 << 15)
#define RP2040_IO_BANK0_PROC1_INTS1_GPIO11_EDGE_LOW                     (1 << 14)
#define RP2040_IO_BANK0_PROC1_INTS1_GPIO11_LEVEL_HIGH                   (1 << 13)
#define RP2040_IO_BANK0_PROC1_INTS1_GPIO11_LEVEL_LOW                    (1 << 12)
#define RP2040_IO_BANK0_PROC1_INTS1_GPIO10_EDGE_HIGH                    (1 << 11)
#define RP2040_IO_BANK0_PROC1_INTS1_GPIO10_EDGE_LOW                     (1 << 10)
#define RP2040_IO_BANK0_PROC1_INTS1_GPIO10_LEVEL_HIGH                   (1 << 9)
#define RP2040_IO_BANK0_PROC1_INTS1_GPIO10_LEVEL_LOW                    (1 << 8)
#define RP2040_IO_BANK0_PROC1_INTS1_GPIO9_EDGE_HIGH                     (1 << 7)
#define RP2040_IO_BANK0_PROC1_INTS1_GPIO9_EDGE_LOW                      (1 << 6)
#define RP2040_IO_BANK0_PROC1_INTS1_GPIO9_LEVEL_HIGH                    (1 << 5)
#define RP2040_IO_BANK0_PROC1_INTS1_GPIO9_LEVEL_LOW                     (1 << 4)
#define RP2040_IO_BANK0_PROC1_INTS1_GPIO8_EDGE_HIGH                     (1 << 3)
#define RP2040_IO_BANK0_PROC1_INTS1_GPIO8_EDGE_LOW                      (1 << 2)
#define RP2040_IO_BANK0_PROC1_INTS1_GPIO8_LEVEL_HIGH                    (1 << 1)
#define RP2040_IO_BANK0_PROC1_INTS1_GPIO8_LEVEL_LOW                     (1 << 0)

#define RP2040_IO_BANK0_PROC1_INTS2_GPIO23_EDGE_HIGH                    (1 << 31)
#define RP2040_IO_BANK0_PROC1_INTS2_GPIO23_EDGE_LOW                     (1 << 30)
#define RP2040_IO_BANK0_PROC1_INTS2_GPIO23_LEVEL_HIGH                   (1 << 29)
#define RP2040_IO_BANK0_PROC1_INTS2_GPIO23_LEVEL_LOW                    (1 << 28)
#define RP2040_IO_BANK0_PROC1_INTS2_GPIO22_EDGE_HIGH                    (1 << 27)
#define RP2040_IO_BANK0_PROC1_INTS2_GPIO22_EDGE_LOW                     (1 << 26)
#define RP2040_IO_BANK0_PROC1_INTS2_GPIO22_LEVEL_HIGH                   (1 << 25)
#define RP2040_IO_BANK0_PROC1_INTS2_GPIO22_LEVEL_LOW                    (1 << 24)
#define RP2040_IO_BANK0_PROC1_INTS2_GPIO21_EDGE_HIGH                    (1 << 23)
#define RP2040_IO_BANK0_PROC1_INTS2_GPIO21_EDGE_LOW                     (1 << 22)
#define RP2040_IO_BANK0_PROC1_INTS2_GPIO21_LEVEL_HIGH                   (1 << 21)
#define RP2040_IO_BANK0_PROC1_INTS2_GPIO21_LEVEL_LOW                    (1 << 20)
#define RP2040_IO_BANK0_PROC1_INTS2_GPIO20_EDGE_HIGH                    (1 << 19)
#define RP2040_IO_BANK0_PROC1_INTS2_GPIO20_EDGE_LOW                     (1 << 18)
#define RP2040_IO_BANK0_PROC1_INTS2_GPIO20_LEVEL_HIGH                   (1 << 17)
#define RP2040_IO_BANK0_PROC1_INTS2_GPIO20_LEVEL_LOW                    (1 << 16)
#define RP2040_IO_BANK0_PROC1_INTS2_GPIO19_EDGE_HIGH                    (1 << 15)
#define RP2040_IO_BANK0_PROC1_INTS2_GPIO19_EDGE_LOW                     (1 << 14)
#define RP2040_IO_BANK0_PROC1_INTS2_GPIO19_LEVEL_HIGH                   (1 << 13)
#define RP2040_IO_BANK0_PROC1_INTS2_GPIO19_LEVEL_LOW                    (1 << 12)
#define RP2040_IO_BANK0_PROC1_INTS2_GPIO18_EDGE_HIGH                    (1 << 11)
#define RP2040_IO_BANK0_PROC1_INTS2_GPIO18_EDGE_LOW                     (1 << 10)
#define RP2040_IO_BANK0_PROC1_INTS2_GPIO18_LEVEL_HIGH                   (1 << 9)
#define RP2040_IO_BANK0_PROC1_INTS2_GPIO18_LEVEL_LOW                    (1 << 8)
#define RP2040_IO_BANK0_PROC1_INTS2_GPIO17_EDGE_HIGH                    (1 << 7)
#define RP2040_IO_BANK0_PROC1_INTS2_GPIO17_EDGE_LOW                     (1 << 6)
#define RP2040_IO_BANK0_PROC1_INTS2_GPIO17_LEVEL_HIGH                   (1 << 5)
#define RP2040_IO_BANK0_PROC1_INTS2_GPIO17_LEVEL_LOW                    (1 << 4)
#define RP2040_IO_BANK0_PROC1_INTS2_GPIO16_EDGE_HIGH                    (1 << 3)
#define RP2040_IO_BANK0_PROC1_INTS2_GPIO16_EDGE_LOW                     (1 << 2)
#define RP2040_IO_BANK0_PROC1_INTS2_GPIO16_LEVEL_HIGH                   (1 << 1)
#define RP2040_IO_BANK0_PROC1_INTS2_GPIO16_LEVEL_LOW                    (1 << 0)

#define RP2040_IO_BANK0_PROC1_INTS3_GPIO29_EDGE_HIGH                    (1 << 23)
#define RP2040_IO_BANK0_PROC1_INTS3_GPIO29_EDGE_LOW                     (1 << 22)
#define RP2040_IO_BANK0_PROC1_INTS3_GPIO29_LEVEL_HIGH                   (1 << 21)
#define RP2040_IO_BANK0_PROC1_INTS3_GPIO29_LEVEL_LOW                    (1 << 20)
#define RP2040_IO_BANK0_PROC1_INTS3_GPIO28_EDGE_HIGH                    (1 << 19)
#define RP2040_IO_BANK0_PROC1_INTS3_GPIO28_EDGE_LOW                     (1 << 18)
#define RP2040_IO_BANK0_PROC1_INTS3_GPIO28_LEVEL_HIGH                   (1 << 17)
#define RP2040_IO_BANK0_PROC1_INTS3_GPIO28_LEVEL_LOW                    (1 << 16)
#define RP2040_IO_BANK0_PROC1_INTS3_GPIO27_EDGE_HIGH                    (1 << 15)
#define RP2040_IO_BANK0_PROC1_INTS3_GPIO27_EDGE_LOW                     (1 << 14)
#define RP2040_IO_BANK0_PROC1_INTS3_GPIO27_LEVEL_HIGH                   (1 << 13)
#define RP2040_IO_BANK0_PROC1_INTS3_GPIO27_LEVEL_LOW                    (1 << 12)
#define RP2040_IO_BANK0_PROC1_INTS3_GPIO26_EDGE_HIGH                    (1 << 11)
#define RP2040_IO_BANK0_PROC1_INTS3_GPIO26_EDGE_LOW                     (1 << 10)
#define RP2040_IO_BANK0_PROC1_INTS3_GPIO26_LEVEL_HIGH                   (1 << 9)
#define RP2040_IO_BANK0_PROC1_INTS3_GPIO26_LEVEL_LOW                    (1 << 8)
#define RP2040_IO_BANK0_PROC1_INTS3_GPIO25_EDGE_HIGH                    (1 << 7)
#define RP2040_IO_BANK0_PROC1_INTS3_GPIO25_EDGE_LOW                     (1 << 6)
#define RP2040_IO_BANK0_PROC1_INTS3_GPIO25_LEVEL_HIGH                   (1 << 5)
#define RP2040_IO_BANK0_PROC1_INTS3_GPIO25_LEVEL_LOW                    (1 << 4)
#define RP2040_IO_BANK0_PROC1_INTS3_GPIO24_EDGE_HIGH                    (1 << 3)
#define RP2040_IO_BANK0_PROC1_INTS3_GPIO24_EDGE_LOW                     (1 << 2)
#define RP2040_IO_BANK0_PROC1_INTS3_GPIO24_LEVEL_HIGH                   (1 << 1)
#define RP2040_IO_BANK0_PROC1_INTS3_GPIO24_LEVEL_LOW                    (1 << 0)

#define RP2040_IO_BANK0_DORMANT_WAKE_INTE0_GPIO7_EDGE_HIGH              (1 << 31)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTE0_GPIO7_EDGE_LOW               (1 << 30)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTE0_GPIO7_LEVEL_HIGH             (1 << 29)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTE0_GPIO7_LEVEL_LOW              (1 << 28)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTE0_GPIO6_EDGE_HIGH              (1 << 27)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTE0_GPIO6_EDGE_LOW               (1 << 26)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTE0_GPIO6_LEVEL_HIGH             (1 << 25)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTE0_GPIO6_LEVEL_LOW              (1 << 24)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTE0_GPIO5_EDGE_HIGH              (1 << 23)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTE0_GPIO5_EDGE_LOW               (1 << 22)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTE0_GPIO5_LEVEL_HIGH             (1 << 21)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTE0_GPIO5_LEVEL_LOW              (1 << 20)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTE0_GPIO4_EDGE_HIGH              (1 << 19)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTE0_GPIO4_EDGE_LOW               (1 << 18)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTE0_GPIO4_LEVEL_HIGH             (1 << 17)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTE0_GPIO4_LEVEL_LOW              (1 << 16)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTE0_GPIO3_EDGE_HIGH              (1 << 15)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTE0_GPIO3_EDGE_LOW               (1 << 14)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTE0_GPIO3_LEVEL_HIGH             (1 << 13)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTE0_GPIO3_LEVEL_LOW              (1 << 12)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTE0_GPIO2_EDGE_HIGH              (1 << 11)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTE0_GPIO2_EDGE_LOW               (1 << 10)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTE0_GPIO2_LEVEL_HIGH             (1 << 9)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTE0_GPIO2_LEVEL_LOW              (1 << 8)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTE0_GPIO1_EDGE_HIGH              (1 << 7)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTE0_GPIO1_EDGE_LOW               (1 << 6)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTE0_GPIO1_LEVEL_HIGH             (1 << 5)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTE0_GPIO1_LEVEL_LOW              (1 << 4)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTE0_GPIO0_EDGE_HIGH              (1 << 3)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTE0_GPIO0_EDGE_LOW               (1 << 2)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTE0_GPIO0_LEVEL_HIGH             (1 << 1)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTE0_GPIO0_LEVEL_LOW              (1 << 0)

#define RP2040_IO_BANK0_DORMANT_WAKE_INTE1_GPIO15_EDGE_HIGH             (1 << 31)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTE1_GPIO15_EDGE_LOW              (1 << 30)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTE1_GPIO15_LEVEL_HIGH            (1 << 29)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTE1_GPIO15_LEVEL_LOW             (1 << 28)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTE1_GPIO14_EDGE_HIGH             (1 << 27)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTE1_GPIO14_EDGE_LOW              (1 << 26)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTE1_GPIO14_LEVEL_HIGH            (1 << 25)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTE1_GPIO14_LEVEL_LOW             (1 << 24)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTE1_GPIO13_EDGE_HIGH             (1 << 23)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTE1_GPIO13_EDGE_LOW              (1 << 22)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTE1_GPIO13_LEVEL_HIGH            (1 << 21)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTE1_GPIO13_LEVEL_LOW             (1 << 20)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTE1_GPIO12_EDGE_HIGH             (1 << 19)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTE1_GPIO12_EDGE_LOW              (1 << 18)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTE1_GPIO12_LEVEL_HIGH            (1 << 17)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTE1_GPIO12_LEVEL_LOW             (1 << 16)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTE1_GPIO11_EDGE_HIGH             (1 << 15)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTE1_GPIO11_EDGE_LOW              (1 << 14)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTE1_GPIO11_LEVEL_HIGH            (1 << 13)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTE1_GPIO11_LEVEL_LOW             (1 << 12)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTE1_GPIO10_EDGE_HIGH             (1 << 11)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTE1_GPIO10_EDGE_LOW              (1 << 10)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTE1_GPIO10_LEVEL_HIGH            (1 << 9)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTE1_GPIO10_LEVEL_LOW             (1 << 8)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTE1_GPIO9_EDGE_HIGH              (1 << 7)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTE1_GPIO9_EDGE_LOW               (1 << 6)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTE1_GPIO9_LEVEL_HIGH             (1 << 5)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTE1_GPIO9_LEVEL_LOW              (1 << 4)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTE1_GPIO8_EDGE_HIGH              (1 << 3)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTE1_GPIO8_EDGE_LOW               (1 << 2)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTE1_GPIO8_LEVEL_HIGH             (1 << 1)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTE1_GPIO8_LEVEL_LOW              (1 << 0)

#define RP2040_IO_BANK0_DORMANT_WAKE_INTE2_GPIO23_EDGE_HIGH             (1 << 31)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTE2_GPIO23_EDGE_LOW              (1 << 30)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTE2_GPIO23_LEVEL_HIGH            (1 << 29)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTE2_GPIO23_LEVEL_LOW             (1 << 28)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTE2_GPIO22_EDGE_HIGH             (1 << 27)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTE2_GPIO22_EDGE_LOW              (1 << 26)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTE2_GPIO22_LEVEL_HIGH            (1 << 25)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTE2_GPIO22_LEVEL_LOW             (1 << 24)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTE2_GPIO21_EDGE_HIGH             (1 << 23)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTE2_GPIO21_EDGE_LOW              (1 << 22)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTE2_GPIO21_LEVEL_HIGH            (1 << 21)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTE2_GPIO21_LEVEL_LOW             (1 << 20)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTE2_GPIO20_EDGE_HIGH             (1 << 19)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTE2_GPIO20_EDGE_LOW              (1 << 18)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTE2_GPIO20_LEVEL_HIGH            (1 << 17)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTE2_GPIO20_LEVEL_LOW             (1 << 16)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTE2_GPIO19_EDGE_HIGH             (1 << 15)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTE2_GPIO19_EDGE_LOW              (1 << 14)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTE2_GPIO19_LEVEL_HIGH            (1 << 13)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTE2_GPIO19_LEVEL_LOW             (1 << 12)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTE2_GPIO18_EDGE_HIGH             (1 << 11)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTE2_GPIO18_EDGE_LOW              (1 << 10)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTE2_GPIO18_LEVEL_HIGH            (1 << 9)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTE2_GPIO18_LEVEL_LOW             (1 << 8)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTE2_GPIO17_EDGE_HIGH             (1 << 7)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTE2_GPIO17_EDGE_LOW              (1 << 6)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTE2_GPIO17_LEVEL_HIGH            (1 << 5)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTE2_GPIO17_LEVEL_LOW             (1 << 4)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTE2_GPIO16_EDGE_HIGH             (1 << 3)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTE2_GPIO16_EDGE_LOW              (1 << 2)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTE2_GPIO16_LEVEL_HIGH            (1 << 1)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTE2_GPIO16_LEVEL_LOW             (1 << 0)

#define RP2040_IO_BANK0_DORMANT_WAKE_INTE3_GPIO29_EDGE_HIGH             (1 << 23)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTE3_GPIO29_EDGE_LOW              (1 << 22)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTE3_GPIO29_LEVEL_HIGH            (1 << 21)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTE3_GPIO29_LEVEL_LOW             (1 << 20)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTE3_GPIO28_EDGE_HIGH             (1 << 19)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTE3_GPIO28_EDGE_LOW              (1 << 18)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTE3_GPIO28_LEVEL_HIGH            (1 << 17)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTE3_GPIO28_LEVEL_LOW             (1 << 16)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTE3_GPIO27_EDGE_HIGH             (1 << 15)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTE3_GPIO27_EDGE_LOW              (1 << 14)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTE3_GPIO27_LEVEL_HIGH            (1 << 13)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTE3_GPIO27_LEVEL_LOW             (1 << 12)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTE3_GPIO26_EDGE_HIGH             (1 << 11)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTE3_GPIO26_EDGE_LOW              (1 << 10)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTE3_GPIO26_LEVEL_HIGH            (1 << 9)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTE3_GPIO26_LEVEL_LOW             (1 << 8)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTE3_GPIO25_EDGE_HIGH             (1 << 7)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTE3_GPIO25_EDGE_LOW              (1 << 6)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTE3_GPIO25_LEVEL_HIGH            (1 << 5)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTE3_GPIO25_LEVEL_LOW             (1 << 4)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTE3_GPIO24_EDGE_HIGH             (1 << 3)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTE3_GPIO24_EDGE_LOW              (1 << 2)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTE3_GPIO24_LEVEL_HIGH            (1 << 1)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTE3_GPIO24_LEVEL_LOW             (1 << 0)

#define RP2040_IO_BANK0_DORMANT_WAKE_INTF0_GPIO7_EDGE_HIGH              (1 << 31)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTF0_GPIO7_EDGE_LOW               (1 << 30)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTF0_GPIO7_LEVEL_HIGH             (1 << 29)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTF0_GPIO7_LEVEL_LOW              (1 << 28)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTF0_GPIO6_EDGE_HIGH              (1 << 27)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTF0_GPIO6_EDGE_LOW               (1 << 26)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTF0_GPIO6_LEVEL_HIGH             (1 << 25)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTF0_GPIO6_LEVEL_LOW              (1 << 24)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTF0_GPIO5_EDGE_HIGH              (1 << 23)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTF0_GPIO5_EDGE_LOW               (1 << 22)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTF0_GPIO5_LEVEL_HIGH             (1 << 21)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTF0_GPIO5_LEVEL_LOW              (1 << 20)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTF0_GPIO4_EDGE_HIGH              (1 << 19)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTF0_GPIO4_EDGE_LOW               (1 << 18)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTF0_GPIO4_LEVEL_HIGH             (1 << 17)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTF0_GPIO4_LEVEL_LOW              (1 << 16)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTF0_GPIO3_EDGE_HIGH              (1 << 15)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTF0_GPIO3_EDGE_LOW               (1 << 14)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTF0_GPIO3_LEVEL_HIGH             (1 << 13)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTF0_GPIO3_LEVEL_LOW              (1 << 12)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTF0_GPIO2_EDGE_HIGH              (1 << 11)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTF0_GPIO2_EDGE_LOW               (1 << 10)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTF0_GPIO2_LEVEL_HIGH             (1 << 9)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTF0_GPIO2_LEVEL_LOW              (1 << 8)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTF0_GPIO1_EDGE_HIGH              (1 << 7)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTF0_GPIO1_EDGE_LOW               (1 << 6)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTF0_GPIO1_LEVEL_HIGH             (1 << 5)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTF0_GPIO1_LEVEL_LOW              (1 << 4)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTF0_GPIO0_EDGE_HIGH              (1 << 3)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTF0_GPIO0_EDGE_LOW               (1 << 2)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTF0_GPIO0_LEVEL_HIGH             (1 << 1)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTF0_GPIO0_LEVEL_LOW              (1 << 0)

#define RP2040_IO_BANK0_DORMANT_WAKE_INTF1_GPIO15_EDGE_HIGH             (1 << 31)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTF1_GPIO15_EDGE_LOW              (1 << 30)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTF1_GPIO15_LEVEL_HIGH            (1 << 29)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTF1_GPIO15_LEVEL_LOW             (1 << 28)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTF1_GPIO14_EDGE_HIGH             (1 << 27)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTF1_GPIO14_EDGE_LOW              (1 << 26)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTF1_GPIO14_LEVEL_HIGH            (1 << 25)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTF1_GPIO14_LEVEL_LOW             (1 << 24)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTF1_GPIO13_EDGE_HIGH             (1 << 23)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTF1_GPIO13_EDGE_LOW              (1 << 22)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTF1_GPIO13_LEVEL_HIGH            (1 << 21)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTF1_GPIO13_LEVEL_LOW             (1 << 20)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTF1_GPIO12_EDGE_HIGH             (1 << 19)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTF1_GPIO12_EDGE_LOW              (1 << 18)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTF1_GPIO12_LEVEL_HIGH            (1 << 17)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTF1_GPIO12_LEVEL_LOW             (1 << 16)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTF1_GPIO11_EDGE_HIGH             (1 << 15)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTF1_GPIO11_EDGE_LOW              (1 << 14)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTF1_GPIO11_LEVEL_HIGH            (1 << 13)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTF1_GPIO11_LEVEL_LOW             (1 << 12)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTF1_GPIO10_EDGE_HIGH             (1 << 11)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTF1_GPIO10_EDGE_LOW              (1 << 10)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTF1_GPIO10_LEVEL_HIGH            (1 << 9)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTF1_GPIO10_LEVEL_LOW             (1 << 8)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTF1_GPIO9_EDGE_HIGH              (1 << 7)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTF1_GPIO9_EDGE_LOW               (1 << 6)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTF1_GPIO9_LEVEL_HIGH             (1 << 5)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTF1_GPIO9_LEVEL_LOW              (1 << 4)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTF1_GPIO8_EDGE_HIGH              (1 << 3)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTF1_GPIO8_EDGE_LOW               (1 << 2)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTF1_GPIO8_LEVEL_HIGH             (1 << 1)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTF1_GPIO8_LEVEL_LOW              (1 << 0)

#define RP2040_IO_BANK0_DORMANT_WAKE_INTF2_GPIO23_EDGE_HIGH             (1 << 31)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTF2_GPIO23_EDGE_LOW              (1 << 30)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTF2_GPIO23_LEVEL_HIGH            (1 << 29)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTF2_GPIO23_LEVEL_LOW             (1 << 28)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTF2_GPIO22_EDGE_HIGH             (1 << 27)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTF2_GPIO22_EDGE_LOW              (1 << 26)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTF2_GPIO22_LEVEL_HIGH            (1 << 25)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTF2_GPIO22_LEVEL_LOW             (1 << 24)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTF2_GPIO21_EDGE_HIGH             (1 << 23)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTF2_GPIO21_EDGE_LOW              (1 << 22)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTF2_GPIO21_LEVEL_HIGH            (1 << 21)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTF2_GPIO21_LEVEL_LOW             (1 << 20)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTF2_GPIO20_EDGE_HIGH             (1 << 19)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTF2_GPIO20_EDGE_LOW              (1 << 18)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTF2_GPIO20_LEVEL_HIGH            (1 << 17)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTF2_GPIO20_LEVEL_LOW             (1 << 16)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTF2_GPIO19_EDGE_HIGH             (1 << 15)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTF2_GPIO19_EDGE_LOW              (1 << 14)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTF2_GPIO19_LEVEL_HIGH            (1 << 13)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTF2_GPIO19_LEVEL_LOW             (1 << 12)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTF2_GPIO18_EDGE_HIGH             (1 << 11)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTF2_GPIO18_EDGE_LOW              (1 << 10)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTF2_GPIO18_LEVEL_HIGH            (1 << 9)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTF2_GPIO18_LEVEL_LOW             (1 << 8)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTF2_GPIO17_EDGE_HIGH             (1 << 7)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTF2_GPIO17_EDGE_LOW              (1 << 6)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTF2_GPIO17_LEVEL_HIGH            (1 << 5)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTF2_GPIO17_LEVEL_LOW             (1 << 4)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTF2_GPIO16_EDGE_HIGH             (1 << 3)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTF2_GPIO16_EDGE_LOW              (1 << 2)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTF2_GPIO16_LEVEL_HIGH            (1 << 1)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTF2_GPIO16_LEVEL_LOW             (1 << 0)

#define RP2040_IO_BANK0_DORMANT_WAKE_INTF3_GPIO29_EDGE_HIGH             (1 << 23)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTF3_GPIO29_EDGE_LOW              (1 << 22)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTF3_GPIO29_LEVEL_HIGH            (1 << 21)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTF3_GPIO29_LEVEL_LOW             (1 << 20)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTF3_GPIO28_EDGE_HIGH             (1 << 19)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTF3_GPIO28_EDGE_LOW              (1 << 18)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTF3_GPIO28_LEVEL_HIGH            (1 << 17)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTF3_GPIO28_LEVEL_LOW             (1 << 16)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTF3_GPIO27_EDGE_HIGH             (1 << 15)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTF3_GPIO27_EDGE_LOW              (1 << 14)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTF3_GPIO27_LEVEL_HIGH            (1 << 13)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTF3_GPIO27_LEVEL_LOW             (1 << 12)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTF3_GPIO26_EDGE_HIGH             (1 << 11)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTF3_GPIO26_EDGE_LOW              (1 << 10)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTF3_GPIO26_LEVEL_HIGH            (1 << 9)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTF3_GPIO26_LEVEL_LOW             (1 << 8)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTF3_GPIO25_EDGE_HIGH             (1 << 7)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTF3_GPIO25_EDGE_LOW              (1 << 6)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTF3_GPIO25_LEVEL_HIGH            (1 << 5)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTF3_GPIO25_LEVEL_LOW             (1 << 4)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTF3_GPIO24_EDGE_HIGH             (1 << 3)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTF3_GPIO24_EDGE_LOW              (1 << 2)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTF3_GPIO24_LEVEL_HIGH            (1 << 1)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTF3_GPIO24_LEVEL_LOW             (1 << 0)

#define RP2040_IO_BANK0_DORMANT_WAKE_INTS0_GPIO7_EDGE_HIGH              (1 << 31)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTS0_GPIO7_EDGE_LOW               (1 << 30)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTS0_GPIO7_LEVEL_HIGH             (1 << 29)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTS0_GPIO7_LEVEL_LOW              (1 << 28)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTS0_GPIO6_EDGE_HIGH              (1 << 27)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTS0_GPIO6_EDGE_LOW               (1 << 26)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTS0_GPIO6_LEVEL_HIGH             (1 << 25)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTS0_GPIO6_LEVEL_LOW              (1 << 24)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTS0_GPIO5_EDGE_HIGH              (1 << 23)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTS0_GPIO5_EDGE_LOW               (1 << 22)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTS0_GPIO5_LEVEL_HIGH             (1 << 21)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTS0_GPIO5_LEVEL_LOW              (1 << 20)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTS0_GPIO4_EDGE_HIGH              (1 << 19)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTS0_GPIO4_EDGE_LOW               (1 << 18)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTS0_GPIO4_LEVEL_HIGH             (1 << 17)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTS0_GPIO4_LEVEL_LOW              (1 << 16)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTS0_GPIO3_EDGE_HIGH              (1 << 15)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTS0_GPIO3_EDGE_LOW               (1 << 14)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTS0_GPIO3_LEVEL_HIGH             (1 << 13)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTS0_GPIO3_LEVEL_LOW              (1 << 12)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTS0_GPIO2_EDGE_HIGH              (1 << 11)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTS0_GPIO2_EDGE_LOW               (1 << 10)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTS0_GPIO2_LEVEL_HIGH             (1 << 9)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTS0_GPIO2_LEVEL_LOW              (1 << 8)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTS0_GPIO1_EDGE_HIGH              (1 << 7)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTS0_GPIO1_EDGE_LOW               (1 << 6)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTS0_GPIO1_LEVEL_HIGH             (1 << 5)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTS0_GPIO1_LEVEL_LOW              (1 << 4)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTS0_GPIO0_EDGE_HIGH              (1 << 3)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTS0_GPIO0_EDGE_LOW               (1 << 2)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTS0_GPIO0_LEVEL_HIGH             (1 << 1)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTS0_GPIO0_LEVEL_LOW              (1 << 0)

#define RP2040_IO_BANK0_DORMANT_WAKE_INTS1_GPIO15_EDGE_HIGH             (1 << 31)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTS1_GPIO15_EDGE_LOW              (1 << 30)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTS1_GPIO15_LEVEL_HIGH            (1 << 29)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTS1_GPIO15_LEVEL_LOW             (1 << 28)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTS1_GPIO14_EDGE_HIGH             (1 << 27)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTS1_GPIO14_EDGE_LOW              (1 << 26)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTS1_GPIO14_LEVEL_HIGH            (1 << 25)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTS1_GPIO14_LEVEL_LOW             (1 << 24)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTS1_GPIO13_EDGE_HIGH             (1 << 23)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTS1_GPIO13_EDGE_LOW              (1 << 22)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTS1_GPIO13_LEVEL_HIGH            (1 << 21)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTS1_GPIO13_LEVEL_LOW             (1 << 20)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTS1_GPIO12_EDGE_HIGH             (1 << 19)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTS1_GPIO12_EDGE_LOW              (1 << 18)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTS1_GPIO12_LEVEL_HIGH            (1 << 17)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTS1_GPIO12_LEVEL_LOW             (1 << 16)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTS1_GPIO11_EDGE_HIGH             (1 << 15)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTS1_GPIO11_EDGE_LOW              (1 << 14)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTS1_GPIO11_LEVEL_HIGH            (1 << 13)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTS1_GPIO11_LEVEL_LOW             (1 << 12)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTS1_GPIO10_EDGE_HIGH             (1 << 11)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTS1_GPIO10_EDGE_LOW              (1 << 10)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTS1_GPIO10_LEVEL_HIGH            (1 << 9)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTS1_GPIO10_LEVEL_LOW             (1 << 8)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTS1_GPIO9_EDGE_HIGH              (1 << 7)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTS1_GPIO9_EDGE_LOW               (1 << 6)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTS1_GPIO9_LEVEL_HIGH             (1 << 5)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTS1_GPIO9_LEVEL_LOW              (1 << 4)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTS1_GPIO8_EDGE_HIGH              (1 << 3)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTS1_GPIO8_EDGE_LOW               (1 << 2)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTS1_GPIO8_LEVEL_HIGH             (1 << 1)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTS1_GPIO8_LEVEL_LOW              (1 << 0)

#define RP2040_IO_BANK0_DORMANT_WAKE_INTS2_GPIO23_EDGE_HIGH             (1 << 31)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTS2_GPIO23_EDGE_LOW              (1 << 30)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTS2_GPIO23_LEVEL_HIGH            (1 << 29)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTS2_GPIO23_LEVEL_LOW             (1 << 28)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTS2_GPIO22_EDGE_HIGH             (1 << 27)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTS2_GPIO22_EDGE_LOW              (1 << 26)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTS2_GPIO22_LEVEL_HIGH            (1 << 25)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTS2_GPIO22_LEVEL_LOW             (1 << 24)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTS2_GPIO21_EDGE_HIGH             (1 << 23)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTS2_GPIO21_EDGE_LOW              (1 << 22)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTS2_GPIO21_LEVEL_HIGH            (1 << 21)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTS2_GPIO21_LEVEL_LOW             (1 << 20)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTS2_GPIO20_EDGE_HIGH             (1 << 19)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTS2_GPIO20_EDGE_LOW              (1 << 18)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTS2_GPIO20_LEVEL_HIGH            (1 << 17)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTS2_GPIO20_LEVEL_LOW             (1 << 16)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTS2_GPIO19_EDGE_HIGH             (1 << 15)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTS2_GPIO19_EDGE_LOW              (1 << 14)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTS2_GPIO19_LEVEL_HIGH            (1 << 13)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTS2_GPIO19_LEVEL_LOW             (1 << 12)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTS2_GPIO18_EDGE_HIGH             (1 << 11)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTS2_GPIO18_EDGE_LOW              (1 << 10)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTS2_GPIO18_LEVEL_HIGH            (1 << 9)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTS2_GPIO18_LEVEL_LOW             (1 << 8)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTS2_GPIO17_EDGE_HIGH             (1 << 7)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTS2_GPIO17_EDGE_LOW              (1 << 6)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTS2_GPIO17_LEVEL_HIGH            (1 << 5)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTS2_GPIO17_LEVEL_LOW             (1 << 4)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTS2_GPIO16_EDGE_HIGH             (1 << 3)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTS2_GPIO16_EDGE_LOW              (1 << 2)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTS2_GPIO16_LEVEL_HIGH            (1 << 1)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTS2_GPIO16_LEVEL_LOW             (1 << 0)

#define RP2040_IO_BANK0_DORMANT_WAKE_INTS3_GPIO29_EDGE_HIGH             (1 << 23)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTS3_GPIO29_EDGE_LOW              (1 << 22)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTS3_GPIO29_LEVEL_HIGH            (1 << 21)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTS3_GPIO29_LEVEL_LOW             (1 << 20)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTS3_GPIO28_EDGE_HIGH             (1 << 19)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTS3_GPIO28_EDGE_LOW              (1 << 18)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTS3_GPIO28_LEVEL_HIGH            (1 << 17)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTS3_GPIO28_LEVEL_LOW             (1 << 16)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTS3_GPIO27_EDGE_HIGH             (1 << 15)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTS3_GPIO27_EDGE_LOW              (1 << 14)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTS3_GPIO27_LEVEL_HIGH            (1 << 13)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTS3_GPIO27_LEVEL_LOW             (1 << 12)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTS3_GPIO26_EDGE_HIGH             (1 << 11)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTS3_GPIO26_EDGE_LOW              (1 << 10)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTS3_GPIO26_LEVEL_HIGH            (1 << 9)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTS3_GPIO26_LEVEL_LOW             (1 << 8)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTS3_GPIO25_EDGE_HIGH             (1 << 7)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTS3_GPIO25_EDGE_LOW              (1 << 6)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTS3_GPIO25_LEVEL_HIGH            (1 << 5)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTS3_GPIO25_LEVEL_LOW             (1 << 4)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTS3_GPIO24_EDGE_HIGH             (1 << 3)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTS3_GPIO24_EDGE_LOW              (1 << 2)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTS3_GPIO24_LEVEL_HIGH            (1 << 1)
#define RP2040_IO_BANK0_DORMANT_WAKE_INTS3_GPIO24_LEVEL_LOW             (1 << 0)

#endif /* __ARCH_ARM_SRC_RP2040_HARDWARE_RP2040_IO_BANK0_H */
