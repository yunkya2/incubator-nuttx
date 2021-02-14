/* Register offsets *********************************************************/

#define RP2040_IO_QSPI_GPIO_QSPI_SCLK_STATUS_OFFSET  0x000000  /* GPIO status */
#define RP2040_IO_QSPI_GPIO_QSPI_SCLK_CTRL_OFFSET    0x000004  /* GPIO control including function select and overrides. */
#define RP2040_IO_QSPI_GPIO_QSPI_SS_STATUS_OFFSET    0x000008  /* GPIO status */
#define RP2040_IO_QSPI_GPIO_QSPI_SS_CTRL_OFFSET      0x00000c  /* GPIO control including function select and overrides. */
#define RP2040_IO_QSPI_GPIO_QSPI_SD0_STATUS_OFFSET   0x000010  /* GPIO status */
#define RP2040_IO_QSPI_GPIO_QSPI_SD0_CTRL_OFFSET     0x000014  /* GPIO control including function select and overrides. */
#define RP2040_IO_QSPI_GPIO_QSPI_SD1_STATUS_OFFSET   0x000018  /* GPIO status */
#define RP2040_IO_QSPI_GPIO_QSPI_SD1_CTRL_OFFSET     0x00001c  /* GPIO control including function select and overrides. */
#define RP2040_IO_QSPI_GPIO_QSPI_SD2_STATUS_OFFSET   0x000020  /* GPIO status */
#define RP2040_IO_QSPI_GPIO_QSPI_SD2_CTRL_OFFSET     0x000024  /* GPIO control including function select and overrides. */
#define RP2040_IO_QSPI_GPIO_QSPI_SD3_STATUS_OFFSET   0x000028  /* GPIO status */
#define RP2040_IO_QSPI_GPIO_QSPI_SD3_CTRL_OFFSET     0x00002c  /* GPIO control including function select and overrides. */
#define RP2040_IO_QSPI_INTR_OFFSET                   0x000030  /* Raw Interrupts */
#define RP2040_IO_QSPI_PROC0_INTE_OFFSET             0x000034  /* Interrupt Enable for proc0 */
#define RP2040_IO_QSPI_PROC0_INTF_OFFSET             0x000038  /* Interrupt Force for proc0 */
#define RP2040_IO_QSPI_PROC0_INTS_OFFSET             0x00003c  /* Interrupt status after masking & forcing for proc0 */
#define RP2040_IO_QSPI_PROC1_INTE_OFFSET             0x000040  /* Interrupt Enable for proc1 */
#define RP2040_IO_QSPI_PROC1_INTF_OFFSET             0x000044  /* Interrupt Force for proc1 */
#define RP2040_IO_QSPI_PROC1_INTS_OFFSET             0x000048  /* Interrupt status after masking & forcing for proc1 */
#define RP2040_IO_QSPI_DORMANT_WAKE_INTE_OFFSET      0x00004c  /* Interrupt Enable for dormant_wake */
#define RP2040_IO_QSPI_DORMANT_WAKE_INTF_OFFSET      0x000050  /* Interrupt Force for dormant_wake */
#define RP2040_IO_QSPI_DORMANT_WAKE_INTS_OFFSET      0x000054  /* Interrupt status after masking & forcing for dormant_wake */

/* Register definitions *****************************************************/

#define RP2040_IO_QSPI_GPIO_QSPI_SCLK_STATUS  (RP2040_IO_QSPI_BASE + RP2040_IO_QSPI_GPIO_QSPI_SCLK_STATUS_OFFSET)
#define RP2040_IO_QSPI_GPIO_QSPI_SCLK_CTRL    (RP2040_IO_QSPI_BASE + RP2040_IO_QSPI_GPIO_QSPI_SCLK_CTRL_OFFSET)
#define RP2040_IO_QSPI_GPIO_QSPI_SS_STATUS    (RP2040_IO_QSPI_BASE + RP2040_IO_QSPI_GPIO_QSPI_SS_STATUS_OFFSET)
#define RP2040_IO_QSPI_GPIO_QSPI_SS_CTRL      (RP2040_IO_QSPI_BASE + RP2040_IO_QSPI_GPIO_QSPI_SS_CTRL_OFFSET)
#define RP2040_IO_QSPI_GPIO_QSPI_SD0_STATUS   (RP2040_IO_QSPI_BASE + RP2040_IO_QSPI_GPIO_QSPI_SD0_STATUS_OFFSET)
#define RP2040_IO_QSPI_GPIO_QSPI_SD0_CTRL     (RP2040_IO_QSPI_BASE + RP2040_IO_QSPI_GPIO_QSPI_SD0_CTRL_OFFSET)
#define RP2040_IO_QSPI_GPIO_QSPI_SD1_STATUS   (RP2040_IO_QSPI_BASE + RP2040_IO_QSPI_GPIO_QSPI_SD1_STATUS_OFFSET)
#define RP2040_IO_QSPI_GPIO_QSPI_SD1_CTRL     (RP2040_IO_QSPI_BASE + RP2040_IO_QSPI_GPIO_QSPI_SD1_CTRL_OFFSET)
#define RP2040_IO_QSPI_GPIO_QSPI_SD2_STATUS   (RP2040_IO_QSPI_BASE + RP2040_IO_QSPI_GPIO_QSPI_SD2_STATUS_OFFSET)
#define RP2040_IO_QSPI_GPIO_QSPI_SD2_CTRL     (RP2040_IO_QSPI_BASE + RP2040_IO_QSPI_GPIO_QSPI_SD2_CTRL_OFFSET)
#define RP2040_IO_QSPI_GPIO_QSPI_SD3_STATUS   (RP2040_IO_QSPI_BASE + RP2040_IO_QSPI_GPIO_QSPI_SD3_STATUS_OFFSET)
#define RP2040_IO_QSPI_GPIO_QSPI_SD3_CTRL     (RP2040_IO_QSPI_BASE + RP2040_IO_QSPI_GPIO_QSPI_SD3_CTRL_OFFSET)
#define RP2040_IO_QSPI_INTR                   (RP2040_IO_QSPI_BASE + RP2040_IO_QSPI_INTR_OFFSET)
#define RP2040_IO_QSPI_PROC0_INTE             (RP2040_IO_QSPI_BASE + RP2040_IO_QSPI_PROC0_INTE_OFFSET)
#define RP2040_IO_QSPI_PROC0_INTF             (RP2040_IO_QSPI_BASE + RP2040_IO_QSPI_PROC0_INTF_OFFSET)
#define RP2040_IO_QSPI_PROC0_INTS             (RP2040_IO_QSPI_BASE + RP2040_IO_QSPI_PROC0_INTS_OFFSET)
#define RP2040_IO_QSPI_PROC1_INTE             (RP2040_IO_QSPI_BASE + RP2040_IO_QSPI_PROC1_INTE_OFFSET)
#define RP2040_IO_QSPI_PROC1_INTF             (RP2040_IO_QSPI_BASE + RP2040_IO_QSPI_PROC1_INTF_OFFSET)
#define RP2040_IO_QSPI_PROC1_INTS             (RP2040_IO_QSPI_BASE + RP2040_IO_QSPI_PROC1_INTS_OFFSET)
#define RP2040_IO_QSPI_DORMANT_WAKE_INTE      (RP2040_IO_QSPI_BASE + RP2040_IO_QSPI_DORMANT_WAKE_INTE_OFFSET)
#define RP2040_IO_QSPI_DORMANT_WAKE_INTF      (RP2040_IO_QSPI_BASE + RP2040_IO_QSPI_DORMANT_WAKE_INTF_OFFSET)
#define RP2040_IO_QSPI_DORMANT_WAKE_INTS      (RP2040_IO_QSPI_BASE + RP2040_IO_QSPI_DORMANT_WAKE_INTS_OFFSET)


/* Register bit definitions *************************************************/


#define RP2040_IO_QSPI_GPIO_QSPI_SCLK_STATUS_IRQTOPROC              (1 << 26)  /* interrupt to processors, after override is applied */
#define RP2040_IO_QSPI_GPIO_QSPI_SCLK_STATUS_IRQFROMPAD             (1 << 24)  /* interrupt from pad before override is applied */
#define RP2040_IO_QSPI_GPIO_QSPI_SCLK_STATUS_INTOPERI               (1 << 19)  /* input signal to peripheral, after override is applied */
#define RP2040_IO_QSPI_GPIO_QSPI_SCLK_STATUS_INFROMPAD              (1 << 17)  /* input signal from pad, before override is applied */
#define RP2040_IO_QSPI_GPIO_QSPI_SCLK_STATUS_OETOPAD                (1 << 13)  /* output enable to pad after register override is applied */
#define RP2040_IO_QSPI_GPIO_QSPI_SCLK_STATUS_OEFROMPERI             (1 << 12)  /* output enable from selected peripheral, before register override is applied */
#define RP2040_IO_QSPI_GPIO_QSPI_SCLK_STATUS_OUTTOPAD               (1 << 9)  /* output signal to pad after register override is applied */
#define RP2040_IO_QSPI_GPIO_QSPI_SCLK_STATUS_OUTFROMPERI            (1 << 8)  /* output signal from selected peripheral, before register override is applied */

