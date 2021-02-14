/* Register offsets *********************************************************/

#define RP2040_PPB_SYST_CSR_OFFSET    0x00e010  /* Use the SysTick Control and Status Register to enable the SysTick features. */
#define RP2040_PPB_SYST_RVR_OFFSET    0x00e014  /* Use the SysTick Reload Value Register to specify the start value to load into the current value register when the counter reaches 0. It can be any value between 0 and 0x00FFFFFF. A start value of 0 is possible, but has no effect because the SysTick interrupt and COUNTFLAG are activated when counting from 1 to 0. The reset value of this register is UNKNOWN. To generate a multi-shot timer with a period of N processor clock cycles, use a RELOAD value of N-1. For example, if the SysTick interrupt is required every 100 clock pulses, set RELOAD to 99. */
#define RP2040_PPB_SYST_CVR_OFFSET    0x00e018  /* Use the SysTick Current Value Register to find the current value in the register. The reset value of this register is UNKNOWN. */
#define RP2040_PPB_SYST_CALIB_OFFSET  0x00e01c  /* Use the SysTick Calibration Value Register to enable software to scale to any required speed using divide and multiply. */
#define RP2040_PPB_NVIC_ISER_OFFSET   0x00e100  /* Use the Interrupt Set-Enable Register to enable interrupts and determine which interrupts are currently enabled. If a pending interrupt is enabled, the NVIC activates the interrupt based on its priority. If an interrupt is not enabled, asserting its interrupt signal changes the interrupt state to pending, but the NVIC never activates the interrupt, regardless of its priority. */
#define RP2040_PPB_NVIC_ICER_OFFSET   0x00e180  /* Use the Interrupt Clear-Enable Registers to disable interrupts and determine which interrupts are currently enabled. */
#define RP2040_PPB_NVIC_ISPR_OFFSET   0x00e200  /* The NVIC_ISPR forces interrupts into the pending state, and shows which interrupts are pending. */
#define RP2040_PPB_NVIC_ICPR_OFFSET   0x00e280  /* Use the Interrupt Clear-Pending Register to clear pending interrupts and determine which interrupts are currently pending. */
#define RP2040_PPB_NVIC_IPR0_OFFSET   0x00e400  /* Use the Interrupt Priority Registers to assign a priority from 0 to 3 to each of the available interrupts. 0 is the highest priority, and 3 is the lowest. Note: Writing 1 to an NVIC_ICPR bit does not affect the active state of the corresponding interrupt. These registers are only word-accessible */
#define RP2040_PPB_NVIC_IPR1_OFFSET   0x00e404  /* Use the Interrupt Priority Registers to assign a priority from 0 to 3 to each of the available interrupts. 0 is the highest priority, and 3 is the lowest. */
#define RP2040_PPB_NVIC_IPR2_OFFSET   0x00e408  /* Use the Interrupt Priority Registers to assign a priority from 0 to 3 to each of the available interrupts. 0 is the highest priority, and 3 is the lowest. */
#define RP2040_PPB_NVIC_IPR3_OFFSET   0x00e40c  /* Use the Interrupt Priority Registers to assign a priority from 0 to 3 to each of the available interrupts. 0 is the highest priority, and 3 is the lowest. */
#define RP2040_PPB_NVIC_IPR4_OFFSET   0x00e410  /* Use the Interrupt Priority Registers to assign a priority from 0 to 3 to each of the available interrupts. 0 is the highest priority, and 3 is the lowest. */
#define RP2040_PPB_NVIC_IPR5_OFFSET   0x00e414  /* Use the Interrupt Priority Registers to assign a priority from 0 to 3 to each of the available interrupts. 0 is the highest priority, and 3 is the lowest. */
#define RP2040_PPB_NVIC_IPR6_OFFSET   0x00e418  /* Use the Interrupt Priority Registers to assign a priority from 0 to 3 to each of the available interrupts. 0 is the highest priority, and 3 is the lowest. */
#define RP2040_PPB_NVIC_IPR7_OFFSET   0x00e41c  /* Use the Interrupt Priority Registers to assign a priority from 0 to 3 to each of the available interrupts. 0 is the highest priority, and 3 is the lowest. */
#define RP2040_PPB_CPUID_OFFSET       0x00ed00  /* Read the CPU ID Base Register to determine: the ID number of the processor core, the version number of the processor core, the implementation details of the processor core. */
#define RP2040_PPB_ICSR_OFFSET        0x00ed04  /* Use the Interrupt Control State Register to set a pending Non-Maskable Interrupt (NMI), set or clear a pending PendSV, set or clear a pending SysTick, check for pending exceptions, check the vector number of the highest priority pended exception, check the vector number of the active exception. */
#define RP2040_PPB_VTOR_OFFSET        0x00ed08  /* The VTOR holds the vector table offset address. */
#define RP2040_PPB_AIRCR_OFFSET       0x00ed0c  /* Use the Application Interrupt and Reset Control Register to: determine data endianness, clear all active state information from debug halt mode, request a system reset. */
#define RP2040_PPB_SCR_OFFSET         0x00ed10  /* System Control Register. Use the System Control Register for power-management functions: signal to the system when the processor can enter a low power state, control how the processor enters and exits low power states. */
#define RP2040_PPB_CCR_OFFSET         0x00ed14  /* The Configuration and Control Register permanently enables stack alignment and causes unaligned accesses to result in a Hard Fault. */
#define RP2040_PPB_SHPR2_OFFSET       0x00ed1c  /* System handlers are a special class of exception handler that can have their priority set to any of the priority levels. Use the System Handler Priority Register 2 to set the priority of SVCall. */
#define RP2040_PPB_SHPR3_OFFSET       0x00ed20  /* System handlers are a special class of exception handler that can have their priority set to any of the priority levels. Use the System Handler Priority Register 3 to set the priority of PendSV and SysTick. */
#define RP2040_PPB_SHCSR_OFFSET       0x00ed24  /* Use the System Handler Control and State Register to determine or clear the pending status of SVCall. */
#define RP2040_PPB_MPU_TYPE_OFFSET    0x00ed90  /* Read the MPU Type Register to determine if the processor implements an MPU, and how many regions the MPU supports. */
#define RP2040_PPB_MPU_CTRL_OFFSET    0x00ed94  /* Use the MPU Control Register to enable and disable the MPU, and to control whether the default memory map is enabled as a background region for privileged accesses, and whether the MPU is enabled for HardFaults and NMIs. */
#define RP2040_PPB_MPU_RNR_OFFSET     0x00ed98  /* Use the MPU Region Number Register to select the region currently accessed by MPU_RBAR and MPU_RASR. */
#define RP2040_PPB_MPU_RBAR_OFFSET    0x00ed9c  /* Read the MPU Region Base Address Register to determine the base address of the region identified by MPU_RNR. Write to update the base address of said region or that of a specified region, with whose number MPU_RNR will also be updated. */
#define RP2040_PPB_MPU_RASR_OFFSET    0x00eda0  /* Use the MPU Region Attribute and Size Register to define the size, access behaviour and memory type of the region identified by MPU_RNR, and enable that region. */

