/* Register offsets *********************************************************/

#define RP2040_SYSINFO_CHIP_ID_OFFSET        0x000000  /* JEDEC JEP-106 compliant chip identifier. */
#define RP2040_SYSINFO_PLATFORM_OFFSET       0x000004  /* Platform register. Allows software to know what environment it is running in. */
#define RP2040_SYSINFO_GITREF_RP2040_OFFSET  0x000040  /* Git hash of the chip source. Used to identify chip version. */

/* Register definitions *****************************************************/

#define RP2040_SYSINFO_CHIP_ID        (RP2040_SYSINFO_BASE + RP2040_SYSINFO_CHIP_ID_OFFSET)
#define RP2040_SYSINFO_PLATFORM       (RP2040_SYSINFO_BASE + RP2040_SYSINFO_PLATFORM_OFFSET)
#define RP2040_SYSINFO_GITREF_RP2040  (RP2040_SYSINFO_BASE + RP2040_SYSINFO_GITREF_RP2040_OFFSET)


/* Register bit definitions *************************************************/


#define RP2040_SYSINFO_CHIP_ID_REVISION_SHIFT     (28)
#define RP2040_SYSINFO_CHIP_ID_REVISION_MASK      (0x0f << RP2040_SYSINFO_CHIP_ID_REVISION_SHIFT)
#define RP2040_SYSINFO_CHIP_ID_PART_SHIFT         (12)
#define RP2040_SYSINFO_CHIP_ID_PART_MASK          (0xffff << RP2040_SYSINFO_CHIP_ID_PART_SHIFT)
#define RP2040_SYSINFO_CHIP_ID_MANUFACTURER_MASK  (0xfff)

#define RP2040_SYSINFO_PLATFORM_ASIC              (1 << 1)
#define RP2040_SYSINFO_PLATFORM_FPGA              (1 << 0)
