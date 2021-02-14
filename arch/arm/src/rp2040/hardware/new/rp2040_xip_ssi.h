/* Register offsets *********************************************************/

#define RP2040_XIP_SSI_CTRLR0_OFFSET          0x000000  /* Control register 0 */
#define RP2040_XIP_SSI_CTRLR1_OFFSET          0x000004  /* Master Control register 1 */
#define RP2040_XIP_SSI_SSIENR_OFFSET          0x000008  /* SSI Enable */
#define RP2040_XIP_SSI_MWCR_OFFSET            0x00000c  /* Microwire Control */
#define RP2040_XIP_SSI_SER_OFFSET             0x000010  /* Slave enable */
#define RP2040_XIP_SSI_BAUDR_OFFSET           0x000014  /* Baud rate */
#define RP2040_XIP_SSI_TXFTLR_OFFSET          0x000018  /* TX FIFO threshold level */
#define RP2040_XIP_SSI_RXFTLR_OFFSET          0x00001c  /* RX FIFO threshold level */
#define RP2040_XIP_SSI_TXFLR_OFFSET           0x000020  /* TX FIFO level */
#define RP2040_XIP_SSI_RXFLR_OFFSET           0x000024  /* RX FIFO level */
#define RP2040_XIP_SSI_SR_OFFSET              0x000028  /* Status register */
#define RP2040_XIP_SSI_IMR_OFFSET             0x00002c  /* Interrupt mask */
#define RP2040_XIP_SSI_ISR_OFFSET             0x000030  /* Interrupt status */
#define RP2040_XIP_SSI_RISR_OFFSET            0x000034  /* Raw interrupt status */
#define RP2040_XIP_SSI_TXOICR_OFFSET          0x000038  /* TX FIFO overflow interrupt clear */
#define RP2040_XIP_SSI_RXOICR_OFFSET          0x00003c  /* RX FIFO overflow interrupt clear */
#define RP2040_XIP_SSI_RXUICR_OFFSET          0x000040  /* RX FIFO underflow interrupt clear */
#define RP2040_XIP_SSI_MSTICR_OFFSET          0x000044  /* Multi-master interrupt clear */
#define RP2040_XIP_SSI_ICR_OFFSET             0x000048  /* Interrupt clear */
#define RP2040_XIP_SSI_DMACR_OFFSET           0x00004c  /* DMA control */
#define RP2040_XIP_SSI_DMATDLR_OFFSET         0x000050  /* DMA TX data level */
#define RP2040_XIP_SSI_DMARDLR_OFFSET         0x000054  /* DMA RX data level */
#define RP2040_XIP_SSI_IDR_OFFSET             0x000058  /* Identification register */
#define RP2040_XIP_SSI_SSI_VERSION_ID_OFFSET  0x00005c  /* Version ID */
#define RP2040_XIP_SSI_DR0_OFFSET             0x000060  /* Data Register 0 (of 36) */
#define RP2040_XIP_SSI_RX_SAMPLE_DLY_OFFSET   0x0000f0  /* RX sample delay */
#define RP2040_XIP_SSI_SPI_CTRLR0_OFFSET      0x0000f4  /* SPI control */
#define RP2040_XIP_SSI_TXD_DRIVE_EDGE_OFFSET  0x0000f8  /* TX drive edge */

/* Register definitions *****************************************************/

