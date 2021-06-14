/****************************************************************************
 * arch/arm/src/rp2040/hardware/rp2040_i2c0.h
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

#ifndef __ARCH_ARM_SRC_RP2040_HARDWARE_RP2040_I2C0_H
#define __ARCH_ARM_SRC_RP2040_HARDWARE_RP2040_I2C0_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include "hardware/rp2040_memorymap.h"

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

/* Register offsets *********************************************************/

#define RP2040_I2C0_IC_CON_OFFSET                 0x000000  /* I2C Control Register. This register can be written only when the DW_apb_i2c is disabled, which corresponds to the IC_ENABLE[0] register being set to 0. Writes at other times have no effect.  Read/Write Access: - bit 10 is read only. - bit 11 is read only - bit 16 is read only - bit 17 is read only - bits 18 and 19 are read only. */
#define RP2040_I2C0_IC_TAR_OFFSET                 0x000004  /* I2C Target Address Register  This register is 12 bits wide, and bits 31:12 are reserved. This register can be written to only when IC_ENABLE[0] is set to 0.  Note: If the software or application is aware that the DW_apb_i2c is not using the TAR address for the pending commands in the Tx FIFO, then it is possible to update the TAR address even while the Tx FIFO has entries (IC_STATUS[2]= 0). - It is not necessary to perform any write to this register if DW_apb_i2c is enabled as an I2C slave only. */
#define RP2040_I2C0_IC_SAR_OFFSET                 0x000008  /* I2C Slave Address Register */
#define RP2040_I2C0_IC_DATA_CMD_OFFSET            0x000010  /* I2C Rx/Tx Data Buffer and Command Register; this is the register the CPU writes to when filling the TX FIFO and the CPU reads from when retrieving bytes from RX FIFO.  The size of the register changes as follows:  Write: - 11 bits when IC_EMPTYFIFO_HOLD_MASTER_EN=1 - 9 bits when IC_EMPTYFIFO_HOLD_MASTER_EN=0 Read: - 12 bits when IC_FIRST_DATA_BYTE_STATUS = 1 - 8 bits when IC_FIRST_DATA_BYTE_STATUS = 0 Note: In order for the DW_apb_i2c to continue acknowledging reads, a read command should be written for every byte that is to be received; otherwise the DW_apb_i2c will stop acknowledging. */
#define RP2040_I2C0_IC_SS_SCL_HCNT_OFFSET         0x000014  /* Standard Speed I2C Clock SCL High Count Register */
#define RP2040_I2C0_IC_SS_SCL_LCNT_OFFSET         0x000018  /* Standard Speed I2C Clock SCL Low Count Register */
#define RP2040_I2C0_IC_FS_SCL_HCNT_OFFSET         0x00001c  /* Fast Mode or Fast Mode Plus I2C Clock SCL High Count Register */
#define RP2040_I2C0_IC_FS_SCL_LCNT_OFFSET         0x000020  /* Fast Mode or Fast Mode Plus I2C Clock SCL Low Count Register */
#define RP2040_I2C0_IC_INTR_STAT_OFFSET           0x00002c  /* I2C Interrupt Status Register  Each bit in this register has a corresponding mask bit in the IC_INTR_MASK register. These bits are cleared by reading the matching interrupt clear register. The unmasked raw versions of these bits are available in the IC_RAW_INTR_STAT register. */
#define RP2040_I2C0_IC_INTR_MASK_OFFSET           0x000030  /* I2C Interrupt Mask Register.  These bits mask their corresponding interrupt status bits. This register is active low; a value of 0 masks the interrupt, whereas a value of 1 unmasks the interrupt. */
#define RP2040_I2C0_IC_RAW_INTR_STAT_OFFSET       0x000034  /* I2C Raw Interrupt Status Register  Unlike the IC_INTR_STAT register, these bits are not masked so they always show the true status of the DW_apb_i2c. */
#define RP2040_I2C0_IC_RX_TL_OFFSET               0x000038  /* I2C Receive FIFO Threshold Register */
#define RP2040_I2C0_IC_TX_TL_OFFSET               0x00003c  /* I2C Transmit FIFO Threshold Register */
#define RP2040_I2C0_IC_CLR_INTR_OFFSET            0x000040  /* Clear Combined and Individual Interrupt Register */
#define RP2040_I2C0_IC_CLR_RX_UNDER_OFFSET        0x000044  /* Clear RX_UNDER Interrupt Register */
#define RP2040_I2C0_IC_CLR_RX_OVER_OFFSET         0x000048  /* Clear RX_OVER Interrupt Register */
#define RP2040_I2C0_IC_CLR_TX_OVER_OFFSET         0x00004c  /* Clear TX_OVER Interrupt Register */
#define RP2040_I2C0_IC_CLR_RD_REQ_OFFSET          0x000050  /* Clear RD_REQ Interrupt Register */
#define RP2040_I2C0_IC_CLR_TX_ABRT_OFFSET         0x000054  /* Clear TX_ABRT Interrupt Register */
#define RP2040_I2C0_IC_CLR_RX_DONE_OFFSET         0x000058  /* Clear RX_DONE Interrupt Register */
#define RP2040_I2C0_IC_CLR_ACTIVITY_OFFSET        0x00005c  /* Clear ACTIVITY Interrupt Register */
#define RP2040_I2C0_IC_CLR_STOP_DET_OFFSET        0x000060  /* Clear STOP_DET Interrupt Register */
#define RP2040_I2C0_IC_CLR_START_DET_OFFSET       0x000064  /* Clear START_DET Interrupt Register */
#define RP2040_I2C0_IC_CLR_GEN_CALL_OFFSET        0x000068  /* Clear GEN_CALL Interrupt Register */
#define RP2040_I2C0_IC_ENABLE_OFFSET              0x00006c  /* I2C Enable Register */
#define RP2040_I2C0_IC_STATUS_OFFSET              0x000070  /* I2C Status Register  This is a read-only register used to indicate the current transfer status and FIFO status. The status register may be read at any time. None of the bits in this register request an interrupt.  When the I2C is disabled by writing 0 in bit 0 of the IC_ENABLE register: - Bits 1 and 2 are set to 1 - Bits 3 and 10 are set to 0 When the master or slave state machines goes to idle and ic_en=0: - Bits 5 and 6 are set to 0 */
#define RP2040_I2C0_IC_TXFLR_OFFSET               0x000074  /* I2C Transmit FIFO Level Register This register contains the number of valid data entries in the transmit FIFO buffer. It is cleared whenever: - The I2C is disabled - There is a transmit abort - that is, TX_ABRT bit is set in the IC_RAW_INTR_STAT register - The slave bulk transmit mode is aborted The register increments whenever data is placed into the transmit FIFO and decrements when data is taken from the transmit FIFO. */
#define RP2040_I2C0_IC_RXFLR_OFFSET               0x000078  /* I2C Receive FIFO Level Register This register contains the number of valid data entries in the receive FIFO buffer. It is cleared whenever: - The I2C is disabled - Whenever there is a transmit abort caused by any of the events tracked in IC_TX_ABRT_SOURCE The register increments whenever data is placed into the receive FIFO and decrements when data is taken from the receive FIFO. */
#define RP2040_I2C0_IC_SDA_HOLD_OFFSET            0x00007c  /* I2C SDA Hold Time Length Register  The bits [15:0] of this register are used to control the hold time of SDA during transmit in both slave and master mode (after SCL goes from HIGH to LOW).  The bits [23:16] of this register are used to extend the SDA transition (if any) whenever SCL is HIGH in the receiver in either master or slave mode.  Writes to this register succeed only when IC_ENABLE[0]=0.  The values in this register are in units of ic_clk period. The value programmed in IC_SDA_TX_HOLD must be greater than the minimum hold time in each mode one cycle in master mode, seven cycles in slave mode for the value to be implemented.  The programmed SDA hold time during transmit (IC_SDA_TX_HOLD) cannot exceed at any time the duration of the low part of scl. Therefore the programmed value cannot be larger than N_SCL_LOW-2, where N_SCL_LOW is the duration of the low part of the scl period measured in ic_clk cycles. */
#define RP2040_I2C0_IC_TX_ABRT_SOURCE_OFFSET      0x000080  /* I2C Transmit Abort Source Register  This register has 32 bits that indicate the source of the TX_ABRT bit. Except for Bit 9, this register is cleared whenever the IC_CLR_TX_ABRT register or the IC_CLR_INTR register is read. To clear Bit 9, the source of the ABRT_SBYTE_NORSTRT must be fixed first; RESTART must be enabled (IC_CON[5]=1), the SPECIAL bit must be cleared (IC_TAR[11]), or the GC_OR_START bit must be cleared (IC_TAR[10]).  Once the source of the ABRT_SBYTE_NORSTRT is fixed, then this bit can be cleared in the same manner as other bits in this register. If the source of the ABRT_SBYTE_NORSTRT is not fixed before attempting to clear this bit, Bit 9 clears for one cycle and is then re-asserted. */
#define RP2040_I2C0_IC_SLV_DATA_NACK_ONLY_OFFSET  0x000084  /* Generate Slave Data NACK Register  The register is used to generate a NACK for the data part of a transfer when DW_apb_i2c is acting as a slave-receiver. This register only exists when the IC_SLV_DATA_NACK_ONLY parameter is set to 1. When this parameter disabled, this register does not exist and writing to the register's address has no effect.  A write can occur on this register if both of the following conditions are met: - DW_apb_i2c is disabled (IC_ENABLE[0] = 0) - Slave part is inactive (IC_STATUS[6] = 0) Note: The IC_STATUS[6] is a register read-back location for the internal slv_activity signal; the user should poll this before writing the ic_slv_data_nack_only bit. */
#define RP2040_I2C0_IC_DMA_CR_OFFSET              0x000088  /* DMA Control Register  The register is used to enable the DMA Controller interface operation. There is a separate bit for transmit and receive. This can be programmed regardless of the state of IC_ENABLE. */
#define RP2040_I2C0_IC_DMA_TDLR_OFFSET            0x00008c  /* DMA Transmit Data Level Register */
#define RP2040_I2C0_IC_DMA_RDLR_OFFSET            0x000090  /* I2C Receive Data Level Register */
#define RP2040_I2C0_IC_SDA_SETUP_OFFSET           0x000094  /* I2C SDA Setup Register  This register controls the amount of time delay (in terms of number of ic_clk clock periods) introduced in the rising edge of SCL - relative to SDA changing - when DW_apb_i2c services a read request in a slave-transmitter operation. The relevant I2C requirement is tSU:DAT (note 4) as detailed in the I2C Bus Specification. This register must be programmed with a value equal to or greater than 2.  Writes to this register succeed only when IC_ENABLE[0] = 0.  Note: The length of setup time is calculated using [(IC_SDA_SETUP - 1) * (ic_clk_period)], so if the user requires 10 ic_clk periods of setup time, they should program a value of 11. The IC_SDA_SETUP register is only used by the DW_apb_i2c when operating as a slave transmitter. */
#define RP2040_I2C0_IC_ACK_GENERAL_CALL_OFFSET    0x000098  /* I2C ACK General Call Register  The register controls whether DW_apb_i2c responds with a ACK or NACK when it receives an I2C General Call address.  This register is applicable only when the DW_apb_i2c is in slave mode. */
#define RP2040_I2C0_IC_ENABLE_STATUS_OFFSET       0x00009c  /* I2C Enable Status Register  The register is used to report the DW_apb_i2c hardware status when the IC_ENABLE[0] register is set from 1 to 0; that is, when DW_apb_i2c is disabled.  If IC_ENABLE[0] has been set to 1, bits 2:1 are forced to 0, and bit 0 is forced to 1.  If IC_ENABLE[0] has been set to 0, bits 2:1 is only be valid as soon as bit 0 is read as '0'.  Note: When IC_ENABLE[0] has been set to 0, a delay occurs for bit 0 to be read as 0 because disabling the DW_apb_i2c depends on I2C bus activities. */
#define RP2040_I2C0_IC_FS_SPKLEN_OFFSET           0x0000a0  /* I2C SS, FS or FM+ spike suppression limit  This register is used to store the duration, measured in ic_clk cycles, of the longest spike that is filtered out by the spike suppression logic when the component is operating in SS, FS or FM+ modes. The relevant I2C requirement is tSP (table 4) as detailed in the I2C Bus Specification. This register must be programmed with a minimum value of 1. */
#define RP2040_I2C0_IC_CLR_RESTART_DET_OFFSET     0x0000a8  /* Clear RESTART_DET Interrupt Register */
#define RP2040_I2C0_IC_COMP_PARAM_1_OFFSET        0x0000f4  /* Component Parameter Register 1  Note This register is not implemented and therefore reads as 0. If it was implemented it would be a constant read-only register that contains encoded information about the component's parameter settings. Fields shown below are the settings for those parameters */
#define RP2040_I2C0_IC_COMP_VERSION_OFFSET        0x0000f8  /* I2C Component Version Register */
#define RP2040_I2C0_IC_COMP_TYPE_OFFSET           0x0000fc  /* I2C Component Type Register */