/* Register definitions *****************************************************/

#define RP2040_PPB_SYST_CSR    (RP2040_PPB_BASE + RP2040_PPB_SYST_CSR_OFFSET)
#define RP2040_PPB_SYST_RVR    (RP2040_PPB_BASE + RP2040_PPB_SYST_RVR_OFFSET)
#define RP2040_PPB_SYST_CVR    (RP2040_PPB_BASE + RP2040_PPB_SYST_CVR_OFFSET)
#define RP2040_PPB_SYST_CALIB  (RP2040_PPB_BASE + RP2040_PPB_SYST_CALIB_OFFSET)
#define RP2040_PPB_NVIC_ISER   (RP2040_PPB_BASE + RP2040_PPB_NVIC_ISER_OFFSET)
#define RP2040_PPB_NVIC_ICER   (RP2040_PPB_BASE + RP2040_PPB_NVIC_ICER_OFFSET)
#define RP2040_PPB_NVIC_ISPR   (RP2040_PPB_BASE + RP2040_PPB_NVIC_ISPR_OFFSET)
#define RP2040_PPB_NVIC_ICPR   (RP2040_PPB_BASE + RP2040_PPB_NVIC_ICPR_OFFSET)
#define RP2040_PPB_NVIC_IPR0   (RP2040_PPB_BASE + RP2040_PPB_NVIC_IPR0_OFFSET)
#define RP2040_PPB_NVIC_IPR1   (RP2040_PPB_BASE + RP2040_PPB_NVIC_IPR1_OFFSET)
#define RP2040_PPB_NVIC_IPR2   (RP2040_PPB_BASE + RP2040_PPB_NVIC_IPR2_OFFSET)
#define RP2040_PPB_NVIC_IPR3   (RP2040_PPB_BASE + RP2040_PPB_NVIC_IPR3_OFFSET)
#define RP2040_PPB_NVIC_IPR4   (RP2040_PPB_BASE + RP2040_PPB_NVIC_IPR4_OFFSET)
#define RP2040_PPB_NVIC_IPR5   (RP2040_PPB_BASE + RP2040_PPB_NVIC_IPR5_OFFSET)
#define RP2040_PPB_NVIC_IPR6   (RP2040_PPB_BASE + RP2040_PPB_NVIC_IPR6_OFFSET)
#define RP2040_PPB_NVIC_IPR7   (RP2040_PPB_BASE + RP2040_PPB_NVIC_IPR7_OFFSET)
#define RP2040_PPB_CPUID       (RP2040_PPB_BASE + RP2040_PPB_CPUID_OFFSET)
#define RP2040_PPB_ICSR        (RP2040_PPB_BASE + RP2040_PPB_ICSR_OFFSET)
#define RP2040_PPB_VTOR        (RP2040_PPB_BASE + RP2040_PPB_VTOR_OFFSET)
#define RP2040_PPB_AIRCR       (RP2040_PPB_BASE + RP2040_PPB_AIRCR_OFFSET)
#define RP2040_PPB_SCR         (RP2040_PPB_BASE + RP2040_PPB_SCR_OFFSET)
#define RP2040_PPB_CCR         (RP2040_PPB_BASE + RP2040_PPB_CCR_OFFSET)
#define RP2040_PPB_SHPR2       (RP2040_PPB_BASE + RP2040_PPB_SHPR2_OFFSET)
#define RP2040_PPB_SHPR3       (RP2040_PPB_BASE + RP2040_PPB_SHPR3_OFFSET)
#define RP2040_PPB_SHCSR       (RP2040_PPB_BASE + RP2040_PPB_SHCSR_OFFSET)
#define RP2040_PPB_MPU_TYPE    (RP2040_PPB_BASE + RP2040_PPB_MPU_TYPE_OFFSET)
#define RP2040_PPB_MPU_CTRL    (RP2040_PPB_BASE + RP2040_PPB_MPU_CTRL_OFFSET)
#define RP2040_PPB_MPU_RNR     (RP2040_PPB_BASE + RP2040_PPB_MPU_RNR_OFFSET)
#define RP2040_PPB_MPU_RBAR    (RP2040_PPB_BASE + RP2040_PPB_MPU_RBAR_OFFSET)
#define RP2040_PPB_MPU_RASR    (RP2040_PPB_BASE + RP2040_PPB_MPU_RASR_OFFSET)