#define RP2040_IO_QSPI_GPIO_QSPI_SCLK_CTRL_IRQOVER_SHIFT            (28)
#define RP2040_IO_QSPI_GPIO_QSPI_SCLK_CTRL_IRQOVER_MASK             (0x03 << RP2040_IO_QSPI_GPIO_QSPI_SCLK_CTRL_IRQOVER_SHIFT)
#define RP2040_IO_QSPI_GPIO_QSPI_SCLK_CTRL_IRQOVER_NORMAL           (0x0 << RP2040_IO_QSPI_GPIO_QSPI_SCLK_CTRL_IRQOVER_SHIFT)  /* don't invert the interrupt */
#define RP2040_IO_QSPI_GPIO_QSPI_SCLK_CTRL_IRQOVER_INVERT           (0x1 << RP2040_IO_QSPI_GPIO_QSPI_SCLK_CTRL_IRQOVER_SHIFT)  /* invert the interrupt */
#define RP2040_IO_QSPI_GPIO_QSPI_SCLK_CTRL_IRQOVER_LOW              (0x2 << RP2040_IO_QSPI_GPIO_QSPI_SCLK_CTRL_IRQOVER_SHIFT)  /* drive interrupt low */
#define RP2040_IO_QSPI_GPIO_QSPI_SCLK_CTRL_IRQOVER_HIGH             (0x3 << RP2040_IO_QSPI_GPIO_QSPI_SCLK_CTRL_IRQOVER_SHIFT)  /* drive interrupt high */
#define RP2040_IO_QSPI_GPIO_QSPI_SCLK_CTRL_INOVER_SHIFT             (16)
#define RP2040_IO_QSPI_GPIO_QSPI_SCLK_CTRL_INOVER_MASK              (0x03 << RP2040_IO_QSPI_GPIO_QSPI_SCLK_CTRL_INOVER_SHIFT)
#define RP2040_IO_QSPI_GPIO_QSPI_SCLK_CTRL_INOVER_NORMAL            (0x0 << RP2040_IO_QSPI_GPIO_QSPI_SCLK_CTRL_INOVER_SHIFT)  /* don't invert the peri input */
#define RP2040_IO_QSPI_GPIO_QSPI_SCLK_CTRL_INOVER_INVERT            (0x1 << RP2040_IO_QSPI_GPIO_QSPI_SCLK_CTRL_INOVER_SHIFT)  /* invert the peri input */
#define RP2040_IO_QSPI_GPIO_QSPI_SCLK_CTRL_INOVER_LOW               (0x2 << RP2040_IO_QSPI_GPIO_QSPI_SCLK_CTRL_INOVER_SHIFT)  /* drive peri input low */
#define RP2040_IO_QSPI_GPIO_QSPI_SCLK_CTRL_INOVER_HIGH              (0x3 << RP2040_IO_QSPI_GPIO_QSPI_SCLK_CTRL_INOVER_SHIFT)  /* drive peri input high */
#define RP2040_IO_QSPI_GPIO_QSPI_SCLK_CTRL_OEOVER_SHIFT             (12)
#define RP2040_IO_QSPI_GPIO_QSPI_SCLK_CTRL_OEOVER_MASK              (0x03 << RP2040_IO_QSPI_GPIO_QSPI_SCLK_CTRL_OEOVER_SHIFT)
#define RP2040_IO_QSPI_GPIO_QSPI_SCLK_CTRL_OEOVER_NORMAL            (0x0 << RP2040_IO_QSPI_GPIO_QSPI_SCLK_CTRL_OEOVER_SHIFT)  /* drive output enable from peripheral signal selected by funcsel */
#define RP2040_IO_QSPI_GPIO_QSPI_SCLK_CTRL_OEOVER_INVERT            (0x1 << RP2040_IO_QSPI_GPIO_QSPI_SCLK_CTRL_OEOVER_SHIFT)  /* drive output enable from inverse of peripheral signal selected by funcsel */
#define RP2040_IO_QSPI_GPIO_QSPI_SCLK_CTRL_OEOVER_DISABLE           (0x2 << RP2040_IO_QSPI_GPIO_QSPI_SCLK_CTRL_OEOVER_SHIFT)  /* disable output */
#define RP2040_IO_QSPI_GPIO_QSPI_SCLK_CTRL_OEOVER_ENABLE            (0x3 << RP2040_IO_QSPI_GPIO_QSPI_SCLK_CTRL_OEOVER_SHIFT)  /* enable output */
#define RP2040_IO_QSPI_GPIO_QSPI_SCLK_CTRL_OUTOVER_SHIFT            (8)
#define RP2040_IO_QSPI_GPIO_QSPI_SCLK_CTRL_OUTOVER_MASK             (0x03 << RP2040_IO_QSPI_GPIO_QSPI_SCLK_CTRL_OUTOVER_SHIFT)
#define RP2040_IO_QSPI_GPIO_QSPI_SCLK_CTRL_OUTOVER_NORMAL           (0x0 << RP2040_IO_QSPI_GPIO_QSPI_SCLK_CTRL_OUTOVER_SHIFT)  /* drive output from peripheral signal selected by funcsel */
#define RP2040_IO_QSPI_GPIO_QSPI_SCLK_CTRL_OUTOVER_INVERT           (0x1 << RP2040_IO_QSPI_GPIO_QSPI_SCLK_CTRL_OUTOVER_SHIFT)  /* drive output from inverse of peripheral signal selected by funcsel */
#define RP2040_IO_QSPI_GPIO_QSPI_SCLK_CTRL_OUTOVER_LOW              (0x2 << RP2040_IO_QSPI_GPIO_QSPI_SCLK_CTRL_OUTOVER_SHIFT)  /* drive output low */
#define RP2040_IO_QSPI_GPIO_QSPI_SCLK_CTRL_OUTOVER_HIGH             (0x3 << RP2040_IO_QSPI_GPIO_QSPI_SCLK_CTRL_OUTOVER_SHIFT)  /* drive output high */
#define RP2040_IO_QSPI_GPIO_QSPI_SCLK_CTRL_FUNCSEL_MASK             (0x1f)
#define RP2040_IO_QSPI_GPIO_QSPI_SCLK_CTRL_FUNCSEL_XIP_SCLK         (0x0)
#define RP2040_IO_QSPI_GPIO_QSPI_SCLK_CTRL_FUNCSEL_SIO_30           (0x5)
#define RP2040_IO_QSPI_GPIO_QSPI_SCLK_CTRL_FUNCSEL_NULL             (0x1f)

#define RP2040_IO_QSPI_GPIO_QSPI_SS_STATUS_IRQTOPROC                (1 << 26)  /* interrupt to processors, after override is applied */
#define RP2040_IO_QSPI_GPIO_QSPI_SS_STATUS_IRQFROMPAD               (1 << 24)  /* interrupt from pad before override is applied */
#define RP2040_IO_QSPI_GPIO_QSPI_SS_STATUS_INTOPERI                 (1 << 19)  /* input signal to peripheral, after override is applied */
#define RP2040_IO_QSPI_GPIO_QSPI_SS_STATUS_INFROMPAD                (1 << 17)  /* input signal from pad, before override is applied */
#define RP2040_IO_QSPI_GPIO_QSPI_SS_STATUS_OETOPAD                  (1 << 13)  /* output enable to pad after register override is applied */
#define RP2040_IO_QSPI_GPIO_QSPI_SS_STATUS_OEFROMPERI               (1 << 12)  /* output enable from selected peripheral, before register override is applied */
#define RP2040_IO_QSPI_GPIO_QSPI_SS_STATUS_OUTTOPAD                 (1 << 9)  /* output signal to pad after register override is applied */
#define RP2040_IO_QSPI_GPIO_QSPI_SS_STATUS_OUTFROMPERI              (1 << 8)  /* output signal from selected peripheral, before register override is applied */

#define RP2040_IO_QSPI_GPIO_QSPI_SS_CTRL_IRQOVER_SHIFT              (28)
#define RP2040_IO_QSPI_GPIO_QSPI_SS_CTRL_IRQOVER_MASK               (0x03 << RP2040_IO_QSPI_GPIO_QSPI_SS_CTRL_IRQOVER_SHIFT)
#define RP2040_IO_QSPI_GPIO_QSPI_SS_CTRL_IRQOVER_NORMAL             (0x0 << RP2040_IO_QSPI_GPIO_QSPI_SS_CTRL_IRQOVER_SHIFT)  /* don't invert the interrupt */
#define RP2040_IO_QSPI_GPIO_QSPI_SS_CTRL_IRQOVER_INVERT             (0x1 << RP2040_IO_QSPI_GPIO_QSPI_SS_CTRL_IRQOVER_SHIFT)  /* invert the interrupt */
#define RP2040_IO_QSPI_GPIO_QSPI_SS_CTRL_IRQOVER_LOW                (0x2 << RP2040_IO_QSPI_GPIO_QSPI_SS_CTRL_IRQOVER_SHIFT)  /* drive interrupt low */
#define RP2040_IO_QSPI_GPIO_QSPI_SS_CTRL_IRQOVER_HIGH               (0x3 << RP2040_IO_QSPI_GPIO_QSPI_SS_CTRL_IRQOVER_SHIFT)  /* drive interrupt high */
#define RP2040_IO_QSPI_GPIO_QSPI_SS_CTRL_INOVER_SHIFT               (16)
#define RP2040_IO_QSPI_GPIO_QSPI_SS_CTRL_INOVER_MASK                (0x03 << RP2040_IO_QSPI_GPIO_QSPI_SS_CTRL_INOVER_SHIFT)
#define RP2040_IO_QSPI_GPIO_QSPI_SS_CTRL_INOVER_NORMAL              (0x0 << RP2040_IO_QSPI_GPIO_QSPI_SS_CTRL_INOVER_SHIFT)  /* don't invert the peri input */
#define RP2040_IO_QSPI_GPIO_QSPI_SS_CTRL_INOVER_INVERT              (0x1 << RP2040_IO_QSPI_GPIO_QSPI_SS_CTRL_INOVER_SHIFT)  /* invert the peri input */
#define RP2040_IO_QSPI_GPIO_QSPI_SS_CTRL_INOVER_LOW                 (0x2 << RP2040_IO_QSPI_GPIO_QSPI_SS_CTRL_INOVER_SHIFT)  /* drive peri input low */
#define RP2040_IO_QSPI_GPIO_QSPI_SS_CTRL_INOVER_HIGH                (0x3 << RP2040_IO_QSPI_GPIO_QSPI_SS_CTRL_INOVER_SHIFT)  /* drive peri input high */
#define RP2040_IO_QSPI_GPIO_QSPI_SS_CTRL_OEOVER_SHIFT               (12)
#define RP2040_IO_QSPI_GPIO_QSPI_SS_CTRL_OEOVER_MASK                (0x03 << RP2040_IO_QSPI_GPIO_QSPI_SS_CTRL_OEOVER_SHIFT)
#define RP2040_IO_QSPI_GPIO_QSPI_SS_CTRL_OEOVER_NORMAL              (0x0 << RP2040_IO_QSPI_GPIO_QSPI_SS_CTRL_OEOVER_SHIFT)  /* drive output enable from peripheral signal selected by funcsel */
#define RP2040_IO_QSPI_GPIO_QSPI_SS_CTRL_OEOVER_INVERT              (0x1 << RP2040_IO_QSPI_GPIO_QSPI_SS_CTRL_OEOVER_SHIFT)  /* drive output enable from inverse of peripheral signal selected by funcsel */
#define RP2040_IO_QSPI_GPIO_QSPI_SS_CTRL_OEOVER_DISABLE             (0x2 << RP2040_IO_QSPI_GPIO_QSPI_SS_CTRL_OEOVER_SHIFT)  /* disable output */
#define RP2040_IO_QSPI_GPIO_QSPI_SS_CTRL_OEOVER_ENABLE              (0x3 << RP2040_IO_QSPI_GPIO_QSPI_SS_CTRL_OEOVER_SHIFT)  /* enable output */
#define RP2040_IO_QSPI_GPIO_QSPI_SS_CTRL_OUTOVER_SHIFT              (8)
#define RP2040_IO_QSPI_GPIO_QSPI_SS_CTRL_OUTOVER_MASK               (0x03 << RP2040_IO_QSPI_GPIO_QSPI_SS_CTRL_OUTOVER_SHIFT)
#define RP2040_IO_QSPI_GPIO_QSPI_SS_CTRL_OUTOVER_NORMAL             (0x0 << RP2040_IO_QSPI_GPIO_QSPI_SS_CTRL_OUTOVER_SHIFT)  /* drive output from peripheral signal selected by funcsel */
#define RP2040_IO_QSPI_GPIO_QSPI_SS_CTRL_OUTOVER_INVERT             (0x1 << RP2040_IO_QSPI_GPIO_QSPI_SS_CTRL_OUTOVER_SHIFT)  /* drive output from inverse of peripheral signal selected by funcsel */
#define RP2040_IO_QSPI_GPIO_QSPI_SS_CTRL_OUTOVER_LOW                (0x2 << RP2040_IO_QSPI_GPIO_QSPI_SS_CTRL_OUTOVER_SHIFT)  /* drive output low */
#define RP2040_IO_QSPI_GPIO_QSPI_SS_CTRL_OUTOVER_HIGH               (0x3 << RP2040_IO_QSPI_GPIO_QSPI_SS_CTRL_OUTOVER_SHIFT)  /* drive output high */
#define RP2040_IO_QSPI_GPIO_QSPI_SS_CTRL_FUNCSEL_MASK               (0x1f)
#define RP2040_IO_QSPI_GPIO_QSPI_SS_CTRL_FUNCSEL_XIP_SS_N           (0x0)
#define RP2040_IO_QSPI_GPIO_QSPI_SS_CTRL_FUNCSEL_SIO_31             (0x5)
#define RP2040_IO_QSPI_GPIO_QSPI_SS_CTRL_FUNCSEL_NULL               (0x1f)

