/* Register offsets *********************************************************/

#define RP2040_SPI1_SSPCR0_OFFSET        0x000000  /* Control register 0, SSPCR0 on page 3-4 */
#define RP2040_SPI1_SSPCR1_OFFSET        0x000004  /* Control register 1, SSPCR1 on page 3-5 */
#define RP2040_SPI1_SSPDR_OFFSET         0x000008  /* Data register, SSPDR on page 3-6 */
#define RP2040_SPI1_SSPSR_OFFSET         0x00000c  /* Status register, SSPSR on page 3-7 */
#define RP2040_SPI1_SSPCPSR_OFFSET       0x000010  /* Clock prescale register, SSPCPSR on page 3-8 */
#define RP2040_SPI1_SSPIMSC_OFFSET       0x000014  /* Interrupt mask set or clear register, SSPIMSC on page 3-9 */
#define RP2040_SPI1_SSPRIS_OFFSET        0x000018  /* Raw interrupt status register, SSPRIS on page 3-10 */
#define RP2040_SPI1_SSPMIS_OFFSET        0x00001c  /* Masked interrupt status register, SSPMIS on page 3-11 */
#define RP2040_SPI1_SSPICR_OFFSET        0x000020  /* Interrupt clear register, SSPICR on page 3-11 */
#define RP2040_SPI1_SSPDMACR_OFFSET      0x000024  /* DMA control register, SSPDMACR on page 3-12 */
#define RP2040_SPI1_SSPPERIPHID0_OFFSET  0x000fe0  /* Peripheral identification registers, SSPPeriphID0-3 on page 3-13 */
#define RP2040_SPI1_SSPPERIPHID1_OFFSET  0x000fe4  /* Peripheral identification registers, SSPPeriphID0-3 on page 3-13 */
#define RP2040_SPI1_SSPPERIPHID2_OFFSET  0x000fe8  /* Peripheral identification registers, SSPPeriphID0-3 on page 3-13 */
#define RP2040_SPI1_SSPPERIPHID3_OFFSET  0x000fec  /* Peripheral identification registers, SSPPeriphID0-3 on page 3-13 */
#define RP2040_SPI1_SSPPCELLID0_OFFSET   0x000ff0  /* PrimeCell identification registers, SSPPCellID0-3 on page 3-16 */
#define RP2040_SPI1_SSPPCELLID1_OFFSET   0x000ff4  /* PrimeCell identification registers, SSPPCellID0-3 on page 3-16 */
#define RP2040_SPI1_SSPPCELLID2_OFFSET   0x000ff8  /* PrimeCell identification registers, SSPPCellID0-3 on page 3-16 */
#define RP2040_SPI1_SSPPCELLID3_OFFSET   0x000ffc  /* PrimeCell identification registers, SSPPCellID0-3 on page 3-16 */

/* Register definitions *****************************************************/

#define RP2040_SPI1_SSPCR0        (RP2040_SPI1_BASE + RP2040_SPI1_SSPCR0_OFFSET)
#define RP2040_SPI1_SSPCR1        (RP2040_SPI1_BASE + RP2040_SPI1_SSPCR1_OFFSET)
#define RP2040_SPI1_SSPDR         (RP2040_SPI1_BASE + RP2040_SPI1_SSPDR_OFFSET)
#define RP2040_SPI1_SSPSR         (RP2040_SPI1_BASE + RP2040_SPI1_SSPSR_OFFSET)
#define RP2040_SPI1_SSPCPSR       (RP2040_SPI1_BASE + RP2040_SPI1_SSPCPSR_OFFSET)
#define RP2040_SPI1_SSPIMSC       (RP2040_SPI1_BASE + RP2040_SPI1_SSPIMSC_OFFSET)
#define RP2040_SPI1_SSPRIS        (RP2040_SPI1_BASE + RP2040_SPI1_SSPRIS_OFFSET)
#define RP2040_SPI1_SSPMIS        (RP2040_SPI1_BASE + RP2040_SPI1_SSPMIS_OFFSET)
#define RP2040_SPI1_SSPICR        (RP2040_SPI1_BASE + RP2040_SPI1_SSPICR_OFFSET)
#define RP2040_SPI1_SSPDMACR      (RP2040_SPI1_BASE + RP2040_SPI1_SSPDMACR_OFFSET)
#define RP2040_SPI1_SSPPERIPHID0  (RP2040_SPI1_BASE + RP2040_SPI1_SSPPERIPHID0_OFFSET)
#define RP2040_SPI1_SSPPERIPHID1  (RP2040_SPI1_BASE + RP2040_SPI1_SSPPERIPHID1_OFFSET)
#define RP2040_SPI1_SSPPERIPHID2  (RP2040_SPI1_BASE + RP2040_SPI1_SSPPERIPHID2_OFFSET)
#define RP2040_SPI1_SSPPERIPHID3  (RP2040_SPI1_BASE + RP2040_SPI1_SSPPERIPHID3_OFFSET)
#define RP2040_SPI1_SSPPCELLID0   (RP2040_SPI1_BASE + RP2040_SPI1_SSPPCELLID0_OFFSET)
#define RP2040_SPI1_SSPPCELLID1   (RP2040_SPI1_BASE + RP2040_SPI1_SSPPCELLID1_OFFSET)
#define RP2040_SPI1_SSPPCELLID2   (RP2040_SPI1_BASE + RP2040_SPI1_SSPPCELLID2_OFFSET)
#define RP2040_SPI1_SSPPCELLID3   (RP2040_SPI1_BASE + RP2040_SPI1_SSPPCELLID3_OFFSET)