/* Register bit definitions *************************************************/


#define RP2040_PPB_SYST_CSR_COUNTFLAG        (1 << 16)  /* Returns 1 if timer counted to 0 since last time this was read. Clears on read by application or debugger. */
#define RP2040_PPB_SYST_CSR_CLKSOURCE        (1 << 2)  /* SysTick clock source. Always reads as one if SYST_CALIB reports NOREF. Selects the SysTick timer clock source: 0 = External reference clock. 1 = Processor clock. */
#define RP2040_PPB_SYST_CSR_TICKINT          (1 << 1)  /* Enables SysTick exception request: 0 = Counting down to zero does not assert the SysTick exception request. 1 = Counting down to zero to asserts the SysTick exception request. */
#define RP2040_PPB_SYST_CSR_ENABLE           (1 << 0)  /* Enable SysTick counter: 0 = Counter disabled. 1 = Counter enabled. */

#define RP2040_PPB_SYST_RVR_RELOAD_MASK      (0xffffff)  /* Value to load into the SysTick Current Value Register when the counter reaches 0. */

#define RP2040_PPB_SYST_CVR_CURRENT_MASK     (0xffffff)  /* Reads return the current value of the SysTick counter. This register is write-clear. Writing to it with any value clears the register to 0. Clearing this register also clears the COUNTFLAG bit of the SysTick Control and Status Register. */

#define RP2040_PPB_SYST_CALIB_NOREF          (1 << 31)  /* If reads as 1, the Reference clock is not provided - the CLKSOURCE bit of the SysTick Control and Status register will be forced to 1 and cannot be cleared to 0. */
#define RP2040_PPB_SYST_CALIB_SKEW           (1 << 30)  /* If reads as 1, the calibration value for 10ms is inexact (due to clock frequency). */
#define RP2040_PPB_SYST_CALIB_TENMS_MASK     (0xffffff)  /* An optional Reload value to be used for 10ms (100Hz) timing, subject to system clock skew errors. If the value reads as 0, the calibration value is not known. */