#define RP2040_IO_QSPI_GPIO_QSPI_SD0_STATUS_IRQTOPROC               (1 << 26)  /* interrupt to processors, after override is applied */
#define RP2040_IO_QSPI_GPIO_QSPI_SD0_STATUS_IRQFROMPAD              (1 << 24)  /* interrupt from pad before override is applied */
#define RP2040_IO_QSPI_GPIO_QSPI_SD0_STATUS_INTOPERI                (1 << 19)  /* input signal to peripheral, after override is applied */
#define RP2040_IO_QSPI_GPIO_QSPI_SD0_STATUS_INFROMPAD               (1 << 17)  /* input signal from pad, before override is applied */
#define RP2040_IO_QSPI_GPIO_QSPI_SD0_STATUS_OETOPAD                 (1 << 13)  /* output enable to pad after register override is applied */
#define RP2040_IO_QSPI_GPIO_QSPI_SD0_STATUS_OEFROMPERI              (1 << 12)  /* output enable from selected peripheral, before register override is applied */
#define RP2040_IO_QSPI_GPIO_QSPI_SD0_STATUS_OUTTOPAD                (1 << 9)  /* output signal to pad after register override is applied */
#define RP2040_IO_QSPI_GPIO_QSPI_SD0_STATUS_OUTFROMPERI             (1 << 8)  /* output signal from selected peripheral, before register override is applied */

#define RP2040_IO_QSPI_GPIO_QSPI_SD0_CTRL_IRQOVER_SHIFT             (28)
#define RP2040_IO_QSPI_GPIO_QSPI_SD0_CTRL_IRQOVER_MASK              (0x03 << RP2040_IO_QSPI_GPIO_QSPI_SD0_CTRL_IRQOVER_SHIFT)
#define RP2040_IO_QSPI_GPIO_QSPI_SD0_CTRL_IRQOVER_NORMAL            (0x0 << RP2040_IO_QSPI_GPIO_QSPI_SD0_CTRL_IRQOVER_SHIFT)  /* don't invert the interrupt */
#define RP2040_IO_QSPI_GPIO_QSPI_SD0_CTRL_IRQOVER_INVERT            (0x1 << RP2040_IO_QSPI_GPIO_QSPI_SD0_CTRL_IRQOVER_SHIFT)  /* invert the interrupt */
#define RP2040_IO_QSPI_GPIO_QSPI_SD0_CTRL_IRQOVER_LOW               (0x2 << RP2040_IO_QSPI_GPIO_QSPI_SD0_CTRL_IRQOVER_SHIFT)  /* drive interrupt low */
#define RP2040_IO_QSPI_GPIO_QSPI_SD0_CTRL_IRQOVER_HIGH              (0x3 << RP2040_IO_QSPI_GPIO_QSPI_SD0_CTRL_IRQOVER_SHIFT)  /* drive interrupt high */
#define RP2040_IO_QSPI_GPIO_QSPI_SD0_CTRL_INOVER_SHIFT              (16)
#define RP2040_IO_QSPI_GPIO_QSPI_SD0_CTRL_INOVER_MASK               (0x03 << RP2040_IO_QSPI_GPIO_QSPI_SD0_CTRL_INOVER_SHIFT)
#define RP2040_IO_QSPI_GPIO_QSPI_SD0_CTRL_INOVER_NORMAL             (0x0 << RP2040_IO_QSPI_GPIO_QSPI_SD0_CTRL_INOVER_SHIFT)  /* don't invert the peri input */
#define RP2040_IO_QSPI_GPIO_QSPI_SD0_CTRL_INOVER_INVERT             (0x1 << RP2040_IO_QSPI_GPIO_QSPI_SD0_CTRL_INOVER_SHIFT)  /* invert the peri input */
#define RP2040_IO_QSPI_GPIO_QSPI_SD0_CTRL_INOVER_LOW                (0x2 << RP2040_IO_QSPI_GPIO_QSPI_SD0_CTRL_INOVER_SHIFT)  /* drive peri input low */
#define RP2040_IO_QSPI_GPIO_QSPI_SD0_CTRL_INOVER_HIGH               (0x3 << RP2040_IO_QSPI_GPIO_QSPI_SD0_CTRL_INOVER_SHIFT)  /* drive peri input high */
#define RP2040_IO_QSPI_GPIO_QSPI_SD0_CTRL_OEOVER_SHIFT              (12)
#define RP2040_IO_QSPI_GPIO_QSPI_SD0_CTRL_OEOVER_MASK               (0x03 << RP2040_IO_QSPI_GPIO_QSPI_SD0_CTRL_OEOVER_SHIFT)
#define RP2040_IO_QSPI_GPIO_QSPI_SD0_CTRL_OEOVER_NORMAL             (0x0 << RP2040_IO_QSPI_GPIO_QSPI_SD0_CTRL_OEOVER_SHIFT)  /* drive output enable from peripheral signal selected by funcsel */
#define RP2040_IO_QSPI_GPIO_QSPI_SD0_CTRL_OEOVER_INVERT             (0x1 << RP2040_IO_QSPI_GPIO_QSPI_SD0_CTRL_OEOVER_SHIFT)  /* drive output enable from inverse of peripheral signal selected by funcsel */
#define RP2040_IO_QSPI_GPIO_QSPI_SD0_CTRL_OEOVER_DISABLE            (0x2 << RP2040_IO_QSPI_GPIO_QSPI_SD0_CTRL_OEOVER_SHIFT)  /* disable output */
#define RP2040_IO_QSPI_GPIO_QSPI_SD0_CTRL_OEOVER_ENABLE             (0x3 << RP2040_IO_QSPI_GPIO_QSPI_SD0_CTRL_OEOVER_SHIFT)  /* enable output */
#define RP2040_IO_QSPI_GPIO_QSPI_SD0_CTRL_OUTOVER_SHIFT             (8)
#define RP2040_IO_QSPI_GPIO_QSPI_SD0_CTRL_OUTOVER_MASK              (0x03 << RP2040_IO_QSPI_GPIO_QSPI_SD0_CTRL_OUTOVER_SHIFT)
#define RP2040_IO_QSPI_GPIO_QSPI_SD0_CTRL_OUTOVER_NORMAL            (0x0 << RP2040_IO_QSPI_GPIO_QSPI_SD0_CTRL_OUTOVER_SHIFT)  /* drive output from peripheral signal selected by funcsel */
#define RP2040_IO_QSPI_GPIO_QSPI_SD0_CTRL_OUTOVER_INVERT            (0x1 << RP2040_IO_QSPI_GPIO_QSPI_SD0_CTRL_OUTOVER_SHIFT)  /* drive output from inverse of peripheral signal selected by funcsel */
#define RP2040_IO_QSPI_GPIO_QSPI_SD0_CTRL_OUTOVER_LOW               (0x2 << RP2040_IO_QSPI_GPIO_QSPI_SD0_CTRL_OUTOVER_SHIFT)  /* drive output low */
#define RP2040_IO_QSPI_GPIO_QSPI_SD0_CTRL_OUTOVER_HIGH              (0x3 << RP2040_IO_QSPI_GPIO_QSPI_SD0_CTRL_OUTOVER_SHIFT)  /* drive output high */
#define RP2040_IO_QSPI_GPIO_QSPI_SD0_CTRL_FUNCSEL_MASK              (0x1f)
#define RP2040_IO_QSPI_GPIO_QSPI_SD0_CTRL_FUNCSEL_XIP_SD0           (0x0)
#define RP2040_IO_QSPI_GPIO_QSPI_SD0_CTRL_FUNCSEL_SIO_32            (0x5)
#define RP2040_IO_QSPI_GPIO_QSPI_SD0_CTRL_FUNCSEL_NULL              (0x1f)