#define RP2040_XIP_SSI_CTRLR0          (RP2040_XIP_SSI_BASE + RP2040_XIP_SSI_CTRLR0_OFFSET)
#define RP2040_XIP_SSI_CTRLR1          (RP2040_XIP_SSI_BASE + RP2040_XIP_SSI_CTRLR1_OFFSET)
#define RP2040_XIP_SSI_SSIENR          (RP2040_XIP_SSI_BASE + RP2040_XIP_SSI_SSIENR_OFFSET)
#define RP2040_XIP_SSI_MWCR            (RP2040_XIP_SSI_BASE + RP2040_XIP_SSI_MWCR_OFFSET)
#define RP2040_XIP_SSI_SER             (RP2040_XIP_SSI_BASE + RP2040_XIP_SSI_SER_OFFSET)
#define RP2040_XIP_SSI_BAUDR           (RP2040_XIP_SSI_BASE + RP2040_XIP_SSI_BAUDR_OFFSET)
#define RP2040_XIP_SSI_TXFTLR          (RP2040_XIP_SSI_BASE + RP2040_XIP_SSI_TXFTLR_OFFSET)
#define RP2040_XIP_SSI_RXFTLR          (RP2040_XIP_SSI_BASE + RP2040_XIP_SSI_RXFTLR_OFFSET)
#define RP2040_XIP_SSI_TXFLR           (RP2040_XIP_SSI_BASE + RP2040_XIP_SSI_TXFLR_OFFSET)
#define RP2040_XIP_SSI_RXFLR           (RP2040_XIP_SSI_BASE + RP2040_XIP_SSI_RXFLR_OFFSET)
#define RP2040_XIP_SSI_SR              (RP2040_XIP_SSI_BASE + RP2040_XIP_SSI_SR_OFFSET)
#define RP2040_XIP_SSI_IMR             (RP2040_XIP_SSI_BASE + RP2040_XIP_SSI_IMR_OFFSET)
#define RP2040_XIP_SSI_ISR             (RP2040_XIP_SSI_BASE + RP2040_XIP_SSI_ISR_OFFSET)
#define RP2040_XIP_SSI_RISR            (RP2040_XIP_SSI_BASE + RP2040_XIP_SSI_RISR_OFFSET)
#define RP2040_XIP_SSI_TXOICR          (RP2040_XIP_SSI_BASE + RP2040_XIP_SSI_TXOICR_OFFSET)
#define RP2040_XIP_SSI_RXOICR          (RP2040_XIP_SSI_BASE + RP2040_XIP_SSI_RXOICR_OFFSET)
#define RP2040_XIP_SSI_RXUICR          (RP2040_XIP_SSI_BASE + RP2040_XIP_SSI_RXUICR_OFFSET)
#define RP2040_XIP_SSI_MSTICR          (RP2040_XIP_SSI_BASE + RP2040_XIP_SSI_MSTICR_OFFSET)
#define RP2040_XIP_SSI_ICR             (RP2040_XIP_SSI_BASE + RP2040_XIP_SSI_ICR_OFFSET)
#define RP2040_XIP_SSI_DMACR           (RP2040_XIP_SSI_BASE + RP2040_XIP_SSI_DMACR_OFFSET)
#define RP2040_XIP_SSI_DMATDLR         (RP2040_XIP_SSI_BASE + RP2040_XIP_SSI_DMATDLR_OFFSET)
#define RP2040_XIP_SSI_DMARDLR         (RP2040_XIP_SSI_BASE + RP2040_XIP_SSI_DMARDLR_OFFSET)
#define RP2040_XIP_SSI_IDR             (RP2040_XIP_SSI_BASE + RP2040_XIP_SSI_IDR_OFFSET)
#define RP2040_XIP_SSI_SSI_VERSION_ID  (RP2040_XIP_SSI_BASE + RP2040_XIP_SSI_SSI_VERSION_ID_OFFSET)
#define RP2040_XIP_SSI_DR0             (RP2040_XIP_SSI_BASE + RP2040_XIP_SSI_DR0_OFFSET)
#define RP2040_XIP_SSI_RX_SAMPLE_DLY   (RP2040_XIP_SSI_BASE + RP2040_XIP_SSI_RX_SAMPLE_DLY_OFFSET)
#define RP2040_XIP_SSI_SPI_CTRLR0      (RP2040_XIP_SSI_BASE + RP2040_XIP_SSI_SPI_CTRLR0_OFFSET)
#define RP2040_XIP_SSI_TXD_DRIVE_EDGE  (RP2040_XIP_SSI_BASE + RP2040_XIP_SSI_TXD_DRIVE_EDGE_OFFSET)


/* Register bit definitions *************************************************/


