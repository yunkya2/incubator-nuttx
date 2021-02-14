/* Register offsets *********************************************************/

#define RP2040_DMA_CH0_READ_ADDR_OFFSET              0x000000  /* DMA Channel 0 Read Address pointer This register updates automatically each time a read completes. The current value is the next address to be read by this channel. */
#define RP2040_DMA_CH0_WRITE_ADDR_OFFSET             0x000004  /* DMA Channel 0 Write Address pointer This register updates automatically each time a write completes. The current value is the next address to be written by this channel. */
#define RP2040_DMA_CH0_TRANS_COUNT_OFFSET            0x000008  /* DMA Channel 0 Transfer Count Program the number of bus transfers a channel will perform before halting. Note that, if transfers are larger than one byte in size, this is not equal to the number of bytes transferred (see CTRL_DATA_SIZE).  When the channel is active, reading this register shows the number of transfers remaining, updating automatically each time a write transfer completes.  Writing this register sets the RELOAD value for the transfer counter. Each time this channel is triggered, the RELOAD value is copied into the live transfer counter. The channel can be started multiple times, and will perform the same number of transfers each time, as programmed by most recent write.  The RELOAD value can be observed at CHx_DBG_TCR. If TRANS_COUNT is used as a trigger, the written value is used immediately as the length of the new transfer sequence, as well as being written to RELOAD. */
#define RP2040_DMA_CH0_CTRL_TRIG_OFFSET              0x00000c  /* DMA Channel 0 Control and Status */
#define RP2040_DMA_CH0_AL1_CTRL_OFFSET               0x000010  /* Alias for channel 0 CTRL register */
#define RP2040_DMA_CH0_AL1_READ_ADDR_OFFSET          0x000014  /* Alias for channel 0 READ_ADDR register */
#define RP2040_DMA_CH0_AL1_WRITE_ADDR_OFFSET         0x000018  /* Alias for channel 0 WRITE_ADDR register */
#define RP2040_DMA_CH0_AL1_TRANS_COUNT_TRIG_OFFSET   0x00001c  /* Alias for channel 0 TRANS_COUNT register This is a trigger register (0xc). Writing a nonzero value will reload the channel counter and start the channel. */
#define RP2040_DMA_CH0_AL2_CTRL_OFFSET               0x000020  /* Alias for channel 0 CTRL register */
#define RP2040_DMA_CH0_AL2_TRANS_COUNT_OFFSET        0x000024  /* Alias for channel 0 TRANS_COUNT register */
#define RP2040_DMA_CH0_AL2_READ_ADDR_OFFSET          0x000028  /* Alias for channel 0 READ_ADDR register */
#define RP2040_DMA_CH0_AL2_WRITE_ADDR_TRIG_OFFSET    0x00002c  /* Alias for channel 0 WRITE_ADDR register This is a trigger register (0xc). Writing a nonzero value will reload the channel counter and start the channel. */
#define RP2040_DMA_CH0_AL3_CTRL_OFFSET               0x000030  /* Alias for channel 0 CTRL register */
#define RP2040_DMA_CH0_AL3_WRITE_ADDR_OFFSET         0x000034  /* Alias for channel 0 WRITE_ADDR register */
#define RP2040_DMA_CH0_AL3_TRANS_COUNT_OFFSET        0x000038  /* Alias for channel 0 TRANS_COUNT register */
#define RP2040_DMA_CH0_AL3_READ_ADDR_TRIG_OFFSET     0x00003c  /* Alias for channel 0 READ_ADDR register This is a trigger register (0xc). Writing a nonzero value will reload the channel counter and start the channel. */
#define RP2040_DMA_CH1_READ_ADDR_OFFSET              0x000040  /* DMA Channel 1 Read Address pointer This register updates automatically each time a read completes. The current value is the next address to be read by this channel. */
#define RP2040_DMA_CH1_WRITE_ADDR_OFFSET             0x000044  /* DMA Channel 1 Write Address pointer This register updates automatically each time a write completes. The current value is the next address to be written by this channel. */
#define RP2040_DMA_CH1_TRANS_COUNT_OFFSET            0x000048  /* DMA Channel 1 Transfer Count Program the number of bus transfers a channel will perform before halting. Note that, if transfers are larger than one byte in size, this is not equal to the number of bytes transferred (see CTRL_DATA_SIZE).  When the channel is active, reading this register shows the number of transfers remaining, updating automatically each time a write transfer completes.  Writing this register sets the RELOAD value for the transfer counter. Each time this channel is triggered, the RELOAD value is copied into the live transfer counter. The channel can be started multiple times, and will perform the same number of transfers each time, as programmed by most recent write.  The RELOAD value can be observed at CHx_DBG_TCR. If TRANS_COUNT is used as a trigger, the written value is used immediately as the length of the new transfer sequence, as well as being written to RELOAD. */
#define RP2040_DMA_CH1_CTRL_TRIG_OFFSET              0x00004c  /* DMA Channel 1 Control and Status */
#define RP2040_DMA_CH1_AL1_CTRL_OFFSET               0x000050  /* Alias for channel 1 CTRL register */
#define RP2040_DMA_CH1_AL1_READ_ADDR_OFFSET          0x000054  /* Alias for channel 1 READ_ADDR register */
#define RP2040_DMA_CH1_AL1_WRITE_ADDR_OFFSET         0x000058  /* Alias for channel 1 WRITE_ADDR register */
#define RP2040_DMA_CH1_AL1_TRANS_COUNT_TRIG_OFFSET   0x00005c  /* Alias for channel 1 TRANS_COUNT register This is a trigger register (0xc). Writing a nonzero value will reload the channel counter and start the channel. */
#define RP2040_DMA_CH1_AL2_CTRL_OFFSET               0x000060  /* Alias for channel 1 CTRL register */
#define RP2040_DMA_CH1_AL2_TRANS_COUNT_OFFSET        0x000064  /* Alias for channel 1 TRANS_COUNT register */
#define RP2040_DMA_CH1_AL2_READ_ADDR_OFFSET          0x000068  /* Alias for channel 1 READ_ADDR register */
#define RP2040_DMA_CH1_AL2_WRITE_ADDR_TRIG_OFFSET    0x00006c  /* Alias for channel 1 WRITE_ADDR register This is a trigger register (0xc). Writing a nonzero value will reload the channel counter and start the channel. */
#define RP2040_DMA_CH1_AL3_CTRL_OFFSET               0x000070  /* Alias for channel 1 CTRL register */
#define RP2040_DMA_CH1_AL3_WRITE_ADDR_OFFSET         0x000074  /* Alias for channel 1 WRITE_ADDR register */
#define RP2040_DMA_CH1_AL3_TRANS_COUNT_OFFSET        0x000078  /* Alias for channel 1 TRANS_COUNT register */
#define RP2040_DMA_CH1_AL3_READ_ADDR_TRIG_OFFSET     0x00007c  /* Alias for channel 1 READ_ADDR register This is a trigger register (0xc). Writing a nonzero value will reload the channel counter and start the channel. */
#define RP2040_DMA_CH2_READ_ADDR_OFFSET              0x000080  /* DMA Channel 2 Read Address pointer This register updates automatically each time a read completes. The current value is the next address to be read by this channel. */
#define RP2040_DMA_CH2_WRITE_ADDR_OFFSET             0x000084  /* DMA Channel 2 Write Address pointer This register updates automatically each time a write completes. The current value is the next address to be written by this channel. */
#define RP2040_DMA_CH2_TRANS_COUNT_OFFSET            0x000088  /* DMA Channel 2 Transfer Count Program the number of bus transfers a channel will perform before halting. Note that, if transfers are larger than one byte in size, this is not equal to the number of bytes transferred (see CTRL_DATA_SIZE).  When the channel is active, reading this register shows the number of transfers remaining, updating automatically each time a write transfer completes.  Writing this register sets the RELOAD value for the transfer counter. Each time this channel is triggered, the RELOAD value is copied into the live transfer counter. The channel can be started multiple times, and will perform the same number of transfers each time, as programmed by most recent write.  The RELOAD value can be observed at CHx_DBG_TCR. If TRANS_COUNT is used as a trigger, the written value is used immediately as the length of the new transfer sequence, as well as being written to RELOAD. */
#define RP2040_DMA_CH2_CTRL_TRIG_OFFSET              0x00008c  /* DMA Channel 2 Control and Status */
#define RP2040_DMA_CH2_AL1_CTRL_OFFSET               0x000090  /* Alias for channel 2 CTRL register */
#define RP2040_DMA_CH2_AL1_READ_ADDR_OFFSET          0x000094  /* Alias for channel 2 READ_ADDR register */
#define RP2040_DMA_CH2_AL1_WRITE_ADDR_OFFSET         0x000098  /* Alias for channel 2 WRITE_ADDR register */
#define RP2040_DMA_CH2_AL1_TRANS_COUNT_TRIG_OFFSET   0x00009c  /* Alias for channel 2 TRANS_COUNT register This is a trigger register (0xc). Writing a nonzero value will reload the channel counter and start the channel. */
#define RP2040_DMA_CH2_AL2_CTRL_OFFSET               0x0000a0  /* Alias for channel 2 CTRL register */
#define RP2040_DMA_CH2_AL2_TRANS_COUNT_OFFSET        0x0000a4  /* Alias for channel 2 TRANS_COUNT register */
#define RP2040_DMA_CH2_AL2_READ_ADDR_OFFSET          0x0000a8  /* Alias for channel 2 READ_ADDR register */
#define RP2040_DMA_CH2_AL2_WRITE_ADDR_TRIG_OFFSET    0x0000ac  /* Alias for channel 2 WRITE_ADDR register This is a trigger register (0xc). Writing a nonzero value will reload the channel counter and start the channel. */
#define RP2040_DMA_CH2_AL3_CTRL_OFFSET               0x0000b0  /* Alias for channel 2 CTRL register */
#define RP2040_DMA_CH2_AL3_WRITE_ADDR_OFFSET         0x0000b4  /* Alias for channel 2 WRITE_ADDR register */
#define RP2040_DMA_CH2_AL3_TRANS_COUNT_OFFSET        0x0000b8  /* Alias for channel 2 TRANS_COUNT register */
#define RP2040_DMA_CH2_AL3_READ_ADDR_TRIG_OFFSET     0x0000bc  /* Alias for channel 2 READ_ADDR register This is a trigger register (0xc). Writing a nonzero value will reload the channel counter and start the channel. */
#define RP2040_DMA_CH3_READ_ADDR_OFFSET              0x0000c0  /* DMA Channel 3 Read Address pointer This register updates automatically each time a read completes. The current value is the next address to be read by this channel. */
#define RP2040_DMA_CH3_WRITE_ADDR_OFFSET             0x0000c4  /* DMA Channel 3 Write Address pointer This register updates automatically each time a write completes. The current value is the next address to be written by this channel. */
#define RP2040_DMA_CH3_TRANS_COUNT_OFFSET            0x0000c8  /* DMA Channel 3 Transfer Count Program the number of bus transfers a channel will perform before halting. Note that, if transfers are larger than one byte in size, this is not equal to the number of bytes transferred (see CTRL_DATA_SIZE).  When the channel is active, reading this register shows the number of transfers remaining, updating automatically each time a write transfer completes.  Writing this register sets the RELOAD value for the transfer counter. Each time this channel is triggered, the RELOAD value is copied into the live transfer counter. The channel can be started multiple times, and will perform the same number of transfers each time, as programmed by most recent write.  The RELOAD value can be observed at CHx_DBG_TCR. If TRANS_COUNT is used as a trigger, the written value is used immediately as the length of the new transfer sequence, as well as being written to RELOAD. */
#define RP2040_DMA_CH3_CTRL_TRIG_OFFSET              0x0000cc  /* DMA Channel 3 Control and Status */
#define RP2040_DMA_CH3_AL1_CTRL_OFFSET               0x0000d0  /* Alias for channel 3 CTRL register */
#define RP2040_DMA_CH3_AL1_READ_ADDR_OFFSET          0x0000d4  /* Alias for channel 3 READ_ADDR register */
#define RP2040_DMA_CH3_AL1_WRITE_ADDR_OFFSET         0x0000d8  /* Alias for channel 3 WRITE_ADDR register */
#define RP2040_DMA_CH3_AL1_TRANS_COUNT_TRIG_OFFSET   0x0000dc  /* Alias for channel 3 TRANS_COUNT register This is a trigger register (0xc). Writing a nonzero value will reload the channel counter and start the channel. */
#define RP2040_DMA_CH3_AL2_CTRL_OFFSET               0x0000e0  /* Alias for channel 3 CTRL register */
#define RP2040_DMA_CH3_AL2_TRANS_COUNT_OFFSET        0x0000e4  /* Alias for channel 3 TRANS_COUNT register */
#define RP2040_DMA_CH3_AL2_READ_ADDR_OFFSET          0x0000e8  /* Alias for channel 3 READ_ADDR register */
#define RP2040_DMA_CH3_AL2_WRITE_ADDR_TRIG_OFFSET    0x0000ec  /* Alias for channel 3 WRITE_ADDR register This is a trigger register (0xc). Writing a nonzero value will reload the channel counter and start the channel. */
#define RP2040_DMA_CH3_AL3_CTRL_OFFSET               0x0000f0  /* Alias for channel 3 CTRL register */
#define RP2040_DMA_CH3_AL3_WRITE_ADDR_OFFSET         0x0000f4  /* Alias for channel 3 WRITE_ADDR register */
#define RP2040_DMA_CH3_AL3_TRANS_COUNT_OFFSET        0x0000f8  /* Alias for channel 3 TRANS_COUNT register */
#define RP2040_DMA_CH3_AL3_READ_ADDR_TRIG_OFFSET     0x0000fc  /* Alias for channel 3 READ_ADDR register This is a trigger register (0xc). Writing a nonzero value will reload the channel counter and start the channel. */
#define RP2040_DMA_CH4_READ_ADDR_OFFSET              0x000100  /* DMA Channel 4 Read Address pointer This register updates automatically each time a read completes. The current value is the next address to be read by this channel. */
#define RP2040_DMA_CH4_WRITE_ADDR_OFFSET             0x000104  /* DMA Channel 4 Write Address pointer This register updates automatically each time a write completes. The current value is the next address to be written by this channel. */
#define RP2040_DMA_CH4_TRANS_COUNT_OFFSET            0x000108  /* DMA Channel 4 Transfer Count Program the number of bus transfers a channel will perform before halting. Note that, if transfers are larger than one byte in size, this is not equal to the number of bytes transferred (see CTRL_DATA_SIZE).  When the channel is active, reading this register shows the number of transfers remaining, updating automatically each time a write transfer completes.  Writing this register sets the RELOAD value for the transfer counter. Each time this channel is triggered, the RELOAD value is copied into the live transfer counter. The channel can be started multiple times, and will perform the same number of transfers each time, as programmed by most recent write.  The RELOAD value can be observed at CHx_DBG_TCR. If TRANS_COUNT is used as a trigger, the written value is used immediately as the length of the new transfer sequence, as well as being written to RELOAD. */
#define RP2040_DMA_CH4_CTRL_TRIG_OFFSET              0x00010c  /* DMA Channel 4 Control and Status */
#define RP2040_DMA_CH4_AL1_CTRL_OFFSET               0x000110  /* Alias for channel 4 CTRL register */
#define RP2040_DMA_CH4_AL1_READ_ADDR_OFFSET          0x000114  /* Alias for channel 4 READ_ADDR register */
#define RP2040_DMA_CH4_AL1_WRITE_ADDR_OFFSET         0x000118  /* Alias for channel 4 WRITE_ADDR register */
#define RP2040_DMA_CH4_AL1_TRANS_COUNT_TRIG_OFFSET   0x00011c  /* Alias for channel 4 TRANS_COUNT register This is a trigger register (0xc). Writing a nonzero value will reload the channel counter and start the channel. */
#define RP2040_DMA_CH4_AL2_CTRL_OFFSET               0x000120  /* Alias for channel 4 CTRL register */
#define RP2040_DMA_CH4_AL2_TRANS_COUNT_OFFSET        0x000124  /* Alias for channel 4 TRANS_COUNT register */
#define RP2040_DMA_CH4_AL2_READ_ADDR_OFFSET          0x000128  /* Alias for channel 4 READ_ADDR register */
#define RP2040_DMA_CH4_AL2_WRITE_ADDR_TRIG_OFFSET    0x00012c  /* Alias for channel 4 WRITE_ADDR register This is a trigger register (0xc). Writing a nonzero value will reload the channel counter and start the channel. */
#define RP2040_DMA_CH4_AL3_CTRL_OFFSET               0x000130  /* Alias for channel 4 CTRL register */
#define RP2040_DMA_CH4_AL3_WRITE_ADDR_OFFSET         0x000134  /* Alias for channel 4 WRITE_ADDR register */
#define RP2040_DMA_CH4_AL3_TRANS_COUNT_OFFSET        0x000138  /* Alias for channel 4 TRANS_COUNT register */
#define RP2040_DMA_CH4_AL3_READ_ADDR_TRIG_OFFSET     0x00013c  /* Alias for channel 4 READ_ADDR register This is a trigger register (0xc). Writing a nonzero value will reload the channel counter and start the channel. */
#define RP2040_DMA_CH5_READ_ADDR_OFFSET              0x000140  /* DMA Channel 5 Read Address pointer This register updates automatically each time a read completes. The current value is the next address to be read by this channel. */
#define RP2040_DMA_CH5_WRITE_ADDR_OFFSET             0x000144  /* DMA Channel 5 Write Address pointer This register updates automatically each time a write completes. The current value is the next address to be written by this channel. */
#define RP2040_DMA_CH5_TRANS_COUNT_OFFSET            0x000148  /* DMA Channel 5 Transfer Count Program the number of bus transfers a channel will perform before halting. Note that, if transfers are larger than one byte in size, this is not equal to the number of bytes transferred (see CTRL_DATA_SIZE).  When the channel is active, reading this register shows the number of transfers remaining, updating automatically each time a write transfer completes.  Writing this register sets the RELOAD value for the transfer counter. Each time this channel is triggered, the RELOAD value is copied into the live transfer counter. The channel can be started multiple times, and will perform the same number of transfers each time, as programmed by most recent write.  The RELOAD value can be observed at CHx_DBG_TCR. If TRANS_COUNT is used as a trigger, the written value is used immediately as the length of the new transfer sequence, as well as being written to RELOAD. */
#define RP2040_DMA_CH5_CTRL_TRIG_OFFSET              0x00014c  /* DMA Channel 5 Control and Status */
#define RP2040_DMA_CH5_AL1_CTRL_OFFSET               0x000150  /* Alias for channel 5 CTRL register */
#define RP2040_DMA_CH5_AL1_READ_ADDR_OFFSET          0x000154  /* Alias for channel 5 READ_ADDR register */
#define RP2040_DMA_CH5_AL1_WRITE_ADDR_OFFSET         0x000158  /* Alias for channel 5 WRITE_ADDR register */
#define RP2040_DMA_CH5_AL1_TRANS_COUNT_TRIG_OFFSET   0x00015c  /* Alias for channel 5 TRANS_COUNT register This is a trigger register (0xc). Writing a nonzero value will reload the channel counter and start the channel. */
#define RP2040_DMA_CH5_AL2_CTRL_OFFSET               0x000160  /* Alias for channel 5 CTRL register */
#define RP2040_DMA_CH5_AL2_TRANS_COUNT_OFFSET        0x000164  /* Alias for channel 5 TRANS_COUNT register */
#define RP2040_DMA_CH5_AL2_READ_ADDR_OFFSET          0x000168  /* Alias for channel 5 READ_ADDR register */
#define RP2040_DMA_CH5_AL2_WRITE_ADDR_TRIG_OFFSET    0x00016c  /* Alias for channel 5 WRITE_ADDR register This is a trigger register (0xc). Writing a nonzero value will reload the channel counter and start the channel. */
#define RP2040_DMA_CH5_AL3_CTRL_OFFSET               0x000170  /* Alias for channel 5 CTRL register */
#define RP2040_DMA_CH5_AL3_WRITE_ADDR_OFFSET         0x000174  /* Alias for channel 5 WRITE_ADDR register */
#define RP2040_DMA_CH5_AL3_TRANS_COUNT_OFFSET        0x000178  /* Alias for channel 5 TRANS_COUNT register */
#define RP2040_DMA_CH5_AL3_READ_ADDR_TRIG_OFFSET     0x00017c  /* Alias for channel 5 READ_ADDR register This is a trigger register (0xc). Writing a nonzero value will reload the channel counter and start the channel. */
#define RP2040_DMA_CH6_READ_ADDR_OFFSET              0x000180  /* DMA Channel 6 Read Address pointer This register updates automatically each time a read completes. The current value is the next address to be read by this channel. */
#define RP2040_DMA_CH6_WRITE_ADDR_OFFSET             0x000184  /* DMA Channel 6 Write Address pointer This register updates automatically each time a write completes. The current value is the next address to be written by this channel. */
#define RP2040_DMA_CH6_TRANS_COUNT_OFFSET            0x000188  /* DMA Channel 6 Transfer Count Program the number of bus transfers a channel will perform before halting. Note that, if transfers are larger than one byte in size, this is not equal to the number of bytes transferred (see CTRL_DATA_SIZE).  When the channel is active, reading this register shows the number of transfers remaining, updating automatically each time a write transfer completes.  Writing this register sets the RELOAD value for the transfer counter. Each time this channel is triggered, the RELOAD value is copied into the live transfer counter. The channel can be started multiple times, and will perform the same number of transfers each time, as programmed by most recent write.  The RELOAD value can be observed at CHx_DBG_TCR. If TRANS_COUNT is used as a trigger, the written value is used immediately as the length of the new transfer sequence, as well as being written to RELOAD. */
#define RP2040_DMA_CH6_CTRL_TRIG_OFFSET              0x00018c  /* DMA Channel 6 Control and Status */
#define RP2040_DMA_CH6_AL1_CTRL_OFFSET               0x000190  /* Alias for channel 6 CTRL register */
#define RP2040_DMA_CH6_AL1_READ_ADDR_OFFSET          0x000194  /* Alias for channel 6 READ_ADDR register */
#define RP2040_DMA_CH6_AL1_WRITE_ADDR_OFFSET         0x000198  /* Alias for channel 6 WRITE_ADDR register */
#define RP2040_DMA_CH6_AL1_TRANS_COUNT_TRIG_OFFSET   0x00019c  /* Alias for channel 6 TRANS_COUNT register This is a trigger register (0xc). Writing a nonzero value will reload the channel counter and start the channel. */
#define RP2040_DMA_CH6_AL2_CTRL_OFFSET               0x0001a0  /* Alias for channel 6 CTRL register */
#define RP2040_DMA_CH6_AL2_TRANS_COUNT_OFFSET        0x0001a4  /* Alias for channel 6 TRANS_COUNT register */
#define RP2040_DMA_CH6_AL2_READ_ADDR_OFFSET          0x0001a8  /* Alias for channel 6 READ_ADDR register */
#define RP2040_DMA_CH6_AL2_WRITE_ADDR_TRIG_OFFSET    0x0001ac  /* Alias for channel 6 WRITE_ADDR register This is a trigger register (0xc). Writing a nonzero value will reload the channel counter and start the channel. */
#define RP2040_DMA_CH6_AL3_CTRL_OFFSET               0x0001b0  /* Alias for channel 6 CTRL register */
#define RP2040_DMA_CH6_AL3_WRITE_ADDR_OFFSET         0x0001b4  /* Alias for channel 6 WRITE_ADDR register */
#define RP2040_DMA_CH6_AL3_TRANS_COUNT_OFFSET        0x0001b8  /* Alias for channel 6 TRANS_COUNT register */
#define RP2040_DMA_CH6_AL3_READ_ADDR_TRIG_OFFSET     0x0001bc  /* Alias for channel 6 READ_ADDR register This is a trigger register (0xc). Writing a nonzero value will reload the channel counter and start the channel. */
#define RP2040_DMA_CH7_READ_ADDR_OFFSET              0x0001c0  /* DMA Channel 7 Read Address pointer This register updates automatically each time a read completes. The current value is the next address to be read by this channel. */
#define RP2040_DMA_CH7_WRITE_ADDR_OFFSET             0x0001c4  /* DMA Channel 7 Write Address pointer This register updates automatically each time a write completes. The current value is the next address to be written by this channel. */
#define RP2040_DMA_CH7_TRANS_COUNT_OFFSET            0x0001c8  /* DMA Channel 7 Transfer Count Program the number of bus transfers a channel will perform before halting. Note that, if transfers are larger than one byte in size, this is not equal to the number of bytes transferred (see CTRL_DATA_SIZE).  When the channel is active, reading this register shows the number of transfers remaining, updating automatically each time a write transfer completes.  Writing this register sets the RELOAD value for the transfer counter. Each time this channel is triggered, the RELOAD value is copied into the live transfer counter. The channel can be started multiple times, and will perform the same number of transfers each time, as programmed by most recent write.  The RELOAD value can be observed at CHx_DBG_TCR. If TRANS_COUNT is used as a trigger, the written value is used immediately as the length of the new transfer sequence, as well as being written to RELOAD. */
#define RP2040_DMA_CH7_CTRL_TRIG_OFFSET              0x0001cc  /* DMA Channel 7 Control and Status */
#define RP2040_DMA_CH7_AL1_CTRL_OFFSET               0x0001d0  /* Alias for channel 7 CTRL register */
#define RP2040_DMA_CH7_AL1_READ_ADDR_OFFSET          0x0001d4  /* Alias for channel 7 READ_ADDR register */
#define RP2040_DMA_CH7_AL1_WRITE_ADDR_OFFSET         0x0001d8  /* Alias for channel 7 WRITE_ADDR register */
#define RP2040_DMA_CH7_AL1_TRANS_COUNT_TRIG_OFFSET   0x0001dc  /* Alias for channel 7 TRANS_COUNT register This is a trigger register (0xc). Writing a nonzero value will reload the channel counter and start the channel. */
#define RP2040_DMA_CH7_AL2_CTRL_OFFSET               0x0001e0  /* Alias for channel 7 CTRL register */
#define RP2040_DMA_CH7_AL2_TRANS_COUNT_OFFSET        0x0001e4  /* Alias for channel 7 TRANS_COUNT register */
#define RP2040_DMA_CH7_AL2_READ_ADDR_OFFSET          0x0001e8  /* Alias for channel 7 READ_ADDR register */
#define RP2040_DMA_CH7_AL2_WRITE_ADDR_TRIG_OFFSET    0x0001ec  /* Alias for channel 7 WRITE_ADDR register This is a trigger register (0xc). Writing a nonzero value will reload the channel counter and start the channel. */
#define RP2040_DMA_CH7_AL3_CTRL_OFFSET               0x0001f0  /* Alias for channel 7 CTRL register */
#define RP2040_DMA_CH7_AL3_WRITE_ADDR_OFFSET         0x0001f4  /* Alias for channel 7 WRITE_ADDR register */
#define RP2040_DMA_CH7_AL3_TRANS_COUNT_OFFSET        0x0001f8  /* Alias for channel 7 TRANS_COUNT register */
#define RP2040_DMA_CH7_AL3_READ_ADDR_TRIG_OFFSET     0x0001fc  /* Alias for channel 7 READ_ADDR register This is a trigger register (0xc). Writing a nonzero value will reload the channel counter and start the channel. */
#define RP2040_DMA_CH8_READ_ADDR_OFFSET              0x000200  /* DMA Channel 8 Read Address pointer This register updates automatically each time a read completes. The current value is the next address to be read by this channel. */
#define RP2040_DMA_CH8_WRITE_ADDR_OFFSET             0x000204  /* DMA Channel 8 Write Address pointer This register updates automatically each time a write completes. The current value is the next address to be written by this channel. */
#define RP2040_DMA_CH8_TRANS_COUNT_OFFSET            0x000208  /* DMA Channel 8 Transfer Count Program the number of bus transfers a channel will perform before halting. Note that, if transfers are larger than one byte in size, this is not equal to the number of bytes transferred (see CTRL_DATA_SIZE).  When the channel is active, reading this register shows the number of transfers remaining, updating automatically each time a write transfer completes.  Writing this register sets the RELOAD value for the transfer counter. Each time this channel is triggered, the RELOAD value is copied into the live transfer counter. The channel can be started multiple times, and will perform the same number of transfers each time, as programmed by most recent write.  The RELOAD value can be observed at CHx_DBG_TCR. If TRANS_COUNT is used as a trigger, the written value is used immediately as the length of the new transfer sequence, as well as being written to RELOAD. */
#define RP2040_DMA_CH8_CTRL_TRIG_OFFSET              0x00020c  /* DMA Channel 8 Control and Status */
#define RP2040_DMA_CH8_AL1_CTRL_OFFSET               0x000210  /* Alias for channel 8 CTRL register */
#define RP2040_DMA_CH8_AL1_READ_ADDR_OFFSET          0x000214  /* Alias for channel 8 READ_ADDR register */
#define RP2040_DMA_CH8_AL1_WRITE_ADDR_OFFSET         0x000218  /* Alias for channel 8 WRITE_ADDR register */
#define RP2040_DMA_CH8_AL1_TRANS_COUNT_TRIG_OFFSET   0x00021c  /* Alias for channel 8 TRANS_COUNT register This is a trigger register (0xc). Writing a nonzero value will reload the channel counter and start the channel. */
#define RP2040_DMA_CH8_AL2_CTRL_OFFSET               0x000220  /* Alias for channel 8 CTRL register */
#define RP2040_DMA_CH8_AL2_TRANS_COUNT_OFFSET        0x000224  /* Alias for channel 8 TRANS_COUNT register */
#define RP2040_DMA_CH8_AL2_READ_ADDR_OFFSET          0x000228  /* Alias for channel 8 READ_ADDR register */
#define RP2040_DMA_CH8_AL2_WRITE_ADDR_TRIG_OFFSET    0x00022c  /* Alias for channel 8 WRITE_ADDR register This is a trigger register (0xc). Writing a nonzero value will reload the channel counter and start the channel. */
#define RP2040_DMA_CH8_AL3_CTRL_OFFSET               0x000230  /* Alias for channel 8 CTRL register */
#define RP2040_DMA_CH8_AL3_WRITE_ADDR_OFFSET         0x000234  /* Alias for channel 8 WRITE_ADDR register */
#define RP2040_DMA_CH8_AL3_TRANS_COUNT_OFFSET        0x000238  /* Alias for channel 8 TRANS_COUNT register */
#define RP2040_DMA_CH8_AL3_READ_ADDR_TRIG_OFFSET     0x00023c  /* Alias for channel 8 READ_ADDR register This is a trigger register (0xc). Writing a nonzero value will reload the channel counter and start the channel. */
#define RP2040_DMA_CH9_READ_ADDR_OFFSET              0x000240  /* DMA Channel 9 Read Address pointer This register updates automatically each time a read completes. The current value is the next address to be read by this channel. */
#define RP2040_DMA_CH9_WRITE_ADDR_OFFSET             0x000244  /* DMA Channel 9 Write Address pointer This register updates automatically each time a write completes. The current value is the next address to be written by this channel. */
#define RP2040_DMA_CH9_TRANS_COUNT_OFFSET            0x000248  /* DMA Channel 9 Transfer Count Program the number of bus transfers a channel will perform before halting. Note that, if transfers are larger than one byte in size, this is not equal to the number of bytes transferred (see CTRL_DATA_SIZE).  When the channel is active, reading this register shows the number of transfers remaining, updating automatically each time a write transfer completes.  Writing this register sets the RELOAD value for the transfer counter. Each time this channel is triggered, the RELOAD value is copied into the live transfer counter. The channel can be started multiple times, and will perform the same number of transfers each time, as programmed by most recent write.  The RELOAD value can be observed at CHx_DBG_TCR. If TRANS_COUNT is used as a trigger, the written value is used immediately as the length of the new transfer sequence, as well as being written to RELOAD. */
#define RP2040_DMA_CH9_CTRL_TRIG_OFFSET              0x00024c  /* DMA Channel 9 Control and Status */
#define RP2040_DMA_CH9_AL1_CTRL_OFFSET               0x000250  /* Alias for channel 9 CTRL register */
#define RP2040_DMA_CH9_AL1_READ_ADDR_OFFSET          0x000254  /* Alias for channel 9 READ_ADDR register */
#define RP2040_DMA_CH9_AL1_WRITE_ADDR_OFFSET         0x000258  /* Alias for channel 9 WRITE_ADDR register */
#define RP2040_DMA_CH9_AL1_TRANS_COUNT_TRIG_OFFSET   0x00025c  /* Alias for channel 9 TRANS_COUNT register This is a trigger register (0xc). Writing a nonzero value will reload the channel counter and start the channel. */
#define RP2040_DMA_CH9_AL2_CTRL_OFFSET               0x000260  /* Alias for channel 9 CTRL register */
#define RP2040_DMA_CH9_AL2_TRANS_COUNT_OFFSET        0x000264  /* Alias for channel 9 TRANS_COUNT register */
#define RP2040_DMA_CH9_AL2_READ_ADDR_OFFSET          0x000268  /* Alias for channel 9 READ_ADDR register */
#define RP2040_DMA_CH9_AL2_WRITE_ADDR_TRIG_OFFSET    0x00026c  /* Alias for channel 9 WRITE_ADDR register This is a trigger register (0xc). Writing a nonzero value will reload the channel counter and start the channel. */
#define RP2040_DMA_CH9_AL3_CTRL_OFFSET               0x000270  /* Alias for channel 9 CTRL register */
#define RP2040_DMA_CH9_AL3_WRITE_ADDR_OFFSET         0x000274  /* Alias for channel 9 WRITE_ADDR register */
#define RP2040_DMA_CH9_AL3_TRANS_COUNT_OFFSET        0x000278  /* Alias for channel 9 TRANS_COUNT register */
#define RP2040_DMA_CH9_AL3_READ_ADDR_TRIG_OFFSET     0x00027c  /* Alias for channel 9 READ_ADDR register This is a trigger register (0xc). Writing a nonzero value will reload the channel counter and start the channel. */
#define RP2040_DMA_CH10_READ_ADDR_OFFSET             0x000280  /* DMA Channel 10 Read Address pointer This register updates automatically each time a read completes. The current value is the next address to be read by this channel. */
#define RP2040_DMA_CH10_WRITE_ADDR_OFFSET            0x000284  /* DMA Channel 10 Write Address pointer This register updates automatically each time a write completes. The current value is the next address to be written by this channel. */
#define RP2040_DMA_CH10_TRANS_COUNT_OFFSET           0x000288  /* DMA Channel 10 Transfer Count Program the number of bus transfers a channel will perform before halting. Note that, if transfers are larger than one byte in size, this is not equal to the number of bytes transferred (see CTRL_DATA_SIZE).  When the channel is active, reading this register shows the number of transfers remaining, updating automatically each time a write transfer completes.  Writing this register sets the RELOAD value for the transfer counter. Each time this channel is triggered, the RELOAD value is copied into the live transfer counter. The channel can be started multiple times, and will perform the same number of transfers each time, as programmed by most recent write.  The RELOAD value can be observed at CHx_DBG_TCR. If TRANS_COUNT is used as a trigger, the written value is used immediately as the length of the new transfer sequence, as well as being written to RELOAD. */
#define RP2040_DMA_CH10_CTRL_TRIG_OFFSET             0x00028c  /* DMA Channel 10 Control and Status */
#define RP2040_DMA_CH10_AL1_CTRL_OFFSET              0x000290  /* Alias for channel 10 CTRL register */
#define RP2040_DMA_CH10_AL1_READ_ADDR_OFFSET         0x000294  /* Alias for channel 10 READ_ADDR register */
#define RP2040_DMA_CH10_AL1_WRITE_ADDR_OFFSET        0x000298  /* Alias for channel 10 WRITE_ADDR register */
#define RP2040_DMA_CH10_AL1_TRANS_COUNT_TRIG_OFFSET  0x00029c  /* Alias for channel 10 TRANS_COUNT register This is a trigger register (0xc). Writing a nonzero value will reload the channel counter and start the channel. */
#define RP2040_DMA_CH10_AL2_CTRL_OFFSET              0x0002a0  /* Alias for channel 10 CTRL register */
#define RP2040_DMA_CH10_AL2_TRANS_COUNT_OFFSET       0x0002a4  /* Alias for channel 10 TRANS_COUNT register */
#define RP2040_DMA_CH10_AL2_READ_ADDR_OFFSET         0x0002a8  /* Alias for channel 10 READ_ADDR register */
#define RP2040_DMA_CH10_AL2_WRITE_ADDR_TRIG_OFFSET   0x0002ac  /* Alias for channel 10 WRITE_ADDR register This is a trigger register (0xc). Writing a nonzero value will reload the channel counter and start the channel. */
#define RP2040_DMA_CH10_AL3_CTRL_OFFSET              0x0002b0  /* Alias for channel 10 CTRL register */
#define RP2040_DMA_CH10_AL3_WRITE_ADDR_OFFSET        0x0002b4  /* Alias for channel 10 WRITE_ADDR register */
#define RP2040_DMA_CH10_AL3_TRANS_COUNT_OFFSET       0x0002b8  /* Alias for channel 10 TRANS_COUNT register */
#define RP2040_DMA_CH10_AL3_READ_ADDR_TRIG_OFFSET    0x0002bc  /* Alias for channel 10 READ_ADDR register This is a trigger register (0xc). Writing a nonzero value will reload the channel counter and start the channel. */
#define RP2040_DMA_CH11_READ_ADDR_OFFSET             0x0002c0  /* DMA Channel 11 Read Address pointer This register updates automatically each time a read completes. The current value is the next address to be read by this channel. */
#define RP2040_DMA_CH11_WRITE_ADDR_OFFSET            0x0002c4  /* DMA Channel 11 Write Address pointer This register updates automatically each time a write completes. The current value is the next address to be written by this channel. */
#define RP2040_DMA_CH11_TRANS_COUNT_OFFSET           0x0002c8  /* DMA Channel 11 Transfer Count Program the number of bus transfers a channel will perform before halting. Note that, if transfers are larger than one byte in size, this is not equal to the number of bytes transferred (see CTRL_DATA_SIZE).  When the channel is active, reading this register shows the number of transfers remaining, updating automatically each time a write transfer completes.  Writing this register sets the RELOAD value for the transfer counter. Each time this channel is triggered, the RELOAD value is copied into the live transfer counter. The channel can be started multiple times, and will perform the same number of transfers each time, as programmed by most recent write.  The RELOAD value can be observed at CHx_DBG_TCR. If TRANS_COUNT is used as a trigger, the written value is used immediately as the length of the new transfer sequence, as well as being written to RELOAD. */
#define RP2040_DMA_CH11_CTRL_TRIG_OFFSET             0x0002cc  /* DMA Channel 11 Control and Status */
#define RP2040_DMA_CH11_AL1_CTRL_OFFSET              0x0002d0  /* Alias for channel 11 CTRL register */
#define RP2040_DMA_CH11_AL1_READ_ADDR_OFFSET         0x0002d4  /* Alias for channel 11 READ_ADDR register */
#define RP2040_DMA_CH11_AL1_WRITE_ADDR_OFFSET        0x0002d8  /* Alias for channel 11 WRITE_ADDR register */
#define RP2040_DMA_CH11_AL1_TRANS_COUNT_TRIG_OFFSET  0x0002dc  /* Alias for channel 11 TRANS_COUNT register This is a trigger register (0xc). Writing a nonzero value will reload the channel counter and start the channel. */
#define RP2040_DMA_CH11_AL2_CTRL_OFFSET              0x0002e0  /* Alias for channel 11 CTRL register */
#define RP2040_DMA_CH11_AL2_TRANS_COUNT_OFFSET       0x0002e4  /* Alias for channel 11 TRANS_COUNT register */
#define RP2040_DMA_CH11_AL2_READ_ADDR_OFFSET         0x0002e8  /* Alias for channel 11 READ_ADDR register */
#define RP2040_DMA_CH11_AL2_WRITE_ADDR_TRIG_OFFSET   0x0002ec  /* Alias for channel 11 WRITE_ADDR register This is a trigger register (0xc). Writing a nonzero value will reload the channel counter and start the channel. */
#define RP2040_DMA_CH11_AL3_CTRL_OFFSET              0x0002f0  /* Alias for channel 11 CTRL register */
#define RP2040_DMA_CH11_AL3_WRITE_ADDR_OFFSET        0x0002f4  /* Alias for channel 11 WRITE_ADDR register */
#define RP2040_DMA_CH11_AL3_TRANS_COUNT_OFFSET       0x0002f8  /* Alias for channel 11 TRANS_COUNT register */
#define RP2040_DMA_CH11_AL3_READ_ADDR_TRIG_OFFSET    0x0002fc  /* Alias for channel 11 READ_ADDR register This is a trigger register (0xc). Writing a nonzero value will reload the channel counter and start the channel. */
#define RP2040_DMA_INTR_OFFSET                       0x000400  /* Interrupt Status (raw) */
#define RP2040_DMA_INTE0_OFFSET                      0x000404  /* Interrupt Enables for IRQ 0 */
#define RP2040_DMA_INTF0_OFFSET                      0x000408  /* Force Interrupts */
#define RP2040_DMA_INTS0_OFFSET                      0x00040c  /* Interrupt Status for IRQ 0 */
#define RP2040_DMA_INTE1_OFFSET                      0x000414  /* Interrupt Enables for IRQ 1 */
#define RP2040_DMA_INTF1_OFFSET                      0x000418  /* Force Interrupts for IRQ 1 */
#define RP2040_DMA_INTS1_OFFSET                      0x00041c  /* Interrupt Status (masked) for IRQ 1 */
#define RP2040_DMA_TIMER0_OFFSET                     0x000420  /* Pacing (X/Y) Fractional Timer The pacing timer produces TREQ assertions at a rate set by ((X/Y) * sys_clk). This equation is evaluated every sys_clk cycles and therefore can only generate TREQs at a rate of 1 per sys_clk (i.e. permanent TREQ) or less. */
#define RP2040_DMA_TIMER1_OFFSET                     0x000424  /* Pacing (X/Y) Fractional Timer The pacing timer produces TREQ assertions at a rate set by ((X/Y) * sys_clk). This equation is evaluated every sys_clk cycles and therefore can only generate TREQs at a rate of 1 per sys_clk (i.e. permanent TREQ) or less. */
#define RP2040_DMA_TIMER2_OFFSET                     0x000428  /* Pacing (X/Y) Fractional Timer The pacing timer produces TREQ assertions at a rate set by ((X/Y) * sys_clk). This equation is evaluated every sys_clk cycles and therefore can only generate TREQs at a rate of 1 per sys_clk (i.e. permanent TREQ) or less. */
#define RP2040_DMA_TIMER3_OFFSET                     0x00042c  /* Pacing (X/Y) Fractional Timer The pacing timer produces TREQ assertions at a rate set by ((X/Y) * sys_clk). This equation is evaluated every sys_clk cycles and therefore can only generate TREQs at a rate of 1 per sys_clk (i.e. permanent TREQ) or less. */
#define RP2040_DMA_MULTI_CHAN_TRIGGER_OFFSET         0x000430  /* Trigger one or more channels simultaneously */
#define RP2040_DMA_SNIFF_CTRL_OFFSET                 0x000434  /* Sniffer Control */
#define RP2040_DMA_SNIFF_DATA_OFFSET                 0x000438  /* Data accumulator for sniff hardware Write an initial seed value here before starting a DMA transfer on the channel indicated by SNIFF_CTRL_DMACH. The hardware will update this register each time it observes a read from the indicated channel. Once the channel completes, the final result can be read from this register. */
#define RP2040_DMA_FIFO_LEVELS_OFFSET                0x000440  /* Debug RAF, WAF, TDF levels */
#define RP2040_DMA_CHAN_ABORT_OFFSET                 0x000444  /* Abort an in-progress transfer sequence on one or more channels */
#define RP2040_DMA_N_CHANNELS_OFFSET                 0x000448  /* The number of channels this DMA instance is equipped with. This DMA supports up to 16 hardware channels, but can be configured with as few as one, to minimise silicon area. */
#define RP2040_DMA_CH0_DBG_CTDREQ_OFFSET             0x000800  /* Read: get channel DREQ counter (i.e. how many accesses the DMA expects it can perform on the peripheral without overflow/underflow. Write any value: clears the counter, and cause channel to re-initiate DREQ handshake. */
#define RP2040_DMA_CH0_DBG_TCR_OFFSET                0x000804  /* Read to get channel TRANS_COUNT reload value, i.e. the length of the next transfer */
#define RP2040_DMA_CH1_DBG_CTDREQ_OFFSET             0x000840  /* Read: get channel DREQ counter (i.e. how many accesses the DMA expects it can perform on the peripheral without overflow/underflow. Write any value: clears the counter, and cause channel to re-initiate DREQ handshake. */
#define RP2040_DMA_CH1_DBG_TCR_OFFSET                0x000844  /* Read to get channel TRANS_COUNT reload value, i.e. the length of the next transfer */
#define RP2040_DMA_CH2_DBG_CTDREQ_OFFSET             0x000880  /* Read: get channel DREQ counter (i.e. how many accesses the DMA expects it can perform on the peripheral without overflow/underflow. Write any value: clears the counter, and cause channel to re-initiate DREQ handshake. */
#define RP2040_DMA_CH2_DBG_TCR_OFFSET                0x000884  /* Read to get channel TRANS_COUNT reload value, i.e. the length of the next transfer */
#define RP2040_DMA_CH3_DBG_CTDREQ_OFFSET             0x0008c0  /* Read: get channel DREQ counter (i.e. how many accesses the DMA expects it can perform on the peripheral without overflow/underflow. Write any value: clears the counter, and cause channel to re-initiate DREQ handshake. */
#define RP2040_DMA_CH3_DBG_TCR_OFFSET                0x0008c4  /* Read to get channel TRANS_COUNT reload value, i.e. the length of the next transfer */
#define RP2040_DMA_CH4_DBG_CTDREQ_OFFSET             0x000900  /* Read: get channel DREQ counter (i.e. how many accesses the DMA expects it can perform on the peripheral without overflow/underflow. Write any value: clears the counter, and cause channel to re-initiate DREQ handshake. */
#define RP2040_DMA_CH4_DBG_TCR_OFFSET                0x000904  /* Read to get channel TRANS_COUNT reload value, i.e. the length of the next transfer */
#define RP2040_DMA_CH5_DBG_CTDREQ_OFFSET             0x000940  /* Read: get channel DREQ counter (i.e. how many accesses the DMA expects it can perform on the peripheral without overflow/underflow. Write any value: clears the counter, and cause channel to re-initiate DREQ handshake. */
#define RP2040_DMA_CH5_DBG_TCR_OFFSET                0x000944  /* Read to get channel TRANS_COUNT reload value, i.e. the length of the next transfer */
#define RP2040_DMA_CH6_DBG_CTDREQ_OFFSET             0x000980  /* Read: get channel DREQ counter (i.e. how many accesses the DMA expects it can perform on the peripheral without overflow/underflow. Write any value: clears the counter, and cause channel to re-initiate DREQ handshake. */
#define RP2040_DMA_CH6_DBG_TCR_OFFSET                0x000984  /* Read to get channel TRANS_COUNT reload value, i.e. the length of the next transfer */
#define RP2040_DMA_CH7_DBG_CTDREQ_OFFSET             0x0009c0  /* Read: get channel DREQ counter (i.e. how many accesses the DMA expects it can perform on the peripheral without overflow/underflow. Write any value: clears the counter, and cause channel to re-initiate DREQ handshake. */
#define RP2040_DMA_CH7_DBG_TCR_OFFSET                0x0009c4  /* Read to get channel TRANS_COUNT reload value, i.e. the length of the next transfer */
#define RP2040_DMA_CH8_DBG_CTDREQ_OFFSET             0x000a00  /* Read: get channel DREQ counter (i.e. how many accesses the DMA expects it can perform on the peripheral without overflow/underflow. Write any value: clears the counter, and cause channel to re-initiate DREQ handshake. */
#define RP2040_DMA_CH8_DBG_TCR_OFFSET                0x000a04  /* Read to get channel TRANS_COUNT reload value, i.e. the length of the next transfer */
#define RP2040_DMA_CH9_DBG_CTDREQ_OFFSET             0x000a40  /* Read: get channel DREQ counter (i.e. how many accesses the DMA expects it can perform on the peripheral without overflow/underflow. Write any value: clears the counter, and cause channel to re-initiate DREQ handshake. */
#define RP2040_DMA_CH9_DBG_TCR_OFFSET                0x000a44  /* Read to get channel TRANS_COUNT reload value, i.e. the length of the next transfer */
#define RP2040_DMA_CH10_DBG_CTDREQ_OFFSET            0x000a80  /* Read: get channel DREQ counter (i.e. how many accesses the DMA expects it can perform on the peripheral without overflow/underflow. Write any value: clears the counter, and cause channel to re-initiate DREQ handshake. */
#define RP2040_DMA_CH10_DBG_TCR_OFFSET               0x000a84  /* Read to get channel TRANS_COUNT reload value, i.e. the length of the next transfer */
#define RP2040_DMA_CH11_DBG_CTDREQ_OFFSET            0x000ac0  /* Read: get channel DREQ counter (i.e. how many accesses the DMA expects it can perform on the peripheral without overflow/underflow. Write any value: clears the counter, and cause channel to re-initiate DREQ handshake. */
#define RP2040_DMA_CH11_DBG_TCR_OFFSET               0x000ac4  /* Read to get channel TRANS_COUNT reload value, i.e. the length of the next transfer */