#define RP2040_IO_QSPI_GPIO_QSPI_SD1_STATUS_IRQTOPROC               (1 << 26)  /* interrupt to processors, after override is applied */
#define RP2040_IO_QSPI_GPIO_QSPI_SD1_STATUS_IRQFROMPAD              (1 << 24)  /* interrupt from pad before override is applied */
#define RP2040_IO_QSPI_GPIO_QSPI_SD1_STATUS_INTOPERI                (1 << 19)  /* input signal to peripheral, after override is applied */
#define RP2040_IO_QSPI_GPIO_QSPI_SD1_STATUS_INFROMPAD               (1 << 17)  /* input signal from pad, before override is applied */
#define RP2040_IO_QSPI_GPIO_QSPI_SD1_STATUS_OETOPAD                 (1 << 13)  /* output enable to pad after register override is applied */
#define RP2040_IO_QSPI_GPIO_QSPI_SD1_STATUS_OEFROMPERI              (1 << 12)  /* output enable from selected peripheral, before register override is applied */
#define RP2040_IO_QSPI_GPIO_QSPI_SD1_STATUS_OUTTOPAD                (1 << 9)  /* output signal to pad after register override is applied */
#define RP2040_IO_QSPI_GPIO_QSPI_SD1_STATUS_OUTFROMPERI             (1 << 8)  /* output signal from selected peripheral, before register override is applied */

#define RP2040_IO_QSPI_GPIO_QSPI_SD1_CTRL_IRQOVER_SHIFT             (28)
#define RP2040_IO_QSPI_GPIO_QSPI_SD1_CTRL_IRQOVER_MASK              (0x03 << RP2040_IO_QSPI_GPIO_QSPI_SD1_CTRL_IRQOVER_SHIFT)
#define RP2040_IO_QSPI_GPIO_QSPI_SD1_CTRL_IRQOVER_NORMAL            (0x0 << RP2040_IO_QSPI_GPIO_QSPI_SD1_CTRL_IRQOVER_SHIFT)  /* don't invert the interrupt */
#define RP2040_IO_QSPI_GPIO_QSPI_SD1_CTRL_IRQOVER_INVERT            (0x1 << RP2040_IO_QSPI_GPIO_QSPI_SD1_CTRL_IRQOVER_SHIFT)  /* invert the interrupt */
#define RP2040_IO_QSPI_GPIO_QSPI_SD1_CTRL_IRQOVER_LOW               (0x2 << RP2040_IO_QSPI_GPIO_QSPI_SD1_CTRL_IRQOVER_SHIFT)  /* drive interrupt low */
#define RP2040_IO_QSPI_GPIO_QSPI_SD1_CTRL_IRQOVER_HIGH              (0x3 << RP2040_IO_QSPI_GPIO_QSPI_SD1_CTRL_IRQOVER_SHIFT)  /* drive interrupt high */
#define RP2040_IO_QSPI_GPIO_QSPI_SD1_CTRL_INOVER_SHIFT              (16)
#define RP2040_IO_QSPI_GPIO_QSPI_SD1_CTRL_INOVER_MASK               (0x03 << RP2040_IO_QSPI_GPIO_QSPI_SD1_CTRL_INOVER_SHIFT)
#define RP2040_IO_QSPI_GPIO_QSPI_SD1_CTRL_INOVER_NORMAL             (0x0 << RP2040_IO_QSPI_GPIO_QSPI_SD1_CTRL_INOVER_SHIFT)  /* don't invert the peri input */
#define RP2040_IO_QSPI_GPIO_QSPI_SD1_CTRL_INOVER_INVERT             (0x1 << RP2040_IO_QSPI_GPIO_QSPI_SD1_CTRL_INOVER_SHIFT)  /* invert the peri input */
#define RP2040_IO_QSPI_GPIO_QSPI_SD1_CTRL_INOVER_LOW                (0x2 << RP2040_IO_QSPI_GPIO_QSPI_SD1_CTRL_INOVER_SHIFT)  /* drive peri input low */
#define RP2040_IO_QSPI_GPIO_QSPI_SD1_CTRL_INOVER_HIGH               (0x3 << RP2040_IO_QSPI_GPIO_QSPI_SD1_CTRL_INOVER_SHIFT)  /* drive peri input high */
#define RP2040_IO_QSPI_GPIO_QSPI_SD1_CTRL_OEOVER_SHIFT              (12)
#define RP2040_IO_QSPI_GPIO_QSPI_SD1_CTRL_OEOVER_MASK               (0x03 << RP2040_IO_QSPI_GPIO_QSPI_SD1_CTRL_OEOVER_SHIFT)
#define RP2040_IO_QSPI_GPIO_QSPI_SD1_CTRL_OEOVER_NORMAL             (0x0 << RP2040_IO_QSPI_GPIO_QSPI_SD1_CTRL_OEOVER_SHIFT)  /* drive output enable from peripheral signal selected by funcsel */
#define RP2040_IO_QSPI_GPIO_QSPI_SD1_CTRL_OEOVER_INVERT             (0x1 << RP2040_IO_QSPI_GPIO_QSPI_SD1_CTRL_OEOVER_SHIFT)  /* drive output enable from inverse of peripheral signal selected by funcsel */
#define RP2040_IO_QSPI_GPIO_QSPI_SD1_CTRL_OEOVER_DISABLE            (0x2 << RP2040_IO_QSPI_GPIO_QSPI_SD1_CTRL_OEOVER_SHIFT)  /* disable output */
#define RP2040_IO_QSPI_GPIO_QSPI_SD1_CTRL_OEOVER_ENABLE             (0x3 << RP2040_IO_QSPI_GPIO_QSPI_SD1_CTRL_OEOVER_SHIFT)  /* enable output */
#define RP2040_IO_QSPI_GPIO_QSPI_SD1_CTRL_OUTOVER_SHIFT             (8)
#define RP2040_IO_QSPI_GPIO_QSPI_SD1_CTRL_OUTOVER_MASK              (0x03 << RP2040_IO_QSPI_GPIO_QSPI_SD1_CTRL_OUTOVER_SHIFT)
#define RP2040_IO_QSPI_GPIO_QSPI_SD1_CTRL_OUTOVER_NORMAL            (0x0 << RP2040_IO_QSPI_GPIO_QSPI_SD1_CTRL_OUTOVER_SHIFT)  /* drive output from peripheral signal selected by funcsel */
#define RP2040_IO_QSPI_GPIO_QSPI_SD1_CTRL_OUTOVER_INVERT            (0x1 << RP2040_IO_QSPI_GPIO_QSPI_SD1_CTRL_OUTOVER_SHIFT)  /* drive output from inverse of peripheral signal selected by funcsel */
#define RP2040_IO_QSPI_GPIO_QSPI_SD1_CTRL_OUTOVER_LOW               (0x2 << RP2040_IO_QSPI_GPIO_QSPI_SD1_CTRL_OUTOVER_SHIFT)  /* drive output low */
#define RP2040_IO_QSPI_GPIO_QSPI_SD1_CTRL_OUTOVER_HIGH              (0x3 << RP2040_IO_QSPI_GPIO_QSPI_SD1_CTRL_OUTOVER_SHIFT)  /* drive output high */
#define RP2040_IO_QSPI_GPIO_QSPI_SD1_CTRL_FUNCSEL_MASK              (0x1f)
#define RP2040_IO_QSPI_GPIO_QSPI_SD1_CTRL_FUNCSEL_XIP_SD1           (0x0)
#define RP2040_IO_QSPI_GPIO_QSPI_SD1_CTRL_FUNCSEL_SIO_33            (0x5)
#define RP2040_IO_QSPI_GPIO_QSPI_SD1_CTRL_FUNCSEL_NULL              (0x1f)

#define RP2040_IO_QSPI_GPIO_QSPI_SD2_STATUS_IRQTOPROC               (1 << 26)  /* interrupt to processors, after override is applied */
#define RP2040_IO_QSPI_GPIO_QSPI_SD2_STATUS_IRQFROMPAD              (1 << 24)  /* interrupt from pad before override is applied */
#define RP2040_IO_QSPI_GPIO_QSPI_SD2_STATUS_INTOPERI                (1 << 19)  /* input signal to peripheral, after override is applied */
#define RP2040_IO_QSPI_GPIO_QSPI_SD2_STATUS_INFROMPAD               (1 << 17)  /* input signal from pad, before override is applied */
#define RP2040_IO_QSPI_GPIO_QSPI_SD2_STATUS_OETOPAD                 (1 << 13)  /* output enable to pad after register override is applied */
#define RP2040_IO_QSPI_GPIO_QSPI_SD2_STATUS_OEFROMPERI              (1 << 12)  /* output enable from selected peripheral, before register override is applied */
#define RP2040_IO_QSPI_GPIO_QSPI_SD2_STATUS_OUTTOPAD                (1 << 9)  /* output signal to pad after register override is applied */
#define RP2040_IO_QSPI_GPIO_QSPI_SD2_STATUS_OUTFROMPERI             (1 << 8)  /* output signal from selected peripheral, before register override is applied */