#define RP2040_XIP_SSI_CTRLR0_SSTE                   (1 << 24)  /* Slave select toggle enable */
#define RP2040_XIP_SSI_CTRLR0_SPI_FRF_SHIFT          (21)  /* SPI frame format */
#define RP2040_XIP_SSI_CTRLR0_SPI_FRF_MASK           (0x03 << RP2040_XIP_SSI_CTRLR0_SPI_FRF_SHIFT)
#define RP2040_XIP_SSI_CTRLR0_SPI_FRF_STD            (0x0 << RP2040_XIP_SSI_CTRLR0_SPI_FRF_SHIFT)  /* Standard 1-bit SPI frame format; 1 bit per SCK, full-duplex */
#define RP2040_XIP_SSI_CTRLR0_SPI_FRF_DUAL           (0x1 << RP2040_XIP_SSI_CTRLR0_SPI_FRF_SHIFT)  /* Dual-SPI frame format; two bits per SCK, half-duplex */
#define RP2040_XIP_SSI_CTRLR0_SPI_FRF_QUAD           (0x2 << RP2040_XIP_SSI_CTRLR0_SPI_FRF_SHIFT)  /* Quad-SPI frame format; four bits per SCK, half-duplex */
#define RP2040_XIP_SSI_CTRLR0_DFS_32_SHIFT           (16)  /* Data frame size in 32b transfer mode Value of n -> n+1 clocks per frame. */
#define RP2040_XIP_SSI_CTRLR0_DFS_32_MASK            (0x1f << RP2040_XIP_SSI_CTRLR0_DFS_32_SHIFT)
#define RP2040_XIP_SSI_CTRLR0_CFS_SHIFT              (12)  /* Control frame size Value of n -> n+1 clocks per frame. */
#define RP2040_XIP_SSI_CTRLR0_CFS_MASK               (0x0f << RP2040_XIP_SSI_CTRLR0_CFS_SHIFT)
#define RP2040_XIP_SSI_CTRLR0_SRL                    (1 << 11)  /* Shift register loop (test mode) */
#define RP2040_XIP_SSI_CTRLR0_SLV_OE                 (1 << 10)  /* Slave output enable */
#define RP2040_XIP_SSI_CTRLR0_TMOD_SHIFT             (8)  /* Transfer mode */
#define RP2040_XIP_SSI_CTRLR0_TMOD_MASK              (0x03 << RP2040_XIP_SSI_CTRLR0_TMOD_SHIFT)
#define RP2040_XIP_SSI_CTRLR0_TMOD_TX_AND_RX         (0x0 << RP2040_XIP_SSI_CTRLR0_TMOD_SHIFT)  /* Both transmit and receive */
#define RP2040_XIP_SSI_CTRLR0_TMOD_TX_ONLY           (0x1 << RP2040_XIP_SSI_CTRLR0_TMOD_SHIFT)  /* Transmit only (not for FRF == 0, standard SPI mode) */
#define RP2040_XIP_SSI_CTRLR0_TMOD_RX_ONLY           (0x2 << RP2040_XIP_SSI_CTRLR0_TMOD_SHIFT)  /* Receive only (not for FRF == 0, standard SPI mode) */
#define RP2040_XIP_SSI_CTRLR0_TMOD_EEPROM_READ       (0x3 << RP2040_XIP_SSI_CTRLR0_TMOD_SHIFT)  /* EEPROM read mode (TX then RX; RX starts after control data TX'd) */
#define RP2040_XIP_SSI_CTRLR0_SCPOL                  (1 << 7)  /* Serial clock polarity */
#define RP2040_XIP_SSI_CTRLR0_SCPH                   (1 << 6)  /* Serial clock phase */
#define RP2040_XIP_SSI_CTRLR0_FRF_SHIFT              (4)  /* Frame format */
#define RP2040_XIP_SSI_CTRLR0_FRF_MASK               (0x03 << RP2040_XIP_SSI_CTRLR0_FRF_SHIFT)
#define RP2040_XIP_SSI_CTRLR0_DFS_MASK               (0x0f)  /* Data frame size */

#define RP2040_XIP_SSI_CTRLR1_NDF_MASK               (0xffff)  /* Number of data frames */

#define RP2040_XIP_SSI_SSIENR_SSI_EN                 (1 << 0)  /* SSI enable */

#define RP2040_XIP_SSI_MWCR_MHS                      (1 << 2)  /* Microwire handshaking */
#define RP2040_XIP_SSI_MWCR_MDD                      (1 << 1)  /* Microwire control */
#define RP2040_XIP_SSI_MWCR_MWMOD                    (1 << 0)  /* Microwire transfer mode */

#define RP2040_XIP_SSI_SER                           (1 << 0)  /* For each bit: 0 -> slave not selected 1 -> slave selected */

#define RP2040_XIP_SSI_BAUDR_SCKDV_MASK              (0xffff)  /* SSI clock divider */