/* Register definitions *****************************************************/

#define RP2040_DMA_CH0_READ_ADDR              (RP2040_DMA_BASE + RP2040_DMA_CH0_READ_ADDR_OFFSET)
#define RP2040_DMA_CH0_WRITE_ADDR             (RP2040_DMA_BASE + RP2040_DMA_CH0_WRITE_ADDR_OFFSET)
#define RP2040_DMA_CH0_TRANS_COUNT            (RP2040_DMA_BASE + RP2040_DMA_CH0_TRANS_COUNT_OFFSET)
#define RP2040_DMA_CH0_CTRL_TRIG              (RP2040_DMA_BASE + RP2040_DMA_CH0_CTRL_TRIG_OFFSET)
#define RP2040_DMA_CH0_AL1_CTRL               (RP2040_DMA_BASE + RP2040_DMA_CH0_AL1_CTRL_OFFSET)
#define RP2040_DMA_CH0_AL1_READ_ADDR          (RP2040_DMA_BASE + RP2040_DMA_CH0_AL1_READ_ADDR_OFFSET)
#define RP2040_DMA_CH0_AL1_WRITE_ADDR         (RP2040_DMA_BASE + RP2040_DMA_CH0_AL1_WRITE_ADDR_OFFSET)
#define RP2040_DMA_CH0_AL1_TRANS_COUNT_TRIG   (RP2040_DMA_BASE + RP2040_DMA_CH0_AL1_TRANS_COUNT_TRIG_OFFSET)
#define RP2040_DMA_CH0_AL2_CTRL               (RP2040_DMA_BASE + RP2040_DMA_CH0_AL2_CTRL_OFFSET)
#define RP2040_DMA_CH0_AL2_TRANS_COUNT        (RP2040_DMA_BASE + RP2040_DMA_CH0_AL2_TRANS_COUNT_OFFSET)
#define RP2040_DMA_CH0_AL2_READ_ADDR          (RP2040_DMA_BASE + RP2040_DMA_CH0_AL2_READ_ADDR_OFFSET)
#define RP2040_DMA_CH0_AL2_WRITE_ADDR_TRIG    (RP2040_DMA_BASE + RP2040_DMA_CH0_AL2_WRITE_ADDR_TRIG_OFFSET)
#define RP2040_DMA_CH0_AL3_CTRL               (RP2040_DMA_BASE + RP2040_DMA_CH0_AL3_CTRL_OFFSET)
#define RP2040_DMA_CH0_AL3_WRITE_ADDR         (RP2040_DMA_BASE + RP2040_DMA_CH0_AL3_WRITE_ADDR_OFFSET)
#define RP2040_DMA_CH0_AL3_TRANS_COUNT        (RP2040_DMA_BASE + RP2040_DMA_CH0_AL3_TRANS_COUNT_OFFSET)
#define RP2040_DMA_CH0_AL3_READ_ADDR_TRIG     (RP2040_DMA_BASE + RP2040_DMA_CH0_AL3_READ_ADDR_TRIG_OFFSET)
#define RP2040_DMA_CH1_READ_ADDR              (RP2040_DMA_BASE + RP2040_DMA_CH1_READ_ADDR_OFFSET)
#define RP2040_DMA_CH1_WRITE_ADDR             (RP2040_DMA_BASE + RP2040_DMA_CH1_WRITE_ADDR_OFFSET)
#define RP2040_DMA_CH1_TRANS_COUNT            (RP2040_DMA_BASE + RP2040_DMA_CH1_TRANS_COUNT_OFFSET)
#define RP2040_DMA_CH1_CTRL_TRIG              (RP2040_DMA_BASE + RP2040_DMA_CH1_CTRL_TRIG_OFFSET)
#define RP2040_DMA_CH1_AL1_CTRL               (RP2040_DMA_BASE + RP2040_DMA_CH1_AL1_CTRL_OFFSET)
#define RP2040_DMA_CH1_AL1_READ_ADDR          (RP2040_DMA_BASE + RP2040_DMA_CH1_AL1_READ_ADDR_OFFSET)
#define RP2040_DMA_CH1_AL1_WRITE_ADDR         (RP2040_DMA_BASE + RP2040_DMA_CH1_AL1_WRITE_ADDR_OFFSET)
#define RP2040_DMA_CH1_AL1_TRANS_COUNT_TRIG   (RP2040_DMA_BASE + RP2040_DMA_CH1_AL1_TRANS_COUNT_TRIG_OFFSET)
#define RP2040_DMA_CH1_AL2_CTRL               (RP2040_DMA_BASE + RP2040_DMA_CH1_AL2_CTRL_OFFSET)
#define RP2040_DMA_CH1_AL2_TRANS_COUNT        (RP2040_DMA_BASE + RP2040_DMA_CH1_AL2_TRANS_COUNT_OFFSET)
#define RP2040_DMA_CH1_AL2_READ_ADDR          (RP2040_DMA_BASE + RP2040_DMA_CH1_AL2_READ_ADDR_OFFSET)
#define RP2040_DMA_CH1_AL2_WRITE_ADDR_TRIG    (RP2040_DMA_BASE + RP2040_DMA_CH1_AL2_WRITE_ADDR_TRIG_OFFSET)
#define RP2040_DMA_CH1_AL3_CTRL               (RP2040_DMA_BASE + RP2040_DMA_CH1_AL3_CTRL_OFFSET)
#define RP2040_DMA_CH1_AL3_WRITE_ADDR         (RP2040_DMA_BASE + RP2040_DMA_CH1_AL3_WRITE_ADDR_OFFSET)
#define RP2040_DMA_CH1_AL3_TRANS_COUNT        (RP2040_DMA_BASE + RP2040_DMA_CH1_AL3_TRANS_COUNT_OFFSET)
#define RP2040_DMA_CH1_AL3_READ_ADDR_TRIG     (RP2040_DMA_BASE + RP2040_DMA_CH1_AL3_READ_ADDR_TRIG_OFFSET)
#define RP2040_DMA_CH2_READ_ADDR              (RP2040_DMA_BASE + RP2040_DMA_CH2_READ_ADDR_OFFSET)
#define RP2040_DMA_CH2_WRITE_ADDR             (RP2040_DMA_BASE + RP2040_DMA_CH2_WRITE_ADDR_OFFSET)
#define RP2040_DMA_CH2_TRANS_COUNT            (RP2040_DMA_BASE + RP2040_DMA_CH2_TRANS_COUNT_OFFSET)
#define RP2040_DMA_CH2_CTRL_TRIG              (RP2040_DMA_BASE + RP2040_DMA_CH2_CTRL_TRIG_OFFSET)
#define RP2040_DMA_CH2_AL1_CTRL               (RP2040_DMA_BASE + RP2040_DMA_CH2_AL1_CTRL_OFFSET)
#define RP2040_DMA_CH2_AL1_READ_ADDR          (RP2040_DMA_BASE + RP2040_DMA_CH2_AL1_READ_ADDR_OFFSET)
#define RP2040_DMA_CH2_AL1_WRITE_ADDR         (RP2040_DMA_BASE + RP2040_DMA_CH2_AL1_WRITE_ADDR_OFFSET)
#define RP2040_DMA_CH2_AL1_TRANS_COUNT_TRIG   (RP2040_DMA_BASE + RP2040_DMA_CH2_AL1_TRANS_COUNT_TRIG_OFFSET)
#define RP2040_DMA_CH2_AL2_CTRL               (RP2040_DMA_BASE + RP2040_DMA_CH2_AL2_CTRL_OFFSET)
#define RP2040_DMA_CH2_AL2_TRANS_COUNT        (RP2040_DMA_BASE + RP2040_DMA_CH2_AL2_TRANS_COUNT_OFFSET)
#define RP2040_DMA_CH2_AL2_READ_ADDR          (RP2040_DMA_BASE + RP2040_DMA_CH2_AL2_READ_ADDR_OFFSET)
#define RP2040_DMA_CH2_AL2_WRITE_ADDR_TRIG    (RP2040_DMA_BASE + RP2040_DMA_CH2_AL2_WRITE_ADDR_TRIG_OFFSET)
#define RP2040_DMA_CH2_AL3_CTRL               (RP2040_DMA_BASE + RP2040_DMA_CH2_AL3_CTRL_OFFSET)
#define RP2040_DMA_CH2_AL3_WRITE_ADDR         (RP2040_DMA_BASE + RP2040_DMA_CH2_AL3_WRITE_ADDR_OFFSET)
#define RP2040_DMA_CH2_AL3_TRANS_COUNT        (RP2040_DMA_BASE + RP2040_DMA_CH2_AL3_TRANS_COUNT_OFFSET)
#define RP2040_DMA_CH2_AL3_READ_ADDR_TRIG     (RP2040_DMA_BASE + RP2040_DMA_CH2_AL3_READ_ADDR_TRIG_OFFSET)
#define RP2040_DMA_CH3_READ_ADDR              (RP2040_DMA_BASE + RP2040_DMA_CH3_READ_ADDR_OFFSET)
#define RP2040_DMA_CH3_WRITE_ADDR             (RP2040_DMA_BASE + RP2040_DMA_CH3_WRITE_ADDR_OFFSET)
#define RP2040_DMA_CH3_TRANS_COUNT            (RP2040_DMA_BASE + RP2040_DMA_CH3_TRANS_COUNT_OFFSET)
#define RP2040_DMA_CH3_CTRL_TRIG              (RP2040_DMA_BASE + RP2040_DMA_CH3_CTRL_TRIG_OFFSET)
#define RP2040_DMA_CH3_AL1_CTRL               (RP2040_DMA_BASE + RP2040_DMA_CH3_AL1_CTRL_OFFSET)
#define RP2040_DMA_CH3_AL1_READ_ADDR          (RP2040_DMA_BASE + RP2040_DMA_CH3_AL1_READ_ADDR_OFFSET)
#define RP2040_DMA_CH3_AL1_WRITE_ADDR         (RP2040_DMA_BASE + RP2040_DMA_CH3_AL1_WRITE_ADDR_OFFSET)
#define RP2040_DMA_CH3_AL1_TRANS_COUNT_TRIG   (RP2040_DMA_BASE + RP2040_DMA_CH3_AL1_TRANS_COUNT_TRIG_OFFSET)
#define RP2040_DMA_CH3_AL2_CTRL               (RP2040_DMA_BASE + RP2040_DMA_CH3_AL2_CTRL_OFFSET)
#define RP2040_DMA_CH3_AL2_TRANS_COUNT        (RP2040_DMA_BASE + RP2040_DMA_CH3_AL2_TRANS_COUNT_OFFSET)
#define RP2040_DMA_CH3_AL2_READ_ADDR          (RP2040_DMA_BASE + RP2040_DMA_CH3_AL2_READ_ADDR_OFFSET)
#define RP2040_DMA_CH3_AL2_WRITE_ADDR_TRIG    (RP2040_DMA_BASE + RP2040_DMA_CH3_AL2_WRITE_ADDR_TRIG_OFFSET)
#define RP2040_DMA_CH3_AL3_CTRL               (RP2040_DMA_BASE + RP2040_DMA_CH3_AL3_CTRL_OFFSET)
#define RP2040_DMA_CH3_AL3_WRITE_ADDR         (RP2040_DMA_BASE + RP2040_DMA_CH3_AL3_WRITE_ADDR_OFFSET)
#define RP2040_DMA_CH3_AL3_TRANS_COUNT        (RP2040_DMA_BASE + RP2040_DMA_CH3_AL3_TRANS_COUNT_OFFSET)
#define RP2040_DMA_CH3_AL3_READ_ADDR_TRIG     (RP2040_DMA_BASE + RP2040_DMA_CH3_AL3_READ_ADDR_TRIG_OFFSET)
#define RP2040_DMA_CH4_READ_ADDR              (RP2040_DMA_BASE + RP2040_DMA_CH4_READ_ADDR_OFFSET)
#define RP2040_DMA_CH4_WRITE_ADDR             (RP2040_DMA_BASE + RP2040_DMA_CH4_WRITE_ADDR_OFFSET)
#define RP2040_DMA_CH4_TRANS_COUNT            (RP2040_DMA_BASE + RP2040_DMA_CH4_TRANS_COUNT_OFFSET)
#define RP2040_DMA_CH4_CTRL_TRIG              (RP2040_DMA_BASE + RP2040_DMA_CH4_CTRL_TRIG_OFFSET)
#define RP2040_DMA_CH4_AL1_CTRL               (RP2040_DMA_BASE + RP2040_DMA_CH4_AL1_CTRL_OFFSET)
#define RP2040_DMA_CH4_AL1_READ_ADDR          (RP2040_DMA_BASE + RP2040_DMA_CH4_AL1_READ_ADDR_OFFSET)
#define RP2040_DMA_CH4_AL1_WRITE_ADDR         (RP2040_DMA_BASE + RP2040_DMA_CH4_AL1_WRITE_ADDR_OFFSET)
#define RP2040_DMA_CH4_AL1_TRANS_COUNT_TRIG   (RP2040_DMA_BASE + RP2040_DMA_CH4_AL1_TRANS_COUNT_TRIG_OFFSET)
#define RP2040_DMA_CH4_AL2_CTRL               (RP2040_DMA_BASE + RP2040_DMA_CH4_AL2_CTRL_OFFSET)
#define RP2040_DMA_CH4_AL2_TRANS_COUNT        (RP2040_DMA_BASE + RP2040_DMA_CH4_AL2_TRANS_COUNT_OFFSET)
#define RP2040_DMA_CH4_AL2_READ_ADDR          (RP2040_DMA_BASE + RP2040_DMA_CH4_AL2_READ_ADDR_OFFSET)
#define RP2040_DMA_CH4_AL2_WRITE_ADDR_TRIG    (RP2040_DMA_BASE + RP2040_DMA_CH4_AL2_WRITE_ADDR_TRIG_OFFSET)
#define RP2040_DMA_CH4_AL3_CTRL               (RP2040_DMA_BASE + RP2040_DMA_CH4_AL3_CTRL_OFFSET)
#define RP2040_DMA_CH4_AL3_WRITE_ADDR         (RP2040_DMA_BASE + RP2040_DMA_CH4_AL3_WRITE_ADDR_OFFSET)
#define RP2040_DMA_CH4_AL3_TRANS_COUNT        (RP2040_DMA_BASE + RP2040_DMA_CH4_AL3_TRANS_COUNT_OFFSET)
#define RP2040_DMA_CH4_AL3_READ_ADDR_TRIG     (RP2040_DMA_BASE + RP2040_DMA_CH4_AL3_READ_ADDR_TRIG_OFFSET)
#define RP2040_DMA_CH5_READ_ADDR              (RP2040_DMA_BASE + RP2040_DMA_CH5_READ_ADDR_OFFSET)
#define RP2040_DMA_CH5_WRITE_ADDR             (RP2040_DMA_BASE + RP2040_DMA_CH5_WRITE_ADDR_OFFSET)
#define RP2040_DMA_CH5_TRANS_COUNT            (RP2040_DMA_BASE + RP2040_DMA_CH5_TRANS_COUNT_OFFSET)
#define RP2040_DMA_CH5_CTRL_TRIG              (RP2040_DMA_BASE + RP2040_DMA_CH5_CTRL_TRIG_OFFSET)
#define RP2040_DMA_CH5_AL1_CTRL               (RP2040_DMA_BASE + RP2040_DMA_CH5_AL1_CTRL_OFFSET)
#define RP2040_DMA_CH5_AL1_READ_ADDR          (RP2040_DMA_BASE + RP2040_DMA_CH5_AL1_READ_ADDR_OFFSET)
#define RP2040_DMA_CH5_AL1_WRITE_ADDR         (RP2040_DMA_BASE + RP2040_DMA_CH5_AL1_WRITE_ADDR_OFFSET)
#define RP2040_DMA_CH5_AL1_TRANS_COUNT_TRIG   (RP2040_DMA_BASE + RP2040_DMA_CH5_AL1_TRANS_COUNT_TRIG_OFFSET)
#define RP2040_DMA_CH5_AL2_CTRL               (RP2040_DMA_BASE + RP2040_DMA_CH5_AL2_CTRL_OFFSET)
#define RP2040_DMA_CH5_AL2_TRANS_COUNT        (RP2040_DMA_BASE + RP2040_DMA_CH5_AL2_TRANS_COUNT_OFFSET)
#define RP2040_DMA_CH5_AL2_READ_ADDR          (RP2040_DMA_BASE + RP2040_DMA_CH5_AL2_READ_ADDR_OFFSET)
#define RP2040_DMA_CH5_AL2_WRITE_ADDR_TRIG    (RP2040_DMA_BASE + RP2040_DMA_CH5_AL2_WRITE_ADDR_TRIG_OFFSET)
#define RP2040_DMA_CH5_AL3_CTRL               (RP2040_DMA_BASE + RP2040_DMA_CH5_AL3_CTRL_OFFSET)
#define RP2040_DMA_CH5_AL3_WRITE_ADDR         (RP2040_DMA_BASE + RP2040_DMA_CH5_AL3_WRITE_ADDR_OFFSET)
#define RP2040_DMA_CH5_AL3_TRANS_COUNT        (RP2040_DMA_BASE + RP2040_DMA_CH5_AL3_TRANS_COUNT_OFFSET)
#define RP2040_DMA_CH5_AL3_READ_ADDR_TRIG     (RP2040_DMA_BASE + RP2040_DMA_CH5_AL3_READ_ADDR_TRIG_OFFSET)
#define RP2040_DMA_CH6_READ_ADDR              (RP2040_DMA_BASE + RP2040_DMA_CH6_READ_ADDR_OFFSET)
#define RP2040_DMA_CH6_WRITE_ADDR             (RP2040_DMA_BASE + RP2040_DMA_CH6_WRITE_ADDR_OFFSET)
#define RP2040_DMA_CH6_TRANS_COUNT            (RP2040_DMA_BASE + RP2040_DMA_CH6_TRANS_COUNT_OFFSET)
#define RP2040_DMA_CH6_CTRL_TRIG              (RP2040_DMA_BASE + RP2040_DMA_CH6_CTRL_TRIG_OFFSET)
#define RP2040_DMA_CH6_AL1_CTRL               (RP2040_DMA_BASE + RP2040_DMA_CH6_AL1_CTRL_OFFSET)
#define RP2040_DMA_CH6_AL1_READ_ADDR          (RP2040_DMA_BASE + RP2040_DMA_CH6_AL1_READ_ADDR_OFFSET)
#define RP2040_DMA_CH6_AL1_WRITE_ADDR         (RP2040_DMA_BASE + RP2040_DMA_CH6_AL1_WRITE_ADDR_OFFSET)
#define RP2040_DMA_CH6_AL1_TRANS_COUNT_TRIG   (RP2040_DMA_BASE + RP2040_DMA_CH6_AL1_TRANS_COUNT_TRIG_OFFSET)
#define RP2040_DMA_CH6_AL2_CTRL               (RP2040_DMA_BASE + RP2040_DMA_CH6_AL2_CTRL_OFFSET)
#define RP2040_DMA_CH6_AL2_TRANS_COUNT        (RP2040_DMA_BASE + RP2040_DMA_CH6_AL2_TRANS_COUNT_OFFSET)
#define RP2040_DMA_CH6_AL2_READ_ADDR          (RP2040_DMA_BASE + RP2040_DMA_CH6_AL2_READ_ADDR_OFFSET)
#define RP2040_DMA_CH6_AL2_WRITE_ADDR_TRIG    (RP2040_DMA_BASE + RP2040_DMA_CH6_AL2_WRITE_ADDR_TRIG_OFFSET)
#define RP2040_DMA_CH6_AL3_CTRL               (RP2040_DMA_BASE + RP2040_DMA_CH6_AL3_CTRL_OFFSET)
#define RP2040_DMA_CH6_AL3_WRITE_ADDR         (RP2040_DMA_BASE + RP2040_DMA_CH6_AL3_WRITE_ADDR_OFFSET)
#define RP2040_DMA_CH6_AL3_TRANS_COUNT        (RP2040_DMA_BASE + RP2040_DMA_CH6_AL3_TRANS_COUNT_OFFSET)
#define RP2040_DMA_CH6_AL3_READ_ADDR_TRIG     (RP2040_DMA_BASE + RP2040_DMA_CH6_AL3_READ_ADDR_TRIG_OFFSET)
#define RP2040_DMA_CH7_READ_ADDR              (RP2040_DMA_BASE + RP2040_DMA_CH7_READ_ADDR_OFFSET)
#define RP2040_DMA_CH7_WRITE_ADDR             (RP2040_DMA_BASE + RP2040_DMA_CH7_WRITE_ADDR_OFFSET)
#define RP2040_DMA_CH7_TRANS_COUNT            (RP2040_DMA_BASE + RP2040_DMA_CH7_TRANS_COUNT_OFFSET)
#define RP2040_DMA_CH7_CTRL_TRIG              (RP2040_DMA_BASE + RP2040_DMA_CH7_CTRL_TRIG_OFFSET)
#define RP2040_DMA_CH7_AL1_CTRL               (RP2040_DMA_BASE + RP2040_DMA_CH7_AL1_CTRL_OFFSET)
#define RP2040_DMA_CH7_AL1_READ_ADDR          (RP2040_DMA_BASE + RP2040_DMA_CH7_AL1_READ_ADDR_OFFSET)
#define RP2040_DMA_CH7_AL1_WRITE_ADDR         (RP2040_DMA_BASE + RP2040_DMA_CH7_AL1_WRITE_ADDR_OFFSET)
#define RP2040_DMA_CH7_AL1_TRANS_COUNT_TRIG   (RP2040_DMA_BASE + RP2040_DMA_CH7_AL1_TRANS_COUNT_TRIG_OFFSET)
#define RP2040_DMA_CH7_AL2_CTRL               (RP2040_DMA_BASE + RP2040_DMA_CH7_AL2_CTRL_OFFSET)
#define RP2040_DMA_CH7_AL2_TRANS_COUNT        (RP2040_DMA_BASE + RP2040_DMA_CH7_AL2_TRANS_COUNT_OFFSET)
#define RP2040_DMA_CH7_AL2_READ_ADDR          (RP2040_DMA_BASE + RP2040_DMA_CH7_AL2_READ_ADDR_OFFSET)
#define RP2040_DMA_CH7_AL2_WRITE_ADDR_TRIG    (RP2040_DMA_BASE + RP2040_DMA_CH7_AL2_WRITE_ADDR_TRIG_OFFSET)
#define RP2040_DMA_CH7_AL3_CTRL               (RP2040_DMA_BASE + RP2040_DMA_CH7_AL3_CTRL_OFFSET)
#define RP2040_DMA_CH7_AL3_WRITE_ADDR         (RP2040_DMA_BASE + RP2040_DMA_CH7_AL3_WRITE_ADDR_OFFSET)
#define RP2040_DMA_CH7_AL3_TRANS_COUNT        (RP2040_DMA_BASE + RP2040_DMA_CH7_AL3_TRANS_COUNT_OFFSET)
#define RP2040_DMA_CH7_AL3_READ_ADDR_TRIG     (RP2040_DMA_BASE + RP2040_DMA_CH7_AL3_READ_ADDR_TRIG_OFFSET)
#define RP2040_DMA_CH8_READ_ADDR              (RP2040_DMA_BASE + RP2040_DMA_CH8_READ_ADDR_OFFSET)
#define RP2040_DMA_CH8_WRITE_ADDR             (RP2040_DMA_BASE + RP2040_DMA_CH8_WRITE_ADDR_OFFSET)
#define RP2040_DMA_CH8_TRANS_COUNT            (RP2040_DMA_BASE + RP2040_DMA_CH8_TRANS_COUNT_OFFSET)
#define RP2040_DMA_CH8_CTRL_TRIG              (RP2040_DMA_BASE + RP2040_DMA_CH8_CTRL_TRIG_OFFSET)
#define RP2040_DMA_CH8_AL1_CTRL               (RP2040_DMA_BASE + RP2040_DMA_CH8_AL1_CTRL_OFFSET)
#define RP2040_DMA_CH8_AL1_READ_ADDR          (RP2040_DMA_BASE + RP2040_DMA_CH8_AL1_READ_ADDR_OFFSET)
#define RP2040_DMA_CH8_AL1_WRITE_ADDR         (RP2040_DMA_BASE + RP2040_DMA_CH8_AL1_WRITE_ADDR_OFFSET)
#define RP2040_DMA_CH8_AL1_TRANS_COUNT_TRIG   (RP2040_DMA_BASE + RP2040_DMA_CH8_AL1_TRANS_COUNT_TRIG_OFFSET)
#define RP2040_DMA_CH8_AL2_CTRL               (RP2040_DMA_BASE + RP2040_DMA_CH8_AL2_CTRL_OFFSET)
#define RP2040_DMA_CH8_AL2_TRANS_COUNT        (RP2040_DMA_BASE + RP2040_DMA_CH8_AL2_TRANS_COUNT_OFFSET)
#define RP2040_DMA_CH8_AL2_READ_ADDR          (RP2040_DMA_BASE + RP2040_DMA_CH8_AL2_READ_ADDR_OFFSET)
#define RP2040_DMA_CH8_AL2_WRITE_ADDR_TRIG    (RP2040_DMA_BASE + RP2040_DMA_CH8_AL2_WRITE_ADDR_TRIG_OFFSET)
#define RP2040_DMA_CH8_AL3_CTRL               (RP2040_DMA_BASE + RP2040_DMA_CH8_AL3_CTRL_OFFSET)
#define RP2040_DMA_CH8_AL3_WRITE_ADDR         (RP2040_DMA_BASE + RP2040_DMA_CH8_AL3_WRITE_ADDR_OFFSET)
#define RP2040_DMA_CH8_AL3_TRANS_COUNT        (RP2040_DMA_BASE + RP2040_DMA_CH8_AL3_TRANS_COUNT_OFFSET)
#define RP2040_DMA_CH8_AL3_READ_ADDR_TRIG     (RP2040_DMA_BASE + RP2040_DMA_CH8_AL3_READ_ADDR_TRIG_OFFSET)
#define RP2040_DMA_CH9_READ_ADDR              (RP2040_DMA_BASE + RP2040_DMA_CH9_READ_ADDR_OFFSET)
#define RP2040_DMA_CH9_WRITE_ADDR             (RP2040_DMA_BASE + RP2040_DMA_CH9_WRITE_ADDR_OFFSET)
#define RP2040_DMA_CH9_TRANS_COUNT            (RP2040_DMA_BASE + RP2040_DMA_CH9_TRANS_COUNT_OFFSET)
#define RP2040_DMA_CH9_CTRL_TRIG              (RP2040_DMA_BASE + RP2040_DMA_CH9_CTRL_TRIG_OFFSET)
#define RP2040_DMA_CH9_AL1_CTRL               (RP2040_DMA_BASE + RP2040_DMA_CH9_AL1_CTRL_OFFSET)
#define RP2040_DMA_CH9_AL1_READ_ADDR          (RP2040_DMA_BASE + RP2040_DMA_CH9_AL1_READ_ADDR_OFFSET)
#define RP2040_DMA_CH9_AL1_WRITE_ADDR         (RP2040_DMA_BASE + RP2040_DMA_CH9_AL1_WRITE_ADDR_OFFSET)
#define RP2040_DMA_CH9_AL1_TRANS_COUNT_TRIG   (RP2040_DMA_BASE + RP2040_DMA_CH9_AL1_TRANS_COUNT_TRIG_OFFSET)
#define RP2040_DMA_CH9_AL2_CTRL               (RP2040_DMA_BASE + RP2040_DMA_CH9_AL2_CTRL_OFFSET)
#define RP2040_DMA_CH9_AL2_TRANS_COUNT        (RP2040_DMA_BASE + RP2040_DMA_CH9_AL2_TRANS_COUNT_OFFSET)
#define RP2040_DMA_CH9_AL2_READ_ADDR          (RP2040_DMA_BASE + RP2040_DMA_CH9_AL2_READ_ADDR_OFFSET)
#define RP2040_DMA_CH9_AL2_WRITE_ADDR_TRIG    (RP2040_DMA_BASE + RP2040_DMA_CH9_AL2_WRITE_ADDR_TRIG_OFFSET)
#define RP2040_DMA_CH9_AL3_CTRL               (RP2040_DMA_BASE + RP2040_DMA_CH9_AL3_CTRL_OFFSET)
#define RP2040_DMA_CH9_AL3_WRITE_ADDR         (RP2040_DMA_BASE + RP2040_DMA_CH9_AL3_WRITE_ADDR_OFFSET)
#define RP2040_DMA_CH9_AL3_TRANS_COUNT        (RP2040_DMA_BASE + RP2040_DMA_CH9_AL3_TRANS_COUNT_OFFSET)
#define RP2040_DMA_CH9_AL3_READ_ADDR_TRIG     (RP2040_DMA_BASE + RP2040_DMA_CH9_AL3_READ_ADDR_TRIG_OFFSET)
#define RP2040_DMA_CH10_READ_ADDR             (RP2040_DMA_BASE + RP2040_DMA_CH10_READ_ADDR_OFFSET)
#define RP2040_DMA_CH10_WRITE_ADDR            (RP2040_DMA_BASE + RP2040_DMA_CH10_WRITE_ADDR_OFFSET)
#define RP2040_DMA_CH10_TRANS_COUNT           (RP2040_DMA_BASE + RP2040_DMA_CH10_TRANS_COUNT_OFFSET)
#define RP2040_DMA_CH10_CTRL_TRIG             (RP2040_DMA_BASE + RP2040_DMA_CH10_CTRL_TRIG_OFFSET)
#define RP2040_DMA_CH10_AL1_CTRL              (RP2040_DMA_BASE + RP2040_DMA_CH10_AL1_CTRL_OFFSET)
#define RP2040_DMA_CH10_AL1_READ_ADDR         (RP2040_DMA_BASE + RP2040_DMA_CH10_AL1_READ_ADDR_OFFSET)
#define RP2040_DMA_CH10_AL1_WRITE_ADDR        (RP2040_DMA_BASE + RP2040_DMA_CH10_AL1_WRITE_ADDR_OFFSET)
#define RP2040_DMA_CH10_AL1_TRANS_COUNT_TRIG  (RP2040_DMA_BASE + RP2040_DMA_CH10_AL1_TRANS_COUNT_TRIG_OFFSET)
#define RP2040_DMA_CH10_AL2_CTRL              (RP2040_DMA_BASE + RP2040_DMA_CH10_AL2_CTRL_OFFSET)
#define RP2040_DMA_CH10_AL2_TRANS_COUNT       (RP2040_DMA_BASE + RP2040_DMA_CH10_AL2_TRANS_COUNT_OFFSET)
#define RP2040_DMA_CH10_AL2_READ_ADDR         (RP2040_DMA_BASE + RP2040_DMA_CH10_AL2_READ_ADDR_OFFSET)
#define RP2040_DMA_CH10_AL2_WRITE_ADDR_TRIG   (RP2040_DMA_BASE + RP2040_DMA_CH10_AL2_WRITE_ADDR_TRIG_OFFSET)
#define RP2040_DMA_CH10_AL3_CTRL              (RP2040_DMA_BASE + RP2040_DMA_CH10_AL3_CTRL_OFFSET)
#define RP2040_DMA_CH10_AL3_WRITE_ADDR        (RP2040_DMA_BASE + RP2040_DMA_CH10_AL3_WRITE_ADDR_OFFSET)
#define RP2040_DMA_CH10_AL3_TRANS_COUNT       (RP2040_DMA_BASE + RP2040_DMA_CH10_AL3_TRANS_COUNT_OFFSET)
#define RP2040_DMA_CH10_AL3_READ_ADDR_TRIG    (RP2040_DMA_BASE + RP2040_DMA_CH10_AL3_READ_ADDR_TRIG_OFFSET)
#define RP2040_DMA_CH11_READ_ADDR             (RP2040_DMA_BASE + RP2040_DMA_CH11_READ_ADDR_OFFSET)
#define RP2040_DMA_CH11_WRITE_ADDR            (RP2040_DMA_BASE + RP2040_DMA_CH11_WRITE_ADDR_OFFSET)
#define RP2040_DMA_CH11_TRANS_COUNT           (RP2040_DMA_BASE + RP2040_DMA_CH11_TRANS_COUNT_OFFSET)
#define RP2040_DMA_CH11_CTRL_TRIG             (RP2040_DMA_BASE + RP2040_DMA_CH11_CTRL_TRIG_OFFSET)
#define RP2040_DMA_CH11_AL1_CTRL              (RP2040_DMA_BASE + RP2040_DMA_CH11_AL1_CTRL_OFFSET)
#define RP2040_DMA_CH11_AL1_READ_ADDR         (RP2040_DMA_BASE + RP2040_DMA_CH11_AL1_READ_ADDR_OFFSET)
#define RP2040_DMA_CH11_AL1_WRITE_ADDR        (RP2040_DMA_BASE + RP2040_DMA_CH11_AL1_WRITE_ADDR_OFFSET)
#define RP2040_DMA_CH11_AL1_TRANS_COUNT_TRIG  (RP2040_DMA_BASE + RP2040_DMA_CH11_AL1_TRANS_COUNT_TRIG_OFFSET)
#define RP2040_DMA_CH11_AL2_CTRL              (RP2040_DMA_BASE + RP2040_DMA_CH11_AL2_CTRL_OFFSET)
#define RP2040_DMA_CH11_AL2_TRANS_COUNT       (RP2040_DMA_BASE + RP2040_DMA_CH11_AL2_TRANS_COUNT_OFFSET)
#define RP2040_DMA_CH11_AL2_READ_ADDR         (RP2040_DMA_BASE + RP2040_DMA_CH11_AL2_READ_ADDR_OFFSET)
#define RP2040_DMA_CH11_AL2_WRITE_ADDR_TRIG   (RP2040_DMA_BASE + RP2040_DMA_CH11_AL2_WRITE_ADDR_TRIG_OFFSET)
#define RP2040_DMA_CH11_AL3_CTRL              (RP2040_DMA_BASE + RP2040_DMA_CH11_AL3_CTRL_OFFSET)
#define RP2040_DMA_CH11_AL3_WRITE_ADDR        (RP2040_DMA_BASE + RP2040_DMA_CH11_AL3_WRITE_ADDR_OFFSET)
#define RP2040_DMA_CH11_AL3_TRANS_COUNT       (RP2040_DMA_BASE + RP2040_DMA_CH11_AL3_TRANS_COUNT_OFFSET)
#define RP2040_DMA_CH11_AL3_READ_ADDR_TRIG    (RP2040_DMA_BASE + RP2040_DMA_CH11_AL3_READ_ADDR_TRIG_OFFSET)
#define RP2040_DMA_INTR                       (RP2040_DMA_BASE + RP2040_DMA_INTR_OFFSET)
#define RP2040_DMA_INTE0                      (RP2040_DMA_BASE + RP2040_DMA_INTE0_OFFSET)
#define RP2040_DMA_INTF0                      (RP2040_DMA_BASE + RP2040_DMA_INTF0_OFFSET)
#define RP2040_DMA_INTS0                      (RP2040_DMA_BASE + RP2040_DMA_INTS0_OFFSET)
#define RP2040_DMA_INTE1                      (RP2040_DMA_BASE + RP2040_DMA_INTE1_OFFSET)
#define RP2040_DMA_INTF1                      (RP2040_DMA_BASE + RP2040_DMA_INTF1_OFFSET)
#define RP2040_DMA_INTS1                      (RP2040_DMA_BASE + RP2040_DMA_INTS1_OFFSET)
#define RP2040_DMA_TIMER0                     (RP2040_DMA_BASE + RP2040_DMA_TIMER0_OFFSET)
#define RP2040_DMA_TIMER1                     (RP2040_DMA_BASE + RP2040_DMA_TIMER1_OFFSET)
#define RP2040_DMA_TIMER2                     (RP2040_DMA_BASE + RP2040_DMA_TIMER2_OFFSET)
#define RP2040_DMA_TIMER3                     (RP2040_DMA_BASE + RP2040_DMA_TIMER3_OFFSET)
#define RP2040_DMA_MULTI_CHAN_TRIGGER         (RP2040_DMA_BASE + RP2040_DMA_MULTI_CHAN_TRIGGER_OFFSET)
#define RP2040_DMA_SNIFF_CTRL                 (RP2040_DMA_BASE + RP2040_DMA_SNIFF_CTRL_OFFSET)
#define RP2040_DMA_SNIFF_DATA                 (RP2040_DMA_BASE + RP2040_DMA_SNIFF_DATA_OFFSET)
#define RP2040_DMA_FIFO_LEVELS                (RP2040_DMA_BASE + RP2040_DMA_FIFO_LEVELS_OFFSET)
#define RP2040_DMA_CHAN_ABORT                 (RP2040_DMA_BASE + RP2040_DMA_CHAN_ABORT_OFFSET)
#define RP2040_DMA_N_CHANNELS                 (RP2040_DMA_BASE + RP2040_DMA_N_CHANNELS_OFFSET)
#define RP2040_DMA_CH0_DBG_CTDREQ             (RP2040_DMA_BASE + RP2040_DMA_CH0_DBG_CTDREQ_OFFSET)
#define RP2040_DMA_CH0_DBG_TCR                (RP2040_DMA_BASE + RP2040_DMA_CH0_DBG_TCR_OFFSET)
#define RP2040_DMA_CH1_DBG_CTDREQ             (RP2040_DMA_BASE + RP2040_DMA_CH1_DBG_CTDREQ_OFFSET)
#define RP2040_DMA_CH1_DBG_TCR                (RP2040_DMA_BASE + RP2040_DMA_CH1_DBG_TCR_OFFSET)
#define RP2040_DMA_CH2_DBG_CTDREQ             (RP2040_DMA_BASE + RP2040_DMA_CH2_DBG_CTDREQ_OFFSET)
#define RP2040_DMA_CH2_DBG_TCR                (RP2040_DMA_BASE + RP2040_DMA_CH2_DBG_TCR_OFFSET)
#define RP2040_DMA_CH3_DBG_CTDREQ             (RP2040_DMA_BASE + RP2040_DMA_CH3_DBG_CTDREQ_OFFSET)
#define RP2040_DMA_CH3_DBG_TCR                (RP2040_DMA_BASE + RP2040_DMA_CH3_DBG_TCR_OFFSET)
#define RP2040_DMA_CH4_DBG_CTDREQ             (RP2040_DMA_BASE + RP2040_DMA_CH4_DBG_CTDREQ_OFFSET)
#define RP2040_DMA_CH4_DBG_TCR                (RP2040_DMA_BASE + RP2040_DMA_CH4_DBG_TCR_OFFSET)
#define RP2040_DMA_CH5_DBG_CTDREQ             (RP2040_DMA_BASE + RP2040_DMA_CH5_DBG_CTDREQ_OFFSET)
#define RP2040_DMA_CH5_DBG_TCR                (RP2040_DMA_BASE + RP2040_DMA_CH5_DBG_TCR_OFFSET)
#define RP2040_DMA_CH6_DBG_CTDREQ             (RP2040_DMA_BASE + RP2040_DMA_CH6_DBG_CTDREQ_OFFSET)
#define RP2040_DMA_CH6_DBG_TCR                (RP2040_DMA_BASE + RP2040_DMA_CH6_DBG_TCR_OFFSET)
#define RP2040_DMA_CH7_DBG_CTDREQ             (RP2040_DMA_BASE + RP2040_DMA_CH7_DBG_CTDREQ_OFFSET)
#define RP2040_DMA_CH7_DBG_TCR                (RP2040_DMA_BASE + RP2040_DMA_CH7_DBG_TCR_OFFSET)
#define RP2040_DMA_CH8_DBG_CTDREQ             (RP2040_DMA_BASE + RP2040_DMA_CH8_DBG_CTDREQ_OFFSET)
#define RP2040_DMA_CH8_DBG_TCR                (RP2040_DMA_BASE + RP2040_DMA_CH8_DBG_TCR_OFFSET)
#define RP2040_DMA_CH9_DBG_CTDREQ             (RP2040_DMA_BASE + RP2040_DMA_CH9_DBG_CTDREQ_OFFSET)
#define RP2040_DMA_CH9_DBG_TCR                (RP2040_DMA_BASE + RP2040_DMA_CH9_DBG_TCR_OFFSET)
#define RP2040_DMA_CH10_DBG_CTDREQ            (RP2040_DMA_BASE + RP2040_DMA_CH10_DBG_CTDREQ_OFFSET)
#define RP2040_DMA_CH10_DBG_TCR               (RP2040_DMA_BASE + RP2040_DMA_CH10_DBG_TCR_OFFSET)
#define RP2040_DMA_CH11_DBG_CTDREQ            (RP2040_DMA_BASE + RP2040_DMA_CH11_DBG_CTDREQ_OFFSET)
#define RP2040_DMA_CH11_DBG_TCR               (RP2040_DMA_BASE + RP2040_DMA_CH11_DBG_TCR_OFFSET)


