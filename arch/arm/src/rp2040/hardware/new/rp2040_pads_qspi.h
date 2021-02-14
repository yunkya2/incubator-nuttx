/* Register offsets *********************************************************/

#define RP2040_PADS_QSPI_VOLTAGE_SELECT_OFFSET  0x000000  /* Voltage select. Per bank control */
#define RP2040_PADS_QSPI_GPIO_QSPI_SCLK_OFFSET  0x000004  /* Pad control register */
#define RP2040_PADS_QSPI_GPIO_QSPI_SD0_OFFSET   0x000008  /* Pad control register */
#define RP2040_PADS_QSPI_GPIO_QSPI_SD1_OFFSET   0x00000c  /* Pad control register */
#define RP2040_PADS_QSPI_GPIO_QSPI_SD2_OFFSET   0x000010  /* Pad control register */
#define RP2040_PADS_QSPI_GPIO_QSPI_SD3_OFFSET   0x000014  /* Pad control register */
#define RP2040_PADS_QSPI_GPIO_QSPI_SS_OFFSET    0x000018  /* Pad control register */

/* Register definitions *****************************************************/

#define RP2040_PADS_QSPI_VOLTAGE_SELECT  (RP2040_PADS_QSPI_BASE + RP2040_PADS_QSPI_VOLTAGE_SELECT_OFFSET)
#define RP2040_PADS_QSPI_GPIO_QSPI_SCLK  (RP2040_PADS_QSPI_BASE + RP2040_PADS_QSPI_GPIO_QSPI_SCLK_OFFSET)
#define RP2040_PADS_QSPI_GPIO_QSPI_SD0   (RP2040_PADS_QSPI_BASE + RP2040_PADS_QSPI_GPIO_QSPI_SD0_OFFSET)
#define RP2040_PADS_QSPI_GPIO_QSPI_SD1   (RP2040_PADS_QSPI_BASE + RP2040_PADS_QSPI_GPIO_QSPI_SD1_OFFSET)
#define RP2040_PADS_QSPI_GPIO_QSPI_SD2   (RP2040_PADS_QSPI_BASE + RP2040_PADS_QSPI_GPIO_QSPI_SD2_OFFSET)
#define RP2040_PADS_QSPI_GPIO_QSPI_SD3   (RP2040_PADS_QSPI_BASE + RP2040_PADS_QSPI_GPIO_QSPI_SD3_OFFSET)
#define RP2040_PADS_QSPI_GPIO_QSPI_SS    (RP2040_PADS_QSPI_BASE + RP2040_PADS_QSPI_GPIO_QSPI_SS_OFFSET)


/* Register bit definitions *************************************************/


#define RP2040_PADS_QSPI_VOLTAGE_SELECT              (1 << 0)  /* Set voltage to 1.8V (DVDD <= 1V8) */

#define RP2040_PADS_QSPI_GPIO_QSPI_SCLK_OD           (1 << 7)  /* Output disable. Has priority over output enable from peripherals */
#define RP2040_PADS_QSPI_GPIO_QSPI_SCLK_IE           (1 << 6)  /* Input enable */
#define RP2040_PADS_QSPI_GPIO_QSPI_SCLK_DRIVE_SHIFT  (4)  /* Drive strength. */
#define RP2040_PADS_QSPI_GPIO_QSPI_SCLK_DRIVE_MASK   (0x03 << RP2040_PADS_QSPI_GPIO_QSPI_SCLK_DRIVE_SHIFT)
#define RP2040_PADS_QSPI_GPIO_QSPI_SCLK_DRIVE_2MA    (0x0 << RP2040_PADS_QSPI_GPIO_QSPI_SCLK_DRIVE_SHIFT)
#define RP2040_PADS_QSPI_GPIO_QSPI_SCLK_DRIVE_4MA    (0x1 << RP2040_PADS_QSPI_GPIO_QSPI_SCLK_DRIVE_SHIFT)
#define RP2040_PADS_QSPI_GPIO_QSPI_SCLK_DRIVE_8MA    (0x2 << RP2040_PADS_QSPI_GPIO_QSPI_SCLK_DRIVE_SHIFT)
#define RP2040_PADS_QSPI_GPIO_QSPI_SCLK_DRIVE_12MA   (0x3 << RP2040_PADS_QSPI_GPIO_QSPI_SCLK_DRIVE_SHIFT)
#define RP2040_PADS_QSPI_GPIO_QSPI_SCLK_PUE          (1 << 3)  /* Pull up enable */
#define RP2040_PADS_QSPI_GPIO_QSPI_SCLK_PDE          (1 << 2)  /* Pull down enable */
#define RP2040_PADS_QSPI_GPIO_QSPI_SCLK_SCHMITT      (1 << 1)  /* Enable schmitt trigger */
#define RP2040_PADS_QSPI_GPIO_QSPI_SCLK_SLEWFAST     (1 << 0)  /* Slew rate control. 1 = Fast, 0 = Slow */

