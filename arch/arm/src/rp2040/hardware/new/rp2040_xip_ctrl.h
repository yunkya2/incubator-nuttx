/* Register offsets *********************************************************/

#define RP2040_XIP_CTRL_CTRL_OFFSET         0x000000  /* Cache control */
#define RP2040_XIP_CTRL_FLUSH_OFFSET        0x000004  /* Cache Flush control */
#define RP2040_XIP_CTRL_STAT_OFFSET         0x000008  /* Cache Status */
#define RP2040_XIP_CTRL_CTR_HIT_OFFSET      0x00000c  /* Cache Hit counter A 32 bit saturating counter that increments upon each cache hit, i.e. when an XIP access is serviced directly from cached data. Write any value to clear. */
#define RP2040_XIP_CTRL_CTR_ACC_OFFSET      0x000010  /* Cache Access counter A 32 bit saturating counter that increments upon each XIP access, whether the cache is hit or not. This includes noncacheable accesses. Write any value to clear. */
#define RP2040_XIP_CTRL_STREAM_ADDR_OFFSET  0x000014  /* FIFO stream address */
#define RP2040_XIP_CTRL_STREAM_CTR_OFFSET   0x000018  /* FIFO stream control */
#define RP2040_XIP_CTRL_STREAM_FIFO_OFFSET  0x00001c  /* FIFO stream data Streamed data is buffered here, for retrieval by the system DMA. This FIFO can also be accessed via the XIP_AUX slave, to avoid exposing the DMA to bus stalls caused by other XIP traffic. */

/* Register definitions *****************************************************/

#define RP2040_XIP_CTRL_CTRL         (RP2040_XIP_CTRL_BASE + RP2040_XIP_CTRL_CTRL_OFFSET)
#define RP2040_XIP_CTRL_FLUSH        (RP2040_XIP_CTRL_BASE + RP2040_XIP_CTRL_FLUSH_OFFSET)
#define RP2040_XIP_CTRL_STAT         (RP2040_XIP_CTRL_BASE + RP2040_XIP_CTRL_STAT_OFFSET)
#define RP2040_XIP_CTRL_CTR_HIT      (RP2040_XIP_CTRL_BASE + RP2040_XIP_CTRL_CTR_HIT_OFFSET)
#define RP2040_XIP_CTRL_CTR_ACC      (RP2040_XIP_CTRL_BASE + RP2040_XIP_CTRL_CTR_ACC_OFFSET)
#define RP2040_XIP_CTRL_STREAM_ADDR  (RP2040_XIP_CTRL_BASE + RP2040_XIP_CTRL_STREAM_ADDR_OFFSET)
#define RP2040_XIP_CTRL_STREAM_CTR   (RP2040_XIP_CTRL_BASE + RP2040_XIP_CTRL_STREAM_CTR_OFFSET)
#define RP2040_XIP_CTRL_STREAM_FIFO  (RP2040_XIP_CTRL_BASE + RP2040_XIP_CTRL_STREAM_FIFO_OFFSET)


/* Register bit definitions *************************************************/


#define RP2040_XIP_CTRL_CTRL_POWER_DOWN                (1 << 3)  /* When 1, the cache memories are powered down. They retain state, but can not be accessed. This reduces static power dissipation. Writing 1 to this bit forces CTRL_EN to 0, i.e. the cache cannot be enabled when powered down. Cache-as-SRAM accesses will produce a bus error response when the cache is powered down. */
#define RP2040_XIP_CTRL_CTRL_ERR_BADWRITE              (1 << 1)  /* When 1, writes to any alias other than 0x0 (caching, allocating) will produce a bus fault. When 0, these writes are silently ignored. In either case, writes to the 0x0 alias will deallocate on tag match, as usual. */
#define RP2040_XIP_CTRL_CTRL_EN                        (1 << 0)  /* When 1, enable the cache. When the cache is disabled, all XIP accesses will go straight to the flash, without querying the cache. When enabled, cacheable XIP accesses will query the cache, and the flash will not be accessed if the tag matches and the valid bit is set.  If the cache is enabled, cache-as-SRAM accesses have no effect on the cache data RAM, and will produce a bus error response. */

#define RP2040_XIP_CTRL_FLUSH                          (1 << 0)  /* Write 1 to flush the cache. This clears the tag memory, but the data memory retains its contents. (This means cache-as-SRAM contents is not affected by flush or reset.) Reading will hold the bus (stall the processor) until the flush completes. Alternatively STAT can be polled until completion. */

#define RP2040_XIP_CTRL_STAT_FIFO_FULL                 (1 << 2)  /* When 1, indicates the XIP streaming FIFO is completely full. The streaming FIFO is 2 entries deep, so the full and empty flag allow its level to be ascertained. */
#define RP2040_XIP_CTRL_STAT_FIFO_EMPTY                (1 << 1)  /* When 1, indicates the XIP streaming FIFO is completely empty. */
#define RP2040_XIP_CTRL_STAT_FLUSH_READY               (1 << 0)  /* Reads as 0 while a cache flush is in progress, and 1 otherwise. The cache is flushed whenever the XIP block is reset, and also when requested via the FLUSH register. */

#define RP2040_XIP_CTRL_STREAM_ADDR_STREAM_ADDR_SHIFT  (2)  /* The address of the next word to be streamed from flash to the streaming FIFO. Increments automatically after each flash access. Write the initial access address here before starting a streaming read. */
#define RP2040_XIP_CTRL_STREAM_ADDR_MASK               (0x3fffffff << RP2040_XIP_CTRL_STREAM_ADDR_STREAM_ADDR_SHIFT)

#define RP2040_XIP_CTRL_STREAM_CTR_MASK                (0x3fffff)  /* Write a nonzero value to start a streaming read. This will then progress in the background, using flash idle cycles to transfer a linear data block from flash to the streaming FIFO. Decrements automatically (1 at a time) as the stream progresses, and halts on reaching 0. Write 0 to halt an in-progress stream, and discard any in-flight read, so that a new stream can immediately be started (after draining the FIFO and reinitialising STREAM_ADDR) */