/* Register bit definitions *************************************************/


#define RP2040_DMA_CH0_CTRL_TRIG_AHB_ERROR                 (1 << 31)  /* Logical OR of the READ_ERROR and WRITE_ERROR flags. The channel halts when it encounters any bus error, and always raises its channel IRQ flag. */
#define RP2040_DMA_CH0_CTRL_TRIG_READ_ERROR                (1 << 30)  /* If 1, the channel received a read bus error. Write one to clear. READ_ADDR shows the approximate address where the bus error was encountered (will not to be earlier, or more than 3 transfers later) */
#define RP2040_DMA_CH0_CTRL_TRIG_WRITE_ERROR               (1 << 29)  /* If 1, the channel received a write bus error. Write one to clear. WRITE_ADDR shows the approximate address where the bus error was encountered (will not to be earlier, or more than 5 transfers later) */
#define RP2040_DMA_CH0_CTRL_TRIG_BUSY                      (1 << 24)  /* This flag goes high when the channel starts a new transfer sequence, and low when the last transfer of that sequence completes. Clearing EN while BUSY is high pauses the channel, and BUSY will stay high while paused.  To terminate a sequence early (and clear the BUSY flag), see CHAN_ABORT. */
#define RP2040_DMA_CH0_CTRL_TRIG_SNIFF_EN                  (1 << 23)  /* If 1, this channel's data transfers are visible to the sniff hardware, and each transfer will advance the state of the checksum. This only applies if the sniff hardware is enabled, and has this channel selected.  This allows checksum to be enabled or disabled on a per-control- block basis. */
#define RP2040_DMA_CH0_CTRL_TRIG_BSWAP                     (1 << 22)  /* Apply byte-swap transformation to DMA data. For byte data, this has no effect. For halfword data, the two bytes of each halfword are swapped. For word data, the four bytes of each word are swapped to reverse order. */
#define RP2040_DMA_CH0_CTRL_TRIG_IRQ_QUIET                 (1 << 21)  /* In QUIET mode, the channel does not generate IRQs at the end of every transfer block. Instead, an IRQ is raised when NULL is written to a trigger register, indicating the end of a control block chain.  This reduces the number of interrupts to be serviced by the CPU when transferring a DMA chain of many small control blocks. */
#define RP2040_DMA_CH0_CTRL_TRIG_TREQ_SEL_SHIFT            (15)  /* Select a Transfer Request signal. The channel uses the transfer request signal to pace its data transfer rate. Sources for TREQ signals are internal (TIMERS) or external (DREQ, a Data Request from the system). 0x0 to 0x3a -> select DREQ n as TREQ */
#define RP2040_DMA_CH0_CTRL_TRIG_TREQ_SEL_MASK             (0x3f << RP2040_DMA_CH0_CTRL_TRIG_TREQ_SEL_SHIFT)
#define RP2040_DMA_CH0_CTRL_TRIG_TREQ_SEL_TIMER0           (0x3b << RP2040_DMA_CH0_CTRL_TRIG_TREQ_SEL_SHIFT)  /* Select Timer 0 as TREQ */
#define RP2040_DMA_CH0_CTRL_TRIG_TREQ_SEL_TIMER1           (0x3c << RP2040_DMA_CH0_CTRL_TRIG_TREQ_SEL_SHIFT)  /* Select Timer 1 as TREQ */
#define RP2040_DMA_CH0_CTRL_TRIG_TREQ_SEL_TIMER2           (0x3d << RP2040_DMA_CH0_CTRL_TRIG_TREQ_SEL_SHIFT)  /* Select Timer 2 as TREQ (Optional) */
#define RP2040_DMA_CH0_CTRL_TRIG_TREQ_SEL_TIMER3           (0x3e << RP2040_DMA_CH0_CTRL_TRIG_TREQ_SEL_SHIFT)  /* Select Timer 3 as TREQ (Optional) */
#define RP2040_DMA_CH0_CTRL_TRIG_TREQ_SEL_PERMANENT        (0x3f << RP2040_DMA_CH0_CTRL_TRIG_TREQ_SEL_SHIFT)  /* Permanent request, for unpaced transfers. */
#define RP2040_DMA_CH0_CTRL_TRIG_CHAIN_TO_SHIFT            (11)  /* When this channel completes, it will trigger the channel indicated by CHAIN_TO. Disable by setting CHAIN_TO = _(this channel)_. Reset value is equal to channel number (0). */
#define RP2040_DMA_CH0_CTRL_TRIG_CHAIN_TO_MASK             (0x0f << RP2040_DMA_CH0_CTRL_TRIG_CHAIN_TO_SHIFT)
#define RP2040_DMA_CH0_CTRL_TRIG_RING_SEL                  (1 << 10)  /* Select whether RING_SIZE applies to read or write addresses. If 0, read addresses are wrapped on a (1 << RING_SIZE) boundary. If 1, write addresses are wrapped. */
#define RP2040_DMA_CH0_CTRL_TRIG_RING_SIZE_SHIFT           (6)  /* Size of address wrap region. If 0, don't wrap. For values n > 0, only the lower n bits of the address will change. This wraps the address on a (1 << n) byte boundary, facilitating access to naturally-aligned ring buffers.  Ring sizes between 2 and 32768 bytes are possible. This can apply to either read or write addresses, based on value of RING_SEL. */
#define RP2040_DMA_CH0_CTRL_TRIG_RING_SIZE_MASK            (0x0f << RP2040_DMA_CH0_CTRL_TRIG_RING_SIZE_SHIFT)
#define RP2040_DMA_CH0_CTRL_TRIG_RING_SIZE_RING_NONE       (0x0 << RP2040_DMA_CH0_CTRL_TRIG_RING_SIZE_SHIFT)
#define RP2040_DMA_CH0_CTRL_TRIG_INCR_WRITE                (1 << 5)  /* If 1, the write address increments with each transfer. If 0, each write is directed to the same, initial address.  Generally this should be disabled for memory-to-peripheral transfers. */
#define RP2040_DMA_CH0_CTRL_TRIG_INCR_READ                 (1 << 4)  /* If 1, the read address increments with each transfer. If 0, each read is directed to the same, initial address.  Generally this should be disabled for peripheral-to-memory transfers. */
#define RP2040_DMA_CH0_CTRL_TRIG_DATA_SIZE_SHIFT           (2)  /* Set the size of each bus transfer (byte/halfword/word). READ_ADDR and WRITE_ADDR advance by this amount (1/2/4 bytes) with each transfer. */
#define RP2040_DMA_CH0_CTRL_TRIG_DATA_SIZE_MASK            (0x03 << RP2040_DMA_CH0_CTRL_TRIG_DATA_SIZE_SHIFT)
#define RP2040_DMA_CH0_CTRL_TRIG_DATA_SIZE_SIZE_BYTE       (0x0 << RP2040_DMA_CH0_CTRL_TRIG_DATA_SIZE_SHIFT)
#define RP2040_DMA_CH0_CTRL_TRIG_DATA_SIZE_SIZE_HALFWORD   (0x1 << RP2040_DMA_CH0_CTRL_TRIG_DATA_SIZE_SHIFT)
#define RP2040_DMA_CH0_CTRL_TRIG_DATA_SIZE_SIZE_WORD       (0x2 << RP2040_DMA_CH0_CTRL_TRIG_DATA_SIZE_SHIFT)
#define RP2040_DMA_CH0_CTRL_TRIG_HIGH_PRIORITY             (1 << 1)  /* HIGH_PRIORITY gives a channel preferential treatment in issue scheduling: in each scheduling round, all high priority channels are considered first, and then only a single low priority channel, before returning to the high priority channels.  This only affects the order in which the DMA schedules channels. The DMA's bus priority is not changed. If the DMA is not saturated then a low priority channel will see no loss of throughput. */
#define RP2040_DMA_CH0_CTRL_TRIG_EN                        (1 << 0)  /* DMA Channel Enable. When 1, the channel will respond to triggering events, which will cause it to become BUSY and start transferring data. When 0, the channel will ignore triggers, stop issuing transfers, and pause the current transfer sequence (i.e. BUSY will remain high if already high) */

