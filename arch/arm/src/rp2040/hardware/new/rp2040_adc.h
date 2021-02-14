/* Register offsets *********************************************************/

#define RP2040_ADC_CS_OFFSET      0x000000  /* ADC Control and Status */
#define RP2040_ADC_RESULT_OFFSET  0x000004  /* Result of most recent ADC conversion */
#define RP2040_ADC_FCS_OFFSET     0x000008  /* FIFO control and status */
#define RP2040_ADC_FIFO_OFFSET    0x00000c  /* Conversion result FIFO */
#define RP2040_ADC_DIV_OFFSET     0x000010  /* Clock divider. If non-zero, CS_START_MANY will start conversions at regular intervals rather than back-to-back. The divider is reset when either of these fields are written. Total period is 1 + INT + FRAC / 256 */
#define RP2040_ADC_INTR_OFFSET    0x000014  /* Raw Interrupts */
#define RP2040_ADC_INTE_OFFSET    0x000018  /* Interrupt Enable */
#define RP2040_ADC_INTF_OFFSET    0x00001c  /* Interrupt Force */
#define RP2040_ADC_INTS_OFFSET    0x000020  /* Interrupt status after masking & forcing */

/* Register definitions *****************************************************/

#define RP2040_ADC_CS      (RP2040_ADC_BASE + RP2040_ADC_CS_OFFSET)
#define RP2040_ADC_RESULT  (RP2040_ADC_BASE + RP2040_ADC_RESULT_OFFSET)
#define RP2040_ADC_FCS     (RP2040_ADC_BASE + RP2040_ADC_FCS_OFFSET)
#define RP2040_ADC_FIFO    (RP2040_ADC_BASE + RP2040_ADC_FIFO_OFFSET)
#define RP2040_ADC_DIV     (RP2040_ADC_BASE + RP2040_ADC_DIV_OFFSET)
#define RP2040_ADC_INTR    (RP2040_ADC_BASE + RP2040_ADC_INTR_OFFSET)
#define RP2040_ADC_INTE    (RP2040_ADC_BASE + RP2040_ADC_INTE_OFFSET)
#define RP2040_ADC_INTF    (RP2040_ADC_BASE + RP2040_ADC_INTF_OFFSET)
#define RP2040_ADC_INTS    (RP2040_ADC_BASE + RP2040_ADC_INTS_OFFSET)


/* Register bit definitions *************************************************/


#define RP2040_ADC_CS_RROBIN_SHIFT   (16)  /* Round-robin sampling. 1 bit per channel. Set all bits to 0 to disable. Otherwise, the ADC will cycle through each enabled channel in a round-robin fashion. The first channel to be sampled will be the one currently indicated by AINSEL. AINSEL will be updated after each conversion with the newly-selected channel. */
#define RP2040_ADC_CS_RROBIN_MASK    (0x1f << RP2040_ADC_CS_RROBIN_SHIFT)
#define RP2040_ADC_CS_AINSEL_SHIFT   (12)  /* Select analog mux input. Updated automatically in round-robin mode. */
#define RP2040_ADC_CS_AINSEL_MASK    (0x07 << RP2040_ADC_CS_AINSEL_SHIFT)
#define RP2040_ADC_CS_ERR_STICKY     (1 << 10)  /* Some past ADC conversion encountered an error. Write 1 to clear. */
#define RP2040_ADC_CS_ERR            (1 << 9)  /* The most recent ADC conversion encountered an error; result is undefined or noisy. */
#define RP2040_ADC_CS_READY          (1 << 8)  /* 1 if the ADC is ready to start a new conversion. Implies any previous conversion has completed. 0 whilst conversion in progress. */
#define RP2040_ADC_CS_START_MANY     (1 << 3)  /* Continuously perform conversions whilst this bit is 1. A new conversion will start immediately after the previous finishes. */
#define RP2040_ADC_CS_START_ONCE     (1 << 2)  /* Start a single conversion. Self-clearing. Ignored if start_many is asserted. */
#define RP2040_ADC_CS_TS_EN          (1 << 1)  /* Power on temperature sensor. 1 - enabled. 0 - disabled. */
#define RP2040_ADC_CS_EN             (1 << 0)  /* Power on ADC and enable its clock. 1 - enabled. 0 - disabled. */

#define RP2040_ADC_RESULT_MASK       (0xfff)

#define RP2040_ADC_FCS_THRESH_SHIFT  (24)  /* DREQ/IRQ asserted when level >= threshold */
#define RP2040_ADC_FCS_THRESH_MASK   (0x0f << RP2040_ADC_FCS_THRESH_SHIFT)
#define RP2040_ADC_FCS_LEVEL_SHIFT   (16)  /* The number of conversion results currently waiting in the FIFO */
#define RP2040_ADC_FCS_LEVEL_MASK    (0x0f << RP2040_ADC_FCS_LEVEL_SHIFT)
#define RP2040_ADC_FCS_OVER          (1 << 11)  /* 1 if the FIFO has been overflowed. Write 1 to clear. */
#define RP2040_ADC_FCS_UNDER         (1 << 10)  /* 1 if the FIFO has been underflowed. Write 1 to clear. */
#define RP2040_ADC_FCS_FULL          (1 << 9)
#define RP2040_ADC_FCS_EMPTY         (1 << 8)
#define RP2040_ADC_FCS_DREQ_EN       (1 << 3)  /* If 1: assert DMA requests when FIFO contains data */
#define RP2040_ADC_FCS_ERR           (1 << 2)  /* If 1: conversion error bit appears in the FIFO alongside the result */
#define RP2040_ADC_FCS_SHIFT         (1 << 1)  /* If 1: FIFO results are right-shifted to be one byte in size. Enables DMA to byte buffers. */
#define RP2040_ADC_FCS_EN            (1 << 0)  /* If 1: write result to the FIFO after each conversion. */

#define RP2040_ADC_FIFO_ERR          (1 << 15)  /* 1 if this particular sample experienced a conversion error. Remains in the same location if the sample is shifted. */
#define RP2040_ADC_FIFO_VAL_MASK     (0xfff)

#define RP2040_ADC_DIV_INT_SHIFT     (8)  /* Integer part of clock divisor. */
#define RP2040_ADC_DIV_INT_MASK      (0xffff << RP2040_ADC_DIV_INT_SHIFT)
#define RP2040_ADC_DIV_FRAC_MASK     (0xff)  /* Fractional part of clock divisor. First-order delta-sigma. */

#define RP2040_ADC_INTR_FIFO         (1 << 0)  /* Triggered when the sample FIFO reaches a certain level. This level can be programmed via the FCS_THRESH field. */

#define RP2040_ADC_INTE_FIFO         (1 << 0)  /* Triggered when the sample FIFO reaches a certain level. This level can be programmed via the FCS_THRESH field. */

#define RP2040_ADC_INTF_FIFO         (1 << 0)  /* Triggered when the sample FIFO reaches a certain level. This level can be programmed via the FCS_THRESH field. */

#define RP2040_ADC_INTS_FIFO         (1 << 0)  /* Triggered when the sample FIFO reaches a certain level. This level can be programmed via the FCS_THRESH field. */