/* Register bit definitions *************************************************/


#define RP2040_SPI1_SSPCR0_SCR_SHIFT                 (8)  /* Serial clock rate. The value SCR is used to generate the transmit and receive bit rate of the PrimeCell SSP. The bit rate is: F SSPCLK CPSDVSR x (1+SCR) where CPSDVSR is an even value from 2-254, programmed through the SSPCPSR register and SCR is a value from 0-255. */
#define RP2040_SPI1_SSPCR0_SCR_MASK                  (0xff << RP2040_SPI1_SSPCR0_SCR_SHIFT)
#define RP2040_SPI1_SSPCR0_SPH                       (1 << 7)  /* SSPCLKOUT phase, applicable to Motorola SPI frame format only. See Motorola SPI frame format on page 2-10. */
#define RP2040_SPI1_SSPCR0_SPO                       (1 << 6)  /* SSPCLKOUT polarity, applicable to Motorola SPI frame format only. See Motorola SPI frame format on page 2-10. */
#define RP2040_SPI1_SSPCR0_FRF_SHIFT                 (4)  /* Frame format: 00 Motorola SPI frame format. 01 TI synchronous serial frame format. 10 National Microwire frame format. 11 Reserved, undefined operation. */
#define RP2040_SPI1_SSPCR0_FRF_MASK                  (0x03 << RP2040_SPI1_SSPCR0_FRF_SHIFT)
#define RP2040_SPI1_SSPCR0_DSS_MASK                  (0x0f)  /* Data Size Select: 0000 Reserved, undefined operation. 0001 Reserved, undefined operation. 0010 Reserved, undefined operation. 0011 4-bit data. 0100 5-bit data. 0101 6-bit data. 0110 7-bit data. 0111 8-bit data. 1000 9-bit data. 1001 10-bit data. 1010 11-bit data. 1011 12-bit data. 1100 13-bit data. 1101 14-bit data. 1110 15-bit data. 1111 16-bit data. */

#define RP2040_SPI1_SSPCR1_SOD                       (1 << 3)  /* Slave-mode output disable. This bit is relevant only in the slave mode, MS=1. In multiple-slave systems, it is possible for an PrimeCell SSP master to broadcast a message to all slaves in the system while ensuring that only one slave drives data onto its serial output line. In such systems the RXD lines from multiple slaves could be tied together. To operate in such systems, the SOD bit can be set if the PrimeCell SSP slave is not supposed to drive the SSPTXD line: 0 SSP can drive the SSPTXD output in slave mode. 1 SSP must not drive the SSPTXD output in slave mode. */
#define RP2040_SPI1_SSPCR1_MS                        (1 << 2)  /* Master or slave mode select. This bit can be modified only when the PrimeCell SSP is disabled, SSE=0: 0 Device configured as master, default. 1 Device configured as slave. */
#define RP2040_SPI1_SSPCR1_SSE                       (1 << 1)  /* Synchronous serial port enable: 0 SSP operation disabled. 1 SSP operation enabled. */
#define RP2040_SPI1_SSPCR1_LBM                       (1 << 0)  /* Loop back mode: 0 Normal serial port operation enabled. 1 Output of transmit serial shifter is connected to input of receive serial shifter internally. */

#define RP2040_SPI1_SSPDR_DATA_MASK                  (0xffff)  /* Transmit/Receive FIFO: Read Receive FIFO. Write Transmit FIFO. You must right-justify data when the PrimeCell SSP is programmed for a data size that is less than 16 bits. Unused bits at the top are ignored by transmit logic. The receive logic automatically right-justifies. */

#define RP2040_SPI1_SSPSR_BSY                        (1 << 4)  /* PrimeCell SSP busy flag, RO: 0 SSP is idle. 1 SSP is currently transmitting and/or receiving a frame or the transmit FIFO is not empty. */
#define RP2040_SPI1_SSPSR_RFF                        (1 << 3)  /* Receive FIFO full, RO: 0 Receive FIFO is not full. 1 Receive FIFO is full. */
#define RP2040_SPI1_SSPSR_RNE                        (1 << 2)  /* Receive FIFO not empty, RO: 0 Receive FIFO is empty. 1 Receive FIFO is not empty. */
#define RP2040_SPI1_SSPSR_TNF                        (1 << 1)  /* Transmit FIFO not full, RO: 0 Transmit FIFO is full. 1 Transmit FIFO is not full. */
#define RP2040_SPI1_SSPSR_TFE                        (1 << 0)  /* Transmit FIFO empty, RO: 0 Transmit FIFO is not empty. 1 Transmit FIFO is empty. */