#define RP2040_DMA_CH1_CTRL_TRIG_AHB_ERROR                 (1 << 31)  /* Logical OR of the READ_ERROR and WRITE_ERROR flags. The channel halts when it encounters any bus error, and always raises its channel IRQ flag. */
#define RP2040_DMA_CH1_CTRL_TRIG_READ_ERROR                (1 << 30)  /* If 1, the channel received a read bus error. Write one to clear. READ_ADDR shows the approximate address where the bus error was encountered (will not to be earlier, or more than 3 transfers later) */
#define RP2040_DMA_CH1_CTRL_TRIG_WRITE_ERROR               (1 << 29)  /* If 1, the channel received a write bus error. Write one to clear. WRITE_ADDR shows the approximate address where the bus error was encountered (will not to be earlier, or more than 5 transfers later) */
#define RP2040_DMA_CH1_CTRL_TRIG_BUSY                      (1 << 24)  /* This flag goes high when the channel starts a new transfer sequence, and low when the last transfer of that sequence completes. Clearing EN while BUSY is high pauses the channel, and BUSY will stay high while paused.  To terminate a sequence early (and clear the BUSY flag), see CHAN_ABORT. */
#define RP2040_DMA_CH1_CTRL_TRIG_SNIFF_EN                  (1 << 23)  /* If 1, this channel's data transfers are visible to the sniff hardware, and each transfer will advance the state of the checksum. This only applies if the sniff hardware is enabled, and has this channel selected.  This allows checksum to be enabled or disabled on a per-control- block basis. */
#define RP2040_DMA_CH1_CTRL_TRIG_BSWAP                     (1 << 22)  /* Apply byte-swap transformation to DMA data. For byte data, this has no effect. For halfword data, the two bytes of each halfword are swapped. For word data, the four bytes of each word are swapped to reverse order. */
#define RP2040_DMA_CH1_CTRL_TRIG_IRQ_QUIET                 (1 << 21)  /* In QUIET mode, the channel does not generate IRQs at the end of every transfer block. Instead, an IRQ is raised when NULL is written to a trigger register, indicating the end of a control block chain.  This reduces the number of interrupts to be serviced by the CPU when transferring a DMA chain of many small control blocks. */
#define RP2040_DMA_CH1_CTRL_TRIG_TREQ_SEL_SHIFT            (15)  /* Select a Transfer Request signal. The channel uses the transfer request signal to pace its data transfer rate. Sources for TREQ signals are internal (TIMERS) or external (DREQ, a Data Request from the system). 0x0 to 0x3a -> select DREQ n as TREQ */
#define RP2040_DMA_CH1_CTRL_TRIG_TREQ_SEL_MASK             (0x3f << RP2040_DMA_CH1_CTRL_TRIG_TREQ_SEL_SHIFT)
#define RP2040_DMA_CH1_CTRL_TRIG_TREQ_SEL_TIMER0           (0x3b << RP2040_DMA_CH1_CTRL_TRIG_TREQ_SEL_SHIFT)  /* Select Timer 0 as TREQ */
#define RP2040_DMA_CH1_CTRL_TRIG_TREQ_SEL_TIMER1           (0x3c << RP2040_DMA_CH1_CTRL_TRIG_TREQ_SEL_SHIFT)  /* Select Timer 1 as TREQ */
#define RP2040_DMA_CH1_CTRL_TRIG_TREQ_SEL_TIMER2           (0x3d << RP2040_DMA_CH1_CTRL_TRIG_TREQ_SEL_SHIFT)  /* Select Timer 2 as TREQ (Optional) */
#define RP2040_DMA_CH1_CTRL_TRIG_TREQ_SEL_TIMER3           (0x3e << RP2040_DMA_CH1_CTRL_TRIG_TREQ_SEL_SHIFT)  /* Select Timer 3 as TREQ (Optional) */
#define RP2040_DMA_CH1_CTRL_TRIG_TREQ_SEL_PERMANENT        (0x3f << RP2040_DMA_CH1_CTRL_TRIG_TREQ_SEL_SHIFT)  /* Permanent request, for unpaced transfers. */
#define RP2040_DMA_CH1_CTRL_TRIG_CHAIN_TO_SHIFT            (11)  /* When this channel completes, it will trigger the channel indicated by CHAIN_TO. Disable by setting CHAIN_TO = _(this channel)_. Reset value is equal to channel number (1). */
#define RP2040_DMA_CH1_CTRL_TRIG_CHAIN_TO_MASK             (0x0f << RP2040_DMA_CH1_CTRL_TRIG_CHAIN_TO_SHIFT)
#define RP2040_DMA_CH1_CTRL_TRIG_RING_SEL                  (1 << 10)  /* Select whether RING_SIZE applies to read or write addresses. If 0, read addresses are wrapped on a (1 << RING_SIZE) boundary. If 1, write addresses are wrapped. */
#define RP2040_DMA_CH1_CTRL_TRIG_RING_SIZE_SHIFT           (6)  /* Size of address wrap region. If 0, don't wrap. For values n > 0, only the lower n bits of the address will change. This wraps the address on a (1 << n) byte boundary, facilitating access to naturally-aligned ring buffers.  Ring sizes between 2 and 32768 bytes are possible. This can apply to either read or write addresses, based on value of RING_SEL. */
#define RP2040_DMA_CH1_CTRL_TRIG_RING_SIZE_MASK            (0x0f << RP2040_DMA_CH1_CTRL_TRIG_RING_SIZE_SHIFT)
#define RP2040_DMA_CH1_CTRL_TRIG_RING_SIZE_RING_NONE       (0x0 << RP2040_DMA_CH1_CTRL_TRIG_RING_SIZE_SHIFT)
#define RP2040_DMA_CH1_CTRL_TRIG_INCR_WRITE                (1 << 5)  /* If 1, the write address increments with each transfer. If 0, each write is directed to the same, initial address.  Generally this should be disabled for memory-to-peripheral transfers. */
#define RP2040_DMA_CH1_CTRL_TRIG_INCR_READ                 (1 << 4)  /* If 1, the read address increments with each transfer. If 0, each read is directed to the same, initial address.  Generally this should be disabled for peripheral-to-memory transfers. */
#define RP2040_DMA_CH1_CTRL_TRIG_DATA_SIZE_SHIFT           (2)  /* Set the size of each bus transfer (byte/halfword/word). READ_ADDR and WRITE_ADDR advance by this amount (1/2/4 bytes) with each transfer. */
#define RP2040_DMA_CH1_CTRL_TRIG_DATA_SIZE_MASK            (0x03 << RP2040_DMA_CH1_CTRL_TRIG_DATA_SIZE_SHIFT)
#define RP2040_DMA_CH1_CTRL_TRIG_DATA_SIZE_SIZE_BYTE       (0x0 << RP2040_DMA_CH1_CTRL_TRIG_DATA_SIZE_SHIFT)
#define RP2040_DMA_CH1_CTRL_TRIG_DATA_SIZE_SIZE_HALFWORD   (0x1 << RP2040_DMA_CH1_CTRL_TRIG_DATA_SIZE_SHIFT)
#define RP2040_DMA_CH1_CTRL_TRIG_DATA_SIZE_SIZE_WORD       (0x2 << RP2040_DMA_CH1_CTRL_TRIG_DATA_SIZE_SHIFT)
#define RP2040_DMA_CH1_CTRL_TRIG_HIGH_PRIORITY             (1 << 1)  /* HIGH_PRIORITY gives a channel preferential treatment in issue scheduling: in each scheduling round, all high priority channels are considered first, and then only a single low priority channel, before returning to the high priority channels.  This only affects the order in which the DMA schedules channels. The DMA's bus priority is not changed. If the DMA is not saturated then a low priority channel will see no loss of throughput. */
#define RP2040_DMA_CH1_CTRL_TRIG_EN                        (1 << 0)  /* DMA Channel Enable. When 1, the channel will respond to triggering events, which will cause it to become BUSY and start transferring data. When 0, the channel will ignore triggers, stop issuing transfers, and pause the current transfer sequence (i.e. BUSY will remain high if already high) */

