/* Register offsets *********************************************************/

#define RP2040_SYSCFG_PROC0_NMI_MASK_OFFSET          0x000000  /* Processor core 0 NMI source mask Set a bit high to enable NMI from that IRQ */
#define RP2040_SYSCFG_PROC1_NMI_MASK_OFFSET          0x000004  /* Processor core 1 NMI source mask Set a bit high to enable NMI from that IRQ */
#define RP2040_SYSCFG_PROC_CONFIG_OFFSET             0x000008  /* Configuration for processors */
#define RP2040_SYSCFG_PROC_IN_SYNC_BYPASS_OFFSET     0x00000c  /* For each bit, if 1, bypass the input synchronizer between that GPIO and the GPIO input register in the SIO. The input synchronizers should generally be unbypassed, to avoid injecting metastabilities into processors. If you're feeling brave, you can bypass to save two cycles of input latency. This register applies to GPIO 0...29. */
#define RP2040_SYSCFG_PROC_IN_SYNC_BYPASS_HI_OFFSET  0x000010  /* For each bit, if 1, bypass the input synchronizer between that GPIO and the GPIO input register in the SIO. The input synchronizers should generally be unbypassed, to avoid injecting metastabilities into processors. If you're feeling brave, you can bypass to save two cycles of input latency. This register applies to GPIO 30...35 (the QSPI IOs). */
#define RP2040_SYSCFG_DBGFORCE_OFFSET                0x000014  /* Directly control the SWD debug port of either processor */
#define RP2040_SYSCFG_MEMPOWERDOWN_OFFSET            0x000018  /* Control power downs to memories. Set high to power down memories. Use with extreme caution */

/* Register definitions *****************************************************/

#define RP2040_SYSCFG_PROC0_NMI_MASK          (RP2040_SYSCFG_BASE + RP2040_SYSCFG_PROC0_NMI_MASK_OFFSET)
#define RP2040_SYSCFG_PROC1_NMI_MASK          (RP2040_SYSCFG_BASE + RP2040_SYSCFG_PROC1_NMI_MASK_OFFSET)
#define RP2040_SYSCFG_PROC_CONFIG             (RP2040_SYSCFG_BASE + RP2040_SYSCFG_PROC_CONFIG_OFFSET)
#define RP2040_SYSCFG_PROC_IN_SYNC_BYPASS     (RP2040_SYSCFG_BASE + RP2040_SYSCFG_PROC_IN_SYNC_BYPASS_OFFSET)
#define RP2040_SYSCFG_PROC_IN_SYNC_BYPASS_HI  (RP2040_SYSCFG_BASE + RP2040_SYSCFG_PROC_IN_SYNC_BYPASS_HI_OFFSET)
#define RP2040_SYSCFG_DBGFORCE                (RP2040_SYSCFG_BASE + RP2040_SYSCFG_DBGFORCE_OFFSET)
#define RP2040_SYSCFG_MEMPOWERDOWN            (RP2040_SYSCFG_BASE + RP2040_SYSCFG_MEMPOWERDOWN_OFFSET)


/* Register bit definitions *************************************************/


#define RP2040_SYSCFG_PROC_CONFIG_PROC1_DAP_INSTID_SHIFT  (28)  /* Configure proc1 DAP instance ID. Recommend that this is NOT changed until you require debug access in multi-chip environment WARNING: do not set to 15 as this is reserved for RescueDP */
#define RP2040_SYSCFG_PROC_CONFIG_PROC1_DAP_INSTID_MASK   (0x0f << RP2040_SYSCFG_PROC_CONFIG_PROC1_DAP_INSTID_SHIFT)
#define RP2040_SYSCFG_PROC_CONFIG_PROC0_DAP_INSTID_SHIFT  (24)  /* Configure proc0 DAP instance ID. Recommend that this is NOT changed until you require debug access in multi-chip environment WARNING: do not set to 15 as this is reserved for RescueDP */
#define RP2040_SYSCFG_PROC_CONFIG_PROC0_DAP_INSTID_MASK   (0x0f << RP2040_SYSCFG_PROC_CONFIG_PROC0_DAP_INSTID_SHIFT)
#define RP2040_SYSCFG_PROC_CONFIG_PROC1_HALTED            (1 << 1)  /* Indication that proc1 has halted */
#define RP2040_SYSCFG_PROC_CONFIG_PROC0_HALTED            (1 << 0)  /* Indication that proc0 has halted */

#define RP2040_SYSCFG_PROC_IN_SYNC_BYPASS_MASK            (0x3fffffff)

#define RP2040_SYSCFG_PROC_IN_SYNC_BYPASS_HI_MASK         (0x3f)

#define RP2040_SYSCFG_DBGFORCE_PROC1_ATTACH               (1 << 7)  /* Attach processor 1 debug port to syscfg controls, and disconnect it from external SWD pads. */
#define RP2040_SYSCFG_DBGFORCE_PROC1_SWCLK                (1 << 6)  /* Directly drive processor 1 SWCLK, if PROC1_ATTACH is set */
#define RP2040_SYSCFG_DBGFORCE_PROC1_SWDI                 (1 << 5)  /* Directly drive processor 1 SWDIO input, if PROC1_ATTACH is set */
#define RP2040_SYSCFG_DBGFORCE_PROC1_SWDO                 (1 << 4)  /* Observe the value of processor 1 SWDIO output. */
#define RP2040_SYSCFG_DBGFORCE_PROC0_ATTACH               (1 << 3)  /* Attach processor 0 debug port to syscfg controls, and disconnect it from external SWD pads. */
#define RP2040_SYSCFG_DBGFORCE_PROC0_SWCLK                (1 << 2)  /* Directly drive processor 0 SWCLK, if PROC0_ATTACH is set */
#define RP2040_SYSCFG_DBGFORCE_PROC0_SWDI                 (1 << 1)  /* Directly drive processor 0 SWDIO input, if PROC0_ATTACH is set */
#define RP2040_SYSCFG_DBGFORCE_PROC0_SWDO                 (1 << 0)  /* Observe the value of processor 0 SWDIO output. */

#define RP2040_SYSCFG_MEMPOWERDOWN_ROM                    (1 << 7)
#define RP2040_SYSCFG_MEMPOWERDOWN_USB                    (1 << 6)
#define RP2040_SYSCFG_MEMPOWERDOWN_SRAM5                  (1 << 5)
#define RP2040_SYSCFG_MEMPOWERDOWN_SRAM4                  (1 << 4)
#define RP2040_SYSCFG_MEMPOWERDOWN_SRAM3                  (1 << 3)
#define RP2040_SYSCFG_MEMPOWERDOWN_SRAM2                  (1 << 2)
#define RP2040_SYSCFG_MEMPOWERDOWN_SRAM1                  (1 << 1)
#define RP2040_SYSCFG_MEMPOWERDOWN_SRAM0                  (1 << 0)