/* Register definitions *****************************************************/

#define RP2040_I2C0_IC_CON                 (RP2040_I2C0_BASE + RP2040_I2C0_IC_CON_OFFSET)
#define RP2040_I2C0_IC_TAR                 (RP2040_I2C0_BASE + RP2040_I2C0_IC_TAR_OFFSET)
#define RP2040_I2C0_IC_SAR                 (RP2040_I2C0_BASE + RP2040_I2C0_IC_SAR_OFFSET)
#define RP2040_I2C0_IC_DATA_CMD            (RP2040_I2C0_BASE + RP2040_I2C0_IC_DATA_CMD_OFFSET)
#define RP2040_I2C0_IC_SS_SCL_HCNT         (RP2040_I2C0_BASE + RP2040_I2C0_IC_SS_SCL_HCNT_OFFSET)
#define RP2040_I2C0_IC_SS_SCL_LCNT         (RP2040_I2C0_BASE + RP2040_I2C0_IC_SS_SCL_LCNT_OFFSET)
#define RP2040_I2C0_IC_FS_SCL_HCNT         (RP2040_I2C0_BASE + RP2040_I2C0_IC_FS_SCL_HCNT_OFFSET)
#define RP2040_I2C0_IC_FS_SCL_LCNT         (RP2040_I2C0_BASE + RP2040_I2C0_IC_FS_SCL_LCNT_OFFSET)
#define RP2040_I2C0_IC_INTR_STAT           (RP2040_I2C0_BASE + RP2040_I2C0_IC_INTR_STAT_OFFSET)
#define RP2040_I2C0_IC_INTR_MASK           (RP2040_I2C0_BASE + RP2040_I2C0_IC_INTR_MASK_OFFSET)
#define RP2040_I2C0_IC_RAW_INTR_STAT       (RP2040_I2C0_BASE + RP2040_I2C0_IC_RAW_INTR_STAT_OFFSET)
#define RP2040_I2C0_IC_RX_TL               (RP2040_I2C0_BASE + RP2040_I2C0_IC_RX_TL_OFFSET)
#define RP2040_I2C0_IC_TX_TL               (RP2040_I2C0_BASE + RP2040_I2C0_IC_TX_TL_OFFSET)
#define RP2040_I2C0_IC_CLR_INTR            (RP2040_I2C0_BASE + RP2040_I2C0_IC_CLR_INTR_OFFSET)
#define RP2040_I2C0_IC_CLR_RX_UNDER        (RP2040_I2C0_BASE + RP2040_I2C0_IC_CLR_RX_UNDER_OFFSET)
#define RP2040_I2C0_IC_CLR_RX_OVER         (RP2040_I2C0_BASE + RP2040_I2C0_IC_CLR_RX_OVER_OFFSET)
#define RP2040_I2C0_IC_CLR_TX_OVER         (RP2040_I2C0_BASE + RP2040_I2C0_IC_CLR_TX_OVER_OFFSET)
#define RP2040_I2C0_IC_CLR_RD_REQ          (RP2040_I2C0_BASE + RP2040_I2C0_IC_CLR_RD_REQ_OFFSET)
#define RP2040_I2C0_IC_CLR_TX_ABRT         (RP2040_I2C0_BASE + RP2040_I2C0_IC_CLR_TX_ABRT_OFFSET)
#define RP2040_I2C0_IC_CLR_RX_DONE         (RP2040_I2C0_BASE + RP2040_I2C0_IC_CLR_RX_DONE_OFFSET)
#define RP2040_I2C0_IC_CLR_ACTIVITY        (RP2040_I2C0_BASE + RP2040_I2C0_IC_CLR_ACTIVITY_OFFSET)
#define RP2040_I2C0_IC_CLR_STOP_DET        (RP2040_I2C0_BASE + RP2040_I2C0_IC_CLR_STOP_DET_OFFSET)
#define RP2040_I2C0_IC_CLR_START_DET       (RP2040_I2C0_BASE + RP2040_I2C0_IC_CLR_START_DET_OFFSET)
#define RP2040_I2C0_IC_CLR_GEN_CALL        (RP2040_I2C0_BASE + RP2040_I2C0_IC_CLR_GEN_CALL_OFFSET)
#define RP2040_I2C0_IC_ENABLE              (RP2040_I2C0_BASE + RP2040_I2C0_IC_ENABLE_OFFSET)
#define RP2040_I2C0_IC_STATUS              (RP2040_I2C0_BASE + RP2040_I2C0_IC_STATUS_OFFSET)
#define RP2040_I2C0_IC_TXFLR               (RP2040_I2C0_BASE + RP2040_I2C0_IC_TXFLR_OFFSET)
#define RP2040_I2C0_IC_RXFLR               (RP2040_I2C0_BASE + RP2040_I2C0_IC_RXFLR_OFFSET)
#define RP2040_I2C0_IC_SDA_HOLD            (RP2040_I2C0_BASE + RP2040_I2C0_IC_SDA_HOLD_OFFSET)
#define RP2040_I2C0_IC_TX_ABRT_SOURCE      (RP2040_I2C0_BASE + RP2040_I2C0_IC_TX_ABRT_SOURCE_OFFSET)
#define RP2040_I2C0_IC_SLV_DATA_NACK_ONLY  (RP2040_I2C0_BASE + RP2040_I2C0_IC_SLV_DATA_NACK_ONLY_OFFSET)
#define RP2040_I2C0_IC_DMA_CR              (RP2040_I2C0_BASE + RP2040_I2C0_IC_DMA_CR_OFFSET)
#define RP2040_I2C0_IC_DMA_TDLR            (RP2040_I2C0_BASE + RP2040_I2C0_IC_DMA_TDLR_OFFSET)
#define RP2040_I2C0_IC_DMA_RDLR            (RP2040_I2C0_BASE + RP2040_I2C0_IC_DMA_RDLR_OFFSET)
#define RP2040_I2C0_IC_SDA_SETUP           (RP2040_I2C0_BASE + RP2040_I2C0_IC_SDA_SETUP_OFFSET)
#define RP2040_I2C0_IC_ACK_GENERAL_CALL    (RP2040_I2C0_BASE + RP2040_I2C0_IC_ACK_GENERAL_CALL_OFFSET)
#define RP2040_I2C0_IC_ENABLE_STATUS       (RP2040_I2C0_BASE + RP2040_I2C0_IC_ENABLE_STATUS_OFFSET)
#define RP2040_I2C0_IC_FS_SPKLEN           (RP2040_I2C0_BASE + RP2040_I2C0_IC_FS_SPKLEN_OFFSET)
#define RP2040_I2C0_IC_CLR_RESTART_DET     (RP2040_I2C0_BASE + RP2040_I2C0_IC_CLR_RESTART_DET_OFFSET)
#define RP2040_I2C0_IC_COMP_PARAM_1        (RP2040_I2C0_BASE + RP2040_I2C0_IC_COMP_PARAM_1_OFFSET)
#define RP2040_I2C0_IC_COMP_VERSION        (RP2040_I2C0_BASE + RP2040_I2C0_IC_COMP_VERSION_OFFSET)
#define RP2040_I2C0_IC_COMP_TYPE           (RP2040_I2C0_BASE + RP2040_I2C0_IC_COMP_TYPE_OFFSET)