#define RP2040_DMA_CH2_CTRL_TRIG_AHB_ERROR                 (1 << 31)  /* Logical OR of the READ_ERROR and WRITE_ERROR flags. The channel halts when it encounters any bus error, and always raises its channel IRQ flag. */
#define RP2040_DMA_CH2_CTRL_TRIG_READ_ERROR                (1 << 30)  /* If 1, the channel received a read bus error. Write one to clear. READ_ADDR shows the approximate address where the bus error was encountered (will not to be earlier, or more than 3 transfers later) */
#define RP2040_DMA_CH2_CTRL_TRIG_WRITE_ERROR               (1 << 29)  /* If 1, the channel received a write bus error. Write one to clear. WRITE_ADDR shows the approximate address where the bus error was encountered (will not to be earlier, or more than 5 transfers later) */
#define RP2040_DMA_CH2_CTRL_TRIG_BUSY                      (1 << 24)  /* This flag goes high when the channel starts a new transfer sequence, and low when the last transfer of that sequence completes. Clearing EN while BUSY is high pauses the channel, and BUSY will stay high while paused.  To terminate a sequence early (and clear the BUSY flag), see CHAN_ABORT. */
#define RP2040_DMA_CH2_CTRL_TRIG_SNIFF_EN                  (1 << 23)  /* If 1, this channel's data transfers are visible to the sniff hardware, and each transfer will advance the state of the checksum. This only applies if the sniff hardware is enabled, and has this channel selected.  This allows checksum to be enabled or disabled on a per-control- block basis. */
#define RP2040_DMA_CH2_CTRL_TRIG_BSWAP                     (1 << 22)  /* Apply byte-swap transformation to DMA data. For byte data, this has no effect. For halfword data, the two bytes of each halfword are swapped. For word data, the four bytes of each word are swapped to reverse order. */
#define RP2040_DMA_CH2_CTRL_TRIG_IRQ_QUIET                 (1 << 21)  /* In QUIET mode, the channel does not generate IRQs at the end of every transfer block. Instead, an IRQ is raised when NULL is written to a trigger register, indicating the end of a control block chain.  This reduces the number of interrupts to be serviced by the CPU when transferring a DMA chain of many small control blocks. */
#define RP2040_DMA_CH2_CTRL_TRIG_TREQ_SEL_SHIFT            (15)  /* Select a Transfer Request signal. The channel uses the transfer request signal to pace its data transfer rate. Sources for TREQ signals are internal (TIMERS) or external (DREQ, a Data Request from the system). 0x0 to 0x3a -> select DREQ n as TREQ */
#define RP2040_DMA_CH2_CTRL_TRIG_TREQ_SEL_MASK             (0x3f << RP2040_DMA_CH2_CTRL_TRIG_TREQ_SEL_SHIFT)
#define RP2040_DMA_CH2_CTRL_TRIG_TREQ_SEL_TIMER0           (0x3b << RP2040_DMA_CH2_CTRL_TRIG_TREQ_SEL_SHIFT)  /* Select Timer 0 as TREQ */
#define RP2040_DMA_CH2_CTRL_TRIG_TREQ_SEL_TIMER1           (0x3c << RP2040_DMA_CH2_CTRL_TRIG_TREQ_SEL_SHIFT)  /* Select Timer 1 as TREQ */
#define RP2040_DMA_CH2_CTRL_TRIG_TREQ_SEL_TIMER2           (0x3d << RP2040_DMA_CH2_CTRL_TRIG_TREQ_SEL_SHIFT)  /* Select Timer 2 as TREQ (Optional) */
#define RP2040_DMA_CH2_CTRL_TRIG_TREQ_SEL_TIMER3           (0x3e << RP2040_DMA_CH2_CTRL_TRIG_TREQ_SEL_SHIFT)  /* Select Timer 3 as TREQ (Optional) */
#define RP2040_DMA_CH2_CTRL_TRIG_TREQ_SEL_PERMANENT        (0x3f << RP2040_DMA_CH2_CTRL_TRIG_TREQ_SEL_SHIFT)  /* Permanent request, for unpaced transfers. */
#define RP2040_DMA_CH2_CTRL_TRIG_CHAIN_TO_SHIFT            (11)  /* When this channel completes, it will trigger the channel indicated by CHAIN_TO. Disable by setting CHAIN_TO = _(this channel)_. Reset value is equal to channel number (2). */
#define RP2040_DMA_CH2_CTRL_TRIG_CHAIN_TO_MASK             (0x0f << RP2040_DMA_CH2_CTRL_TRIG_CHAIN_TO_SHIFT)
#define RP2040_DMA_CH2_CTRL_TRIG_RING_SEL                  (1 << 10)  /* Select whether RING_SIZE applies to read or write addresses. If 0, read addresses are wrapped on a (1 << RING_SIZE) boundary. If 1, write addresses are wrapped. */
#define RP2040_DMA_CH2_CTRL_TRIG_RING_SIZE_SHIFT           (6)  /* Size of address wrap region. If 0, don't wrap. For values n > 0, only the lower n bits of the address will change. This wraps the address on a (1 << n) byte boundary, facilitating access to naturally-aligned ring buffers.  Ring sizes between 2 and 32768 bytes are possible. This can apply to either read or write addresses, based on value of RING_SEL. */
#define RP2040_DMA_CH2_CTRL_TRIG_RING_SIZE_MASK            (0x0f << RP2040_DMA_CH2_CTRL_TRIG_RING_SIZE_SHIFT)
#define RP2040_DMA_CH2_CTRL_TRIG_RING_SIZE_RING_NONE       (0x0 << RP2040_DMA_CH2_CTRL_TRIG_RING_SIZE_SHIFT)
#define RP2040_DMA_CH2_CTRL_TRIG_INCR_WRITE                (1 << 5)  /* If 1, the write address increments with each transfer. If 0, each write is directed to the same, initial address.  Generally this should be disabled for memory-to-peripheral transfers. */
#define RP2040_DMA_CH2_CTRL_TRIG_INCR_READ                 (1 << 4)  /* If 1, the read address increments with each transfer. If 0, each read is directed to the same, initial address.  Generally this should be disabled for peripheral-to-memory transfers. */
#define RP2040_DMA_CH2_CTRL_TRIG_DATA_SIZE_SHIFT           (2)  /* Set the size of each bus transfer (byte/halfword/word). READ_ADDR and WRITE_ADDR advance by this amount (1/2/4 bytes) with each transfer. */
#define RP2040_DMA_CH2_CTRL_TRIG_DATA_SIZE_MASK            (0x03 << RP2040_DMA_CH2_CTRL_TRIG_DATA_SIZE_SHIFT)
#define RP2040_DMA_CH2_CTRL_TRIG_DATA_SIZE_SIZE_BYTE       (0x0 << RP2040_DMA_CH2_CTRL_TRIG_DATA_SIZE_SHIFT)
#define RP2040_DMA_CH2_CTRL_TRIG_DATA_SIZE_SIZE_HALFWORD   (0x1 << RP2040_DMA_CH2_CTRL_TRIG_DATA_SIZE_SHIFT)
#define RP2040_DMA_CH2_CTRL_TRIG_DATA_SIZE_SIZE_WORD       (0x2 << RP2040_DMA_CH2_CTRL_TRIG_DATA_SIZE_SHIFT)
#define RP2040_DMA_CH2_CTRL_TRIG_HIGH_PRIORITY             (1 << 1)  /* HIGH_PRIORITY gives a channel preferential treatment in issue scheduling: in each scheduling round, all high priority channels are considered first, and then only a single low priority channel, before returning to the high priority channels.  This only affects the order in which the DMA schedules channels. The DMA's bus priority is not changed. If the DMA is not saturated then a low priority channel will see no loss of throughput. */
#define RP2040_DMA_CH2_CTRL_TRIG_EN                        (1 << 0)  /* DMA Channel Enable. When 1, the channel will respond to triggering events, which will cause it to become BUSY and start transferring data. When 0, the channel will ignore triggers, stop issuing transfers, and pause the current transfer sequence (i.e. BUSY will remain high if already high) */

#define RP2040_DMA_CH3_CTRL_TRIG_AHB_ERROR                 (1 << 31)  /* Logical OR of the READ_ERROR and WRITE_ERROR flags. The channel halts when it encounters any bus error, and always raises its channel IRQ flag. */
#define RP2040_DMA_CH3_CTRL_TRIG_READ_ERROR                (1 << 30)  /* If 1, the channel received a read bus error. Write one to clear. READ_ADDR shows the approximate address where the bus error was encountered (will not to be earlier, or more than 3 transfers later) */
#define RP2040_DMA_CH3_CTRL_TRIG_WRITE_ERROR               (1 << 29)  /* If 1, the channel received a write bus error. Write one to clear. WRITE_ADDR shows the approximate address where the bus error was encountered (will not to be earlier, or more than 5 transfers later) */
#define RP2040_DMA_CH3_CTRL_TRIG_BUSY                      (1 << 24)  /* This flag goes high when the channel starts a new transfer sequence, and low when the last transfer of that sequence completes. Clearing EN while BUSY is high pauses the channel, and BUSY will stay high while paused.  To terminate a sequence early (and clear the BUSY flag), see CHAN_ABORT. */
#define RP2040_DMA_CH3_CTRL_TRIG_SNIFF_EN                  (1 << 23)  /* If 1, this channel's data transfers are visible to the sniff hardware, and each transfer will advance the state of the checksum. This only applies if the sniff hardware is enabled, and has this channel selected.  This allows checksum to be enabled or disabled on a per-control- block basis. */
#define RP2040_DMA_CH3_CTRL_TRIG_BSWAP                     (1 << 22)  /* Apply byte-swap transformation to DMA data. For byte data, this has no effect. For halfword data, the two bytes of each halfword are swapped. For word data, the four bytes of each word are swapped to reverse order. */
#define RP2040_DMA_CH3_CTRL_TRIG_IRQ_QUIET                 (1 << 21)  /* In QUIET mode, the channel does not generate IRQs at the end of every transfer block. Instead, an IRQ is raised when NULL is written to a trigger register, indicating the end of a control block chain.  This reduces the number of interrupts to be serviced by the CPU when transferring a DMA chain of many small control blocks. */
#define RP2040_DMA_CH3_CTRL_TRIG_TREQ_SEL_SHIFT            (15)  /* Select a Transfer Request signal. The channel uses the transfer request signal to pace its data transfer rate. Sources for TREQ signals are internal (TIMERS) or external (DREQ, a Data Request from the system). 0x0 to 0x3a -> select DREQ n as TREQ */
#define RP2040_DMA_CH3_CTRL_TRIG_TREQ_SEL_MASK             (0x3f << RP2040_DMA_CH3_CTRL_TRIG_TREQ_SEL_SHIFT)
#define RP2040_DMA_CH3_CTRL_TRIG_TREQ_SEL_TIMER0           (0x3b << RP2040_DMA_CH3_CTRL_TRIG_TREQ_SEL_SHIFT)  /* Select Timer 0 as TREQ */
#define RP2040_DMA_CH3_CTRL_TRIG_TREQ_SEL_TIMER1           (0x3c << RP2040_DMA_CH3_CTRL_TRIG_TREQ_SEL_SHIFT)  /* Select Timer 1 as TREQ */
#define RP2040_DMA_CH3_CTRL_TRIG_TREQ_SEL_TIMER2           (0x3d << RP2040_DMA_CH3_CTRL_TRIG_TREQ_SEL_SHIFT)  /* Select Timer 2 as TREQ (Optional) */
#define RP2040_DMA_CH3_CTRL_TRIG_TREQ_SEL_TIMER3           (0x3e << RP2040_DMA_CH3_CTRL_TRIG_TREQ_SEL_SHIFT)  /* Select Timer 3 as TREQ (Optional) */
#define RP2040_DMA_CH3_CTRL_TRIG_TREQ_SEL_PERMANENT        (0x3f << RP2040_DMA_CH3_CTRL_TRIG_TREQ_SEL_SHIFT)  /* Permanent request, for unpaced transfers. */
#define RP2040_DMA_CH3_CTRL_TRIG_CHAIN_TO_SHIFT            (11)  /* When this channel completes, it will trigger the channel indicated by CHAIN_TO. Disable by setting CHAIN_TO = _(this channel)_. Reset value is equal to channel number (3). */
#define RP2040_DMA_CH3_CTRL_TRIG_CHAIN_TO_MASK             (0x0f << RP2040_DMA_CH3_CTRL_TRIG_CHAIN_TO_SHIFT)
#define RP2040_DMA_CH3_CTRL_TRIG_RING_SEL                  (1 << 10)  /* Select whether RING_SIZE applies to read or write addresses. If 0, read addresses are wrapped on a (1 << RING_SIZE) boundary. If 1, write addresses are wrapped. */
#define RP2040_DMA_CH3_CTRL_TRIG_RING_SIZE_SHIFT           (6)  /* Size of address wrap region. If 0, don't wrap. For values n > 0, only the lower n bits of the address will change. This wraps the address on a (1 << n) byte boundary, facilitating access to naturally-aligned ring buffers.  Ring sizes between 2 and 32768 bytes are possible. This can apply to either read or write addresses, based on value of RING_SEL. */
#define RP2040_DMA_CH3_CTRL_TRIG_RING_SIZE_MASK            (0x0f << RP2040_DMA_CH3_CTRL_TRIG_RING_SIZE_SHIFT)
#define RP2040_DMA_CH3_CTRL_TRIG_RING_SIZE_RING_NONE       (0x0 << RP2040_DMA_CH3_CTRL_TRIG_RING_SIZE_SHIFT)
#define RP2040_DMA_CH3_CTRL_TRIG_INCR_WRITE                (1 << 5)  /* If 1, the write address increments with each transfer. If 0, each write is directed to the same, initial address.  Generally this should be disabled for memory-to-peripheral transfers. */
#define RP2040_DMA_CH3_CTRL_TRIG_INCR_READ                 (1 << 4)  /* If 1, the read address increments with each transfer. If 0, each read is directed to the same, initial address.  Generally this should be disabled for peripheral-to-memory transfers. */
#define RP2040_DMA_CH3_CTRL_TRIG_DATA_SIZE_SHIFT           (2)  /* Set the size of each bus transfer (byte/halfword/word). READ_ADDR and WRITE_ADDR advance by this amount (1/2/4 bytes) with each transfer. */
#define RP2040_DMA_CH3_CTRL_TRIG_DATA_SIZE_MASK            (0x03 << RP2040_DMA_CH3_CTRL_TRIG_DATA_SIZE_SHIFT)
#define RP2040_DMA_CH3_CTRL_TRIG_DATA_SIZE_SIZE_BYTE       (0x0 << RP2040_DMA_CH3_CTRL_TRIG_DATA_SIZE_SHIFT)
#define RP2040_DMA_CH3_CTRL_TRIG_DATA_SIZE_SIZE_HALFWORD   (0x1 << RP2040_DMA_CH3_CTRL_TRIG_DATA_SIZE_SHIFT)
#define RP2040_DMA_CH3_CTRL_TRIG_DATA_SIZE_SIZE_WORD       (0x2 << RP2040_DMA_CH3_CTRL_TRIG_DATA_SIZE_SHIFT)
#define RP2040_DMA_CH3_CTRL_TRIG_HIGH_PRIORITY             (1 << 1)  /* HIGH_PRIORITY gives a channel preferential treatment in issue scheduling: in each scheduling round, all high priority channels are considered first, and then only a single low priority channel, before returning to the high priority channels.  This only affects the order in which the DMA schedules channels. The DMA's bus priority is not changed. If the DMA is not saturated then a low priority channel will see no loss of throughput. */
#define RP2040_DMA_CH3_CTRL_TRIG_EN                        (1 << 0)  /* DMA Channel Enable. When 1, the channel will respond to triggering events, which will cause it to become BUSY and start transferring data. When 0, the channel will ignore triggers, stop issuing transfers, and pause the current transfer sequence (i.e. BUSY will remain high if already high) */