#define RP2040_PADS_QSPI_GPIO_QSPI_SD0_OD            (1 << 7)  /* Output disable. Has priority over output enable from peripherals */
#define RP2040_PADS_QSPI_GPIO_QSPI_SD0_IE            (1 << 6)  /* Input enable */
#define RP2040_PADS_QSPI_GPIO_QSPI_SD0_DRIVE_SHIFT   (4)  /* Drive strength. */
#define RP2040_PADS_QSPI_GPIO_QSPI_SD0_DRIVE_MASK    (0x03 << RP2040_PADS_QSPI_GPIO_QSPI_SD0_DRIVE_SHIFT)
#define RP2040_PADS_QSPI_GPIO_QSPI_SD0_DRIVE_2MA     (0x0 << RP2040_PADS_QSPI_GPIO_QSPI_SD0_DRIVE_SHIFT)
#define RP2040_PADS_QSPI_GPIO_QSPI_SD0_DRIVE_4MA     (0x1 << RP2040_PADS_QSPI_GPIO_QSPI_SD0_DRIVE_SHIFT)
#define RP2040_PADS_QSPI_GPIO_QSPI_SD0_DRIVE_8MA     (0x2 << RP2040_PADS_QSPI_GPIO_QSPI_SD0_DRIVE_SHIFT)
#define RP2040_PADS_QSPI_GPIO_QSPI_SD0_DRIVE_12MA    (0x3 << RP2040_PADS_QSPI_GPIO_QSPI_SD0_DRIVE_SHIFT)
#define RP2040_PADS_QSPI_GPIO_QSPI_SD0_PUE           (1 << 3)  /* Pull up enable */
#define RP2040_PADS_QSPI_GPIO_QSPI_SD0_PDE           (1 << 2)  /* Pull down enable */
#define RP2040_PADS_QSPI_GPIO_QSPI_SD0_SCHMITT       (1 << 1)  /* Enable schmitt trigger */
#define RP2040_PADS_QSPI_GPIO_QSPI_SD0_SLEWFAST      (1 << 0)  /* Slew rate control. 1 = Fast, 0 = Slow */

#define RP2040_PADS_QSPI_GPIO_QSPI_SD1_OD            (1 << 7)  /* Output disable. Has priority over output enable from peripherals */
#define RP2040_PADS_QSPI_GPIO_QSPI_SD1_IE            (1 << 6)  /* Input enable */
#define RP2040_PADS_QSPI_GPIO_QSPI_SD1_DRIVE_SHIFT   (4)  /* Drive strength. */
#define RP2040_PADS_QSPI_GPIO_QSPI_SD1_DRIVE_MASK    (0x03 << RP2040_PADS_QSPI_GPIO_QSPI_SD1_DRIVE_SHIFT)
#define RP2040_PADS_QSPI_GPIO_QSPI_SD1_DRIVE_2MA     (0x0 << RP2040_PADS_QSPI_GPIO_QSPI_SD1_DRIVE_SHIFT)
#define RP2040_PADS_QSPI_GPIO_QSPI_SD1_DRIVE_4MA     (0x1 << RP2040_PADS_QSPI_GPIO_QSPI_SD1_DRIVE_SHIFT)
#define RP2040_PADS_QSPI_GPIO_QSPI_SD1_DRIVE_8MA     (0x2 << RP2040_PADS_QSPI_GPIO_QSPI_SD1_DRIVE_SHIFT)
#define RP2040_PADS_QSPI_GPIO_QSPI_SD1_DRIVE_12MA    (0x3 << RP2040_PADS_QSPI_GPIO_QSPI_SD1_DRIVE_SHIFT)
#define RP2040_PADS_QSPI_GPIO_QSPI_SD1_PUE           (1 << 3)  /* Pull up enable */
#define RP2040_PADS_QSPI_GPIO_QSPI_SD1_PDE           (1 << 2)  /* Pull down enable */
#define RP2040_PADS_QSPI_GPIO_QSPI_SD1_SCHMITT       (1 << 1)  /* Enable schmitt trigger */
#define RP2040_PADS_QSPI_GPIO_QSPI_SD1_SLEWFAST      (1 << 0)  /* Slew rate control. 1 = Fast, 0 = Slow */

#define RP2040_PADS_QSPI_GPIO_QSPI_SD2_OD            (1 << 7)  /* Output disable. Has priority over output enable from peripherals */
#define RP2040_PADS_QSPI_GPIO_QSPI_SD2_IE            (1 << 6)  /* Input enable */
#define RP2040_PADS_QSPI_GPIO_QSPI_SD2_DRIVE_SHIFT   (4)  /* Drive strength. */
#define RP2040_PADS_QSPI_GPIO_QSPI_SD2_DRIVE_MASK    (0x03 << RP2040_PADS_QSPI_GPIO_QSPI_SD2_DRIVE_SHIFT)
#define RP2040_PADS_QSPI_GPIO_QSPI_SD2_DRIVE_2MA     (0x0 << RP2040_PADS_QSPI_GPIO_QSPI_SD2_DRIVE_SHIFT)
#define RP2040_PADS_QSPI_GPIO_QSPI_SD2_DRIVE_4MA     (0x1 << RP2040_PADS_QSPI_GPIO_QSPI_SD2_DRIVE_SHIFT)
#define RP2040_PADS_QSPI_GPIO_QSPI_SD2_DRIVE_8MA     (0x2 << RP2040_PADS_QSPI_GPIO_QSPI_SD2_DRIVE_SHIFT)
#define RP2040_PADS_QSPI_GPIO_QSPI_SD2_DRIVE_12MA    (0x3 << RP2040_PADS_QSPI_GPIO_QSPI_SD2_DRIVE_SHIFT)
#define RP2040_PADS_QSPI_GPIO_QSPI_SD2_PUE           (1 << 3)  /* Pull up enable */
#define RP2040_PADS_QSPI_GPIO_QSPI_SD2_PDE           (1 << 2)  /* Pull down enable */
#define RP2040_PADS_QSPI_GPIO_QSPI_SD2_SCHMITT       (1 << 1)  /* Enable schmitt trigger */
#define RP2040_PADS_QSPI_GPIO_QSPI_SD2_SLEWFAST      (1 << 0)  /* Slew rate control. 1 = Fast, 0 = Slow */