#define RP2040_IO_QSPI_GPIO_QSPI_SD2_CTRL_IRQOVER_SHIFT             (28)
#define RP2040_IO_QSPI_GPIO_QSPI_SD2_CTRL_IRQOVER_MASK              (0x03 << RP2040_IO_QSPI_GPIO_QSPI_SD2_CTRL_IRQOVER_SHIFT)
#define RP2040_IO_QSPI_GPIO_QSPI_SD2_CTRL_IRQOVER_NORMAL            (0x0 << RP2040_IO_QSPI_GPIO_QSPI_SD2_CTRL_IRQOVER_SHIFT)  /* don't invert the interrupt */
#define RP2040_IO_QSPI_GPIO_QSPI_SD2_CTRL_IRQOVER_INVERT            (0x1 << RP2040_IO_QSPI_GPIO_QSPI_SD2_CTRL_IRQOVER_SHIFT)  /* invert the interrupt */
#define RP2040_IO_QSPI_GPIO_QSPI_SD2_CTRL_IRQOVER_LOW               (0x2 << RP2040_IO_QSPI_GPIO_QSPI_SD2_CTRL_IRQOVER_SHIFT)  /* drive interrupt low */
#define RP2040_IO_QSPI_GPIO_QSPI_SD2_CTRL_IRQOVER_HIGH              (0x3 << RP2040_IO_QSPI_GPIO_QSPI_SD2_CTRL_IRQOVER_SHIFT)  /* drive interrupt high */
#define RP2040_IO_QSPI_GPIO_QSPI_SD2_CTRL_INOVER_SHIFT              (16)
#define RP2040_IO_QSPI_GPIO_QSPI_SD2_CTRL_INOVER_MASK               (0x03 << RP2040_IO_QSPI_GPIO_QSPI_SD2_CTRL_INOVER_SHIFT)
#define RP2040_IO_QSPI_GPIO_QSPI_SD2_CTRL_INOVER_NORMAL             (0x0 << RP2040_IO_QSPI_GPIO_QSPI_SD2_CTRL_INOVER_SHIFT)  /* don't invert the peri input */
#define RP2040_IO_QSPI_GPIO_QSPI_SD2_CTRL_INOVER_INVERT             (0x1 << RP2040_IO_QSPI_GPIO_QSPI_SD2_CTRL_INOVER_SHIFT)  /* invert the peri input */
#define RP2040_IO_QSPI_GPIO_QSPI_SD2_CTRL_INOVER_LOW                (0x2 << RP2040_IO_QSPI_GPIO_QSPI_SD2_CTRL_INOVER_SHIFT)  /* drive peri input low */
#define RP2040_IO_QSPI_GPIO_QSPI_SD2_CTRL_INOVER_HIGH               (0x3 << RP2040_IO_QSPI_GPIO_QSPI_SD2_CTRL_INOVER_SHIFT)  /* drive peri input high */
#define RP2040_IO_QSPI_GPIO_QSPI_SD2_CTRL_OEOVER_SHIFT              (12)
#define RP2040_IO_QSPI_GPIO_QSPI_SD2_CTRL_OEOVER_MASK               (0x03 << RP2040_IO_QSPI_GPIO_QSPI_SD2_CTRL_OEOVER_SHIFT)
#define RP2040_IO_QSPI_GPIO_QSPI_SD2_CTRL_OEOVER_NORMAL             (0x0 << RP2040_IO_QSPI_GPIO_QSPI_SD2_CTRL_OEOVER_SHIFT)  /* drive output enable from peripheral signal selected by funcsel */
#define RP2040_IO_QSPI_GPIO_QSPI_SD2_CTRL_OEOVER_INVERT             (0x1 << RP2040_IO_QSPI_GPIO_QSPI_SD2_CTRL_OEOVER_SHIFT)  /* drive output enable from inverse of peripheral signal selected by funcsel */
#define RP2040_IO_QSPI_GPIO_QSPI_SD2_CTRL_OEOVER_DISABLE            (0x2 << RP2040_IO_QSPI_GPIO_QSPI_SD2_CTRL_OEOVER_SHIFT)  /* disable output */
#define RP2040_IO_QSPI_GPIO_QSPI_SD2_CTRL_OEOVER_ENABLE             (0x3 << RP2040_IO_QSPI_GPIO_QSPI_SD2_CTRL_OEOVER_SHIFT)  /* enable output */
#define RP2040_IO_QSPI_GPIO_QSPI_SD2_CTRL_OUTOVER_SHIFT             (8)
#define RP2040_IO_QSPI_GPIO_QSPI_SD2_CTRL_OUTOVER_MASK              (0x03 << RP2040_IO_QSPI_GPIO_QSPI_SD2_CTRL_OUTOVER_SHIFT)
#define RP2040_IO_QSPI_GPIO_QSPI_SD2_CTRL_OUTOVER_NORMAL            (0x0 << RP2040_IO_QSPI_GPIO_QSPI_SD2_CTRL_OUTOVER_SHIFT)  /* drive output from peripheral signal selected by funcsel */
#define RP2040_IO_QSPI_GPIO_QSPI_SD2_CTRL_OUTOVER_INVERT            (0x1 << RP2040_IO_QSPI_GPIO_QSPI_SD2_CTRL_OUTOVER_SHIFT)  /* drive output from inverse of peripheral signal selected by funcsel */
#define RP2040_IO_QSPI_GPIO_QSPI_SD2_CTRL_OUTOVER_LOW               (0x2 << RP2040_IO_QSPI_GPIO_QSPI_SD2_CTRL_OUTOVER_SHIFT)  /* drive output low */
#define RP2040_IO_QSPI_GPIO_QSPI_SD2_CTRL_OUTOVER_HIGH              (0x3 << RP2040_IO_QSPI_GPIO_QSPI_SD2_CTRL_OUTOVER_SHIFT)  /* drive output high */
#define RP2040_IO_QSPI_GPIO_QSPI_SD2_CTRL_FUNCSEL_MASK              (0x1f)
#define RP2040_IO_QSPI_GPIO_QSPI_SD2_CTRL_FUNCSEL_XIP_SD2           (0x0)
#define RP2040_IO_QSPI_GPIO_QSPI_SD2_CTRL_FUNCSEL_SIO_34            (0x5)
#define RP2040_IO_QSPI_GPIO_QSPI_SD2_CTRL_FUNCSEL_NULL              (0x1f)

#define RP2040_IO_QSPI_GPIO_QSPI_SD3_STATUS_IRQTOPROC               (1 << 26)  /* interrupt to processors, after override is applied */
#define RP2040_IO_QSPI_GPIO_QSPI_SD3_STATUS_IRQFROMPAD              (1 << 24)  /* interrupt from pad before override is applied */
#define RP2040_IO_QSPI_GPIO_QSPI_SD3_STATUS_INTOPERI                (1 << 19)  /* input signal to peripheral, after override is applied */
#define RP2040_IO_QSPI_GPIO_QSPI_SD3_STATUS_INFROMPAD               (1 << 17)  /* input signal from pad, before override is applied */
#define RP2040_IO_QSPI_GPIO_QSPI_SD3_STATUS_OETOPAD                 (1 << 13)  /* output enable to pad after register override is applied */
#define RP2040_IO_QSPI_GPIO_QSPI_SD3_STATUS_OEFROMPERI              (1 << 12)  /* output enable from selected peripheral, before register override is applied */
#define RP2040_IO_QSPI_GPIO_QSPI_SD3_STATUS_OUTTOPAD                (1 << 9)  /* output signal to pad after register override is applied */
#define RP2040_IO_QSPI_GPIO_QSPI_SD3_STATUS_OUTFROMPERI             (1 << 8)  /* output signal from selected peripheral, before register override is applied */

#define RP2040_IO_QSPI_GPIO_QSPI_SD3_CTRL_IRQOVER_SHIFT             (28)
#define RP2040_IO_QSPI_GPIO_QSPI_SD3_CTRL_IRQOVER_MASK              (0x03 << RP2040_IO_QSPI_GPIO_QSPI_SD3_CTRL_IRQOVER_SHIFT)
#define RP2040_IO_QSPI_GPIO_QSPI_SD3_CTRL_IRQOVER_NORMAL            (0x0 << RP2040_IO_QSPI_GPIO_QSPI_SD3_CTRL_IRQOVER_SHIFT)  /* don't invert the interrupt */
#define RP2040_IO_QSPI_GPIO_QSPI_SD3_CTRL_IRQOVER_INVERT            (0x1 << RP2040_IO_QSPI_GPIO_QSPI_SD3_CTRL_IRQOVER_SHIFT)  /* invert the interrupt */
#define RP2040_IO_QSPI_GPIO_QSPI_SD3_CTRL_IRQOVER_LOW               (0x2 << RP2040_IO_QSPI_GPIO_QSPI_SD3_CTRL_IRQOVER_SHIFT)  /* drive interrupt low */
#define RP2040_IO_QSPI_GPIO_QSPI_SD3_CTRL_IRQOVER_HIGH              (0x3 << RP2040_IO_QSPI_GPIO_QSPI_SD3_CTRL_IRQOVER_SHIFT)  /* drive interrupt high */
#define RP2040_IO_QSPI_GPIO_QSPI_SD3_CTRL_INOVER_SHIFT              (16)
#define RP2040_IO_QSPI_GPIO_QSPI_SD3_CTRL_INOVER_MASK               (0x03 << RP2040_IO_QSPI_GPIO_QSPI_SD3_CTRL_INOVER_SHIFT)
#define RP2040_IO_QSPI_GPIO_QSPI_SD3_CTRL_INOVER_NORMAL             (0x0 << RP2040_IO_QSPI_GPIO_QSPI_SD3_CTRL_INOVER_SHIFT)  /* don't invert the peri input */
#define RP2040_IO_QSPI_GPIO_QSPI_SD3_CTRL_INOVER_INVERT             (0x1 << RP2040_IO_QSPI_GPIO_QSPI_SD3_CTRL_INOVER_SHIFT)  /* invert the peri input */
#define RP2040_IO_QSPI_GPIO_QSPI_SD3_CTRL_INOVER_LOW                (0x2 << RP2040_IO_QSPI_GPIO_QSPI_SD3_CTRL_INOVER_SHIFT)  /* drive peri input low */
#define RP2040_IO_QSPI_GPIO_QSPI_SD3_CTRL_INOVER_HIGH               (0x3 << RP2040_IO_QSPI_GPIO_QSPI_SD3_CTRL_INOVER_SHIFT)  /* drive peri input high */
#define RP2040_IO_QSPI_GPIO_QSPI_SD3_CTRL_OEOVER_SHIFT              (12)
#define RP2040_IO_QSPI_GPIO_QSPI_SD3_CTRL_OEOVER_MASK               (0x03 << RP2040_IO_QSPI_GPIO_QSPI_SD3_CTRL_OEOVER_SHIFT)
#define RP2040_IO_QSPI_GPIO_QSPI_SD3_CTRL_OEOVER_NORMAL             (0x0 << RP2040_IO_QSPI_GPIO_QSPI_SD3_CTRL_OEOVER_SHIFT)  /* drive output enable from peripheral signal selected by funcsel */
#define RP2040_IO_QSPI_GPIO_QSPI_SD3_CTRL_OEOVER_INVERT             (0x1 << RP2040_IO_QSPI_GPIO_QSPI_SD3_CTRL_OEOVER_SHIFT)  /* drive output enable from inverse of peripheral signal selected by funcsel */
#define RP2040_IO_QSPI_GPIO_QSPI_SD3_CTRL_OEOVER_DISABLE            (0x2 << RP2040_IO_QSPI_GPIO_QSPI_SD3_CTRL_OEOVER_SHIFT)  /* disable output */
#define RP2040_IO_QSPI_GPIO_QSPI_SD3_CTRL_OEOVER_ENABLE             (0x3 << RP2040_IO_QSPI_GPIO_QSPI_SD3_CTRL_OEOVER_SHIFT)  /* enable output */
#define RP2040_IO_QSPI_GPIO_QSPI_SD3_CTRL_OUTOVER_SHIFT             (8)
#define RP2040_IO_QSPI_GPIO_QSPI_SD3_CTRL_OUTOVER_MASK              (0x03 << RP2040_IO_QSPI_GPIO_QSPI_SD3_CTRL_OUTOVER_SHIFT)
#define RP2040_IO_QSPI_GPIO_QSPI_SD3_CTRL_OUTOVER_NORMAL            (0x0 << RP2040_IO_QSPI_GPIO_QSPI_SD3_CTRL_OUTOVER_SHIFT)  /* drive output from peripheral signal selected by funcsel */
#define RP2040_IO_QSPI_GPIO_QSPI_SD3_CTRL_OUTOVER_INVERT            (0x1 << RP2040_IO_QSPI_GPIO_QSPI_SD3_CTRL_OUTOVER_SHIFT)  /* drive output from inverse of peripheral signal selected by funcsel */
#define RP2040_IO_QSPI_GPIO_QSPI_SD3_CTRL_OUTOVER_LOW               (0x2 << RP2040_IO_QSPI_GPIO_QSPI_SD3_CTRL_OUTOVER_SHIFT)  /* drive output low */
#define RP2040_IO_QSPI_GPIO_QSPI_SD3_CTRL_OUTOVER_HIGH              (0x3 << RP2040_IO_QSPI_GPIO_QSPI_SD3_CTRL_OUTOVER_SHIFT)  /* drive output high */
#define RP2040_IO_QSPI_GPIO_QSPI_SD3_CTRL_FUNCSEL_MASK              (0x1f)
#define RP2040_IO_QSPI_GPIO_QSPI_SD3_CTRL_FUNCSEL_XIP_SD3           (0x0)
#define RP2040_IO_QSPI_GPIO_QSPI_SD3_CTRL_FUNCSEL_SIO_35            (0x5)
#define RP2040_IO_QSPI_GPIO_QSPI_SD3_CTRL_FUNCSEL_NULL              (0x1f)