#define RP2040_PPB_NVIC_IPR0_IP_3_SHIFT      (30)  /* Priority of interrupt 3 */
#define RP2040_PPB_NVIC_IPR0_IP_3_MASK       (0x03 << RP2040_PPB_NVIC_IPR0_IP_3_SHIFT)
#define RP2040_PPB_NVIC_IPR0_IP_2_SHIFT      (22)  /* Priority of interrupt 2 */
#define RP2040_PPB_NVIC_IPR0_IP_2_MASK       (0x03 << RP2040_PPB_NVIC_IPR0_IP_2_SHIFT)
#define RP2040_PPB_NVIC_IPR0_IP_1_SHIFT      (14)  /* Priority of interrupt 1 */
#define RP2040_PPB_NVIC_IPR0_IP_1_MASK       (0x03 << RP2040_PPB_NVIC_IPR0_IP_1_SHIFT)
#define RP2040_PPB_NVIC_IPR0_IP_0_SHIFT      (6)  /* Priority of interrupt 0 */
#define RP2040_PPB_NVIC_IPR0_IP_0_MASK       (0x03 << RP2040_PPB_NVIC_IPR0_IP_0_SHIFT)

#define RP2040_PPB_NVIC_IPR1_IP_7_SHIFT      (30)  /* Priority of interrupt 7 */
#define RP2040_PPB_NVIC_IPR1_IP_7_MASK       (0x03 << RP2040_PPB_NVIC_IPR1_IP_7_SHIFT)
#define RP2040_PPB_NVIC_IPR1_IP_6_SHIFT      (22)  /* Priority of interrupt 6 */
#define RP2040_PPB_NVIC_IPR1_IP_6_MASK       (0x03 << RP2040_PPB_NVIC_IPR1_IP_6_SHIFT)
#define RP2040_PPB_NVIC_IPR1_IP_5_SHIFT      (14)  /* Priority of interrupt 5 */
#define RP2040_PPB_NVIC_IPR1_IP_5_MASK       (0x03 << RP2040_PPB_NVIC_IPR1_IP_5_SHIFT)
#define RP2040_PPB_NVIC_IPR1_IP_4_SHIFT      (6)  /* Priority of interrupt 4 */
#define RP2040_PPB_NVIC_IPR1_IP_4_MASK       (0x03 << RP2040_PPB_NVIC_IPR1_IP_4_SHIFT)

#define RP2040_PPB_NVIC_IPR2_IP_11_SHIFT     (30)  /* Priority of interrupt 11 */
#define RP2040_PPB_NVIC_IPR2_IP_11_MASK      (0x03 << RP2040_PPB_NVIC_IPR2_IP_11_SHIFT)
#define RP2040_PPB_NVIC_IPR2_IP_10_SHIFT     (22)  /* Priority of interrupt 10 */
#define RP2040_PPB_NVIC_IPR2_IP_10_MASK      (0x03 << RP2040_PPB_NVIC_IPR2_IP_10_SHIFT)
#define RP2040_PPB_NVIC_IPR2_IP_9_SHIFT      (14)  /* Priority of interrupt 9 */
#define RP2040_PPB_NVIC_IPR2_IP_9_MASK       (0x03 << RP2040_PPB_NVIC_IPR2_IP_9_SHIFT)
#define RP2040_PPB_NVIC_IPR2_IP_8_SHIFT      (6)  /* Priority of interrupt 8 */
#define RP2040_PPB_NVIC_IPR2_IP_8_MASK       (0x03 << RP2040_PPB_NVIC_IPR2_IP_8_SHIFT)

#define RP2040_PPB_NVIC_IPR3_IP_15_SHIFT     (30)  /* Priority of interrupt 15 */
#define RP2040_PPB_NVIC_IPR3_IP_15_MASK      (0x03 << RP2040_PPB_NVIC_IPR3_IP_15_SHIFT)
#define RP2040_PPB_NVIC_IPR3_IP_14_SHIFT     (22)  /* Priority of interrupt 14 */
#define RP2040_PPB_NVIC_IPR3_IP_14_MASK      (0x03 << RP2040_PPB_NVIC_IPR3_IP_14_SHIFT)
#define RP2040_PPB_NVIC_IPR3_IP_13_SHIFT     (14)  /* Priority of interrupt 13 */
#define RP2040_PPB_NVIC_IPR3_IP_13_MASK      (0x03 << RP2040_PPB_NVIC_IPR3_IP_13_SHIFT)
#define RP2040_PPB_NVIC_IPR3_IP_12_SHIFT     (6)  /* Priority of interrupt 12 */
#define RP2040_PPB_NVIC_IPR3_IP_12_MASK      (0x03 << RP2040_PPB_NVIC_IPR3_IP_12_SHIFT)