#define RP2040_PADS_QSPI_GPIO_QSPI_SD3_OD            (1 << 7)  /* Output disable. Has priority over output enable from peripherals */
#define RP2040_PADS_QSPI_GPIO_QSPI_SD3_IE            (1 << 6)  /* Input enable */
#define RP2040_PADS_QSPI_GPIO_QSPI_SD3_DRIVE_SHIFT   (4)  /* Drive strength. */
#define RP2040_PADS_QSPI_GPIO_QSPI_SD3_DRIVE_MASK    (0x03 << RP2040_PADS_QSPI_GPIO_QSPI_SD3_DRIVE_SHIFT)
#define RP2040_PADS_QSPI_GPIO_QSPI_SD3_DRIVE_2MA     (0x0 << RP2040_PADS_QSPI_GPIO_QSPI_SD3_DRIVE_SHIFT)
#define RP2040_PADS_QSPI_GPIO_QSPI_SD3_DRIVE_4MA     (0x1 << RP2040_PADS_QSPI_GPIO_QSPI_SD3_DRIVE_SHIFT)
#define RP2040_PADS_QSPI_GPIO_QSPI_SD3_DRIVE_8MA     (0x2 << RP2040_PADS_QSPI_GPIO_QSPI_SD3_DRIVE_SHIFT)
#define RP2040_PADS_QSPI_GPIO_QSPI_SD3_DRIVE_12MA    (0x3 << RP2040_PADS_QSPI_GPIO_QSPI_SD3_DRIVE_SHIFT)
#define RP2040_PADS_QSPI_GPIO_QSPI_SD3_PUE           (1 << 3)  /* Pull up enable */
#define RP2040_PADS_QSPI_GPIO_QSPI_SD3_PDE           (1 << 2)  /* Pull down enable */
#define RP2040_PADS_QSPI_GPIO_QSPI_SD3_SCHMITT       (1 << 1)  /* Enable schmitt trigger */
#define RP2040_PADS_QSPI_GPIO_QSPI_SD3_SLEWFAST      (1 << 0)  /* Slew rate control. 1 = Fast, 0 = Slow */

#define RP2040_PADS_QSPI_GPIO_QSPI_SS_OD             (1 << 7)  /* Output disable. Has priority over output enable from peripherals */
#define RP2040_PADS_QSPI_GPIO_QSPI_SS_IE             (1 << 6)  /* Input enable */
#define RP2040_PADS_QSPI_GPIO_QSPI_SS_DRIVE_SHIFT    (4)  /* Drive strength. */
#define RP2040_PADS_QSPI_GPIO_QSPI_SS_DRIVE_MASK     (0x03 << RP2040_PADS_QSPI_GPIO_QSPI_SS_DRIVE_SHIFT)
#define RP2040_PADS_QSPI_GPIO_QSPI_SS_DRIVE_2MA      (0x0 << RP2040_PADS_QSPI_GPIO_QSPI_SS_DRIVE_SHIFT)
#define RP2040_PADS_QSPI_GPIO_QSPI_SS_DRIVE_4MA      (0x1 << RP2040_PADS_QSPI_GPIO_QSPI_SS_DRIVE_SHIFT)
#define RP2040_PADS_QSPI_GPIO_QSPI_SS_DRIVE_8MA      (0x2 << RP2040_PADS_QSPI_GPIO_QSPI_SS_DRIVE_SHIFT)
#define RP2040_PADS_QSPI_GPIO_QSPI_SS_DRIVE_12MA     (0x3 << RP2040_PADS_QSPI_GPIO_QSPI_SS_DRIVE_SHIFT)
#define RP2040_PADS_QSPI_GPIO_QSPI_SS_PUE            (1 << 3)  /* Pull up enable */
#define RP2040_PADS_QSPI_GPIO_QSPI_SS_PDE            (1 << 2)  /* Pull down enable */
#define RP2040_PADS_QSPI_GPIO_QSPI_SS_SCHMITT        (1 << 1)  /* Enable schmitt trigger */
#define RP2040_PADS_QSPI_GPIO_QSPI_SS_SLEWFAST       (1 << 0)  /* Slew rate control. 1 = Fast, 0 = Slow */