#define RP2040_IO_QSPI_INTR_GPIO_QSPI_SD3_EDGE_HIGH                 (1 << 23)
#define RP2040_IO_QSPI_INTR_GPIO_QSPI_SD3_EDGE_LOW                  (1 << 22)
#define RP2040_IO_QSPI_INTR_GPIO_QSPI_SD3_LEVEL_HIGH                (1 << 21)
#define RP2040_IO_QSPI_INTR_GPIO_QSPI_SD3_LEVEL_LOW                 (1 << 20)
#define RP2040_IO_QSPI_INTR_GPIO_QSPI_SD2_EDGE_HIGH                 (1 << 19)
#define RP2040_IO_QSPI_INTR_GPIO_QSPI_SD2_EDGE_LOW                  (1 << 18)
#define RP2040_IO_QSPI_INTR_GPIO_QSPI_SD2_LEVEL_HIGH                (1 << 17)
#define RP2040_IO_QSPI_INTR_GPIO_QSPI_SD2_LEVEL_LOW                 (1 << 16)
#define RP2040_IO_QSPI_INTR_GPIO_QSPI_SD1_EDGE_HIGH                 (1 << 15)
#define RP2040_IO_QSPI_INTR_GPIO_QSPI_SD1_EDGE_LOW                  (1 << 14)
#define RP2040_IO_QSPI_INTR_GPIO_QSPI_SD1_LEVEL_HIGH                (1 << 13)
#define RP2040_IO_QSPI_INTR_GPIO_QSPI_SD1_LEVEL_LOW                 (1 << 12)
#define RP2040_IO_QSPI_INTR_GPIO_QSPI_SD0_EDGE_HIGH                 (1 << 11)
#define RP2040_IO_QSPI_INTR_GPIO_QSPI_SD0_EDGE_LOW                  (1 << 10)
#define RP2040_IO_QSPI_INTR_GPIO_QSPI_SD0_LEVEL_HIGH                (1 << 9)
#define RP2040_IO_QSPI_INTR_GPIO_QSPI_SD0_LEVEL_LOW                 (1 << 8)
#define RP2040_IO_QSPI_INTR_GPIO_QSPI_SS_EDGE_HIGH                  (1 << 7)
#define RP2040_IO_QSPI_INTR_GPIO_QSPI_SS_EDGE_LOW                   (1 << 6)
#define RP2040_IO_QSPI_INTR_GPIO_QSPI_SS_LEVEL_HIGH                 (1 << 5)
#define RP2040_IO_QSPI_INTR_GPIO_QSPI_SS_LEVEL_LOW                  (1 << 4)
#define RP2040_IO_QSPI_INTR_GPIO_QSPI_SCLK_EDGE_HIGH                (1 << 3)
#define RP2040_IO_QSPI_INTR_GPIO_QSPI_SCLK_EDGE_LOW                 (1 << 2)
#define RP2040_IO_QSPI_INTR_GPIO_QSPI_SCLK_LEVEL_HIGH               (1 << 1)
#define RP2040_IO_QSPI_INTR_GPIO_QSPI_SCLK_LEVEL_LOW                (1 << 0)

#define RP2040_IO_QSPI_PROC0_INTE_GPIO_QSPI_SD3_EDGE_HIGH           (1 << 23)
#define RP2040_IO_QSPI_PROC0_INTE_GPIO_QSPI_SD3_EDGE_LOW            (1 << 22)
#define RP2040_IO_QSPI_PROC0_INTE_GPIO_QSPI_SD3_LEVEL_HIGH          (1 << 21)
#define RP2040_IO_QSPI_PROC0_INTE_GPIO_QSPI_SD3_LEVEL_LOW           (1 << 20)
#define RP2040_IO_QSPI_PROC0_INTE_GPIO_QSPI_SD2_EDGE_HIGH           (1 << 19)
#define RP2040_IO_QSPI_PROC0_INTE_GPIO_QSPI_SD2_EDGE_LOW            (1 << 18)
#define RP2040_IO_QSPI_PROC0_INTE_GPIO_QSPI_SD2_LEVEL_HIGH          (1 << 17)
#define RP2040_IO_QSPI_PROC0_INTE_GPIO_QSPI_SD2_LEVEL_LOW           (1 << 16)
#define RP2040_IO_QSPI_PROC0_INTE_GPIO_QSPI_SD1_EDGE_HIGH           (1 << 15)
#define RP2040_IO_QSPI_PROC0_INTE_GPIO_QSPI_SD1_EDGE_LOW            (1 << 14)
#define RP2040_IO_QSPI_PROC0_INTE_GPIO_QSPI_SD1_LEVEL_HIGH          (1 << 13)
#define RP2040_IO_QSPI_PROC0_INTE_GPIO_QSPI_SD1_LEVEL_LOW           (1 << 12)
#define RP2040_IO_QSPI_PROC0_INTE_GPIO_QSPI_SD0_EDGE_HIGH           (1 << 11)
#define RP2040_IO_QSPI_PROC0_INTE_GPIO_QSPI_SD0_EDGE_LOW            (1 << 10)
#define RP2040_IO_QSPI_PROC0_INTE_GPIO_QSPI_SD0_LEVEL_HIGH          (1 << 9)
#define RP2040_IO_QSPI_PROC0_INTE_GPIO_QSPI_SD0_LEVEL_LOW           (1 << 8)
#define RP2040_IO_QSPI_PROC0_INTE_GPIO_QSPI_SS_EDGE_HIGH            (1 << 7)
#define RP2040_IO_QSPI_PROC0_INTE_GPIO_QSPI_SS_EDGE_LOW             (1 << 6)
#define RP2040_IO_QSPI_PROC0_INTE_GPIO_QSPI_SS_LEVEL_HIGH           (1 << 5)
#define RP2040_IO_QSPI_PROC0_INTE_GPIO_QSPI_SS_LEVEL_LOW            (1 << 4)
#define RP2040_IO_QSPI_PROC0_INTE_GPIO_QSPI_SCLK_EDGE_HIGH          (1 << 3)
#define RP2040_IO_QSPI_PROC0_INTE_GPIO_QSPI_SCLK_EDGE_LOW           (1 << 2)
#define RP2040_IO_QSPI_PROC0_INTE_GPIO_QSPI_SCLK_LEVEL_HIGH         (1 << 1)
#define RP2040_IO_QSPI_PROC0_INTE_GPIO_QSPI_SCLK_LEVEL_LOW          (1 << 0)