#define RP2040_PPB_NVIC_IPR4_IP_19_SHIFT     (30)  /* Priority of interrupt 19 */
#define RP2040_PPB_NVIC_IPR4_IP_19_MASK      (0x03 << RP2040_PPB_NVIC_IPR4_IP_19_SHIFT)
#define RP2040_PPB_NVIC_IPR4_IP_18_SHIFT     (22)  /* Priority of interrupt 18 */
#define RP2040_PPB_NVIC_IPR4_IP_18_MASK      (0x03 << RP2040_PPB_NVIC_IPR4_IP_18_SHIFT)
#define RP2040_PPB_NVIC_IPR4_IP_17_SHIFT     (14)  /* Priority of interrupt 17 */
#define RP2040_PPB_NVIC_IPR4_IP_17_MASK      (0x03 << RP2040_PPB_NVIC_IPR4_IP_17_SHIFT)
#define RP2040_PPB_NVIC_IPR4_IP_16_SHIFT     (6)  /* Priority of interrupt 16 */
#define RP2040_PPB_NVIC_IPR4_IP_16_MASK      (0x03 << RP2040_PPB_NVIC_IPR4_IP_16_SHIFT)

#define RP2040_PPB_NVIC_IPR5_IP_23_SHIFT     (30)  /* Priority of interrupt 23 */
#define RP2040_PPB_NVIC_IPR5_IP_23_MASK      (0x03 << RP2040_PPB_NVIC_IPR5_IP_23_SHIFT)
#define RP2040_PPB_NVIC_IPR5_IP_22_SHIFT     (22)  /* Priority of interrupt 22 */
#define RP2040_PPB_NVIC_IPR5_IP_22_MASK      (0x03 << RP2040_PPB_NVIC_IPR5_IP_22_SHIFT)
#define RP2040_PPB_NVIC_IPR5_IP_21_SHIFT     (14)  /* Priority of interrupt 21 */
#define RP2040_PPB_NVIC_IPR5_IP_21_MASK      (0x03 << RP2040_PPB_NVIC_IPR5_IP_21_SHIFT)
#define RP2040_PPB_NVIC_IPR5_IP_20_SHIFT     (6)  /* Priority of interrupt 20 */
#define RP2040_PPB_NVIC_IPR5_IP_20_MASK      (0x03 << RP2040_PPB_NVIC_IPR5_IP_20_SHIFT)

#define RP2040_PPB_NVIC_IPR6_IP_27_SHIFT     (30)  /* Priority of interrupt 27 */
#define RP2040_PPB_NVIC_IPR6_IP_27_MASK      (0x03 << RP2040_PPB_NVIC_IPR6_IP_27_SHIFT)
#define RP2040_PPB_NVIC_IPR6_IP_26_SHIFT     (22)  /* Priority of interrupt 26 */
#define RP2040_PPB_NVIC_IPR6_IP_26_MASK      (0x03 << RP2040_PPB_NVIC_IPR6_IP_26_SHIFT)
#define RP2040_PPB_NVIC_IPR6_IP_25_SHIFT     (14)  /* Priority of interrupt 25 */
#define RP2040_PPB_NVIC_IPR6_IP_25_MASK      (0x03 << RP2040_PPB_NVIC_IPR6_IP_25_SHIFT)
#define RP2040_PPB_NVIC_IPR6_IP_24_SHIFT     (6)  /* Priority of interrupt 24 */
#define RP2040_PPB_NVIC_IPR6_IP_24_MASK      (0x03 << RP2040_PPB_NVIC_IPR6_IP_24_SHIFT)

#define RP2040_PPB_NVIC_IPR7_IP_31_SHIFT     (30)  /* Priority of interrupt 31 */
#define RP2040_PPB_NVIC_IPR7_IP_31_MASK      (0x03 << RP2040_PPB_NVIC_IPR7_IP_31_SHIFT)
#define RP2040_PPB_NVIC_IPR7_IP_30_SHIFT     (22)  /* Priority of interrupt 30 */
#define RP2040_PPB_NVIC_IPR7_IP_30_MASK      (0x03 << RP2040_PPB_NVIC_IPR7_IP_30_SHIFT)
#define RP2040_PPB_NVIC_IPR7_IP_29_SHIFT     (14)  /* Priority of interrupt 29 */
#define RP2040_PPB_NVIC_IPR7_IP_29_MASK      (0x03 << RP2040_PPB_NVIC_IPR7_IP_29_SHIFT)
#define RP2040_PPB_NVIC_IPR7_IP_28_SHIFT     (6)  /* Priority of interrupt 28 */
#define RP2040_PPB_NVIC_IPR7_IP_28_MASK      (0x03 << RP2040_PPB_NVIC_IPR7_IP_28_SHIFT)