#define RP2040_DMA_CH4_CTRL_TRIG_AHB_ERROR                 (1 << 31)  /* Logical OR of the READ_ERROR and WRITE_ERROR flags. The channel halts when it encounters any bus error, and always raises its channel IRQ flag. */
#define RP2040_DMA_CH4_CTRL_TRIG_READ_ERROR                (1 << 30)  /* If 1, the channel received a read bus error. Write one to clear. READ_ADDR shows the approximate address where the bus error was encountered (will not to be earlier, or more than 3 transfers later) */
#define RP2040_DMA_CH4_CTRL_TRIG_WRITE_ERROR               (1 << 29)  /* If 1, the channel received a write bus error. Write one to clear. WRITE_ADDR shows the approximate address where the bus error was encountered (will not to be earlier, or more than 5 transfers later) */
#define RP2040_DMA_CH4_CTRL_TRIG_BUSY                      (1 << 24)  /* This flag goes high when the channel starts a new transfer sequence, and low when the last transfer of that sequence completes. Clearing EN while BUSY is high pauses the channel, and BUSY will stay high while paused.  To terminate a sequence early (and clear the BUSY flag), see CHAN_ABORT. */
#define RP2040_DMA_CH4_CTRL_TRIG_SNIFF_EN                  (1 << 23)  /* If 1, this channel's data transfers are visible to the sniff hardware, and each transfer will advance the state of the checksum. This only applies if the sniff hardware is enabled, and has this channel selected.  This allows checksum to be enabled or disabled on a per-control- block basis. */
#define RP2040_DMA_CH4_CTRL_TRIG_BSWAP                     (1 << 22)  /* Apply byte-swap transformation to DMA data. For byte data, this has no effect. For halfword data, the two bytes of each halfword are swapped. For word data, the four bytes of each word are swapped to reverse order. */
#define RP2040_DMA_CH4_CTRL_TRIG_IRQ_QUIET                 (1 << 21)  /* In QUIET mode, the channel does not generate IRQs at the end of every transfer block. Instead, an IRQ is raised when NULL is written to a trigger register, indicating the end of a control block chain.  This reduces the number of interrupts to be serviced by the CPU when transferring a DMA chain of many small control blocks. */
#define RP2040_DMA_CH4_CTRL_TRIG_TREQ_SEL_SHIFT            (15)  /* Select a Transfer Request signal. The channel uses the transfer request signal to pace its data transfer rate. Sources for TREQ signals are internal (TIMERS) or external (DREQ, a Data Request from the system). 0x0 to 0x3a -> select DREQ n as TREQ */
#define RP2040_DMA_CH4_CTRL_TRIG_TREQ_SEL_MASK             (0x3f << RP2040_DMA_CH4_CTRL_TRIG_TREQ_SEL_SHIFT)
#define RP2040_DMA_CH4_CTRL_TRIG_TREQ_SEL_TIMER0           (0x3b << RP2040_DMA_CH4_CTRL_TRIG_TREQ_SEL_SHIFT)  /* Select Timer 0 as TREQ */
#define RP2040_DMA_CH4_CTRL_TRIG_TREQ_SEL_TIMER1           (0x3c << RP2040_DMA_CH4_CTRL_TRIG_TREQ_SEL_SHIFT)  /* Select Timer 1 as TREQ */
#define RP2040_DMA_CH4_CTRL_TRIG_TREQ_SEL_TIMER2           (0x3d << RP2040_DMA_CH4_CTRL_TRIG_TREQ_SEL_SHIFT)  /* Select Timer 2 as TREQ (Optional) */
#define RP2040_DMA_CH4_CTRL_TRIG_TREQ_SEL_TIMER3           (0x3e << RP2040_DMA_CH4_CTRL_TRIG_TREQ_SEL_SHIFT)  /* Select Timer 3 as TREQ (Optional) */
#define RP2040_DMA_CH4_CTRL_TRIG_TREQ_SEL_PERMANENT        (0x3f << RP2040_DMA_CH4_CTRL_TRIG_TREQ_SEL_SHIFT)  /* Permanent request, for unpaced transfers. */
#define RP2040_DMA_CH4_CTRL_TRIG_CHAIN_TO_SHIFT            (11)  /* When this channel completes, it will trigger the channel indicated by CHAIN_TO. Disable by setting CHAIN_TO = _(this channel)_. Reset value is equal to channel number (4). */
#define RP2040_DMA_CH4_CTRL_TRIG_CHAIN_TO_MASK             (0x0f << RP2040_DMA_CH4_CTRL_TRIG_CHAIN_TO_SHIFT)
#define RP2040_DMA_CH4_CTRL_TRIG_RING_SEL                  (1 << 10)  /* Select whether RING_SIZE applies to read or write addresses. If 0, read addresses are wrapped on a (1 << RING_SIZE) boundary. If 1, write addresses are wrapped. */
#define RP2040_DMA_CH4_CTRL_TRIG_RING_SIZE_SHIFT           (6)  /* Size of address wrap region. If 0, don't wrap. For values n > 0, only the lower n bits of the address will change. This wraps the address on a (1 << n) byte boundary, facilitating access to naturally-aligned ring buffers.  Ring sizes between 2 and 32768 bytes are possible. This can apply to either read or write addresses, based on value of RING_SEL. */
#define RP2040_DMA_CH4_CTRL_TRIG_RING_SIZE_MASK            (0x0f << RP2040_DMA_CH4_CTRL_TRIG_RING_SIZE_SHIFT)
#define RP2040_DMA_CH4_CTRL_TRIG_RING_SIZE_RING_NONE       (0x0 << RP2040_DMA_CH4_CTRL_TRIG_RING_SIZE_SHIFT)
#define RP2040_DMA_CH4_CTRL_TRIG_INCR_WRITE                (1 << 5)  /* If 1, the write address increments with each transfer. If 0, each write is directed to the same, initial address.  Generally this should be disabled for memory-to-peripheral transfers. */
#define RP2040_DMA_CH4_CTRL_TRIG_INCR_READ                 (1 << 4)  /* If 1, the read address increments with each transfer. If 0, each read is directed to the same, initial address.  Generally this should be disabled for peripheral-to-memory transfers. */
#define RP2040_DMA_CH4_CTRL_TRIG_DATA_SIZE_SHIFT           (2)  /* Set the size of each bus transfer (byte/halfword/word). READ_ADDR and WRITE_ADDR advance by this amount (1/2/4 bytes) with each transfer. */
#define RP2040_DMA_CH4_CTRL_TRIG_DATA_SIZE_MASK            (0x03 << RP2040_DMA_CH4_CTRL_TRIG_DATA_SIZE_SHIFT)
#define RP2040_DMA_CH4_CTRL_TRIG_DATA_SIZE_SIZE_BYTE       (0x0 << RP2040_DMA_CH4_CTRL_TRIG_DATA_SIZE_SHIFT)
#define RP2040_DMA_CH4_CTRL_TRIG_DATA_SIZE_SIZE_HALFWORD   (0x1 << RP2040_DMA_CH4_CTRL_TRIG_DATA_SIZE_SHIFT)
#define RP2040_DMA_CH4_CTRL_TRIG_DATA_SIZE_SIZE_WORD       (0x2 << RP2040_DMA_CH4_CTRL_TRIG_DATA_SIZE_SHIFT)
#define RP2040_DMA_CH4_CTRL_TRIG_HIGH_PRIORITY             (1 << 1)  /* HIGH_PRIORITY gives a channel preferential treatment in issue scheduling: in each scheduling round, all high priority channels are considered first, and then only a single low priority channel, before returning to the high priority channels.  This only affects the order in which the DMA schedules channels. The DMA's bus priority is not changed. If the DMA is not saturated then a low priority channel will see no loss of throughput. */
#define RP2040_DMA_CH4_CTRL_TRIG_EN                        (1 << 0)  /* DMA Channel Enable. When 1, the channel will respond to triggering events, which will cause it to become BUSY and start transferring data. When 0, the channel will ignore triggers, stop issuing transfers, and pause the current transfer sequence (i.e. BUSY will remain high if already high) */

#define RP2040_DMA_CH5_CTRL_TRIG_AHB_ERROR                 (1 << 31)  /* Logical OR of the READ_ERROR and WRITE_ERROR flags. The channel halts when it encounters any bus error, and always raises its channel IRQ flag. */
#define RP2040_DMA_CH5_CTRL_TRIG_READ_ERROR                (1 << 30)  /* If 1, the channel received a read bus error. Write one to clear. READ_ADDR shows the approximate address where the bus error was encountered (will not to be earlier, or more than 3 transfers later) */
#define RP2040_DMA_CH5_CTRL_TRIG_WRITE_ERROR               (1 << 29)  /* If 1, the channel received a write bus error. Write one to clear. WRITE_ADDR shows the approximate address where the bus error was encountered (will not to be earlier, or more than 5 transfers later) */
#define RP2040_DMA_CH5_CTRL_TRIG_BUSY                      (1 << 24)  /* This flag goes high when the channel starts a new transfer sequence, and low when the last transfer of that sequence completes. Clearing EN while BUSY is high pauses the channel, and BUSY will stay high while paused.  To terminate a sequence early (and clear the BUSY flag), see CHAN_ABORT. */
#define RP2040_DMA_CH5_CTRL_TRIG_SNIFF_EN                  (1 << 23)  /* If 1, this channel's data transfers are visible to the sniff hardware, and each transfer will advance the state of the checksum. This only applies if the sniff hardware is enabled, and has this channel selected.  This allows checksum to be enabled or disabled on a per-control- block basis. */
#define RP2040_DMA_CH5_CTRL_TRIG_BSWAP                     (1 << 22)  /* Apply byte-swap transformation to DMA data. For byte data, this has no effect. For halfword data, the two bytes of each halfword are swapped. For word data, the four bytes of each word are swapped to reverse order. */
#define RP2040_DMA_CH5_CTRL_TRIG_IRQ_QUIET                 (1 << 21)  /* In QUIET mode, the channel does not generate IRQs at the end of every transfer block. Instead, an IRQ is raised when NULL is written to a trigger register, indicating the end of a control block chain.  This reduces the number of interrupts to be serviced by the CPU when transferring a DMA chain of many small control blocks. */
#define RP2040_DMA_CH5_CTRL_TRIG_TREQ_SEL_SHIFT            (15)  /* Select a Transfer Request signal. The channel uses the transfer request signal to pace its data transfer rate. Sources for TREQ signals are internal (TIMERS) or external (DREQ, a Data Request from the system). 0x0 to 0x3a -> select DREQ n as TREQ */
#define RP2040_DMA_CH5_CTRL_TRIG_TREQ_SEL_MASK             (0x3f << RP2040_DMA_CH5_CTRL_TRIG_TREQ_SEL_SHIFT)
#define RP2040_DMA_CH5_CTRL_TRIG_TREQ_SEL_TIMER0           (0x3b << RP2040_DMA_CH5_CTRL_TRIG_TREQ_SEL_SHIFT)  /* Select Timer 0 as TREQ */
#define RP2040_DMA_CH5_CTRL_TRIG_TREQ_SEL_TIMER1           (0x3c << RP2040_DMA_CH5_CTRL_TRIG_TREQ_SEL_SHIFT)  /* Select Timer 1 as TREQ */
#define RP2040_DMA_CH5_CTRL_TRIG_TREQ_SEL_TIMER2           (0x3d << RP2040_DMA_CH5_CTRL_TRIG_TREQ_SEL_SHIFT)  /* Select Timer 2 as TREQ (Optional) */
#define RP2040_DMA_CH5_CTRL_TRIG_TREQ_SEL_TIMER3           (0x3e << RP2040_DMA_CH5_CTRL_TRIG_TREQ_SEL_SHIFT)  /* Select Timer 3 as TREQ (Optional) */
#define RP2040_DMA_CH5_CTRL_TRIG_TREQ_SEL_PERMANENT        (0x3f << RP2040_DMA_CH5_CTRL_TRIG_TREQ_SEL_SHIFT)  /* Permanent request, for unpaced transfers. */
#define RP2040_DMA_CH5_CTRL_TRIG_CHAIN_TO_SHIFT            (11)  /* When this channel completes, it will trigger the channel indicated by CHAIN_TO. Disable by setting CHAIN_TO = _(this channel)_. Reset value is equal to channel number (5). */
#define RP2040_DMA_CH5_CTRL_TRIG_CHAIN_TO_MASK             (0x0f << RP2040_DMA_CH5_CTRL_TRIG_CHAIN_TO_SHIFT)
#define RP2040_DMA_CH5_CTRL_TRIG_RING_SEL                  (1 << 10)  /* Select whether RING_SIZE applies to read or write addresses. If 0, read addresses are wrapped on a (1 << RING_SIZE) boundary. If 1, write addresses are wrapped. */
#define RP2040_DMA_CH5_CTRL_TRIG_RING_SIZE_SHIFT           (6)  /* Size of address wrap region. If 0, don't wrap. For values n > 0, only the lower n bits of the address will change. This wraps the address on a (1 << n) byte boundary, facilitating access to naturally-aligned ring buffers.  Ring sizes between 2 and 32768 bytes are possible. This can apply to either read or write addresses, based on value of RING_SEL. */
#define RP2040_DMA_CH5_CTRL_TRIG_RING_SIZE_MASK            (0x0f << RP2040_DMA_CH5_CTRL_TRIG_RING_SIZE_SHIFT)
#define RP2040_DMA_CH5_CTRL_TRIG_RING_SIZE_RING_NONE       (0x0 << RP2040_DMA_CH5_CTRL_TRIG_RING_SIZE_SHIFT)
#define RP2040_DMA_CH5_CTRL_TRIG_INCR_WRITE                (1 << 5)  /* If 1, the write address increments with each transfer. If 0, each write is directed to the same, initial address.  Generally this should be disabled for memory-to-peripheral transfers. */
#define RP2040_DMA_CH5_CTRL_TRIG_INCR_READ                 (1 << 4)  /* If 1, the read address increments with each transfer. If 0, each read is directed to the same, initial address.  Generally this should be disabled for peripheral-to-memory transfers. */
#define RP2040_DMA_CH5_CTRL_TRIG_DATA_SIZE_SHIFT           (2)  /* Set the size of each bus transfer (byte/halfword/word). READ_ADDR and WRITE_ADDR advance by this amount (1/2/4 bytes) with each transfer. */
#define RP2040_DMA_CH5_CTRL_TRIG_DATA_SIZE_MASK            (0x03 << RP2040_DMA_CH5_CTRL_TRIG_DATA_SIZE_SHIFT)
#define RP2040_DMA_CH5_CTRL_TRIG_DATA_SIZE_SIZE_BYTE       (0x0 << RP2040_DMA_CH5_CTRL_TRIG_DATA_SIZE_SHIFT)
#define RP2040_DMA_CH5_CTRL_TRIG_DATA_SIZE_SIZE_HALFWORD   (0x1 << RP2040_DMA_CH5_CTRL_TRIG_DATA_SIZE_SHIFT)
#define RP2040_DMA_CH5_CTRL_TRIG_DATA_SIZE_SIZE_WORD       (0x2 << RP2040_DMA_CH5_CTRL_TRIG_DATA_SIZE_SHIFT)
#define RP2040_DMA_CH5_CTRL_TRIG_HIGH_PRIORITY             (1 << 1)  /* HIGH_PRIORITY gives a channel preferential treatment in issue scheduling: in each scheduling round, all high priority channels are considered first, and then only a single low priority channel, before returning to the high priority channels.  This only affects the order in which the DMA schedules channels. The DMA's bus priority is not changed. If the DMA is not saturated then a low priority channel will see no loss of throughput. */
#define RP2040_DMA_CH5_CTRL_TRIG_EN                        (1 << 0)  /* DMA Channel Enable. When 1, the channel will respond to triggering events, which will cause it to become BUSY and start transferring data. When 0, the channel will ignore triggers, stop issuing transfers, and pause the current transfer sequence (i.e. BUSY will remain high if already high) */

#define RP2040_DMA_CH6_CTRL_TRIG_AHB_ERROR                 (1 << 31)  /* Logical OR of the READ_ERROR and WRITE_ERROR flags. The channel halts when it encounters any bus error, and always raises its channel IRQ flag. */
#define RP2040_DMA_CH6_CTRL_TRIG_READ_ERROR                (1 << 30)  /* If 1, the channel received a read bus error. Write one to clear. READ_ADDR shows the approximate address where the bus error was encountered (will not to be earlier, or more than 3 transfers later) */
#define RP2040_DMA_CH6_CTRL_TRIG_WRITE_ERROR               (1 << 29)  /* If 1, the channel received a write bus error. Write one to clear. WRITE_ADDR shows the approximate address where the bus error was encountered (will not to be earlier, or more than 5 transfers later) */
#define RP2040_DMA_CH6_CTRL_TRIG_BUSY                      (1 << 24)  /* This flag goes high when the channel starts a new transfer sequence, and low when the last transfer of that sequence completes. Clearing EN while BUSY is high pauses the channel, and BUSY will stay high while paused.  To terminate a sequence early (and clear the BUSY flag), see CHAN_ABORT. */
#define RP2040_DMA_CH6_CTRL_TRIG_SNIFF_EN                  (1 << 23)  /* If 1, this channel's data transfers are visible to the sniff hardware, and each transfer will advance the state of the checksum. This only applies if the sniff hardware is enabled, and has this channel selected.  This allows checksum to be enabled or disabled on a per-control- block basis. */
#define RP2040_DMA_CH6_CTRL_TRIG_BSWAP                     (1 << 22)  /* Apply byte-swap transformation to DMA data. For byte data, this has no effect. For halfword data, the two bytes of each halfword are swapped. For word data, the four bytes of each word are swapped to reverse order. */
#define RP2040_DMA_CH6_CTRL_TRIG_IRQ_QUIET                 (1 << 21)  /* In QUIET mode, the channel does not generate IRQs at the end of every transfer block. Instead, an IRQ is raised when NULL is written to a trigger register, indicating the end of a control block chain.  This reduces the number of interrupts to be serviced by the CPU when transferring a DMA chain of many small control blocks. */
#define RP2040_DMA_CH6_CTRL_TRIG_TREQ_SEL_SHIFT            (15)  /* Select a Transfer Request signal. The channel uses the transfer request signal to pace its data transfer rate. Sources for TREQ signals are internal (TIMERS) or external (DREQ, a Data Request from the system). 0x0 to 0x3a -> select DREQ n as TREQ */
#define RP2040_DMA_CH6_CTRL_TRIG_TREQ_SEL_MASK             (0x3f << RP2040_DMA_CH6_CTRL_TRIG_TREQ_SEL_SHIFT)
#define RP2040_DMA_CH6_CTRL_TRIG_TREQ_SEL_TIMER0           (0x3b << RP2040_DMA_CH6_CTRL_TRIG_TREQ_SEL_SHIFT)  /* Select Timer 0 as TREQ */
#define RP2040_DMA_CH6_CTRL_TRIG_TREQ_SEL_TIMER1           (0x3c << RP2040_DMA_CH6_CTRL_TRIG_TREQ_SEL_SHIFT)  /* Select Timer 1 as TREQ */
#define RP2040_DMA_CH6_CTRL_TRIG_TREQ_SEL_TIMER2           (0x3d << RP2040_DMA_CH6_CTRL_TRIG_TREQ_SEL_SHIFT)  /* Select Timer 2 as TREQ (Optional) */
#define RP2040_DMA_CH6_CTRL_TRIG_TREQ_SEL_TIMER3           (0x3e << RP2040_DMA_CH6_CTRL_TRIG_TREQ_SEL_SHIFT)  /* Select Timer 3 as TREQ (Optional) */
#define RP2040_DMA_CH6_CTRL_TRIG_TREQ_SEL_PERMANENT        (0x3f << RP2040_DMA_CH6_CTRL_TRIG_TREQ_SEL_SHIFT)  /* Permanent request, for unpaced transfers. */
#define RP2040_DMA_CH6_CTRL_TRIG_CHAIN_TO_SHIFT            (11)  /* When this channel completes, it will trigger the channel indicated by CHAIN_TO. Disable by setting CHAIN_TO = _(this channel)_. Reset value is equal to channel number (6). */
#define RP2040_DMA_CH6_CTRL_TRIG_CHAIN_TO_MASK             (0x0f << RP2040_DMA_CH6_CTRL_TRIG_CHAIN_TO_SHIFT)
#define RP2040_DMA_CH6_CTRL_TRIG_RING_SEL                  (1 << 10)  /* Select whether RING_SIZE applies to read or write addresses. If 0, read addresses are wrapped on a (1 << RING_SIZE) boundary. If 1, write addresses are wrapped. */
#define RP2040_DMA_CH6_CTRL_TRIG_RING_SIZE_SHIFT           (6)  /* Size of address wrap region. If 0, don't wrap. For values n > 0, only the lower n bits of the address will change. This wraps the address on a (1 << n) byte boundary, facilitating access to naturally-aligned ring buffers.  Ring sizes between 2 and 32768 bytes are possible. This can apply to either read or write addresses, based on value of RING_SEL. */
#define RP2040_DMA_CH6_CTRL_TRIG_RING_SIZE_MASK            (0x0f << RP2040_DMA_CH6_CTRL_TRIG_RING_SIZE_SHIFT)
#define RP2040_DMA_CH6_CTRL_TRIG_RING_SIZE_RING_NONE       (0x0 << RP2040_DMA_CH6_CTRL_TRIG_RING_SIZE_SHIFT)
#define RP2040_DMA_CH6_CTRL_TRIG_INCR_WRITE                (1 << 5)  /* If 1, the write address increments with each transfer. If 0, each write is directed to the same, initial address.  Generally this should be disabled for memory-to-peripheral transfers. */
#define RP2040_DMA_CH6_CTRL_TRIG_INCR_READ                 (1 << 4)  /* If 1, the read address increments with each transfer. If 0, each read is directed to the same, initial address.  Generally this should be disabled for peripheral-to-memory transfers. */
#define RP2040_DMA_CH6_CTRL_TRIG_DATA_SIZE_SHIFT           (2)  /* Set the size of each bus transfer (byte/halfword/word). READ_ADDR and WRITE_ADDR advance by this amount (1/2/4 bytes) with each transfer. */
#define RP2040_DMA_CH6_CTRL_TRIG_DATA_SIZE_MASK            (0x03 << RP2040_DMA_CH6_CTRL_TRIG_DATA_SIZE_SHIFT)
#define RP2040_DMA_CH6_CTRL_TRIG_DATA_SIZE_SIZE_BYTE       (0x0 << RP2040_DMA_CH6_CTRL_TRIG_DATA_SIZE_SHIFT)
#define RP2040_DMA_CH6_CTRL_TRIG_DATA_SIZE_SIZE_HALFWORD   (0x1 << RP2040_DMA_CH6_CTRL_TRIG_DATA_SIZE_SHIFT)
#define RP2040_DMA_CH6_CTRL_TRIG_DATA_SIZE_SIZE_WORD       (0x2 << RP2040_DMA_CH6_CTRL_TRIG_DATA_SIZE_SHIFT)
#define RP2040_DMA_CH6_CTRL_TRIG_HIGH_PRIORITY             (1 << 1)  /* HIGH_PRIORITY gives a channel preferential treatment in issue scheduling: in each scheduling round, all high priority channels are considered first, and then only a single low priority channel, before returning to the high priority channels.  This only affects the order in which the DMA schedules channels. The DMA's bus priority is not changed. If the DMA is not saturated then a low priority channel will see no loss of throughput. */
#define RP2040_DMA_CH6_CTRL_TRIG_EN                        (1 << 0)  /* DMA Channel Enable. When 1, the channel will respond to triggering events, which will cause it to become BUSY and start transferring data. When 0, the channel will ignore triggers, stop issuing transfers, and pause the current transfer sequence (i.e. BUSY will remain high if already high) */

