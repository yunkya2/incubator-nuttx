/* Register offsets *********************************************************/

#define RP2040_VREG_AND_CHIP_RESET_VREG_OFFSET        0x000000  /* Voltage regulator control and status */
#define RP2040_VREG_AND_CHIP_RESET_BOD_OFFSET         0x000004  /* brown-out detection control */
#define RP2040_VREG_AND_CHIP_RESET_CHIP_RESET_OFFSET  0x000008  /* Chip reset control and status */

/* Register definitions *****************************************************/

#define RP2040_VREG_AND_CHIP_RESET_VREG        (RP2040_VREG_AND_CHIP_RESET_BASE + RP2040_VREG_AND_CHIP_RESET_VREG_OFFSET)
#define RP2040_VREG_AND_CHIP_RESET_BOD         (RP2040_VREG_AND_CHIP_RESET_BASE + RP2040_VREG_AND_CHIP_RESET_BOD_OFFSET)
#define RP2040_VREG_AND_CHIP_RESET_CHIP_RESET  (RP2040_VREG_AND_CHIP_RESET_BASE + RP2040_VREG_AND_CHIP_RESET_CHIP_RESET_OFFSET)


/* Register bit definitions *************************************************/


#define RP2040_VREG_AND_CHIP_RESET_VREG_ROK                     (1 << 12)  /* regulation status 0=not in regulation, 1=in regulation */
#define RP2040_VREG_AND_CHIP_RESET_VREG_VSEL_SHIFT              (4)  /* output voltage select 0000 to 0101 - 0.80V 0110         - 0.85V 0111         - 0.90V 1000         - 0.95V 1001         - 1.00V 1010         - 1.05V 1011         - 1.10V (default) 1100         - 1.15V 1101         - 1.20V 1110         - 1.25V 1111         - 1.30V */
#define RP2040_VREG_AND_CHIP_RESET_VREG_VSEL_MASK               (0x0f << RP2040_VREG_AND_CHIP_RESET_VREG_VSEL_SHIFT)
#define RP2040_VREG_AND_CHIP_RESET_VREG_HIZ                     (1 << 1)  /* high impedance mode select 0=not in high impedance mode, 1=in high impedance mode */
#define RP2040_VREG_AND_CHIP_RESET_VREG_EN                      (1 << 0)  /* enable 0=not enabled, 1=enabled */

#define RP2040_VREG_AND_CHIP_RESET_BOD_VSEL_SHIFT               (4)  /* threshold select 0000 - 0.473V 0001 - 0.516V 0010 - 0.559V 0011 - 0.602V 0100 - 0.645V 0101 - 0.688V 0110 - 0.731V 0111 - 0.774V 1000 - 0.817V 1001 - 0.860V (default) 1010 - 0.903V 1011 - 0.946V 1100 - 0.989V 1101 - 1.032V 1110 - 1.075V 1111 - 1.118V */
#define RP2040_VREG_AND_CHIP_RESET_BOD_VSEL_MASK                (0x0f << RP2040_VREG_AND_CHIP_RESET_BOD_VSEL_SHIFT)
#define RP2040_VREG_AND_CHIP_RESET_BOD_EN                       (1 << 0)  /* enable 0=not enabled, 1=enabled */

#define RP2040_VREG_AND_CHIP_RESET_CHIP_RESET_PSM_RESTART_FLAG  (1 << 24)  /* This is set by psm_restart from the debugger. Its purpose is to branch bootcode to a safe mode when the debugger has issued a psm_restart in order to recover from a boot lock-up. In the safe mode the debugger can repair the boot code, clear this flag then reboot the processor. */
#define RP2040_VREG_AND_CHIP_RESET_CHIP_RESET_HAD_PSM_RESTART   (1 << 20)  /* Last reset was from the debug port */
#define RP2040_VREG_AND_CHIP_RESET_CHIP_RESET_HAD_RUN           (1 << 16)  /* Last reset was from the RUN pin */
#define RP2040_VREG_AND_CHIP_RESET_CHIP_RESET_HAD_POR           (1 << 8)  /* Last reset was from the power-on reset or brown-out detection blocks */