#define RP2040_PPB_CPUID_IMPLEMENTER_SHIFT   (24)  /* Implementor code: 0x41 = ARM */
#define RP2040_PPB_CPUID_IMPLEMENTER_MASK    (0xff << RP2040_PPB_CPUID_IMPLEMENTER_SHIFT)
#define RP2040_PPB_CPUID_VARIANT_SHIFT       (20)  /* Major revision number n in the rnpm revision status: 0x0 = Revision 0. */
#define RP2040_PPB_CPUID_VARIANT_MASK        (0x0f << RP2040_PPB_CPUID_VARIANT_SHIFT)
#define RP2040_PPB_CPUID_ARCHITECTURE_SHIFT  (16)  /* Constant that defines the architecture of the processor: 0xC = ARMv6-M architecture. */
#define RP2040_PPB_CPUID_ARCHITECTURE_MASK   (0x0f << RP2040_PPB_CPUID_ARCHITECTURE_SHIFT)
#define RP2040_PPB_CPUID_PARTNO_SHIFT        (4)  /* Number of processor within family: 0xC60 = Cortex-M0+ */
#define RP2040_PPB_CPUID_PARTNO_MASK         (0xfff << RP2040_PPB_CPUID_PARTNO_SHIFT)
#define RP2040_PPB_CPUID_REVISION_MASK       (0x0f)  /* Minor revision number m in the rnpm revision status: 0x1 = Patch 1. */

#define RP2040_PPB_ICSR_NMIPENDSET           (1 << 31)  /* Setting this bit will activate an NMI. Since NMI is the highest priority exception, it will activate as soon as it is registered. NMI set-pending bit. Write: 0 = No effect. 1 = Changes NMI exception state to pending. Read: 0 = NMI exception is not pending. 1 = NMI exception is pending. Because NMI is the highest-priority exception, normally the processor enters the NMI exception handler as soon as it detects a write of 1 to this bit. Entering the handler then clears this bit to 0. This means a read of this bit by the NMI exception handler returns 1 only if the NMI signal is reasserted while the processor is executing that handler. */
#define RP2040_PPB_ICSR_PENDSVSET            (1 << 28)  /* PendSV set-pending bit. Write: 0 = No effect. 1 = Changes PendSV exception state to pending. Read: 0 = PendSV exception is not pending. 1 = PendSV exception is pending. Writing 1 to this bit is the only way to set the PendSV exception state to pending. */
#define RP2040_PPB_ICSR_PENDSVCLR            (1 << 27)  /* PendSV clear-pending bit. Write: 0 = No effect. 1 = Removes the pending state from the PendSV exception. */
#define RP2040_PPB_ICSR_PENDSTSET            (1 << 26)  /* SysTick exception set-pending bit. Write: 0 = No effect. 1 = Changes SysTick exception state to pending. Read: 0 = SysTick exception is not pending. 1 = SysTick exception is pending. */
#define RP2040_PPB_ICSR_PENDSTCLR            (1 << 25)  /* SysTick exception clear-pending bit. Write: 0 = No effect. 1 = Removes the pending state from the SysTick exception. This bit is WO. On a register read its value is Unknown. */
#define RP2040_PPB_ICSR_ISRPREEMPT           (1 << 23)  /* The system can only access this bit when the core is halted. It indicates that a pending interrupt is to be taken in the next running cycle. If C_MASKINTS is clear in the Debug Halting Control and Status Register, the interrupt is serviced. */
#define RP2040_PPB_ICSR_ISRPENDING           (1 << 22)  /* External interrupt pending flag */
#define RP2040_PPB_ICSR_VECTPENDING_SHIFT    (12)  /* Indicates the exception number for the highest priority pending exception: 0 = no pending exceptions. Non zero = The pending state includes the effect of memory-mapped enable and mask registers. It does not include the PRIMASK special-purpose register qualifier. */
#define RP2040_PPB_ICSR_VECTPENDING_MASK     (0x1ff << RP2040_PPB_ICSR_VECTPENDING_SHIFT)
#define RP2040_PPB_ICSR_VECTACTIVE_MASK      (0x1ff)  /* Active exception number field. Reset clears the VECTACTIVE field. */