#define RP2040_DMA_CH7_CTRL_TRIG_AHB_ERROR                 (1 << 31)  /* Logical OR of the READ_ERROR and WRITE_ERROR flags. The channel halts when it encounters any bus error, and always raises its channel IRQ flag. */
#define RP2040_DMA_CH7_CTRL_TRIG_READ_ERROR                (1 << 30)  /* If 1, the channel received a read bus error. Write one to clear. READ_ADDR shows the approximate address where the bus error was encountered (will not to be earlier, or more than 3 transfers later) */
#define RP2040_DMA_CH7_CTRL_TRIG_WRITE_ERROR               (1 << 29)  /* If 1, the channel received a write bus error. Write one to clear. WRITE_ADDR shows the approximate address where the bus error was encountered (will not to be earlier, or more than 5 transfers later) */
#define RP2040_DMA_CH7_CTRL_TRIG_BUSY                      (1 << 24)  /* This flag goes high when the channel starts a new transfer sequence, and low when the last transfer of that sequence completes. Clearing EN while BUSY is high pauses the channel, and BUSY will stay high while paused.  To terminate a sequence early (and clear the BUSY flag), see CHAN_ABORT. */
#define RP2040_DMA_CH7_CTRL_TRIG_SNIFF_EN                  (1 << 23)  /* If 1, this channel's data transfers are visible to the sniff hardware, and each transfer will advance the state of the checksum. This only applies if the sniff hardware is enabled, and has this channel selected.  This allows checksum to be enabled or disabled on a per-control- block basis. */
#define RP2040_DMA_CH7_CTRL_TRIG_BSWAP                     (1 << 22)  /* Apply byte-swap transformation to DMA data. For byte data, this has no effect. For halfword data, the two bytes of each halfword are swapped. For word data, the four bytes of each word are swapped to reverse order. */
#define RP2040_DMA_CH7_CTRL_TRIG_IRQ_QUIET                 (1 << 21)  /* In QUIET mode, the channel does not generate IRQs at the end of every transfer block. Instead, an IRQ is raised when NULL is written to a trigger register, indicating the end of a control block chain.  This reduces the number of interrupts to be serviced by the CPU when transferring a DMA chain of many small control blocks. */
#define RP2040_DMA_CH7_CTRL_TRIG_TREQ_SEL_SHIFT            (15)  /* Select a Transfer Request signal. The channel uses the transfer request signal to pace its data transfer rate. Sources for TREQ signals are internal (TIMERS) or external (DREQ, a Data Request from the system). 0x0 to 0x3a -> select DREQ n as TREQ */
#define RP2040_DMA_CH7_CTRL_TRIG_TREQ_SEL_MASK             (0x3f << RP2040_DMA_CH7_CTRL_TRIG_TREQ_SEL_SHIFT)
#define RP2040_DMA_CH7_CTRL_TRIG_TREQ_SEL_TIMER0           (0x3b << RP2040_DMA_CH7_CTRL_TRIG_TREQ_SEL_SHIFT)  /* Select Timer 0 as TREQ */
#define RP2040_DMA_CH7_CTRL_TRIG_TREQ_SEL_TIMER1           (0x3c << RP2040_DMA_CH7_CTRL_TRIG_TREQ_SEL_SHIFT)  /* Select Timer 1 as TREQ */
#define RP2040_DMA_CH7_CTRL_TRIG_TREQ_SEL_TIMER2           (0x3d << RP2040_DMA_CH7_CTRL_TRIG_TREQ_SEL_SHIFT)  /* Select Timer 2 as TREQ (Optional) */
#define RP2040_DMA_CH7_CTRL_TRIG_TREQ_SEL_TIMER3           (0x3e << RP2040_DMA_CH7_CTRL_TRIG_TREQ_SEL_SHIFT)  /* Select Timer 3 as TREQ (Optional) */
#define RP2040_DMA_CH7_CTRL_TRIG_TREQ_SEL_PERMANENT        (0x3f << RP2040_DMA_CH7_CTRL_TRIG_TREQ_SEL_SHIFT)  /* Permanent request, for unpaced transfers. */
#define RP2040_DMA_CH7_CTRL_TRIG_CHAIN_TO_SHIFT            (11)  /* When this channel completes, it will trigger the channel indicated by CHAIN_TO. Disable by setting CHAIN_TO = _(this channel)_. Reset value is equal to channel number (7). */
#define RP2040_DMA_CH7_CTRL_TRIG_CHAIN_TO_MASK             (0x0f << RP2040_DMA_CH7_CTRL_TRIG_CHAIN_TO_SHIFT)
#define RP2040_DMA_CH7_CTRL_TRIG_RING_SEL                  (1 << 10)  /* Select whether RING_SIZE applies to read or write addresses. If 0, read addresses are wrapped on a (1 << RING_SIZE) boundary. If 1, write addresses are wrapped. */
#define RP2040_DMA_CH7_CTRL_TRIG_RING_SIZE_SHIFT           (6)  /* Size of address wrap region. If 0, don't wrap. For values n > 0, only the lower n bits of the address will change. This wraps the address on a (1 << n) byte boundary, facilitating access to naturally-aligned ring buffers.  Ring sizes between 2 and 32768 bytes are possible. This can apply to either read or write addresses, based on value of RING_SEL. */
#define RP2040_DMA_CH7_CTRL_TRIG_RING_SIZE_MASK            (0x0f << RP2040_DMA_CH7_CTRL_TRIG_RING_SIZE_SHIFT)
#define RP2040_DMA_CH7_CTRL_TRIG_RING_SIZE_RING_NONE       (0x0 << RP2040_DMA_CH7_CTRL_TRIG_RING_SIZE_SHIFT)
#define RP2040_DMA_CH7_CTRL_TRIG_INCR_WRITE                (1 << 5)  /* If 1, the write address increments with each transfer. If 0, each write is directed to the same, initial address.  Generally this should be disabled for memory-to-peripheral transfers. */
#define RP2040_DMA_CH7_CTRL_TRIG_INCR_READ                 (1 << 4)  /* If 1, the read address increments with each transfer. If 0, each read is directed to the same, initial address.  Generally this should be disabled for peripheral-to-memory transfers. */
#define RP2040_DMA_CH7_CTRL_TRIG_DATA_SIZE_SHIFT           (2)  /* Set the size of each bus transfer (byte/halfword/word). READ_ADDR and WRITE_ADDR advance by this amount (1/2/4 bytes) with each transfer. */
#define RP2040_DMA_CH7_CTRL_TRIG_DATA_SIZE_MASK            (0x03 << RP2040_DMA_CH7_CTRL_TRIG_DATA_SIZE_SHIFT)
#define RP2040_DMA_CH7_CTRL_TRIG_DATA_SIZE_SIZE_BYTE       (0x0 << RP2040_DMA_CH7_CTRL_TRIG_DATA_SIZE_SHIFT)
#define RP2040_DMA_CH7_CTRL_TRIG_DATA_SIZE_SIZE_HALFWORD   (0x1 << RP2040_DMA_CH7_CTRL_TRIG_DATA_SIZE_SHIFT)
#define RP2040_DMA_CH7_CTRL_TRIG_DATA_SIZE_SIZE_WORD       (0x2 << RP2040_DMA_CH7_CTRL_TRIG_DATA_SIZE_SHIFT)
#define RP2040_DMA_CH7_CTRL_TRIG_HIGH_PRIORITY             (1 << 1)  /* HIGH_PRIORITY gives a channel preferential treatment in issue scheduling: in each scheduling round, all high priority channels are considered first, and then only a single low priority channel, before returning to the high priority channels.  This only affects the order in which the DMA schedules channels. The DMA's bus priority is not changed. If the DMA is not saturated then a low priority channel will see no loss of throughput. */
#define RP2040_DMA_CH7_CTRL_TRIG_EN                        (1 << 0)  /* DMA Channel Enable. When 1, the channel will respond to triggering events, which will cause it to become BUSY and start transferring data. When 0, the channel will ignore triggers, stop issuing transfers, and pause the current transfer sequence (i.e. BUSY will remain high if already high) */

#define RP2040_DMA_CH8_CTRL_TRIG_AHB_ERROR                 (1 << 31)  /* Logical OR of the READ_ERROR and WRITE_ERROR flags. The channel halts when it encounters any bus error, and always raises its channel IRQ flag. */
#define RP2040_DMA_CH8_CTRL_TRIG_READ_ERROR                (1 << 30)  /* If 1, the channel received a read bus error. Write one to clear. READ_ADDR shows the approximate address where the bus error was encountered (will not to be earlier, or more than 3 transfers later) */
#define RP2040_DMA_CH8_CTRL_TRIG_WRITE_ERROR               (1 << 29)  /* If 1, the channel received a write bus error. Write one to clear. WRITE_ADDR shows the approximate address where the bus error was encountered (will not to be earlier, or more than 5 transfers later) */
#define RP2040_DMA_CH8_CTRL_TRIG_BUSY                      (1 << 24)  /* This flag goes high when the channel starts a new transfer sequence, and low when the last transfer of that sequence completes. Clearing EN while BUSY is high pauses the channel, and BUSY will stay high while paused.  To terminate a sequence early (and clear the BUSY flag), see CHAN_ABORT. */
#define RP2040_DMA_CH8_CTRL_TRIG_SNIFF_EN                  (1 << 23)  /* If 1, this channel's data transfers are visible to the sniff hardware, and each transfer will advance the state of the checksum. This only applies if the sniff hardware is enabled, and has this channel selected.  This allows checksum to be enabled or disabled on a per-control- block basis. */
#define RP2040_DMA_CH8_CTRL_TRIG_BSWAP                     (1 << 22)  /* Apply byte-swap transformation to DMA data. For byte data, this has no effect. For halfword data, the two bytes of each halfword are swapped. For word data, the four bytes of each word are swapped to reverse order. */
#define RP2040_DMA_CH8_CTRL_TRIG_IRQ_QUIET                 (1 << 21)  /* In QUIET mode, the channel does not generate IRQs at the end of every transfer block. Instead, an IRQ is raised when NULL is written to a trigger register, indicating the end of a control block chain.  This reduces the number of interrupts to be serviced by the CPU when transferring a DMA chain of many small control blocks. */
#define RP2040_DMA_CH8_CTRL_TRIG_TREQ_SEL_SHIFT            (15)  /* Select a Transfer Request signal. The channel uses the transfer request signal to pace its data transfer rate. Sources for TREQ signals are internal (TIMERS) or external (DREQ, a Data Request from the system). 0x0 to 0x3a -> select DREQ n as TREQ */
#define RP2040_DMA_CH8_CTRL_TRIG_TREQ_SEL_MASK             (0x3f << RP2040_DMA_CH8_CTRL_TRIG_TREQ_SEL_SHIFT)
#define RP2040_DMA_CH8_CTRL_TRIG_TREQ_SEL_TIMER0           (0x3b << RP2040_DMA_CH8_CTRL_TRIG_TREQ_SEL_SHIFT)  /* Select Timer 0 as TREQ */
#define RP2040_DMA_CH8_CTRL_TRIG_TREQ_SEL_TIMER1           (0x3c << RP2040_DMA_CH8_CTRL_TRIG_TREQ_SEL_SHIFT)  /* Select Timer 1 as TREQ */
#define RP2040_DMA_CH8_CTRL_TRIG_TREQ_SEL_TIMER2           (0x3d << RP2040_DMA_CH8_CTRL_TRIG_TREQ_SEL_SHIFT)  /* Select Timer 2 as TREQ (Optional) */
#define RP2040_DMA_CH8_CTRL_TRIG_TREQ_SEL_TIMER3           (0x3e << RP2040_DMA_CH8_CTRL_TRIG_TREQ_SEL_SHIFT)  /* Select Timer 3 as TREQ (Optional) */
#define RP2040_DMA_CH8_CTRL_TRIG_TREQ_SEL_PERMANENT        (0x3f << RP2040_DMA_CH8_CTRL_TRIG_TREQ_SEL_SHIFT)  /* Permanent request, for unpaced transfers. */
#define RP2040_DMA_CH8_CTRL_TRIG_CHAIN_TO_SHIFT            (11)  /* When this channel completes, it will trigger the channel indicated by CHAIN_TO. Disable by setting CHAIN_TO = _(this channel)_. Reset value is equal to channel number (8). */
#define RP2040_DMA_CH8_CTRL_TRIG_CHAIN_TO_MASK             (0x0f << RP2040_DMA_CH8_CTRL_TRIG_CHAIN_TO_SHIFT)
#define RP2040_DMA_CH8_CTRL_TRIG_RING_SEL                  (1 << 10)  /* Select whether RING_SIZE applies to read or write addresses. If 0, read addresses are wrapped on a (1 << RING_SIZE) boundary. If 1, write addresses are wrapped. */
#define RP2040_DMA_CH8_CTRL_TRIG_RING_SIZE_SHIFT           (6)  /* Size of address wrap region. If 0, don't wrap. For values n > 0, only the lower n bits of the address will change. This wraps the address on a (1 << n) byte boundary, facilitating access to naturally-aligned ring buffers.  Ring sizes between 2 and 32768 bytes are possible. This can apply to either read or write addresses, based on value of RING_SEL. */
#define RP2040_DMA_CH8_CTRL_TRIG_RING_SIZE_MASK            (0x0f << RP2040_DMA_CH8_CTRL_TRIG_RING_SIZE_SHIFT)
#define RP2040_DMA_CH8_CTRL_TRIG_RING_SIZE_RING_NONE       (0x0 << RP2040_DMA_CH8_CTRL_TRIG_RING_SIZE_SHIFT)
#define RP2040_DMA_CH8_CTRL_TRIG_INCR_WRITE                (1 << 5)  /* If 1, the write address increments with each transfer. If 0, each write is directed to the same, initial address.  Generally this should be disabled for memory-to-peripheral transfers. */
#define RP2040_DMA_CH8_CTRL_TRIG_INCR_READ                 (1 << 4)  /* If 1, the read address increments with each transfer. If 0, each read is directed to the same, initial address.  Generally this should be disabled for peripheral-to-memory transfers. */
#define RP2040_DMA_CH8_CTRL_TRIG_DATA_SIZE_SHIFT           (2)  /* Set the size of each bus transfer (byte/halfword/word). READ_ADDR and WRITE_ADDR advance by this amount (1/2/4 bytes) with each transfer. */
#define RP2040_DMA_CH8_CTRL_TRIG_DATA_SIZE_MASK            (0x03 << RP2040_DMA_CH8_CTRL_TRIG_DATA_SIZE_SHIFT)
#define RP2040_DMA_CH8_CTRL_TRIG_DATA_SIZE_SIZE_BYTE       (0x0 << RP2040_DMA_CH8_CTRL_TRIG_DATA_SIZE_SHIFT)
#define RP2040_DMA_CH8_CTRL_TRIG_DATA_SIZE_SIZE_HALFWORD   (0x1 << RP2040_DMA_CH8_CTRL_TRIG_DATA_SIZE_SHIFT)
#define RP2040_DMA_CH8_CTRL_TRIG_DATA_SIZE_SIZE_WORD       (0x2 << RP2040_DMA_CH8_CTRL_TRIG_DATA_SIZE_SHIFT)
#define RP2040_DMA_CH8_CTRL_TRIG_HIGH_PRIORITY             (1 << 1)  /* HIGH_PRIORITY gives a channel preferential treatment in issue scheduling: in each scheduling round, all high priority channels are considered first, and then only a single low priority channel, before returning to the high priority channels.  This only affects the order in which the DMA schedules channels. The DMA's bus priority is not changed. If the DMA is not saturated then a low priority channel will see no loss of throughput. */
#define RP2040_DMA_CH8_CTRL_TRIG_EN                        (1 << 0)  /* DMA Channel Enable. When 1, the channel will respond to triggering events, which will cause it to become BUSY and start transferring data. When 0, the channel will ignore triggers, stop issuing transfers, and pause the current transfer sequence (i.e. BUSY will remain high if already high) */

#define RP2040_DMA_CH9_CTRL_TRIG_AHB_ERROR                 (1 << 31)  /* Logical OR of the READ_ERROR and WRITE_ERROR flags. The channel halts when it encounters any bus error, and always raises its channel IRQ flag. */
#define RP2040_DMA_CH9_CTRL_TRIG_READ_ERROR                (1 << 30)  /* If 1, the channel received a read bus error. Write one to clear. READ_ADDR shows the approximate address where the bus error was encountered (will not to be earlier, or more than 3 transfers later) */
#define RP2040_DMA_CH9_CTRL_TRIG_WRITE_ERROR               (1 << 29)  /* If 1, the channel received a write bus error. Write one to clear. WRITE_ADDR shows the approximate address where the bus error was encountered (will not to be earlier, or more than 5 transfers later) */
#define RP2040_DMA_CH9_CTRL_TRIG_BUSY                      (1 << 24)  /* This flag goes high when the channel starts a new transfer sequence, and low when the last transfer of that sequence completes. Clearing EN while BUSY is high pauses the channel, and BUSY will stay high while paused.  To terminate a sequence early (and clear the BUSY flag), see CHAN_ABORT. */
#define RP2040_DMA_CH9_CTRL_TRIG_SNIFF_EN                  (1 << 23)  /* If 1, this channel's data transfers are visible to the sniff hardware, and each transfer will advance the state of the checksum. This only applies if the sniff hardware is enabled, and has this channel selected.  This allows checksum to be enabled or disabled on a per-control- block basis. */
#define RP2040_DMA_CH9_CTRL_TRIG_BSWAP                     (1 << 22)  /* Apply byte-swap transformation to DMA data. For byte data, this has no effect. For halfword data, the two bytes of each halfword are swapped. For word data, the four bytes of each word are swapped to reverse order. */
#define RP2040_DMA_CH9_CTRL_TRIG_IRQ_QUIET                 (1 << 21)  /* In QUIET mode, the channel does not generate IRQs at the end of every transfer block. Instead, an IRQ is raised when NULL is written to a trigger register, indicating the end of a control block chain.  This reduces the number of interrupts to be serviced by the CPU when transferring a DMA chain of many small control blocks. */
#define RP2040_DMA_CH9_CTRL_TRIG_TREQ_SEL_SHIFT            (15)  /* Select a Transfer Request signal. The channel uses the transfer request signal to pace its data transfer rate. Sources for TREQ signals are internal (TIMERS) or external (DREQ, a Data Request from the system). 0x0 to 0x3a -> select DREQ n as TREQ */
#define RP2040_DMA_CH9_CTRL_TRIG_TREQ_SEL_MASK             (0x3f << RP2040_DMA_CH9_CTRL_TRIG_TREQ_SEL_SHIFT)
#define RP2040_DMA_CH9_CTRL_TRIG_TREQ_SEL_TIMER0           (0x3b << RP2040_DMA_CH9_CTRL_TRIG_TREQ_SEL_SHIFT)  /* Select Timer 0 as TREQ */
#define RP2040_DMA_CH9_CTRL_TRIG_TREQ_SEL_TIMER1           (0x3c << RP2040_DMA_CH9_CTRL_TRIG_TREQ_SEL_SHIFT)  /* Select Timer 1 as TREQ */
#define RP2040_DMA_CH9_CTRL_TRIG_TREQ_SEL_TIMER2           (0x3d << RP2040_DMA_CH9_CTRL_TRIG_TREQ_SEL_SHIFT)  /* Select Timer 2 as TREQ (Optional) */
#define RP2040_DMA_CH9_CTRL_TRIG_TREQ_SEL_TIMER3           (0x3e << RP2040_DMA_CH9_CTRL_TRIG_TREQ_SEL_SHIFT)  /* Select Timer 3 as TREQ (Optional) */
#define RP2040_DMA_CH9_CTRL_TRIG_TREQ_SEL_PERMANENT        (0x3f << RP2040_DMA_CH9_CTRL_TRIG_TREQ_SEL_SHIFT)  /* Permanent request, for unpaced transfers. */
#define RP2040_DMA_CH9_CTRL_TRIG_CHAIN_TO_SHIFT            (11)  /* When this channel completes, it will trigger the channel indicated by CHAIN_TO. Disable by setting CHAIN_TO = _(this channel)_. Reset value is equal to channel number (9). */
#define RP2040_DMA_CH9_CTRL_TRIG_CHAIN_TO_MASK             (0x0f << RP2040_DMA_CH9_CTRL_TRIG_CHAIN_TO_SHIFT)
#define RP2040_DMA_CH9_CTRL_TRIG_RING_SEL                  (1 << 10)  /* Select whether RING_SIZE applies to read or write addresses. If 0, read addresses are wrapped on a (1 << RING_SIZE) boundary. If 1, write addresses are wrapped. */
#define RP2040_DMA_CH9_CTRL_TRIG_RING_SIZE_SHIFT           (6)  /* Size of address wrap region. If 0, don't wrap. For values n > 0, only the lower n bits of the address will change. This wraps the address on a (1 << n) byte boundary, facilitating access to naturally-aligned ring buffers.  Ring sizes between 2 and 32768 bytes are possible. This can apply to either read or write addresses, based on value of RING_SEL. */
#define RP2040_DMA_CH9_CTRL_TRIG_RING_SIZE_MASK            (0x0f << RP2040_DMA_CH9_CTRL_TRIG_RING_SIZE_SHIFT)
#define RP2040_DMA_CH9_CTRL_TRIG_RING_SIZE_RING_NONE       (0x0 << RP2040_DMA_CH9_CTRL_TRIG_RING_SIZE_SHIFT)
#define RP2040_DMA_CH9_CTRL_TRIG_INCR_WRITE                (1 << 5)  /* If 1, the write address increments with each transfer. If 0, each write is directed to the same, initial address.  Generally this should be disabled for memory-to-peripheral transfers. */
#define RP2040_DMA_CH9_CTRL_TRIG_INCR_READ                 (1 << 4)  /* If 1, the read address increments with each transfer. If 0, each read is directed to the same, initial address.  Generally this should be disabled for peripheral-to-memory transfers. */
#define RP2040_DMA_CH9_CTRL_TRIG_DATA_SIZE_SHIFT           (2)  /* Set the size of each bus transfer (byte/halfword/word). READ_ADDR and WRITE_ADDR advance by this amount (1/2/4 bytes) with each transfer. */
#define RP2040_DMA_CH9_CTRL_TRIG_DATA_SIZE_MASK            (0x03 << RP2040_DMA_CH9_CTRL_TRIG_DATA_SIZE_SHIFT)
#define RP2040_DMA_CH9_CTRL_TRIG_DATA_SIZE_SIZE_BYTE       (0x0 << RP2040_DMA_CH9_CTRL_TRIG_DATA_SIZE_SHIFT)
#define RP2040_DMA_CH9_CTRL_TRIG_DATA_SIZE_SIZE_HALFWORD   (0x1 << RP2040_DMA_CH9_CTRL_TRIG_DATA_SIZE_SHIFT)
#define RP2040_DMA_CH9_CTRL_TRIG_DATA_SIZE_SIZE_WORD       (0x2 << RP2040_DMA_CH9_CTRL_TRIG_DATA_SIZE_SHIFT)
#define RP2040_DMA_CH9_CTRL_TRIG_HIGH_PRIORITY             (1 << 1)  /* HIGH_PRIORITY gives a channel preferential treatment in issue scheduling: in each scheduling round, all high priority channels are considered first, and then only a single low priority channel, before returning to the high priority channels.  This only affects the order in which the DMA schedules channels. The DMA's bus priority is not changed. If the DMA is not saturated then a low priority channel will see no loss of throughput. */
#define RP2040_DMA_CH9_CTRL_TRIG_EN                        (1 << 0)  /* DMA Channel Enable. When 1, the channel will respond to triggering events, which will cause it to become BUSY and start transferring data. When 0, the channel will ignore triggers, stop issuing transfers, and pause the current transfer sequence (i.e. BUSY will remain high if already high) */

