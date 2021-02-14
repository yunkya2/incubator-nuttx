/* Register offsets *********************************************************/

#define RP2040_XOSC_CTRL_OFFSET     0x000000  /* Crystal Oscillator Control */
#define RP2040_XOSC_STATUS_OFFSET   0x000004  /* Crystal Oscillator Status */
#define RP2040_XOSC_DORMANT_OFFSET  0x000008  /* Crystal Oscillator pause control This is used to save power by pausing the XOSC On power-up this field is initialised to WAKE An invalid write will also select WAKE WARNING: stop the PLLs before selecting dormant mode WARNING: setup the irq before selecting dormant mode */
#define RP2040_XOSC_STARTUP_OFFSET  0x00000c  /* Controls the startup delay */
#define RP2040_XOSC_COUNT_OFFSET    0x00001c  /* A down counter running at the xosc frequency which counts to zero and stops. To start the counter write a non-zero value. Can be used for short software pauses when setting up time sensitive hardware. */

/* Register definitions *****************************************************/

#define RP2040_XOSC_CTRL     (RP2040_XOSC_BASE + RP2040_XOSC_CTRL_OFFSET)
#define RP2040_XOSC_STATUS   (RP2040_XOSC_BASE + RP2040_XOSC_STATUS_OFFSET)
#define RP2040_XOSC_DORMANT  (RP2040_XOSC_BASE + RP2040_XOSC_DORMANT_OFFSET)
#define RP2040_XOSC_STARTUP  (RP2040_XOSC_BASE + RP2040_XOSC_STARTUP_OFFSET)
#define RP2040_XOSC_COUNT    (RP2040_XOSC_BASE + RP2040_XOSC_COUNT_OFFSET)


/* Register bit definitions *************************************************/


#define RP2040_XOSC_CTRL_ENABLE_SHIFT             (12)  /* On power-up this field is initialised to DISABLE and the chip runs from the ROSC. If the chip has subsequently been programmed to run from the XOSC then setting this field to DISABLE may lock-up the chip. If this is a concern then run the clk_ref from the ROSC and enable the clk_sys RESUS feature. The 12-bit code is intended to give some protection against accidental writes. An invalid setting will enable the oscillator. */
#define RP2040_XOSC_CTRL_ENABLE_MASK              (0xfff << RP2040_XOSC_CTRL_ENABLE_SHIFT)
#define RP2040_XOSC_CTRL_ENABLE_DISABLE           (0xd1e << RP2040_XOSC_CTRL_ENABLE_SHIFT)
#define RP2040_XOSC_CTRL_ENABLE_ENABLE            (0xfab << RP2040_XOSC_CTRL_ENABLE_SHIFT)
#define RP2040_XOSC_CTRL_FREQ_RANGE_MASK          (0xfff)
#define RP2040_XOSC_CTRL_FREQ_RANGE_1_15MHZ       (0xaa0)
#define RP2040_XOSC_CTRL_FREQ_RANGE_RESERVED_1    (0xaa1)
#define RP2040_XOSC_CTRL_FREQ_RANGE_RESERVED_2    (0xaa2)
#define RP2040_XOSC_CTRL_FREQ_RANGE_RESERVED_3    (0xaa3)

#define RP2040_XOSC_STATUS_STABLE                 (1 << 31)  /* Oscillator is running and stable */
#define RP2040_XOSC_STATUS_BADWRITE               (1 << 24)  /* An invalid value has been written to CTRL_ENABLE or CTRL_FREQ_RANGE or DORMANT */
#define RP2040_XOSC_STATUS_ENABLED                (1 << 12)  /* Oscillator is enabled but not necessarily running and stable, resets to 0 */
#define RP2040_XOSC_STATUS_FREQ_RANGE_MASK        (0x03)
#define RP2040_XOSC_STATUS_FREQ_RANGE_1_15MHZ     (0x0)
#define RP2040_XOSC_STATUS_FREQ_RANGE_RESERVED_1  (0x1)
#define RP2040_XOSC_STATUS_FREQ_RANGE_RESERVED_2  (0x2)
#define RP2040_XOSC_STATUS_FREQ_RANGE_RESERVED_3  (0x3)

#define RP2040_XOSC_STARTUP_X4                    (1 << 20)  /* Multiplies the startup_delay by 4. This is of little value to the user given that the delay can be programmed directly */
#define RP2040_XOSC_STARTUP_DELAY_MASK            (0x3fff)  /* in multiples of 256*xtal_period */

#define RP2040_XOSC_COUNT_MASK                    (0xff)