#define RP2040_XIP_SSI_TXFTLR_TFT_MASK               (0xff)  /* Transmit FIFO threshold */

#define RP2040_XIP_SSI_RXFTLR_RFT_MASK               (0xff)  /* Receive FIFO threshold */

#define RP2040_XIP_SSI_TXFLR_TFTFL_MASK              (0xff)  /* Transmit FIFO level */

#define RP2040_XIP_SSI_RXFLR_RXTFL_MASK              (0xff)  /* Receive FIFO level */

#define RP2040_XIP_SSI_SR_DCOL                       (1 << 6)  /* Data collision error */
#define RP2040_XIP_SSI_SR_TXE                        (1 << 5)  /* Transmission error */
#define RP2040_XIP_SSI_SR_RFF                        (1 << 4)  /* Receive FIFO full */
#define RP2040_XIP_SSI_SR_RFNE                       (1 << 3)  /* Receive FIFO not empty */
#define RP2040_XIP_SSI_SR_TFE                        (1 << 2)  /* Transmit FIFO empty */
#define RP2040_XIP_SSI_SR_TFNF                       (1 << 1)  /* Transmit FIFO not full */
#define RP2040_XIP_SSI_SR_BUSY                       (1 << 0)  /* SSI busy flag */

#define RP2040_XIP_SSI_IMR_MSTIM                     (1 << 5)  /* Multi-master contention interrupt mask */
#define RP2040_XIP_SSI_IMR_RXFIM                     (1 << 4)  /* Receive FIFO full interrupt mask */
#define RP2040_XIP_SSI_IMR_RXOIM                     (1 << 3)  /* Receive FIFO overflow interrupt mask */
#define RP2040_XIP_SSI_IMR_RXUIM                     (1 << 2)  /* Receive FIFO underflow interrupt mask */
#define RP2040_XIP_SSI_IMR_TXOIM                     (1 << 1)  /* Transmit FIFO overflow interrupt mask */
#define RP2040_XIP_SSI_IMR_TXEIM                     (1 << 0)  /* Transmit FIFO empty interrupt mask */

#define RP2040_XIP_SSI_ISR_MSTIS                     (1 << 5)  /* Multi-master contention interrupt status */
#define RP2040_XIP_SSI_ISR_RXFIS                     (1 << 4)  /* Receive FIFO full interrupt status */
#define RP2040_XIP_SSI_ISR_RXOIS                     (1 << 3)  /* Receive FIFO overflow interrupt status */
#define RP2040_XIP_SSI_ISR_RXUIS                     (1 << 2)  /* Receive FIFO underflow interrupt status */
#define RP2040_XIP_SSI_ISR_TXOIS                     (1 << 1)  /* Transmit FIFO overflow interrupt status */
#define RP2040_XIP_SSI_ISR_TXEIS                     (1 << 0)  /* Transmit FIFO empty interrupt status */

#define RP2040_XIP_SSI_RISR_MSTIR                    (1 << 5)  /* Multi-master contention raw interrupt status */
#define RP2040_XIP_SSI_RISR_RXFIR                    (1 << 4)  /* Receive FIFO full raw interrupt status */
#define RP2040_XIP_SSI_RISR_RXOIR                    (1 << 3)  /* Receive FIFO overflow raw interrupt status */
#define RP2040_XIP_SSI_RISR_RXUIR                    (1 << 2)  /* Receive FIFO underflow raw interrupt status */
#define RP2040_XIP_SSI_RISR_TXOIR                    (1 << 1)  /* Transmit FIFO overflow raw interrupt status */
#define RP2040_XIP_SSI_RISR_TXEIR                    (1 << 0)  /* Transmit FIFO empty raw interrupt status */

#define RP2040_XIP_SSI_TXOICR                        (1 << 0)  /* Clear-on-read transmit FIFO overflow interrupt */

#define RP2040_XIP_SSI_RXOICR                        (1 << 0)  /* Clear-on-read receive FIFO overflow interrupt */

#define RP2040_XIP_SSI_RXUICR                        (1 << 0)  /* Clear-on-read receive FIFO underflow interrupt */

#define RP2040_XIP_SSI_MSTICR                        (1 << 0)  /* Clear-on-read multi-master contention interrupt */

#define RP2040_XIP_SSI_ICR                           (1 << 0)  /* Clear-on-read all active interrupts */