#define RP2040_DMA_CH10_CTRL_TRIG_AHB_ERROR                (1 << 31)  /* Logical OR of the READ_ERROR and WRITE_ERROR flags. The channel halts when it encounters any bus error, and always raises its channel IRQ flag. */
#define RP2040_DMA_CH10_CTRL_TRIG_READ_ERROR               (1 << 30)  /* If 1, the channel received a read bus error. Write one to clear. READ_ADDR shows the approximate address where the bus error was encountered (will not to be earlier, or more than 3 transfers later) */
#define RP2040_DMA_CH10_CTRL_TRIG_WRITE_ERROR              (1 << 29)  /* If 1, the channel received a write bus error. Write one to clear. WRITE_ADDR shows the approximate address where the bus error was encountered (will not to be earlier, or more than 5 transfers later) */
#define RP2040_DMA_CH10_CTRL_TRIG_BUSY                     (1 << 24)  /* This flag goes high when the channel starts a new transfer sequence, and low when the last transfer of that sequence completes. Clearing EN while BUSY is high pauses the channel, and BUSY will stay high while paused.  To terminate a sequence early (and clear the BUSY flag), see CHAN_ABORT. */
#define RP2040_DMA_CH10_CTRL_TRIG_SNIFF_EN                 (1 << 23)  /* If 1, this channel's data transfers are visible to the sniff hardware, and each transfer will advance the state of the checksum. This only applies if the sniff hardware is enabled, and has this channel selected.  This allows checksum to be enabled or disabled on a per-control- block basis. */
#define RP2040_DMA_CH10_CTRL_TRIG_BSWAP                    (1 << 22)  /* Apply byte-swap transformation to DMA data. For byte data, this has no effect. For halfword data, the two bytes of each halfword are swapped. For word data, the four bytes of each word are swapped to reverse order. */
#define RP2040_DMA_CH10_CTRL_TRIG_IRQ_QUIET                (1 << 21)  /* In QUIET mode, the channel does not generate IRQs at the end of every transfer block. Instead, an IRQ is raised when NULL is written to a trigger register, indicating the end of a control block chain.  This reduces the number of interrupts to be serviced by the CPU when transferring a DMA chain of many small control blocks. */
#define RP2040_DMA_CH10_CTRL_TRIG_TREQ_SEL_SHIFT           (15)  /* Select a Transfer Request signal. The channel uses the transfer request signal to pace its data transfer rate. Sources for TREQ signals are internal (TIMERS) or external (DREQ, a Data Request from the system). 0x0 to 0x3a -> select DREQ n as TREQ */
#define RP2040_DMA_CH10_CTRL_TRIG_TREQ_SEL_MASK            (0x3f << RP2040_DMA_CH10_CTRL_TRIG_TREQ_SEL_SHIFT)
#define RP2040_DMA_CH10_CTRL_TRIG_TREQ_SEL_TIMER0          (0x3b << RP2040_DMA_CH10_CTRL_TRIG_TREQ_SEL_SHIFT)  /* Select Timer 0 as TREQ */
#define RP2040_DMA_CH10_CTRL_TRIG_TREQ_SEL_TIMER1          (0x3c << RP2040_DMA_CH10_CTRL_TRIG_TREQ_SEL_SHIFT)  /* Select Timer 1 as TREQ */
#define RP2040_DMA_CH10_CTRL_TRIG_TREQ_SEL_TIMER2          (0x3d << RP2040_DMA_CH10_CTRL_TRIG_TREQ_SEL_SHIFT)  /* Select Timer 2 as TREQ (Optional) */
#define RP2040_DMA_CH10_CTRL_TRIG_TREQ_SEL_TIMER3          (0x3e << RP2040_DMA_CH10_CTRL_TRIG_TREQ_SEL_SHIFT)  /* Select Timer 3 as TREQ (Optional) */
#define RP2040_DMA_CH10_CTRL_TRIG_TREQ_SEL_PERMANENT       (0x3f << RP2040_DMA_CH10_CTRL_TRIG_TREQ_SEL_SHIFT)  /* Permanent request, for unpaced transfers. */
#define RP2040_DMA_CH10_CTRL_TRIG_CHAIN_TO_SHIFT           (11)  /* When this channel completes, it will trigger the channel indicated by CHAIN_TO. Disable by setting CHAIN_TO = _(this channel)_. Reset value is equal to channel number (10). */
#define RP2040_DMA_CH10_CTRL_TRIG_CHAIN_TO_MASK            (0x0f << RP2040_DMA_CH10_CTRL_TRIG_CHAIN_TO_SHIFT)
#define RP2040_DMA_CH10_CTRL_TRIG_RING_SEL                 (1 << 10)  /* Select whether RING_SIZE applies to read or write addresses. If 0, read addresses are wrapped on a (1 << RING_SIZE) boundary. If 1, write addresses are wrapped. */
#define RP2040_DMA_CH10_CTRL_TRIG_RING_SIZE_SHIFT          (6)  /* Size of address wrap region. If 0, don't wrap. For values n > 0, only the lower n bits of the address will change. This wraps the address on a (1 << n) byte boundary, facilitating access to naturally-aligned ring buffers.  Ring sizes between 2 and 32768 bytes are possible. This can apply to either read or write addresses, based on value of RING_SEL. */
#define RP2040_DMA_CH10_CTRL_TRIG_RING_SIZE_MASK           (0x0f << RP2040_DMA_CH10_CTRL_TRIG_RING_SIZE_SHIFT)
#define RP2040_DMA_CH10_CTRL_TRIG_RING_SIZE_RING_NONE      (0x0 << RP2040_DMA_CH10_CTRL_TRIG_RING_SIZE_SHIFT)
#define RP2040_DMA_CH10_CTRL_TRIG_INCR_WRITE               (1 << 5)  /* If 1, the write address increments with each transfer. If 0, each write is directed to the same, initial address.  Generally this should be disabled for memory-to-peripheral transfers. */
#define RP2040_DMA_CH10_CTRL_TRIG_INCR_READ                (1 << 4)  /* If 1, the read address increments with each transfer. If 0, each read is directed to the same, initial address.  Generally this should be disabled for peripheral-to-memory transfers. */
#define RP2040_DMA_CH10_CTRL_TRIG_DATA_SIZE_SHIFT          (2)  /* Set the size of each bus transfer (byte/halfword/word). READ_ADDR and WRITE_ADDR advance by this amount (1/2/4 bytes) with each transfer. */
#define RP2040_DMA_CH10_CTRL_TRIG_DATA_SIZE_MASK           (0x03 << RP2040_DMA_CH10_CTRL_TRIG_DATA_SIZE_SHIFT)
#define RP2040_DMA_CH10_CTRL_TRIG_DATA_SIZE_SIZE_BYTE      (0x0 << RP2040_DMA_CH10_CTRL_TRIG_DATA_SIZE_SHIFT)
#define RP2040_DMA_CH10_CTRL_TRIG_DATA_SIZE_SIZE_HALFWORD  (0x1 << RP2040_DMA_CH10_CTRL_TRIG_DATA_SIZE_SHIFT)
#define RP2040_DMA_CH10_CTRL_TRIG_DATA_SIZE_SIZE_WORD      (0x2 << RP2040_DMA_CH10_CTRL_TRIG_DATA_SIZE_SHIFT)
#define RP2040_DMA_CH10_CTRL_TRIG_HIGH_PRIORITY            (1 << 1)  /* HIGH_PRIORITY gives a channel preferential treatment in issue scheduling: in each scheduling round, all high priority channels are considered first, and then only a single low priority channel, before returning to the high priority channels.  This only affects the order in which the DMA schedules channels. The DMA's bus priority is not changed. If the DMA is not saturated then a low priority channel will see no loss of throughput. */
#define RP2040_DMA_CH10_CTRL_TRIG_EN                       (1 << 0)  /* DMA Channel Enable. When 1, the channel will respond to triggering events, which will cause it to become BUSY and start transferring data. When 0, the channel will ignore triggers, stop issuing transfers, and pause the current transfer sequence (i.e. BUSY will remain high if already high) */

#define RP2040_DMA_CH11_CTRL_TRIG_AHB_ERROR                (1 << 31)  /* Logical OR of the READ_ERROR and WRITE_ERROR flags. The channel halts when it encounters any bus error, and always raises its channel IRQ flag. */
#define RP2040_DMA_CH11_CTRL_TRIG_READ_ERROR               (1 << 30)  /* If 1, the channel received a read bus error. Write one to clear. READ_ADDR shows the approximate address where the bus error was encountered (will not to be earlier, or more than 3 transfers later) */
#define RP2040_DMA_CH11_CTRL_TRIG_WRITE_ERROR              (1 << 29)  /* If 1, the channel received a write bus error. Write one to clear. WRITE_ADDR shows the approximate address where the bus error was encountered (will not to be earlier, or more than 5 transfers later) */
#define RP2040_DMA_CH11_CTRL_TRIG_BUSY                     (1 << 24)  /* This flag goes high when the channel starts a new transfer sequence, and low when the last transfer of that sequence completes. Clearing EN while BUSY is high pauses the channel, and BUSY will stay high while paused.  To terminate a sequence early (and clear the BUSY flag), see CHAN_ABORT. */
#define RP2040_DMA_CH11_CTRL_TRIG_SNIFF_EN                 (1 << 23)  /* If 1, this channel's data transfers are visible to the sniff hardware, and each transfer will advance the state of the checksum. This only applies if the sniff hardware is enabled, and has this channel selected.  This allows checksum to be enabled or disabled on a per-control- block basis. */
#define RP2040_DMA_CH11_CTRL_TRIG_BSWAP                    (1 << 22)  /* Apply byte-swap transformation to DMA data. For byte data, this has no effect. For halfword data, the two bytes of each halfword are swapped. For word data, the four bytes of each word are swapped to reverse order. */
#define RP2040_DMA_CH11_CTRL_TRIG_IRQ_QUIET                (1 << 21)  /* In QUIET mode, the channel does not generate IRQs at the end of every transfer block. Instead, an IRQ is raised when NULL is written to a trigger register, indicating the end of a control block chain.  This reduces the number of interrupts to be serviced by the CPU when transferring a DMA chain of many small control blocks. */
#define RP2040_DMA_CH11_CTRL_TRIG_TREQ_SEL_SHIFT           (15)  /* Select a Transfer Request signal. The channel uses the transfer request signal to pace its data transfer rate. Sources for TREQ signals are internal (TIMERS) or external (DREQ, a Data Request from the system). 0x0 to 0x3a -> select DREQ n as TREQ */
#define RP2040_DMA_CH11_CTRL_TRIG_TREQ_SEL_MASK            (0x3f << RP2040_DMA_CH11_CTRL_TRIG_TREQ_SEL_SHIFT)
#define RP2040_DMA_CH11_CTRL_TRIG_TREQ_SEL_TIMER0          (0x3b << RP2040_DMA_CH11_CTRL_TRIG_TREQ_SEL_SHIFT)  /* Select Timer 0 as TREQ */
#define RP2040_DMA_CH11_CTRL_TRIG_TREQ_SEL_TIMER1          (0x3c << RP2040_DMA_CH11_CTRL_TRIG_TREQ_SEL_SHIFT)  /* Select Timer 1 as TREQ */
#define RP2040_DMA_CH11_CTRL_TRIG_TREQ_SEL_TIMER2          (0x3d << RP2040_DMA_CH11_CTRL_TRIG_TREQ_SEL_SHIFT)  /* Select Timer 2 as TREQ (Optional) */
#define RP2040_DMA_CH11_CTRL_TRIG_TREQ_SEL_TIMER3          (0x3e << RP2040_DMA_CH11_CTRL_TRIG_TREQ_SEL_SHIFT)  /* Select Timer 3 as TREQ (Optional) */
#define RP2040_DMA_CH11_CTRL_TRIG_TREQ_SEL_PERMANENT       (0x3f << RP2040_DMA_CH11_CTRL_TRIG_TREQ_SEL_SHIFT)  /* Permanent request, for unpaced transfers. */
#define RP2040_DMA_CH11_CTRL_TRIG_CHAIN_TO_SHIFT           (11)  /* When this channel completes, it will trigger the channel indicated by CHAIN_TO. Disable by setting CHAIN_TO = _(this channel)_. Reset value is equal to channel number (11). */
#define RP2040_DMA_CH11_CTRL_TRIG_CHAIN_TO_MASK            (0x0f << RP2040_DMA_CH11_CTRL_TRIG_CHAIN_TO_SHIFT)
#define RP2040_DMA_CH11_CTRL_TRIG_RING_SEL                 (1 << 10)  /* Select whether RING_SIZE applies to read or write addresses. If 0, read addresses are wrapped on a (1 << RING_SIZE) boundary. If 1, write addresses are wrapped. */
#define RP2040_DMA_CH11_CTRL_TRIG_RING_SIZE_SHIFT          (6)  /* Size of address wrap region. If 0, don't wrap. For values n > 0, only the lower n bits of the address will change. This wraps the address on a (1 << n) byte boundary, facilitating access to naturally-aligned ring buffers.  Ring sizes between 2 and 32768 bytes are possible. This can apply to either read or write addresses, based on value of RING_SEL. */
#define RP2040_DMA_CH11_CTRL_TRIG_RING_SIZE_MASK           (0x0f << RP2040_DMA_CH11_CTRL_TRIG_RING_SIZE_SHIFT)
#define RP2040_DMA_CH11_CTRL_TRIG_RING_SIZE_RING_NONE      (0x0 << RP2040_DMA_CH11_CTRL_TRIG_RING_SIZE_SHIFT)
#define RP2040_DMA_CH11_CTRL_TRIG_INCR_WRITE               (1 << 5)  /* If 1, the write address increments with each transfer. If 0, each write is directed to the same, initial address.  Generally this should be disabled for memory-to-peripheral transfers. */
#define RP2040_DMA_CH11_CTRL_TRIG_INCR_READ                (1 << 4)  /* If 1, the read address increments with each transfer. If 0, each read is directed to the same, initial address.  Generally this should be disabled for peripheral-to-memory transfers. */
#define RP2040_DMA_CH11_CTRL_TRIG_DATA_SIZE_SHIFT          (2)  /* Set the size of each bus transfer (byte/halfword/word). READ_ADDR and WRITE_ADDR advance by this amount (1/2/4 bytes) with each transfer. */
#define RP2040_DMA_CH11_CTRL_TRIG_DATA_SIZE_MASK           (0x03 << RP2040_DMA_CH11_CTRL_TRIG_DATA_SIZE_SHIFT)
#define RP2040_DMA_CH11_CTRL_TRIG_DATA_SIZE_SIZE_BYTE      (0x0 << RP2040_DMA_CH11_CTRL_TRIG_DATA_SIZE_SHIFT)
#define RP2040_DMA_CH11_CTRL_TRIG_DATA_SIZE_SIZE_HALFWORD  (0x1 << RP2040_DMA_CH11_CTRL_TRIG_DATA_SIZE_SHIFT)
#define RP2040_DMA_CH11_CTRL_TRIG_DATA_SIZE_SIZE_WORD      (0x2 << RP2040_DMA_CH11_CTRL_TRIG_DATA_SIZE_SHIFT)
#define RP2040_DMA_CH11_CTRL_TRIG_HIGH_PRIORITY            (1 << 1)  /* HIGH_PRIORITY gives a channel preferential treatment in issue scheduling: in each scheduling round, all high priority channels are considered first, and then only a single low priority channel, before returning to the high priority channels.  This only affects the order in which the DMA schedules channels. The DMA's bus priority is not changed. If the DMA is not saturated then a low priority channel will see no loss of throughput. */
#define RP2040_DMA_CH11_CTRL_TRIG_EN                       (1 << 0)  /* DMA Channel Enable. When 1, the channel will respond to triggering events, which will cause it to become BUSY and start transferring data. When 0, the channel will ignore triggers, stop issuing transfers, and pause the current transfer sequence (i.e. BUSY will remain high if already high) */

#define RP2040_DMA_INTR_MASK                               (0xffff)  /* Raw interrupt status for DMA Channels 0..15. Bit n corresponds to channel n. Ignores any masking or forcing. Channel interrupts can be cleared by writing a bit mask to INTR, INTS0 or INTS1.  Channel interrupts can be routed to either of two system-level IRQs based on INTE0 and INTE1.  This can be used vector different channel interrupts to different ISRs: this might be done to allow NVIC IRQ preemption for more time-critical channels, or to spread IRQ load across different cores.  It is also valid to ignore this behaviour and just use INTE0/INTS0/IRQ 0. */

#define RP2040_DMA_INTE0_MASK                              (0xffff)  /* Set bit n to pass interrupts from channel n to DMA IRQ 0. */

#define RP2040_DMA_INTF0_MASK                              (0xffff)  /* Write 1s to force the corresponding bits in INTE0. The interrupt remains asserted until INTF0 is cleared. */

#define RP2040_DMA_INTS0_MASK                              (0xffff)  /* Indicates active channel interrupt requests which are currently causing IRQ 0 to be asserted. Channel interrupts can be cleared by writing a bit mask here. */

#define RP2040_DMA_INTE1_MASK                              (0xffff)  /* Set bit n to pass interrupts from channel n to DMA IRQ 1. */

#define RP2040_DMA_INTF1_MASK                              (0xffff)  /* Write 1s to force the corresponding bits in INTE0. The interrupt remains asserted until INTF0 is cleared. */

#define RP2040_DMA_INTS1_MASK                              (0xffff)  /* Indicates active channel interrupt requests which are currently causing IRQ 1 to be asserted. Channel interrupts can be cleared by writing a bit mask here. */

#define RP2040_DMA_TIMER0_X_SHIFT                          (16)  /* Pacing Timer Dividend. Specifies the X value for the (X/Y) fractional timer. */
#define RP2040_DMA_TIMER0_X_MASK                           (0xffff << RP2040_DMA_TIMER0_X_SHIFT)
#define RP2040_DMA_TIMER0_Y_MASK                           (0xffff)  /* Pacing Timer Divisor. Specifies the Y value for the (X/Y) fractional timer. */

#define RP2040_DMA_TIMER1_X_SHIFT                          (16)  /* Pacing Timer Dividend. Specifies the X value for the (X/Y) fractional timer. */
#define RP2040_DMA_TIMER1_X_MASK                           (0xffff << RP2040_DMA_TIMER1_X_SHIFT)
#define RP2040_DMA_TIMER1_Y_MASK                           (0xffff)  /* Pacing Timer Divisor. Specifies the Y value for the (X/Y) fractional timer. */

#define RP2040_DMA_TIMER2_X_SHIFT                          (16)  /* Pacing Timer Dividend. Specifies the X value for the (X/Y) fractional timer. */
#define RP2040_DMA_TIMER2_X_MASK                           (0xffff << RP2040_DMA_TIMER2_X_SHIFT)
#define RP2040_DMA_TIMER2_Y_MASK                           (0xffff)  /* Pacing Timer Divisor. Specifies the Y value for the (X/Y) fractional timer. */

#define RP2040_DMA_TIMER3_X_SHIFT                          (16)  /* Pacing Timer Dividend. Specifies the X value for the (X/Y) fractional timer. */
#define RP2040_DMA_TIMER3_X_MASK                           (0xffff << RP2040_DMA_TIMER3_X_SHIFT)
#define RP2040_DMA_TIMER3_Y_MASK                           (0xffff)  /* Pacing Timer Divisor. Specifies the Y value for the (X/Y) fractional timer. */

#define RP2040_DMA_MULTI_CHAN_TRIGGER_MASK                 (0xffff)  /* Each bit in this register corresponds to a DMA channel. Writing a 1 to the relevant bit is the same as writing to that channel's trigger register; the channel will start if it is currently enabled and not already busy. */

#define RP2040_DMA_SNIFF_CTRL_OUT_INV                      (1 << 11)  /* If set, the result appears inverted (bitwise complement) when read. This does not affect the way the checksum is calculated; the result is transformed on-the-fly between the result register and the bus. */
#define RP2040_DMA_SNIFF_CTRL_OUT_REV                      (1 << 10)  /* If set, the result appears bit-reversed when read. This does not affect the way the checksum is calculated; the result is transformed on-the-fly between the result register and the bus. */
#define RP2040_DMA_SNIFF_CTRL_BSWAP                        (1 << 9)  /* Locally perform a byte reverse on the sniffed data, before feeding into checksum.  Note that the sniff hardware is downstream of the DMA channel byteswap performed in the read master: if channel CTRL_BSWAP and SNIFF_CTRL_BSWAP are both enabled, their effects cancel from the sniffer's point of view. */
#define RP2040_DMA_SNIFF_CTRL_CALC_SHIFT                   (5)
#define RP2040_DMA_SNIFF_CTRL_CALC_MASK                    (0x0f << RP2040_DMA_SNIFF_CTRL_CALC_SHIFT)
#define RP2040_DMA_SNIFF_CTRL_CALC_CRC32                   (0x0 << RP2040_DMA_SNIFF_CTRL_CALC_SHIFT)  /* Calculate a CRC-32 (IEEE802.3 polynomial) */
#define RP2040_DMA_SNIFF_CTRL_CALC_CRC32R                  (0x1 << RP2040_DMA_SNIFF_CTRL_CALC_SHIFT)  /* Calculate a CRC-32 (IEEE802.3 polynomial) with bit reversed data */
#define RP2040_DMA_SNIFF_CTRL_CALC_CRC16                   (0x2 << RP2040_DMA_SNIFF_CTRL_CALC_SHIFT)  /* Calculate a CRC-16-CCITT */
#define RP2040_DMA_SNIFF_CTRL_CALC_CRC16R                  (0x3 << RP2040_DMA_SNIFF_CTRL_CALC_SHIFT)  /* Calculate a CRC-16-CCITT with bit reversed data */
#define RP2040_DMA_SNIFF_CTRL_CALC_EVEN                    (0xe << RP2040_DMA_SNIFF_CTRL_CALC_SHIFT)  /* XOR reduction over all data. == 1 if the total 1 population count is odd. */
#define RP2040_DMA_SNIFF_CTRL_CALC_SUM                     (0xf << RP2040_DMA_SNIFF_CTRL_CALC_SHIFT)  /* Calculate a simple 32-bit checksum (addition with a 32 bit accumulator) */
#define RP2040_DMA_SNIFF_CTRL_DMACH_SHIFT                  (1)  /* DMA channel for Sniffer to observe */
#define RP2040_DMA_SNIFF_CTRL_DMACH_MASK                   (0x0f << RP2040_DMA_SNIFF_CTRL_DMACH_SHIFT)
#define RP2040_DMA_SNIFF_CTRL_EN                           (1 << 0)  /* Enable sniffer */

#define RP2040_DMA_FIFO_LEVELS_RAF_LVL_SHIFT               (16)  /* Current Read-Address-FIFO fill level */
#define RP2040_DMA_FIFO_LEVELS_RAF_LVL_MASK                (0xff << RP2040_DMA_FIFO_LEVELS_RAF_LVL_SHIFT)
#define RP2040_DMA_FIFO_LEVELS_WAF_LVL_SHIFT               (8)  /* Current Write-Address-FIFO fill level */
#define RP2040_DMA_FIFO_LEVELS_WAF_LVL_MASK                (0xff << RP2040_DMA_FIFO_LEVELS_WAF_LVL_SHIFT)
#define RP2040_DMA_FIFO_LEVELS_TDF_LVL_MASK                (0xff)  /* Current Transfer-Data-FIFO fill level */

#define RP2040_DMA_CHAN_ABORT_MASK                         (0xffff)  /* Each bit corresponds to a channel. Writing a 1 aborts whatever transfer sequence is in progress on that channel. The bit will remain high until any in-flight transfers have been flushed through the address and data FIFOs.  After writing, this register must be polled until it returns all-zero. Until this point, it is unsafe to restart the channel. */

#define RP2040_DMA_N_CHANNELS_MASK                         (0x1f)

#define RP2040_DMA_CH0_DBG_CTDREQ_MASK                     (0x3f)

#define RP2040_DMA_CH1_DBG_CTDREQ_MASK                     (0x3f)

#define RP2040_DMA_CH2_DBG_CTDREQ_MASK                     (0x3f)

#define RP2040_DMA_CH3_DBG_CTDREQ_MASK                     (0x3f)

#define RP2040_DMA_CH4_DBG_CTDREQ_MASK                     (0x3f)

#define RP2040_DMA_CH5_DBG_CTDREQ_MASK                     (0x3f)

#define RP2040_DMA_CH6_DBG_CTDREQ_MASK                     (0x3f)

#define RP2040_DMA_CH7_DBG_CTDREQ_MASK                     (0x3f)

#define RP2040_DMA_CH8_DBG_CTDREQ_MASK                     (0x3f)

#define RP2040_DMA_CH9_DBG_CTDREQ_MASK                     (0x3f)

#define RP2040_DMA_CH10_DBG_CTDREQ_MASK                    (0x3f)

#define RP2040_DMA_CH11_DBG_CTDREQ_MASK                    (0x3f)