#define RP2040_IO_QSPI_PROC0_INTF_GPIO_QSPI_SD3_EDGE_HIGH           (1 << 23)
#define RP2040_IO_QSPI_PROC0_INTF_GPIO_QSPI_SD3_EDGE_LOW            (1 << 22)
#define RP2040_IO_QSPI_PROC0_INTF_GPIO_QSPI_SD3_LEVEL_HIGH          (1 << 21)
#define RP2040_IO_QSPI_PROC0_INTF_GPIO_QSPI_SD3_LEVEL_LOW           (1 << 20)
#define RP2040_IO_QSPI_PROC0_INTF_GPIO_QSPI_SD2_EDGE_HIGH           (1 << 19)
#define RP2040_IO_QSPI_PROC0_INTF_GPIO_QSPI_SD2_EDGE_LOW            (1 << 18)
#define RP2040_IO_QSPI_PROC0_INTF_GPIO_QSPI_SD2_LEVEL_HIGH          (1 << 17)
#define RP2040_IO_QSPI_PROC0_INTF_GPIO_QSPI_SD2_LEVEL_LOW           (1 << 16)
#define RP2040_IO_QSPI_PROC0_INTF_GPIO_QSPI_SD1_EDGE_HIGH           (1 << 15)
#define RP2040_IO_QSPI_PROC0_INTF_GPIO_QSPI_SD1_EDGE_LOW            (1 << 14)
#define RP2040_IO_QSPI_PROC0_INTF_GPIO_QSPI_SD1_LEVEL_HIGH          (1 << 13)
#define RP2040_IO_QSPI_PROC0_INTF_GPIO_QSPI_SD1_LEVEL_LOW           (1 << 12)
#define RP2040_IO_QSPI_PROC0_INTF_GPIO_QSPI_SD0_EDGE_HIGH           (1 << 11)
#define RP2040_IO_QSPI_PROC0_INTF_GPIO_QSPI_SD0_EDGE_LOW            (1 << 10)
#define RP2040_IO_QSPI_PROC0_INTF_GPIO_QSPI_SD0_LEVEL_HIGH          (1 << 9)
#define RP2040_IO_QSPI_PROC0_INTF_GPIO_QSPI_SD0_LEVEL_LOW           (1 << 8)
#define RP2040_IO_QSPI_PROC0_INTF_GPIO_QSPI_SS_EDGE_HIGH            (1 << 7)
#define RP2040_IO_QSPI_PROC0_INTF_GPIO_QSPI_SS_EDGE_LOW             (1 << 6)
#define RP2040_IO_QSPI_PROC0_INTF_GPIO_QSPI_SS_LEVEL_HIGH           (1 << 5)
#define RP2040_IO_QSPI_PROC0_INTF_GPIO_QSPI_SS_LEVEL_LOW            (1 << 4)
#define RP2040_IO_QSPI_PROC0_INTF_GPIO_QSPI_SCLK_EDGE_HIGH          (1 << 3)
#define RP2040_IO_QSPI_PROC0_INTF_GPIO_QSPI_SCLK_EDGE_LOW           (1 << 2)
#define RP2040_IO_QSPI_PROC0_INTF_GPIO_QSPI_SCLK_LEVEL_HIGH         (1 << 1)
#define RP2040_IO_QSPI_PROC0_INTF_GPIO_QSPI_SCLK_LEVEL_LOW          (1 << 0)

#define RP2040_IO_QSPI_PROC0_INTS_GPIO_QSPI_SD3_EDGE_HIGH           (1 << 23)
#define RP2040_IO_QSPI_PROC0_INTS_GPIO_QSPI_SD3_EDGE_LOW            (1 << 22)
#define RP2040_IO_QSPI_PROC0_INTS_GPIO_QSPI_SD3_LEVEL_HIGH          (1 << 21)
#define RP2040_IO_QSPI_PROC0_INTS_GPIO_QSPI_SD3_LEVEL_LOW           (1 << 20)
#define RP2040_IO_QSPI_PROC0_INTS_GPIO_QSPI_SD2_EDGE_HIGH           (1 << 19)
#define RP2040_IO_QSPI_PROC0_INTS_GPIO_QSPI_SD2_EDGE_LOW            (1 << 18)
#define RP2040_IO_QSPI_PROC0_INTS_GPIO_QSPI_SD2_LEVEL_HIGH          (1 << 17)
#define RP2040_IO_QSPI_PROC0_INTS_GPIO_QSPI_SD2_LEVEL_LOW           (1 << 16)
#define RP2040_IO_QSPI_PROC0_INTS_GPIO_QSPI_SD1_EDGE_HIGH           (1 << 15)
#define RP2040_IO_QSPI_PROC0_INTS_GPIO_QSPI_SD1_EDGE_LOW            (1 << 14)
#define RP2040_IO_QSPI_PROC0_INTS_GPIO_QSPI_SD1_LEVEL_HIGH          (1 << 13)
#define RP2040_IO_QSPI_PROC0_INTS_GPIO_QSPI_SD1_LEVEL_LOW           (1 << 12)
#define RP2040_IO_QSPI_PROC0_INTS_GPIO_QSPI_SD0_EDGE_HIGH           (1 << 11)
#define RP2040_IO_QSPI_PROC0_INTS_GPIO_QSPI_SD0_EDGE_LOW            (1 << 10)
#define RP2040_IO_QSPI_PROC0_INTS_GPIO_QSPI_SD0_LEVEL_HIGH          (1 << 9)
#define RP2040_IO_QSPI_PROC0_INTS_GPIO_QSPI_SD0_LEVEL_LOW           (1 << 8)
#define RP2040_IO_QSPI_PROC0_INTS_GPIO_QSPI_SS_EDGE_HIGH            (1 << 7)
#define RP2040_IO_QSPI_PROC0_INTS_GPIO_QSPI_SS_EDGE_LOW             (1 << 6)
#define RP2040_IO_QSPI_PROC0_INTS_GPIO_QSPI_SS_LEVEL_HIGH           (1 << 5)
#define RP2040_IO_QSPI_PROC0_INTS_GPIO_QSPI_SS_LEVEL_LOW            (1 << 4)
#define RP2040_IO_QSPI_PROC0_INTS_GPIO_QSPI_SCLK_EDGE_HIGH          (1 << 3)
#define RP2040_IO_QSPI_PROC0_INTS_GPIO_QSPI_SCLK_EDGE_LOW           (1 << 2)
#define RP2040_IO_QSPI_PROC0_INTS_GPIO_QSPI_SCLK_LEVEL_HIGH         (1 << 1)
#define RP2040_IO_QSPI_PROC0_INTS_GPIO_QSPI_SCLK_LEVEL_LOW          (1 << 0)

#define RP2040_IO_QSPI_PROC1_INTE_GPIO_QSPI_SD3_EDGE_HIGH           (1 << 23)
#define RP2040_IO_QSPI_PROC1_INTE_GPIO_QSPI_SD3_EDGE_LOW            (1 << 22)
#define RP2040_IO_QSPI_PROC1_INTE_GPIO_QSPI_SD3_LEVEL_HIGH          (1 << 21)
#define RP2040_IO_QSPI_PROC1_INTE_GPIO_QSPI_SD3_LEVEL_LOW           (1 << 20)
#define RP2040_IO_QSPI_PROC1_INTE_GPIO_QSPI_SD2_EDGE_HIGH           (1 << 19)
#define RP2040_IO_QSPI_PROC1_INTE_GPIO_QSPI_SD2_EDGE_LOW            (1 << 18)
#define RP2040_IO_QSPI_PROC1_INTE_GPIO_QSPI_SD2_LEVEL_HIGH          (1 << 17)
#define RP2040_IO_QSPI_PROC1_INTE_GPIO_QSPI_SD2_LEVEL_LOW           (1 << 16)
#define RP2040_IO_QSPI_PROC1_INTE_GPIO_QSPI_SD1_EDGE_HIGH           (1 << 15)
#define RP2040_IO_QSPI_PROC1_INTE_GPIO_QSPI_SD1_EDGE_LOW            (1 << 14)
#define RP2040_IO_QSPI_PROC1_INTE_GPIO_QSPI_SD1_LEVEL_HIGH          (1 << 13)
#define RP2040_IO_QSPI_PROC1_INTE_GPIO_QSPI_SD1_LEVEL_LOW           (1 << 12)
#define RP2040_IO_QSPI_PROC1_INTE_GPIO_QSPI_SD0_EDGE_HIGH           (1 << 11)
#define RP2040_IO_QSPI_PROC1_INTE_GPIO_QSPI_SD0_EDGE_LOW            (1 << 10)
#define RP2040_IO_QSPI_PROC1_INTE_GPIO_QSPI_SD0_LEVEL_HIGH          (1 << 9)
#define RP2040_IO_QSPI_PROC1_INTE_GPIO_QSPI_SD0_LEVEL_LOW           (1 << 8)
#define RP2040_IO_QSPI_PROC1_INTE_GPIO_QSPI_SS_EDGE_HIGH            (1 << 7)
#define RP2040_IO_QSPI_PROC1_INTE_GPIO_QSPI_SS_EDGE_LOW             (1 << 6)
#define RP2040_IO_QSPI_PROC1_INTE_GPIO_QSPI_SS_LEVEL_HIGH           (1 << 5)
#define RP2040_IO_QSPI_PROC1_INTE_GPIO_QSPI_SS_LEVEL_LOW            (1 << 4)
#define RP2040_IO_QSPI_PROC1_INTE_GPIO_QSPI_SCLK_EDGE_HIGH          (1 << 3)
#define RP2040_IO_QSPI_PROC1_INTE_GPIO_QSPI_SCLK_EDGE_LOW           (1 << 2)
#define RP2040_IO_QSPI_PROC1_INTE_GPIO_QSPI_SCLK_LEVEL_HIGH         (1 << 1)
#define RP2040_IO_QSPI_PROC1_INTE_GPIO_QSPI_SCLK_LEVEL_LOW          (1 << 0)

#define RP2040_IO_QSPI_PROC1_INTF_GPIO_QSPI_SD3_EDGE_HIGH           (1 << 23)
#define RP2040_IO_QSPI_PROC1_INTF_GPIO_QSPI_SD3_EDGE_LOW            (1 << 22)
#define RP2040_IO_QSPI_PROC1_INTF_GPIO_QSPI_SD3_LEVEL_HIGH          (1 << 21)
#define RP2040_IO_QSPI_PROC1_INTF_GPIO_QSPI_SD3_LEVEL_LOW           (1 << 20)
#define RP2040_IO_QSPI_PROC1_INTF_GPIO_QSPI_SD2_EDGE_HIGH           (1 << 19)
#define RP2040_IO_QSPI_PROC1_INTF_GPIO_QSPI_SD2_EDGE_LOW            (1 << 18)
#define RP2040_IO_QSPI_PROC1_INTF_GPIO_QSPI_SD2_LEVEL_HIGH          (1 << 17)
#define RP2040_IO_QSPI_PROC1_INTF_GPIO_QSPI_SD2_LEVEL_LOW           (1 << 16)
#define RP2040_IO_QSPI_PROC1_INTF_GPIO_QSPI_SD1_EDGE_HIGH           (1 << 15)
#define RP2040_IO_QSPI_PROC1_INTF_GPIO_QSPI_SD1_EDGE_LOW            (1 << 14)
#define RP2040_IO_QSPI_PROC1_INTF_GPIO_QSPI_SD1_LEVEL_HIGH          (1 << 13)
#define RP2040_IO_QSPI_PROC1_INTF_GPIO_QSPI_SD1_LEVEL_LOW           (1 << 12)
#define RP2040_IO_QSPI_PROC1_INTF_GPIO_QSPI_SD0_EDGE_HIGH           (1 << 11)
#define RP2040_IO_QSPI_PROC1_INTF_GPIO_QSPI_SD0_EDGE_LOW            (1 << 10)
#define RP2040_IO_QSPI_PROC1_INTF_GPIO_QSPI_SD0_LEVEL_HIGH          (1 << 9)
#define RP2040_IO_QSPI_PROC1_INTF_GPIO_QSPI_SD0_LEVEL_LOW           (1 << 8)
#define RP2040_IO_QSPI_PROC1_INTF_GPIO_QSPI_SS_EDGE_HIGH            (1 << 7)
#define RP2040_IO_QSPI_PROC1_INTF_GPIO_QSPI_SS_EDGE_LOW             (1 << 6)
#define RP2040_IO_QSPI_PROC1_INTF_GPIO_QSPI_SS_LEVEL_HIGH           (1 << 5)
#define RP2040_IO_QSPI_PROC1_INTF_GPIO_QSPI_SS_LEVEL_LOW            (1 << 4)
#define RP2040_IO_QSPI_PROC1_INTF_GPIO_QSPI_SCLK_EDGE_HIGH          (1 << 3)
#define RP2040_IO_QSPI_PROC1_INTF_GPIO_QSPI_SCLK_EDGE_LOW           (1 << 2)
#define RP2040_IO_QSPI_PROC1_INTF_GPIO_QSPI_SCLK_LEVEL_HIGH         (1 << 1)
#define RP2040_IO_QSPI_PROC1_INTF_GPIO_QSPI_SCLK_LEVEL_LOW          (1 << 0)

