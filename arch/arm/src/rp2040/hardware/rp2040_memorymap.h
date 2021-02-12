/****************************************************************************
 * arch/arm/src/rp2040/hardware/rp2040_memorymap.h
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

#ifndef __ARCH_ARM_SRC_RP2040_HARDWARE_RP2040_MEMORYMAP_H
#define __ARCH_ARM_SRC_RP2040_HARDWARE_RP2040_MEMORYMAP_H

/********************************************************************************************
 * Included Files
 ********************************************************************************************/

#include <nuttx/config.h>

#include "chip.h"

/********************************************************************************************
 * Pre-processor Definitions
 ********************************************************************************************/

#define RP2040_FLASH_BASE                0x10000000 /* -0x001fffff: FLASH memory space (2048KB) */
#define RP2040_SRAM_BASE                 0x20000000 /* -0x20041fff: SRAM memory space (264KB) */

#define RP2040_XIP_CTRL_BASE             0x14000000  /* QSPI flash execute-in-place block */
#define RP2040_XIP_SSI_BASE              0x18000000  /* DW_apb_ssi has the following features: * APB interface – Allows for easy integration into a DesignWare Synthesizable Components for AMBA 2 implementation. * APB3 and APB4 protocol support. * Scalable APB data bus width – Supports APB data bus widths of 8, 16, and 32 bits. * Serial-master or serial-slave operation – Enables serial communication with serial-master or serial-slave peripheral devices. * Programmable Dual/Quad/Octal SPI support in Master Mode. * Dual Data Rate (DDR) and Read Data Strobe (RDS) Support - Enables the DW_apb_ssi master to perform operations with the device in DDR and RDS modes when working in Dual/Quad/Octal mode of operation. * Data Mask Support - Enables the DW_apb_ssi to selectively update the bytes in the device. This feature is applicable only in enhanced SPI modes. * eXecute-In-Place (XIP) support - Enables the DW_apb_ssi master to behave as a memory mapped I/O and fetches the data from the device based on the APB read request. This feature is applicable only in enhanced SPI modes. * DMA Controller Interface – Enables the DW_apb_ssi to interface to a DMA controller over the bus using a handshaking interface for transfer requests. * Independent masking of interrupts – Master collision, transmit FIFO overflow, transmit FIFO empty, receive FIFO full, receive FIFO underflow, and receive FIFO overflow interrupts can all be masked independently. * Multi-master contention detection – Informs the processor of multiple serial-master accesses on the serial bus. * Bypass of meta-stability flip-flops for synchronous clocks – When the APB clock (pclk) and the DW_apb_ssi serial clock (ssi_clk) are synchronous, meta-stable flip-flops are not used when transferring control signals across these clock domains. * Programmable delay on the sample time of the received serial data bit (rxd); enables programmable control of routing delays resulting in higher serial data-bit rates. * Programmable features: - Serial interface operation – Choice of Motorola SPI, Texas Instruments Synchronous Serial Protocol or National Semiconductor Microwire. - Clock bit-rate – Dynamic control of the serial bit rate of the data transfer; used in only serial-master mode of operation. - Data Item size (4 to 32 bits) – Item size of each data transfer under the control of the programmer. * Configured features: - FIFO depth – 16 words deep. The FIFO width is fixed at 32 bits. - 1 slave select output. - Hardware slave-select – Dedicated hardware slave-select line. - Combined interrupt line - one combined interrupt line from the DW_apb_ssi to the interrupt controller. - Interrupt polarity – active high interrupt lines. - Serial clock polarity – low serial-clock polarity directly after reset. - Serial clock phase – capture on first edge of serial-clock directly after reset. */
#define RP2040_SYSINFO_BASE              0x40000000
#define RP2040_SYSCFG_BASE               0x40004000  /* Register block for various chip control signals */
#define RP2040_CLOCKS_BASE               0x40008000
#define RP2040_RESETS_BASE               0x4000c000
#define RP2040_PSM_BASE                  0x40010000
#define RP2040_IO_BANK0_BASE             0x40014000
#define RP2040_IO_QSPI_BASE              0x40018000
#define RP2040_PADS_BANK0_BASE           0x4001c000
#define RP2040_PADS_QSPI_BASE            0x40020000
#define RP2040_XOSC_BASE                 0x40024000  /* Controls the crystal oscillator */
#define RP2040_PLL_SYS_BASE              0x40028000
#define RP2040_PLL_USB_BASE              0x4002c000
#define RP2040_BUSCTRL_BASE              0x40030000  /* Register block for busfabric control signals and performance counters */
#define RP2040_UART0_BASE                0x40034000
#define RP2040_UART1_BASE                0x40038000
#define RP2040_SPI0_BASE                 0x4003c000
#define RP2040_SPI1_BASE                 0x40040000
#define RP2040_I2C0_BASE                 0x40044000  /* DW_apb_i2c address block */
#define RP2040_I2C1_BASE                 0x40048000  /* DW_apb_i2c address block */
#define RP2040_ADC_BASE                  0x4004c000  /* Control and data interface to SAR ADC */
#define RP2040_PWM_BASE                  0x40050000  /* Simple PWM */
#define RP2040_TIMER_BASE                0x40054000  /* Controls time and alarms time is a 64 bit value indicating the time in usec since power-on timeh is the top 32 bits of time & timel is the bottom 32 bits to change time write to timelw before timehw to read time read from timelr before timehr An alarm is set by setting alarm_enable and writing to the corresponding alarm register When an alarm is pending, the corresponding alarm_running signal will be high An alarm can be cancelled before it has finished by clearing the alarm_enable When an alarm fires, the corresponding alarm_irq is set and alarm_running is cleared To clear the interrupt write a 1 to the corresponding alarm_irq */
#define RP2040_WATCHDOG_BASE             0x40058000
#define RP2040_RTC_BASE                  0x4005c000  /* Register block to control RTC */
#define RP2040_ROSC_BASE                 0x40060000
#define RP2040_VREG_AND_CHIP_RESET_BASE  0x40064000  /* control and status for on-chip voltage regulator and chip level reset subsystem */
#define RP2040_TBMAN_BASE                0x4006c000  /* Testbench manager. Allows the programmer to know what platform their software is running on. */
#define RP2040_DMA_BASE                  0x50000000  /* DMA with separate read and write masters */
#define RP2040_USBCTRL_REGS_BASE         0x50110000  /* USB FS/LS controller device registers */
#define RP2040_PIO0_BASE                 0x50200000  /* Programmable IO block */
#define RP2040_PIO1_BASE                 0x50300000  /* Programmable IO block */
#define RP2040_SIO_BASE                  0xd0000000  /* Single-cycle IO block Provides core-local and inter-core hardware for the two processors, with single-cycle access. */
#define RP2040_PPB_BASE                  0xe0000000

 /********************************************************************************************
 * Public Types
 ********************************************************************************************/

/********************************************************************************************
 * Public Data
 ********************************************************************************************/

/********************************************************************************************
 * Public Functions
 ********************************************************************************************/

#endif /* __ARCH_ARM_SRC_RP2040_HARDWARE_RP2040_MEMORYMAP_H */