/* Register bit definitions *************************************************/

#define RP2040_I2C0_IC_CON_STOP_DET_IF_MASTER_ACTIVE          (1 << 10)  /* Master issues the STOP_DET interrupt irrespective of whether master is active or not */
#define RP2040_I2C0_IC_CON_RX_FIFO_FULL_HLD_CTRL              (1 << 9)  /* Hold bus when RX_FIFO is full */
#define RP2040_I2C0_IC_CON_TX_EMPTY_CTRL                      (1 << 8)  /* Controlled generation of TX_EMPTY interrupt */
#define RP2040_I2C0_IC_CON_STOP_DET_IFADDRESSED               (1 << 7)  /* slave issues STOP_DET intr only if addressed */
#define RP2040_I2C0_IC_CON_IC_SLAVE_DISABLE                   (1 << 6)  /* Slave mode is disabled */
#define RP2040_I2C0_IC_CON_IC_RESTART_EN                      (1 << 5)  /* Master restart enabled */
#define RP2040_I2C0_IC_CON_IC_10BITADDR_MASTER                (1 << 4)  /* Master 10Bit addressing mode */
#define RP2040_I2C0_IC_CON_IC_10BITADDR_SLAVE                 (1 << 3)  /* Slave 10Bit addressing */
#define RP2040_I2C0_IC_CON_SPEED_SHIFT                        (1)  /* These bits control at which speed the DW_apb_i2c operates; its setting is relevant only if one is operating the DW_apb_i2c in master mode. Hardware protects against illegal values being programmed by software. These bits must be programmed appropriately for slave mode also, as it is used to capture correct value of spike filter as per the speed mode.  This register should be programmed only with a value in the range of 1 to IC_MAX_SPEED_MODE; otherwise, hardware updates this register with the value of IC_MAX_SPEED_MODE.  1: standard mode (100 kbit/s)  2: fast mode (<=400 kbit/s) or fast mode plus (<=1000Kbit/s)  3: high speed mode (3.4 Mbit/s)  Note: This field is not applicable when IC_ULTRA_FAST_MODE=1 */
#define RP2040_I2C0_IC_CON_SPEED_MASK                         (0x03 << RP2040_I2C0_IC_CON_SPEED_SHIFT)
#define RP2040_I2C0_IC_CON_SPEED_STANDARD                     (0x1 << RP2040_I2C0_IC_CON_SPEED_SHIFT)  /* Standard Speed mode of operation */
#define RP2040_I2C0_IC_CON_SPEED_FAST                         (0x2 << RP2040_I2C0_IC_CON_SPEED_SHIFT)  /* Fast or Fast Plus mode of operation */
#define RP2040_I2C0_IC_CON_SPEED_HIGH                         (0x3 << RP2040_I2C0_IC_CON_SPEED_SHIFT)  /* High Speed mode of operation */
#define RP2040_I2C0_IC_CON_MASTER_MODE                        (1 << 0)  /* Master mode is enabled */