#define RP2040_PPB_VTOR_TBLOFF_SHIFT         (8)  /* Bits [31:8] of the indicate the vector table offset address. */
#define RP2040_PPB_VTOR_TBLOFF_MASK          (0xffffff << RP2040_PPB_VTOR_TBLOFF_SHIFT)

#define RP2040_PPB_AIRCR_VECTKEY_SHIFT       (16)  /* Register key: Reads as Unknown On writes, write 0x05FA to VECTKEY, otherwise the write is ignored. */
#define RP2040_PPB_AIRCR_VECTKEY_MASK        (0xffff << RP2040_PPB_AIRCR_VECTKEY_SHIFT)
#define RP2040_PPB_AIRCR_ENDIANESS           (1 << 15)  /* Data endianness implemented: 0 = Little-endian. */
#define RP2040_PPB_AIRCR_SYSRESETREQ         (1 << 2)  /* Writing 1 to this bit causes the SYSRESETREQ signal to the outer system to be asserted to request a reset. The intention is to force a large system reset of all major components except for debug. The C_HALT bit in the DHCSR is cleared as a result of the system reset requested. The debugger does not lose contact with the device. */
#define RP2040_PPB_AIRCR_VECTCLRACTIVE       (1 << 1)  /* Clears all active state information for fixed and configurable exceptions. This bit: is self-clearing, can only be set by the DAP when the core is halted.  When set: clears all active exception status of the processor, forces a return to Thread mode, forces an IPSR of 0. A debugger must re-initialize the stack. */

#define RP2040_PPB_SCR_SEVONPEND             (1 << 4)  /* Send Event on Pending bit: 0 = Only enabled interrupts or events can wakeup the processor, disabled interrupts are excluded. 1 = Enabled events and all interrupts, including disabled interrupts, can wakeup the processor. When an event or interrupt becomes pending, the event signal wakes up the processor from WFE. If the processor is not waiting for an event, the event is registered and affects the next WFE. The processor also wakes up on execution of an SEV instruction or an external event. */
#define RP2040_PPB_SCR_SLEEPDEEP             (1 << 2)  /* Controls whether the processor uses sleep or deep sleep as its low power mode: 0 = Sleep. 1 = Deep sleep. */
#define RP2040_PPB_SCR_SLEEPONEXIT           (1 << 1)  /* Indicates sleep-on-exit when returning from Handler mode to Thread mode: 0 = Do not sleep when returning to Thread mode. 1 = Enter sleep, or deep sleep, on return from an ISR to Thread mode. Setting this bit to 1 enables an interrupt driven application to avoid returning to an empty main application. */

#define RP2040_PPB_CCR_STKALIGN              (1 << 9)  /* Always reads as one, indicates 8-byte stack alignment on exception entry. On exception entry, the processor uses bit[9] of the stacked PSR to indicate the stack alignment. On return from the exception it uses this stacked bit to restore the correct stack alignment. */
#define RP2040_PPB_CCR_UNALIGN_TRP           (1 << 3)  /* Always reads as one, indicates that all unaligned accesses generate a HardFault. */

#define RP2040_PPB_SHPR2_PRI_11_SHIFT        (30)  /* Priority of system handler 11, SVCall */
#define RP2040_PPB_SHPR2_PRI_11_MASK         (0x03 << RP2040_PPB_SHPR2_PRI_11_SHIFT)

#define RP2040_PPB_SHPR3_PRI_15_SHIFT        (30)  /* Priority of system handler 15, SysTick */
#define RP2040_PPB_SHPR3_PRI_15_MASK         (0x03 << RP2040_PPB_SHPR3_PRI_15_SHIFT)
#define RP2040_PPB_SHPR3_PRI_14_SHIFT        (22)  /* Priority of system handler 14, PendSV */
#define RP2040_PPB_SHPR3_PRI_14_MASK         (0x03 << RP2040_PPB_SHPR3_PRI_14_SHIFT)

#define RP2040_PPB_SHCSR_SVCALLPENDED        (1 << 15)  /* Reads as 1 if SVCall is Pending.  Write 1 to set pending SVCall, write 0 to clear pending SVCall. */