#define RP2040_SPI1_SSPCPSR_CPSDVSR_MASK             (0xff)  /* Clock prescale divisor. Must be an even number from 2-254, depending on the frequency of SSPCLK. The least significant bit always returns zero on reads. */

#define RP2040_SPI1_SSPIMSC_TXIM                     (1 << 3)  /* Transmit FIFO interrupt mask: 0 Transmit FIFO half empty or less condition interrupt is masked. 1 Transmit FIFO half empty or less condition interrupt is not masked. */
#define RP2040_SPI1_SSPIMSC_RXIM                     (1 << 2)  /* Receive FIFO interrupt mask: 0 Receive FIFO half full or less condition interrupt is masked. 1 Receive FIFO half full or less condition interrupt is not masked. */
#define RP2040_SPI1_SSPIMSC_RTIM                     (1 << 1)  /* Receive timeout interrupt mask: 0 Receive FIFO not empty and no read prior to timeout period interrupt is masked. 1 Receive FIFO not empty and no read prior to timeout period interrupt is not masked. */
#define RP2040_SPI1_SSPIMSC_RORIM                    (1 << 0)  /* Receive overrun interrupt mask: 0 Receive FIFO written to while full condition interrupt is masked. 1 Receive FIFO written to while full condition interrupt is not masked. */

#define RP2040_SPI1_SSPRIS_TXRIS                     (1 << 3)  /* Gives the raw interrupt state, prior to masking, of the SSPTXINTR interrupt */
#define RP2040_SPI1_SSPRIS_RXRIS                     (1 << 2)  /* Gives the raw interrupt state, prior to masking, of the SSPRXINTR interrupt */
#define RP2040_SPI1_SSPRIS_RTRIS                     (1 << 1)  /* Gives the raw interrupt state, prior to masking, of the SSPRTINTR interrupt */
#define RP2040_SPI1_SSPRIS_RORRIS                    (1 << 0)  /* Gives the raw interrupt state, prior to masking, of the SSPRORINTR interrupt */

#define RP2040_SPI1_SSPMIS_TXMIS                     (1 << 3)  /* Gives the transmit FIFO masked interrupt state, after masking, of the SSPTXINTR interrupt */
#define RP2040_SPI1_SSPMIS_RXMIS                     (1 << 2)  /* Gives the receive FIFO masked interrupt state, after masking, of the SSPRXINTR interrupt */
#define RP2040_SPI1_SSPMIS_RTMIS                     (1 << 1)  /* Gives the receive timeout masked interrupt state, after masking, of the SSPRTINTR interrupt */
#define RP2040_SPI1_SSPMIS_RORMIS                    (1 << 0)  /* Gives the receive over run masked interrupt status, after masking, of the SSPRORINTR interrupt */

#define RP2040_SPI1_SSPICR_RTIC                      (1 << 1)  /* Clears the SSPRTINTR interrupt */
#define RP2040_SPI1_SSPICR_RORIC                     (1 << 0)  /* Clears the SSPRORINTR interrupt */

#define RP2040_SPI1_SSPDMACR_TXDMAE                  (1 << 1)  /* Transmit DMA Enable. If this bit is set to 1, DMA for the transmit FIFO is enabled. */
#define RP2040_SPI1_SSPDMACR_RXDMAE                  (1 << 0)  /* Receive DMA Enable. If this bit is set to 1, DMA for the receive FIFO is enabled. */

#define RP2040_SPI1_SSPPERIPHID0_PARTNUMBER0_MASK    (0xff)  /* These bits read back as 0x22 */

#define RP2040_SPI1_SSPPERIPHID1_DESIGNER0_SHIFT     (4)  /* These bits read back as 0x1 */
#define RP2040_SPI1_SSPPERIPHID1_DESIGNER0_MASK      (0x0f << RP2040_SPI1_SSPPERIPHID1_DESIGNER0_SHIFT)
#define RP2040_SPI1_SSPPERIPHID1_PARTNUMBER1_MASK    (0x0f)  /* These bits read back as 0x0 */

#define RP2040_SPI1_SSPPERIPHID2_REVISION_SHIFT      (4)  /* These bits return the peripheral revision */
#define RP2040_SPI1_SSPPERIPHID2_REVISION_MASK       (0x0f << RP2040_SPI1_SSPPERIPHID2_REVISION_SHIFT)
#define RP2040_SPI1_SSPPERIPHID2_DESIGNER1_MASK      (0x0f)  /* These bits read back as 0x4 */

#define RP2040_SPI1_SSPPERIPHID3_CONFIGURATION_MASK  (0xff)  /* These bits read back as 0x00 */

#define RP2040_SPI1_SSPPCELLID0_MASK                 (0xff)  /* These bits read back as 0x0D */

#define RP2040_SPI1_SSPPCELLID1_MASK                 (0xff)  /* These bits read back as 0xF0 */

#define RP2040_SPI1_SSPPCELLID2_MASK                 (0xff)  /* These bits read back as 0x05 */

#define RP2040_SPI1_SSPPCELLID3_MASK                 (0xff)  /* These bits read back as 0xB1 */