#define RP2040_I2C0_IC_TAR_SPECIAL                            (1 << 11)  /* Enables programming of GENERAL_CALL or START_BYTE transmission */
#define RP2040_I2C0_IC_TAR_GC_OR_START                        (1 << 10)  /* START byte transmission */
#define RP2040_I2C0_IC_TAR_MASK                               (0x3ff)  /* This is the target address for any master transaction. When transmitting a General Call, these bits are ignored. To generate a START BYTE, the CPU needs to write only once into these bits.  If the IC_TAR and IC_SAR are the same, loopback exists but the FIFOs are shared between master and slave, so full loopback is not feasible. Only one direction loopback mode is supported (simplex), not duplex. A master cannot transmit to itself; it can transmit to only a slave. */

#define RP2040_I2C0_IC_SAR_MASK                               (0x3ff)  /* The IC_SAR holds the slave address when the I2C is operating as a slave. For 7-bit addressing, only IC_SAR[6:0] is used.  This register can be written only when the I2C interface is disabled, which corresponds to the IC_ENABLE[0] register being set to 0. Writes at other times have no effect.  Note: The default values cannot be any of the reserved address locations: that is, 0x00 to 0x07, or 0x78 to 0x7f. The correct operation of the device is not guaranteed if you program the IC_SAR or IC_TAR to a reserved value. Refer to <<table_I2C_firstbyte_bit_defs>> for a complete list of these reserved values. */

#define RP2040_I2C0_IC_DATA_CMD_FIRST_DATA_BYTE               (1 << 11)  /* Non sequential data byte received */
#define RP2040_I2C0_IC_DATA_CMD_RESTART                       (1 << 10)  /* Issue RESTART before this command */
#define RP2040_I2C0_IC_DATA_CMD_STOP                          (1 << 9)  /* Issue STOP after this command */
#define RP2040_I2C0_IC_DATA_CMD_CMD                           (1 << 8)  /* Master Read Command */
#define RP2040_I2C0_IC_DATA_CMD_DAT_MASK                      (0xff)  /* This register contains the data to be transmitted or received on the I2C bus. If you are writing to this register and want to perform a read, bits 7:0 (DAT) are ignored by the DW_apb_i2c. However, when you read this register, these bits return the value of data received on the DW_apb_i2c interface.  Reset value: 0x0 */

