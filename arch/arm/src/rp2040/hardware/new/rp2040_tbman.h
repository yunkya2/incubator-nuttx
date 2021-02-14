/* Register offsets *********************************************************/

#define RP2040_TBMAN_PLATFORM_OFFSET  0x000000  /* Indicates the type of platform in use */

/* Register definitions *****************************************************/

#define RP2040_TBMAN_PLATFORM  (RP2040_TBMAN_BASE + RP2040_TBMAN_PLATFORM_OFFSET)


/* Register bit definitions *************************************************/


#define RP2040_TBMAN_PLATFORM_FPGA  (1 << 1)  /* Indicates the platform is an FPGA */
#define RP2040_TBMAN_PLATFORM_ASIC  (1 << 0)  /* Indicates the platform is an ASIC */
