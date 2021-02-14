/* Register offsets *********************************************************/

#define RP2040_PLL_USB_CS_OFFSET         0x000000  /* Control and Status GENERAL CONSTRAINTS: Reference clock frequency min=5MHz, max=800MHz Feedback divider min=16, max=320 VCO frequency min=400MHz, max=1600MHz */
#define RP2040_PLL_USB_PWR_OFFSET        0x000004  /* Controls the PLL power modes. */
#define RP2040_PLL_USB_FBDIV_INT_OFFSET  0x000008  /* Feedback divisor (note: this PLL does not support fractional division) */
#define RP2040_PLL_USB_PRIM_OFFSET       0x00000c  /* Controls the PLL post dividers for the primary output (note: this PLL does not have a secondary output) the primary output is driven from VCO divided by postdiv1*postdiv2 */

/* Register definitions *****************************************************/

#define RP2040_PLL_USB_CS         (RP2040_PLL_USB_BASE + RP2040_PLL_USB_CS_OFFSET)
#define RP2040_PLL_USB_PWR        (RP2040_PLL_USB_BASE + RP2040_PLL_USB_PWR_OFFSET)
#define RP2040_PLL_USB_FBDIV_INT  (RP2040_PLL_USB_BASE + RP2040_PLL_USB_FBDIV_INT_OFFSET)
#define RP2040_PLL_USB_PRIM       (RP2040_PLL_USB_BASE + RP2040_PLL_USB_PRIM_OFFSET)


/* Register bit definitions *************************************************/


#define RP2040_PLL_USB_CS_LOCK              (1 << 31)  /* PLL is locked */
#define RP2040_PLL_USB_CS_BYPASS            (1 << 8)  /* Passes the reference clock to the output instead of the divided VCO. The VCO continues to run so the user can switch between the reference clock and the divided VCO but the output will glitch when doing so. */
#define RP2040_PLL_USB_CS_REFDIV_MASK       (0x3f)  /* Divides the PLL input reference clock. Behaviour is undefined for div=0. PLL output will be unpredictable during refdiv changes, wait for lock=1 before using it. */

#define RP2040_PLL_USB_PWR_VCOPD            (1 << 5)  /* PLL VCO powerdown To save power set high when PLL output not required or bypass=1. */
#define RP2040_PLL_USB_PWR_POSTDIVPD        (1 << 3)  /* PLL post divider powerdown To save power set high when PLL output not required or bypass=1. */
#define RP2040_PLL_USB_PWR_DSMPD            (1 << 2)  /* PLL DSM powerdown Nothing is achieved by setting this low. */
#define RP2040_PLL_USB_PWR_PD               (1 << 0)  /* PLL powerdown To save power set high when PLL output not required. */

#define RP2040_PLL_USB_FBDIV_INT_MASK       (0xfff)  /* see ctrl reg description for constraints */

#define RP2040_PLL_USB_PRIM_POSTDIV1_SHIFT  (16)  /* divide by 1-7 */
#define RP2040_PLL_USB_PRIM_POSTDIV1_MASK   (0x07 << RP2040_PLL_USB_PRIM_POSTDIV1_SHIFT)
#define RP2040_PLL_USB_PRIM_POSTDIV2_SHIFT  (12)  /* divide by 1-7 */
#define RP2040_PLL_USB_PRIM_POSTDIV2_MASK   (0x07 << RP2040_PLL_USB_PRIM_POSTDIV2_SHIFT)