#define RP2040_I2C0_IC_SS_SCL_HCNT_MASK                       (0xffff)  /* This register must be set before any I2C bus transaction can take place to ensure proper I/O timing. This register sets the SCL clock high-period count for standard speed. For more information, refer to 'IC_CLK Frequency Configuration'.  This register can be written only when the I2C interface is disabled which corresponds to the IC_ENABLE[0] register being set to 0. Writes at other times have no effect.  The minimum valid value is 6; hardware prevents values less than this being written, and if attempted results in 6 being set. For designs with APB_DATA_WIDTH = 8, the order of programming is important to ensure the correct operation of the DW_apb_i2c. The lower byte must be programmed first. Then the upper byte is programmed.  NOTE: This register must not be programmed to a value higher than 65525, because DW_apb_i2c uses a 16-bit counter to flag an I2C bus idle condition when this counter reaches a value of IC_SS_SCL_HCNT + 10. */

#define RP2040_I2C0_IC_SS_SCL_LCNT_MASK                       (0xffff)  /* This register must be set before any I2C bus transaction can take place to ensure proper I/O timing. This register sets the SCL clock low period count for standard speed. For more information, refer to 'IC_CLK Frequency Configuration'  This register can be written only when the I2C interface is disabled which corresponds to the IC_ENABLE[0] register being set to 0. Writes at other times have no effect.  The minimum valid value is 8; hardware prevents values less than this being written, and if attempted, results in 8 being set. For designs with APB_DATA_WIDTH = 8, the order of programming is important to ensure the correct operation of DW_apb_i2c. The lower byte must be programmed first, and then the upper byte is programmed. */

#define RP2040_I2C0_IC_FS_SCL_HCNT_MASK                       (0xffff)  /* This register must be set before any I2C bus transaction can take place to ensure proper I/O timing. This register sets the SCL clock high-period count for fast mode or fast mode plus. It is used in high-speed mode to send the Master Code and START BYTE or General CALL. For more information, refer to 'IC_CLK Frequency Configuration'.  This register goes away and becomes read-only returning 0s if IC_MAX_SPEED_MODE = standard. This register can be written only when the I2C interface is disabled, which corresponds to the IC_ENABLE[0] register being set to 0. Writes at other times have no effect.  The minimum valid value is 6; hardware prevents values less than this being written, and if attempted results in 6 being set. For designs with APB_DATA_WIDTH == 8 the order of programming is important to ensure the correct operation of the DW_apb_i2c. The lower byte must be programmed first. Then the upper byte is programmed. */

#define RP2040_I2C0_IC_FS_SCL_LCNT_MASK                       (0xffff)  /* This register must be set before any I2C bus transaction can take place to ensure proper I/O timing. This register sets the SCL clock low period count for fast speed. It is used in high-speed mode to send the Master Code and START BYTE or General CALL. For more information, refer to 'IC_CLK Frequency Configuration'.  This register goes away and becomes read-only returning 0s if IC_MAX_SPEED_MODE = standard.  This register can be written only when the I2C interface is disabled, which corresponds to the IC_ENABLE[0] register being set to 0. Writes at other times have no effect.  The minimum valid value is 8; hardware prevents values less than this being written, and if attempted results in 8 being set. For designs with APB_DATA_WIDTH = 8 the order of programming is important to ensure the correct operation of the DW_apb_i2c. The lower byte must be programmed first. Then the upper byte is programmed. If the value is less than 8 then the count value gets changed to 8. */

#define RP2040_I2C0_IC_INTR_STAT_R_MASTER_ON_HOLD             (1 << 13)  /* R_MASTER_ON_HOLD interrupt is active */
#define RP2040_I2C0_IC_INTR_STAT_R_RESTART_DET                (1 << 12)  /* R_RESTART_DET interrupt is active */
#define RP2040_I2C0_IC_INTR_STAT_R_GEN_CALL                   (1 << 11)  /* R_GEN_CALL interrupt is active */
#define RP2040_I2C0_IC_INTR_STAT_R_START_DET                  (1 << 10)  /* R_START_DET interrupt is active */
#define RP2040_I2C0_IC_INTR_STAT_R_STOP_DET                   (1 << 9)  /* R_STOP_DET interrupt is active */
#define RP2040_I2C0_IC_INTR_STAT_R_ACTIVITY                   (1 << 8)  /* R_ACTIVITY interrupt is active */
#define RP2040_I2C0_IC_INTR_STAT_R_RX_DONE                    (1 << 7)  /* R_RX_DONE interrupt is active */
#define RP2040_I2C0_IC_INTR_STAT_R_TX_ABRT                    (1 << 6)  /* R_TX_ABRT interrupt is active */
#define RP2040_I2C0_IC_INTR_STAT_R_RD_REQ                     (1 << 5)  /* R_RD_REQ interrupt is active */
#define RP2040_I2C0_IC_INTR_STAT_R_TX_EMPTY                   (1 << 4)  /* R_TX_EMPTY interrupt is active */
#define RP2040_I2C0_IC_INTR_STAT_R_TX_OVER                    (1 << 3)  /* R_TX_OVER interrupt is active */
#define RP2040_I2C0_IC_INTR_STAT_R_RX_FULL                    (1 << 2)  /* R_RX_FULL interrupt is active */
#define RP2040_I2C0_IC_INTR_STAT_R_RX_OVER                    (1 << 1)  /* R_RX_OVER interrupt is active */
#define RP2040_I2C0_IC_INTR_STAT_R_RX_UNDER                   (1 << 0)  /* RX_UNDER interrupt is active */

