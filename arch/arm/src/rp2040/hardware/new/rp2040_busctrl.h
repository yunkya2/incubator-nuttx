/* Register offsets *********************************************************/

#define RP2040_BUSCTRL_BUS_PRIORITY_OFFSET      0x000000  /* Set the priority of each master for bus arbitration. */
#define RP2040_BUSCTRL_BUS_PRIORITY_ACK_OFFSET  0x000004  /* Bus priority acknowledge */
#define RP2040_BUSCTRL_PERFCTR0_OFFSET          0x000008  /* Bus fabric performance counter 0 */
#define RP2040_BUSCTRL_PERFSEL0_OFFSET          0x00000c  /* Bus fabric performance event select for PERFCTR0 */
#define RP2040_BUSCTRL_PERFCTR1_OFFSET          0x000010  /* Bus fabric performance counter 1 */
#define RP2040_BUSCTRL_PERFSEL1_OFFSET          0x000014  /* Bus fabric performance event select for PERFCTR1 */
#define RP2040_BUSCTRL_PERFCTR2_OFFSET          0x000018  /* Bus fabric performance counter 2 */
#define RP2040_BUSCTRL_PERFSEL2_OFFSET          0x00001c  /* Bus fabric performance event select for PERFCTR2 */
#define RP2040_BUSCTRL_PERFCTR3_OFFSET          0x000020  /* Bus fabric performance counter 3 */
#define RP2040_BUSCTRL_PERFSEL3_OFFSET          0x000024  /* Bus fabric performance event select for PERFCTR3 */

/* Register definitions *****************************************************/

#define RP2040_BUSCTRL_BUS_PRIORITY      (RP2040_BUSCTRL_BASE + RP2040_BUSCTRL_BUS_PRIORITY_OFFSET)
#define RP2040_BUSCTRL_BUS_PRIORITY_ACK  (RP2040_BUSCTRL_BASE + RP2040_BUSCTRL_BUS_PRIORITY_ACK_OFFSET)
#define RP2040_BUSCTRL_PERFCTR0          (RP2040_BUSCTRL_BASE + RP2040_BUSCTRL_PERFCTR0_OFFSET)
#define RP2040_BUSCTRL_PERFSEL0          (RP2040_BUSCTRL_BASE + RP2040_BUSCTRL_PERFSEL0_OFFSET)
#define RP2040_BUSCTRL_PERFCTR1          (RP2040_BUSCTRL_BASE + RP2040_BUSCTRL_PERFCTR1_OFFSET)
#define RP2040_BUSCTRL_PERFSEL1          (RP2040_BUSCTRL_BASE + RP2040_BUSCTRL_PERFSEL1_OFFSET)
#define RP2040_BUSCTRL_PERFCTR2          (RP2040_BUSCTRL_BASE + RP2040_BUSCTRL_PERFCTR2_OFFSET)
#define RP2040_BUSCTRL_PERFSEL2          (RP2040_BUSCTRL_BASE + RP2040_BUSCTRL_PERFSEL2_OFFSET)
#define RP2040_BUSCTRL_PERFCTR3          (RP2040_BUSCTRL_BASE + RP2040_BUSCTRL_PERFCTR3_OFFSET)
#define RP2040_BUSCTRL_PERFSEL3          (RP2040_BUSCTRL_BASE + RP2040_BUSCTRL_PERFSEL3_OFFSET)


/* Register bit definitions *************************************************/


#define RP2040_BUSCTRL_BUS_PRIORITY_DMA_W  (1 << 12)  /* 0 - low priority, 1 - high priority */
#define RP2040_BUSCTRL_BUS_PRIORITY_DMA_R  (1 << 8)  /* 0 - low priority, 1 - high priority */
#define RP2040_BUSCTRL_BUS_PRIORITY_PROC1  (1 << 4)  /* 0 - low priority, 1 - high priority */
#define RP2040_BUSCTRL_BUS_PRIORITY_PROC0  (1 << 0)  /* 0 - low priority, 1 - high priority */

#define RP2040_BUSCTRL_BUS_PRIORITY_ACK    (1 << 0)  /* Goes to 1 once all arbiters have registered the new global priority levels. Arbiters update their local priority when servicing a new nonsequential access. In normal circumstances this will happen almost immediately. */

#define RP2040_BUSCTRL_PERFCTR0_MASK       (0xffffff)  /* Busfabric saturating performance counter 0 Count some event signal from the busfabric arbiters. Write any value to clear. Select an event to count using PERFSEL0 */

#define RP2040_BUSCTRL_PERFSEL0_MASK       (0x1f)  /* Select a performance event for PERFCTR0 */

#define RP2040_BUSCTRL_PERFCTR1_MASK       (0xffffff)  /* Busfabric saturating performance counter 1 Count some event signal from the busfabric arbiters. Write any value to clear. Select an event to count using PERFSEL1 */

#define RP2040_BUSCTRL_PERFSEL1_MASK       (0x1f)  /* Select a performance event for PERFCTR1 */

#define RP2040_BUSCTRL_PERFCTR2_MASK       (0xffffff)  /* Busfabric saturating performance counter 2 Count some event signal from the busfabric arbiters. Write any value to clear. Select an event to count using PERFSEL2 */

#define RP2040_BUSCTRL_PERFSEL2_MASK       (0x1f)  /* Select a performance event for PERFCTR2 */

#define RP2040_BUSCTRL_PERFCTR3_MASK       (0xffffff)  /* Busfabric saturating performance counter 3 Count some event signal from the busfabric arbiters. Write any value to clear. Select an event to count using PERFSEL3 */

#define RP2040_BUSCTRL_PERFSEL3_MASK       (0x1f)  /* Select a performance event for PERFCTR3 */