#define RP2040_PPB_MPU_TYPE_IREGION_SHIFT    (16)  /* Instruction region. Reads as zero as ARMv6-M only supports a unified MPU. */
#define RP2040_PPB_MPU_TYPE_IREGION_MASK     (0xff << RP2040_PPB_MPU_TYPE_IREGION_SHIFT)
#define RP2040_PPB_MPU_TYPE_DREGION_SHIFT    (8)  /* Number of regions supported by the MPU. */
#define RP2040_PPB_MPU_TYPE_DREGION_MASK     (0xff << RP2040_PPB_MPU_TYPE_DREGION_SHIFT)
#define RP2040_PPB_MPU_TYPE_SEPARATE         (1 << 0)  /* Indicates support for separate instruction and data address maps. Reads as 0 as ARMv6-M only supports a unified MPU. */

#define RP2040_PPB_MPU_CTRL_PRIVDEFENA       (1 << 2)  /* Controls whether the default memory map is enabled as a background region for privileged accesses. This bit is ignored when ENABLE is clear. 0 = If the MPU is enabled, disables use of the default memory map. Any memory access to a location not covered by any enabled region causes a fault. 1 = If the MPU is enabled, enables use of the default memory map as a background region for privileged software accesses. When enabled, the background region acts as if it is region number -1. Any region that is defined and enabled has priority over this default map. */
#define RP2040_PPB_MPU_CTRL_HFNMIENA         (1 << 1)  /* Controls the use of the MPU for HardFaults and NMIs. Setting this bit when ENABLE is clear results in UNPREDICTABLE behaviour. When the MPU is enabled: 0 = MPU is disabled during HardFault and NMI handlers, regardless of the value of the ENABLE bit. 1 = the MPU is enabled during HardFault and NMI handlers. */
#define RP2040_PPB_MPU_CTRL_ENABLE           (1 << 0)  /* Enables the MPU. If the MPU is disabled, privileged and unprivileged accesses use the default memory map. 0 = MPU disabled. 1 = MPU enabled. */

#define RP2040_PPB_MPU_RNR_REGION_MASK       (0x0f)  /* Indicates the MPU region referenced by the MPU_RBAR and MPU_RASR registers. The MPU supports 8 memory regions, so the permitted values of this field are 0-7. */

#define RP2040_PPB_MPU_RBAR_ADDR_SHIFT       (8)  /* Base address of the region. */
#define RP2040_PPB_MPU_RBAR_ADDR_MASK        (0xffffff << RP2040_PPB_MPU_RBAR_ADDR_SHIFT)
#define RP2040_PPB_MPU_RBAR_VALID            (1 << 4)  /* On writes, indicates whether the write must update the base address of the region identified by the REGION field, updating the MPU_RNR to indicate this new region. Write: 0 = MPU_RNR not changed, and the processor: Updates the base address for the region specified in the MPU_RNR. Ignores the value of the REGION field. 1 = The processor: Updates the value of the MPU_RNR to the value of the REGION field. Updates the base address for the region specified in the REGION field. Always reads as zero. */
#define RP2040_PPB_MPU_RBAR_REGION_MASK      (0x0f)  /* On writes, specifies the number of the region whose base address to update provided VALID is set written as 1. On reads, returns bits [3:0] of MPU_RNR. */

#define RP2040_PPB_MPU_RASR_ATTRS_SHIFT      (16)  /* The MPU Region Attribute field. Use to define the region attribute control. 28 = XN: Instruction access disable bit: 0 = Instruction fetches enabled. 1 = Instruction fetches disabled. 26:24 = AP: Access permission field 18 = S: Shareable bit 17 = C: Cacheable bit 16 = B: Bufferable bit */
#define RP2040_PPB_MPU_RASR_ATTRS_MASK       (0xffff << RP2040_PPB_MPU_RASR_ATTRS_SHIFT)
#define RP2040_PPB_MPU_RASR_SRD_SHIFT        (8)  /* Subregion Disable. For regions of 256 bytes or larger, each bit of this field controls whether one of the eight equal subregions is enabled. */
#define RP2040_PPB_MPU_RASR_SRD_MASK         (0xff << RP2040_PPB_MPU_RASR_SRD_SHIFT)
#define RP2040_PPB_MPU_RASR_SIZE_SHIFT       (1)  /* Indicates the region size. Region size in bytes = 2^(SIZE+1). The minimum permitted value is 7 (b00111) = 256Bytes */
#define RP2040_PPB_MPU_RASR_SIZE_MASK        (0x1f << RP2040_PPB_MPU_RASR_SIZE_SHIFT)
#define RP2040_PPB_MPU_RASR_ENABLE           (1 << 0)  /* Enables the region. */