#define RP2040_XIP_SSI_DMACR_TDMAE                   (1 << 1)  /* Transmit DMA enable */
#define RP2040_XIP_SSI_DMACR_RDMAE                   (1 << 0)  /* Receive DMA enable */

#define RP2040_XIP_SSI_DMATDLR_DMATDL_MASK           (0xff)  /* Transmit data watermark level */

#define RP2040_XIP_SSI_DMARDLR_DMARDL_MASK           (0xff)  /* Receive data watermark level (DMARDLR+1) */

#define RP2040_XIP_SSI_RX_SAMPLE_DLY_RSD_MASK        (0xff)  /* RXD sample delay (in SCLK cycles) */

#define RP2040_XIP_SSI_SPI_CTRLR0_XIP_CMD_SHIFT      (24)  /* SPI Command to send in XIP mode (INST_L = 8-bit) or to append to Address (INST_L = 0-bit) */
#define RP2040_XIP_SSI_SPI_CTRLR0_XIP_CMD_MASK       (0xff << RP2040_XIP_SSI_SPI_CTRLR0_XIP_CMD_SHIFT)
#define RP2040_XIP_SSI_SPI_CTRLR0_SPI_RXDS_EN        (1 << 18)  /* Read data strobe enable */
#define RP2040_XIP_SSI_SPI_CTRLR0_INST_DDR_EN        (1 << 17)  /* Instruction DDR transfer enable */
#define RP2040_XIP_SSI_SPI_CTRLR0_SPI_DDR_EN         (1 << 16)  /* SPI DDR transfer enable */
#define RP2040_XIP_SSI_SPI_CTRLR0_WAIT_CYCLES_SHIFT  (11)  /* Wait cycles between control frame transmit and data reception (in SCLK cycles) */
#define RP2040_XIP_SSI_SPI_CTRLR0_WAIT_CYCLES_MASK   (0x1f << RP2040_XIP_SSI_SPI_CTRLR0_WAIT_CYCLES_SHIFT)
#define RP2040_XIP_SSI_SPI_CTRLR0_INST_L_SHIFT       (8)  /* Instruction length (0/4/8/16b) */
#define RP2040_XIP_SSI_SPI_CTRLR0_INST_L_MASK        (0x03 << RP2040_XIP_SSI_SPI_CTRLR0_INST_L_SHIFT)
#define RP2040_XIP_SSI_SPI_CTRLR0_INST_L_NONE        (0x0 << RP2040_XIP_SSI_SPI_CTRLR0_INST_L_SHIFT)  /* No instruction */
#define RP2040_XIP_SSI_SPI_CTRLR0_INST_L_4B          (0x1 << RP2040_XIP_SSI_SPI_CTRLR0_INST_L_SHIFT)  /* 4-bit instruction */
#define RP2040_XIP_SSI_SPI_CTRLR0_INST_L_8B          (0x2 << RP2040_XIP_SSI_SPI_CTRLR0_INST_L_SHIFT)  /* 8-bit instruction */
#define RP2040_XIP_SSI_SPI_CTRLR0_INST_L_16B         (0x3 << RP2040_XIP_SSI_SPI_CTRLR0_INST_L_SHIFT)  /* 16-bit instruction */
#define RP2040_XIP_SSI_SPI_CTRLR0_ADDR_L_SHIFT       (2)  /* Address length (0b-60b in 4b increments) */
#define RP2040_XIP_SSI_SPI_CTRLR0_ADDR_L_MASK        (0x0f << RP2040_XIP_SSI_SPI_CTRLR0_ADDR_L_SHIFT)
#define RP2040_XIP_SSI_SPI_CTRLR0_TRANS_TYPE_MASK    (0x03)
#define RP2040_XIP_SSI_SPI_CTRLR0_TRANS_TYPE_1C1A    (0x0)  /* Command and address both in standard SPI frame format */
#define RP2040_XIP_SSI_SPI_CTRLR0_TRANS_TYPE_1C2A    (0x1)  /* Command in standard SPI format, address in format specified by FRF */
#define RP2040_XIP_SSI_SPI_CTRLR0_TRANS_TYPE_2C2A    (0x2)  /* Command and address both in format specified by FRF (e.g. Dual-SPI) */

#define RP2040_XIP_SSI_TXD_DRIVE_EDGE_TDE_MASK       (0xff)  /* TXD drive edge */