#define RP2040_IO_QSPI_PROC1_INTS_GPIO_QSPI_SD3_EDGE_HIGH           (1 << 23)
#define RP2040_IO_QSPI_PROC1_INTS_GPIO_QSPI_SD3_EDGE_LOW            (1 << 22)
#define RP2040_IO_QSPI_PROC1_INTS_GPIO_QSPI_SD3_LEVEL_HIGH          (1 << 21)
#define RP2040_IO_QSPI_PROC1_INTS_GPIO_QSPI_SD3_LEVEL_LOW           (1 << 20)
#define RP2040_IO_QSPI_PROC1_INTS_GPIO_QSPI_SD2_EDGE_HIGH           (1 << 19)
#define RP2040_IO_QSPI_PROC1_INTS_GPIO_QSPI_SD2_EDGE_LOW            (1 << 18)
#define RP2040_IO_QSPI_PROC1_INTS_GPIO_QSPI_SD2_LEVEL_HIGH          (1 << 17)
#define RP2040_IO_QSPI_PROC1_INTS_GPIO_QSPI_SD2_LEVEL_LOW           (1 << 16)
#define RP2040_IO_QSPI_PROC1_INTS_GPIO_QSPI_SD1_EDGE_HIGH           (1 << 15)
#define RP2040_IO_QSPI_PROC1_INTS_GPIO_QSPI_SD1_EDGE_LOW            (1 << 14)
#define RP2040_IO_QSPI_PROC1_INTS_GPIO_QSPI_SD1_LEVEL_HIGH          (1 << 13)
#define RP2040_IO_QSPI_PROC1_INTS_GPIO_QSPI_SD1_LEVEL_LOW           (1 << 12)
#define RP2040_IO_QSPI_PROC1_INTS_GPIO_QSPI_SD0_EDGE_HIGH           (1 << 11)
#define RP2040_IO_QSPI_PROC1_INTS_GPIO_QSPI_SD0_EDGE_LOW            (1 << 10)
#define RP2040_IO_QSPI_PROC1_INTS_GPIO_QSPI_SD0_LEVEL_HIGH          (1 << 9)
#define RP2040_IO_QSPI_PROC1_INTS_GPIO_QSPI_SD0_LEVEL_LOW           (1 << 8)
#define RP2040_IO_QSPI_PROC1_INTS_GPIO_QSPI_SS_EDGE_HIGH            (1 << 7)
#define RP2040_IO_QSPI_PROC1_INTS_GPIO_QSPI_SS_EDGE_LOW             (1 << 6)
#define RP2040_IO_QSPI_PROC1_INTS_GPIO_QSPI_SS_LEVEL_HIGH           (1 << 5)
#define RP2040_IO_QSPI_PROC1_INTS_GPIO_QSPI_SS_LEVEL_LOW            (1 << 4)
#define RP2040_IO_QSPI_PROC1_INTS_GPIO_QSPI_SCLK_EDGE_HIGH          (1 << 3)
#define RP2040_IO_QSPI_PROC1_INTS_GPIO_QSPI_SCLK_EDGE_LOW           (1 << 2)
#define RP2040_IO_QSPI_PROC1_INTS_GPIO_QSPI_SCLK_LEVEL_HIGH         (1 << 1)
#define RP2040_IO_QSPI_PROC1_INTS_GPIO_QSPI_SCLK_LEVEL_LOW          (1 << 0)

#define RP2040_IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SD3_EDGE_HIGH    (1 << 23)
#define RP2040_IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SD3_EDGE_LOW     (1 << 22)
#define RP2040_IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SD3_LEVEL_HIGH   (1 << 21)
#define RP2040_IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SD3_LEVEL_LOW    (1 << 20)
#define RP2040_IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SD2_EDGE_HIGH    (1 << 19)
#define RP2040_IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SD2_EDGE_LOW     (1 << 18)
#define RP2040_IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SD2_LEVEL_HIGH   (1 << 17)
#define RP2040_IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SD2_LEVEL_LOW    (1 << 16)
#define RP2040_IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SD1_EDGE_HIGH    (1 << 15)
#define RP2040_IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SD1_EDGE_LOW     (1 << 14)
#define RP2040_IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SD1_LEVEL_HIGH   (1 << 13)
#define RP2040_IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SD1_LEVEL_LOW    (1 << 12)
#define RP2040_IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SD0_EDGE_HIGH    (1 << 11)
#define RP2040_IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SD0_EDGE_LOW     (1 << 10)
#define RP2040_IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SD0_LEVEL_HIGH   (1 << 9)
#define RP2040_IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SD0_LEVEL_LOW    (1 << 8)
#define RP2040_IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SS_EDGE_HIGH     (1 << 7)
#define RP2040_IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SS_EDGE_LOW      (1 << 6)
#define RP2040_IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SS_LEVEL_HIGH    (1 << 5)
#define RP2040_IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SS_LEVEL_LOW     (1 << 4)
#define RP2040_IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SCLK_EDGE_HIGH   (1 << 3)
#define RP2040_IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SCLK_EDGE_LOW    (1 << 2)
#define RP2040_IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SCLK_LEVEL_HIGH  (1 << 1)
#define RP2040_IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SCLK_LEVEL_LOW   (1 << 0)

#define RP2040_IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SD3_EDGE_HIGH    (1 << 23)
#define RP2040_IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SD3_EDGE_LOW     (1 << 22)
#define RP2040_IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SD3_LEVEL_HIGH   (1 << 21)
#define RP2040_IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SD3_LEVEL_LOW    (1 << 20)
#define RP2040_IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SD2_EDGE_HIGH    (1 << 19)
#define RP2040_IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SD2_EDGE_LOW     (1 << 18)
#define RP2040_IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SD2_LEVEL_HIGH   (1 << 17)
#define RP2040_IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SD2_LEVEL_LOW    (1 << 16)
#define RP2040_IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SD1_EDGE_HIGH    (1 << 15)
#define RP2040_IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SD1_EDGE_LOW     (1 << 14)
#define RP2040_IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SD1_LEVEL_HIGH   (1 << 13)
#define RP2040_IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SD1_LEVEL_LOW    (1 << 12)
#define RP2040_IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SD0_EDGE_HIGH    (1 << 11)
#define RP2040_IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SD0_EDGE_LOW     (1 << 10)
#define RP2040_IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SD0_LEVEL_HIGH   (1 << 9)
#define RP2040_IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SD0_LEVEL_LOW    (1 << 8)
#define RP2040_IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SS_EDGE_HIGH     (1 << 7)
#define RP2040_IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SS_EDGE_LOW      (1 << 6)
#define RP2040_IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SS_LEVEL_HIGH    (1 << 5)
#define RP2040_IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SS_LEVEL_LOW     (1 << 4)
#define RP2040_IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SCLK_EDGE_HIGH   (1 << 3)
#define RP2040_IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SCLK_EDGE_LOW    (1 << 2)
#define RP2040_IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SCLK_LEVEL_HIGH  (1 << 1)
#define RP2040_IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SCLK_LEVEL_LOW   (1 << 0)

#define RP2040_IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SD3_EDGE_HIGH    (1 << 23)
#define RP2040_IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SD3_EDGE_LOW     (1 << 22)
#define RP2040_IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SD3_LEVEL_HIGH   (1 << 21)
#define RP2040_IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SD3_LEVEL_LOW    (1 << 20)
#define RP2040_IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SD2_EDGE_HIGH    (1 << 19)
#define RP2040_IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SD2_EDGE_LOW     (1 << 18)
#define RP2040_IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SD2_LEVEL_HIGH   (1 << 17)
#define RP2040_IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SD2_LEVEL_LOW    (1 << 16)
#define RP2040_IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SD1_EDGE_HIGH    (1 << 15)
#define RP2040_IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SD1_EDGE_LOW     (1 << 14)
#define RP2040_IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SD1_LEVEL_HIGH   (1 << 13)
#define RP2040_IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SD1_LEVEL_LOW    (1 << 12)
#define RP2040_IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SD0_EDGE_HIGH    (1 << 11)
#define RP2040_IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SD0_EDGE_LOW     (1 << 10)
#define RP2040_IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SD0_LEVEL_HIGH   (1 << 9)
#define RP2040_IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SD0_LEVEL_LOW    (1 << 8)
#define RP2040_IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SS_EDGE_HIGH     (1 << 7)
#define RP2040_IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SS_EDGE_LOW      (1 << 6)
#define RP2040_IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SS_LEVEL_HIGH    (1 << 5)
#define RP2040_IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SS_LEVEL_LOW     (1 << 4)
#define RP2040_IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SCLK_EDGE_HIGH   (1 << 3)
#define RP2040_IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SCLK_EDGE_LOW    (1 << 2)
#define RP2040_IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SCLK_LEVEL_HIGH  (1 << 1)
#define RP2040_IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SCLK_LEVEL_LOW   (1 << 0)