#define RP2040_I2C0_IC_INTR_MASK_M_MASTER_ON_HOLD_READ_ONLY   (1 << 13)  /* MASTER_ON_HOLD interrupt is unmasked */
#define RP2040_I2C0_IC_INTR_MASK_M_RESTART_DET                (1 << 12)  /* RESTART_DET interrupt is unmasked */
#define RP2040_I2C0_IC_INTR_MASK_M_GEN_CALL                   (1 << 11)  /* GEN_CALL interrupt is unmasked */
#define RP2040_I2C0_IC_INTR_MASK_M_START_DET                  (1 << 10)  /* START_DET interrupt is unmasked */
#define RP2040_I2C0_IC_INTR_MASK_M_STOP_DET                   (1 << 9)  /* STOP_DET interrupt is unmasked */
#define RP2040_I2C0_IC_INTR_MASK_M_ACTIVITY                   (1 << 8)  /* ACTIVITY interrupt is unmasked */
#define RP2040_I2C0_IC_INTR_MASK_M_RX_DONE                    (1 << 7)  /* RX_DONE interrupt is unmasked */
#define RP2040_I2C0_IC_INTR_MASK_M_TX_ABRT                    (1 << 6)  /* TX_ABORT interrupt is unmasked */
#define RP2040_I2C0_IC_INTR_MASK_M_RD_REQ                     (1 << 5)  /* RD_REQ interrupt is unmasked */
#define RP2040_I2C0_IC_INTR_MASK_M_TX_EMPTY                   (1 << 4)  /* TX_EMPTY interrupt is unmasked */
#define RP2040_I2C0_IC_INTR_MASK_M_TX_OVER                    (1 << 3)  /* TX_OVER interrupt is unmasked */
#define RP2040_I2C0_IC_INTR_MASK_M_RX_FULL                    (1 << 2)  /* RX_FULL interrupt is unmasked */
#define RP2040_I2C0_IC_INTR_MASK_M_RX_OVER                    (1 << 1)  /* RX_OVER interrupt is unmasked */
#define RP2040_I2C0_IC_INTR_MASK_M_RX_UNDER                   (1 << 0)  /* RX_UNDER interrupt is unmasked */

#define RP2040_I2C0_IC_RAW_INTR_STAT_MASTER_ON_HOLD           (1 << 13)  /* MASTER_ON_HOLD interrupt is active */
#define RP2040_I2C0_IC_RAW_INTR_STAT_RESTART_DET              (1 << 12)  /* RESTART_DET interrupt is active */
#define RP2040_I2C0_IC_RAW_INTR_STAT_GEN_CALL                 (1 << 11)  /* GEN_CALL interrupt is active */
#define RP2040_I2C0_IC_RAW_INTR_STAT_START_DET                (1 << 10)  /* START_DET interrupt is active */
#define RP2040_I2C0_IC_RAW_INTR_STAT_STOP_DET                 (1 << 9)  /* STOP_DET interrupt is active */
#define RP2040_I2C0_IC_RAW_INTR_STAT_ACTIVITY                 (1 << 8)  /* RAW_INTR_ACTIVITY interrupt is active */
#define RP2040_I2C0_IC_RAW_INTR_STAT_RX_DONE                  (1 << 7)  /* RX_DONE interrupt is active */
#define RP2040_I2C0_IC_RAW_INTR_STAT_TX_ABRT                  (1 << 6)  /* TX_ABRT interrupt is active */
#define RP2040_I2C0_IC_RAW_INTR_STAT_RD_REQ                   (1 << 5)  /* RD_REQ interrupt is active */
#define RP2040_I2C0_IC_RAW_INTR_STAT_TX_EMPTY                 (1 << 4)  /* TX_EMPTY interrupt is active */
#define RP2040_I2C0_IC_RAW_INTR_STAT_TX_OVER                  (1 << 3)  /* TX_OVER interrupt is active */
#define RP2040_I2C0_IC_RAW_INTR_STAT_RX_FULL                  (1 << 2)  /* RX_FULL interrupt is active */
#define RP2040_I2C0_IC_RAW_INTR_STAT_RX_OVER                  (1 << 1)  /* RX_OVER interrupt is active */
#define RP2040_I2C0_IC_RAW_INTR_STAT_RX_UNDER                 (1 << 0)  /* RX_UNDER interrupt is active */

#define RP2040_I2C0_IC_RX_TL_RX_TL_MASK                       (0xff)  /* Receive FIFO Threshold Level.  Controls the level of entries (or above) that triggers the RX_FULL interrupt (bit 2 in IC_RAW_INTR_STAT register). The valid range is 0-255, with the additional restriction that hardware does not allow this value to be set to a value larger than the depth of the buffer. If an attempt is made to do that, the actual value set will be the maximum depth of the buffer. A value of 0 sets the threshold for 1 entry, and a value of 255 sets the threshold for 256 entries. */

#define RP2040_I2C0_IC_TX_TL_TX_TL_MASK                       (0xff)  /* Transmit FIFO Threshold Level.  Controls the level of entries (or below) that trigger the TX_EMPTY interrupt (bit 4 in IC_RAW_INTR_STAT register). The valid range is 0-255, with the additional restriction that it may not be set to value larger than the depth of the buffer. If an attempt is made to do that, the actual value set will be the maximum depth of the buffer. A value of 0 sets the threshold for 0 entries, and a value of 255 sets the threshold for 255 entries. */

#define RP2040_I2C0_IC_CLR_INTR_CLR_INTR                      (1 << 0)  /* Read this register to clear the combined interrupt, all individual interrupts, and the IC_TX_ABRT_SOURCE register. This bit does not clear hardware clearable interrupts but software clearable interrupts. Refer to Bit 9 of the IC_TX_ABRT_SOURCE register for an exception to clearing IC_TX_ABRT_SOURCE.  Reset value: 0x0 */

#define RP2040_I2C0_IC_CLR_RX_UNDER_CLR_RX_UNDER              (1 << 0)  /* Read this register to clear the RX_UNDER interrupt (bit 0) of the IC_RAW_INTR_STAT register.  Reset value: 0x0 */

#define RP2040_I2C0_IC_CLR_RX_OVER_CLR_RX_OVER                (1 << 0)  /* Read this register to clear the RX_OVER interrupt (bit 1) of the IC_RAW_INTR_STAT register.  Reset value: 0x0 */

#define RP2040_I2C0_IC_CLR_TX_OVER_CLR_TX_OVER                (1 << 0)  /* Read this register to clear the TX_OVER interrupt (bit 3) of the IC_RAW_INTR_STAT register.  Reset value: 0x0 */

#define RP2040_I2C0_IC_CLR_RD_REQ_CLR_RD_REQ                  (1 << 0)  /* Read this register to clear the RD_REQ interrupt (bit 5) of the IC_RAW_INTR_STAT register.  Reset value: 0x0 */

#define RP2040_I2C0_IC_CLR_TX_ABRT_CLR_TX_ABRT                (1 << 0)  /* Read this register to clear the TX_ABRT interrupt (bit 6) of the IC_RAW_INTR_STAT register, and the IC_TX_ABRT_SOURCE register. This also releases the TX FIFO from the flushed/reset state, allowing more writes to the TX FIFO. Refer to Bit 9 of the IC_TX_ABRT_SOURCE register for an exception to clearing IC_TX_ABRT_SOURCE.  Reset value: 0x0 */

#define RP2040_I2C0_IC_CLR_RX_DONE_CLR_RX_DONE                (1 << 0)  /* Read this register to clear the RX_DONE interrupt (bit 7) of the IC_RAW_INTR_STAT register.  Reset value: 0x0 */

#define RP2040_I2C0_IC_CLR_ACTIVITY_CLR_ACTIVITY              (1 << 0)  /* Reading this register clears the ACTIVITY interrupt if the I2C is not active anymore. If the I2C module is still active on the bus, the ACTIVITY interrupt bit continues to be set. It is automatically cleared by hardware if the module is disabled and if there is no further activity on the bus. The value read from this register to get status of the ACTIVITY interrupt (bit 8) of the IC_RAW_INTR_STAT register.  Reset value: 0x0 */

#define RP2040_I2C0_IC_CLR_STOP_DET_CLR_STOP_DET              (1 << 0)  /* Read this register to clear the STOP_DET interrupt (bit 9) of the IC_RAW_INTR_STAT register.  Reset value: 0x0 */

#define RP2040_I2C0_IC_CLR_START_DET_CLR_START_DET            (1 << 0)  /* Read this register to clear the START_DET interrupt (bit 10) of the IC_RAW_INTR_STAT register.  Reset value: 0x0 */

#define RP2040_I2C0_IC_CLR_GEN_CALL_CLR_GEN_CALL              (1 << 0)  /* Read this register to clear the GEN_CALL interrupt (bit 11) of IC_RAW_INTR_STAT register.  Reset value: 0x0 */

#define RP2040_I2C0_IC_ENABLE_TX_CMD_BLOCK                    (1 << 2)  /* Tx Command execution blocked */
#define RP2040_I2C0_IC_ENABLE_ABORT                           (1 << 1)  /* ABORT operation in progress */
#define RP2040_I2C0_IC_ENABLE_ENABLE                          (1 << 0)  /* I2C is enabled */

#define RP2040_I2C0_IC_STATUS_SLV_ACTIVITY                    (1 << 6)  /* Slave not idle */
#define RP2040_I2C0_IC_STATUS_MST_ACTIVITY                    (1 << 5)  /* Master not idle */
#define RP2040_I2C0_IC_STATUS_RFF                             (1 << 4)  /* Rx FIFO is full */
#define RP2040_I2C0_IC_STATUS_RFNE                            (1 << 3)  /* Rx FIFO not empty */
#define RP2040_I2C0_IC_STATUS_TFE                             (1 << 2)  /* Tx FIFO is empty */
#define RP2040_I2C0_IC_STATUS_TFNF                            (1 << 1)  /* Tx FIFO not full */
#define RP2040_I2C0_IC_STATUS_ACTIVITY                        (1 << 0)  /* I2C is active */

#define RP2040_I2C0_IC_TXFLR_TXFLR_MASK                       (0x1f)  /* Transmit FIFO Level. Contains the number of valid data entries in the transmit FIFO.  Reset value: 0x0 */

#define RP2040_I2C0_IC_RXFLR_RXFLR_MASK                       (0x1f)  /* Receive FIFO Level. Contains the number of valid data entries in the receive FIFO.  Reset value: 0x0 */

#define RP2040_I2C0_IC_SDA_HOLD_IC_SDA_RX_HOLD_SHIFT          (16)  /* Sets the required SDA hold time in units of ic_clk period, when DW_apb_i2c acts as a receiver.  Reset value: IC_DEFAULT_SDA_HOLD[23:16]. */
#define RP2040_I2C0_IC_SDA_HOLD_IC_SDA_RX_HOLD_MASK           (0xff << RP2040_I2C0_IC_SDA_HOLD_IC_SDA_RX_HOLD_SHIFT)
#define RP2040_I2C0_IC_SDA_HOLD_IC_SDA_TX_HOLD_MASK           (0xffff)  /* Sets the required SDA hold time in units of ic_clk period, when DW_apb_i2c acts as a transmitter.  Reset value: IC_DEFAULT_SDA_HOLD[15:0]. */

#define RP2040_I2C0_IC_TX_ABRT_SOURCE_TX_FLUSH_CNT_SHIFT      (23)  /* This field indicates the number of Tx FIFO Data Commands which are flushed due to TX_ABRT interrupt. It is cleared whenever I2C is disabled.  Reset value: 0x0  Role of DW_apb_i2c:  Master-Transmitter or Slave-Transmitter */
#define RP2040_I2C0_IC_TX_ABRT_SOURCE_TX_FLUSH_CNT_MASK       (0x1ff << RP2040_I2C0_IC_TX_ABRT_SOURCE_TX_FLUSH_CNT_SHIFT)
#define RP2040_I2C0_IC_TX_ABRT_SOURCE_ABRT_USER_ABRT          (1 << 16)  /* Transfer abort detected by master */
#define RP2040_I2C0_IC_TX_ABRT_SOURCE_ABRT_SLVRD_INTX         (1 << 15)  /* Slave trying to transmit to remote master in read mode */
#define RP2040_I2C0_IC_TX_ABRT_SOURCE_ABRT_SLV_ARBLOST        (1 << 14)  /* Slave lost arbitration to remote master */
#define RP2040_I2C0_IC_TX_ABRT_SOURCE_ABRT_SLVFLUSH_TXFIFO    (1 << 13)  /* Slave flushes existing data in TX-FIFO upon getting read command */
#define RP2040_I2C0_IC_TX_ABRT_SOURCE_ARB_LOST                (1 << 12)  /* Master or Slave-Transmitter lost arbitration */
#define RP2040_I2C0_IC_TX_ABRT_SOURCE_ABRT_MASTER_DIS         (1 << 11)  /* User initiating master operation when MASTER disabled */
#define RP2040_I2C0_IC_TX_ABRT_SOURCE_ABRT_10B_RD_NORSTRT     (1 << 10)  /* Master trying to read in 10Bit addressing mode when RESTART disabled */
#define RP2040_I2C0_IC_TX_ABRT_SOURCE_ABRT_SBYTE_NORSTRT      (1 << 9)  /* User trying to send START byte when RESTART disabled */
#define RP2040_I2C0_IC_TX_ABRT_SOURCE_ABRT_HS_NORSTRT         (1 << 8)  /* User trying to switch Master to HS mode when RESTART disabled */
#define RP2040_I2C0_IC_TX_ABRT_SOURCE_ABRT_SBYTE_ACKDET       (1 << 7)  /* ACK detected for START byte */
#define RP2040_I2C0_IC_TX_ABRT_SOURCE_ABRT_HS_ACKDET          (1 << 6)  /* HS Master code ACKed in HS Mode */
#define RP2040_I2C0_IC_TX_ABRT_SOURCE_ABRT_GCALL_READ         (1 << 5)  /* GCALL is followed by read from bus */
#define RP2040_I2C0_IC_TX_ABRT_SOURCE_ABRT_GCALL_NOACK        (1 << 4)  /* GCALL not ACKed by any slave */
#define RP2040_I2C0_IC_TX_ABRT_SOURCE_ABRT_TXDATA_NOACK       (1 << 3)  /* Transmitted data not ACKed by addressed slave */
#define RP2040_I2C0_IC_TX_ABRT_SOURCE_ABRT_10ADDR2_NOACK      (1 << 2)  /* Byte 2 of 10Bit Address not ACKed by any slave */
#define RP2040_I2C0_IC_TX_ABRT_SOURCE_ABRT_10ADDR1_NOACK      (1 << 1)  /* Byte 1 of 10Bit Address not ACKed by any slave */
#define RP2040_I2C0_IC_TX_ABRT_SOURCE_ABRT_7B_ADDR_NOACK      (1 << 0)  /* This abort is generated because of NOACK for 7-bit address */

#define RP2040_I2C0_IC_SLV_DATA_NACK_ONLY_NACK                (1 << 0)  /* Slave receiver generates NACK upon data reception only */

#define RP2040_I2C0_IC_DMA_CR_TDMAE                           (1 << 1)  /* Transmit FIFO DMA channel enabled */
#define RP2040_I2C0_IC_DMA_CR_RDMAE                           (1 << 0)  /* Receive FIFO DMA channel enabled */

#define RP2040_I2C0_IC_DMA_TDLR_DMATDL_MASK                   (0x0f)  /* Transmit Data Level. This bit field controls the level at which a DMA request is made by the transmit logic. It is equal to the watermark level; that is, the dma_tx_req signal is generated when the number of valid data entries in the transmit FIFO is equal to or below this field value, and TDMAE = 1.  Reset value: 0x0 */

#define RP2040_I2C0_IC_DMA_RDLR_DMARDL_MASK                   (0x0f)  /* Receive Data Level. This bit field controls the level at which a DMA request is made by the receive logic. The watermark level = DMARDL+1; that is, dma_rx_req is generated when the number of valid data entries in the receive FIFO is equal to or more than this field value + 1, and RDMAE =1. For instance, when DMARDL is 0, then dma_rx_req is asserted when 1 or more data entries are present in the receive FIFO.  Reset value: 0x0 */

#define RP2040_I2C0_IC_SDA_SETUP_SDA_SETUP_MASK               (0xff)  /* SDA Setup. It is recommended that if the required delay is 1000ns, then for an ic_clk frequency of 10 MHz, IC_SDA_SETUP should be programmed to a value of 11. IC_SDA_SETUP must be programmed with a minimum value of 2. */

#define RP2040_I2C0_IC_ACK_GENERAL_CALL_ACK_GEN_CALL          (1 << 0)  /* Generate ACK for a General Call */

#define RP2040_I2C0_IC_ENABLE_STATUS_SLV_RX_DATA_LOST         (1 << 2)  /* Slave RX Data is lost */
#define RP2040_I2C0_IC_ENABLE_STATUS_SLV_DISABLED_WHILE_BUSY  (1 << 1)  /* Slave is disabled when it is active */
#define RP2040_I2C0_IC_ENABLE_STATUS_IC_EN                    (1 << 0)  /* I2C enabled */

#define RP2040_I2C0_IC_FS_SPKLEN_MASK                         (0xff)  /* This register must be set before any I2C bus transaction can take place to ensure stable operation. This register sets the duration, measured in ic_clk cycles, of the longest spike in the SCL or SDA lines that will be filtered out by the spike suppression logic. This register can be written only when the I2C interface is disabled which corresponds to the IC_ENABLE[0] register being set to 0. Writes at other times have no effect. The minimum valid value is 1; hardware prevents values less than this being written, and if attempted results in 1 being set. or more information, refer to 'Spike Suppression'. */

#define RP2040_I2C0_IC_CLR_RESTART_DET_CLR_RESTART_DET        (1 << 0)  /* Read this register to clear the RESTART_DET interrupt (bit 12) of IC_RAW_INTR_STAT register.  Reset value: 0x0 */

#define RP2040_I2C0_IC_COMP_PARAM_1_TX_BUFFER_DEPTH_SHIFT     (16)  /* TX Buffer Depth = 16 */
#define RP2040_I2C0_IC_COMP_PARAM_1_TX_BUFFER_DEPTH_MASK      (0xff << RP2040_I2C0_IC_COMP_PARAM_1_TX_BUFFER_DEPTH_SHIFT)
#define RP2040_I2C0_IC_COMP_PARAM_1_RX_BUFFER_DEPTH_SHIFT     (8)  /* RX Buffer Depth = 16 */
#define RP2040_I2C0_IC_COMP_PARAM_1_RX_BUFFER_DEPTH_MASK      (0xff << RP2040_I2C0_IC_COMP_PARAM_1_RX_BUFFER_DEPTH_SHIFT)
#define RP2040_I2C0_IC_COMP_PARAM_1_ADD_ENCODED_PARAMS        (1 << 7)  /* Encoded parameters not visible */
#define RP2040_I2C0_IC_COMP_PARAM_1_HAS_DMA                   (1 << 6)  /* DMA handshaking signals are enabled */
#define RP2040_I2C0_IC_COMP_PARAM_1_INTR_IO                   (1 << 5)  /* COMBINED Interrupt outputs */
#define RP2040_I2C0_IC_COMP_PARAM_1_HC_COUNT_VALUES           (1 << 4)  /* Programmable count values for each mode. */
#define RP2040_I2C0_IC_COMP_PARAM_1_MAX_SPEED_MODE_SHIFT      (2)  /* MAX SPEED MODE = FAST MODE */
#define RP2040_I2C0_IC_COMP_PARAM_1_MAX_SPEED_MODE_MASK       (0x03 << RP2040_I2C0_IC_COMP_PARAM_1_MAX_SPEED_MODE_SHIFT)
#define RP2040_I2C0_IC_COMP_PARAM_1_APB_DATA_WIDTH_MASK       (0x03)  /* APB data bus width is 32 bits */

#endif /* __ARCH_ARM_SRC_RP2040_HARDWARE_RP2040_I2C0_H */
