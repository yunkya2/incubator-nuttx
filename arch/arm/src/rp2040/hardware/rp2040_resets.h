/* Register offsets *********************************************************/

#define RP2040_RESETS_RESET_OFFSET       0x000000  /* Reset control. If a bit is set it means the peripheral is in reset. 0 means the peripheral's reset is deasserted. */
#define RP2040_RESETS_WDSEL_OFFSET       0x000004  /* Watchdog select. If a bit is set then the watchdog will reset this peripheral when the watchdog fires. */
#define RP2040_RESETS_RESET_DONE_OFFSET  0x000008  /* Reset done. If a bit is set then a reset done signal has been returned by the peripheral. This indicates that the peripheral's registers are ready to be accessed. */

/* Register definitions *****************************************************/

#define RP2040_RESETS_RESET       (RP2040_RESETS_BASE + RP2040_RESETS_RESET_OFFSET)
#define RP2040_RESETS_WDSEL       (RP2040_RESETS_BASE + RP2040_RESETS_WDSEL_OFFSET)
#define RP2040_RESETS_RESET_DONE  (RP2040_RESETS_BASE + RP2040_RESETS_RESET_DONE_OFFSET)


/* Register bit definitions *************************************************/


#define RP2040_RESETS_RESET_usbctrl          (1 << 24)
#define RP2040_RESETS_RESET_uart1            (1 << 23)
#define RP2040_RESETS_RESET_uart0            (1 << 22)
#define RP2040_RESETS_RESET_timer            (1 << 21)
#define RP2040_RESETS_RESET_tbman            (1 << 20)
#define RP2040_RESETS_RESET_sysinfo          (1 << 19)
#define RP2040_RESETS_RESET_syscfg           (1 << 18)
#define RP2040_RESETS_RESET_spi1             (1 << 17)
#define RP2040_RESETS_RESET_spi0             (1 << 16)
#define RP2040_RESETS_RESET_rtc              (1 << 15)
#define RP2040_RESETS_RESET_pwm              (1 << 14)
#define RP2040_RESETS_RESET_pll_usb          (1 << 13)
#define RP2040_RESETS_RESET_pll_sys          (1 << 12)
#define RP2040_RESETS_RESET_pio1             (1 << 11)
#define RP2040_RESETS_RESET_pio0             (1 << 10)
#define RP2040_RESETS_RESET_pads_qspi        (1 << 9)
#define RP2040_RESETS_RESET_pads_bank0       (1 << 8)
#define RP2040_RESETS_RESET_jtag             (1 << 7)
#define RP2040_RESETS_RESET_io_qspi          (1 << 6)
#define RP2040_RESETS_RESET_io_bank0         (1 << 5)
#define RP2040_RESETS_RESET_i2c1             (1 << 4)
#define RP2040_RESETS_RESET_i2c0             (1 << 3)
#define RP2040_RESETS_RESET_dma              (1 << 2)
#define RP2040_RESETS_RESET_busctrl          (1 << 1)
#define RP2040_RESETS_RESET_adc              (1 << 0)

#define RP2040_RESETS_WDSEL_usbctrl          (1 << 24)
#define RP2040_RESETS_WDSEL_uart1            (1 << 23)
#define RP2040_RESETS_WDSEL_uart0            (1 << 22)
#define RP2040_RESETS_WDSEL_timer            (1 << 21)
#define RP2040_RESETS_WDSEL_tbman            (1 << 20)
#define RP2040_RESETS_WDSEL_sysinfo          (1 << 19)
#define RP2040_RESETS_WDSEL_syscfg           (1 << 18)
#define RP2040_RESETS_WDSEL_spi1             (1 << 17)
#define RP2040_RESETS_WDSEL_spi0             (1 << 16)
#define RP2040_RESETS_WDSEL_rtc              (1 << 15)
#define RP2040_RESETS_WDSEL_pwm              (1 << 14)
#define RP2040_RESETS_WDSEL_pll_usb          (1 << 13)
#define RP2040_RESETS_WDSEL_pll_sys          (1 << 12)
#define RP2040_RESETS_WDSEL_pio1             (1 << 11)
#define RP2040_RESETS_WDSEL_pio0             (1 << 10)
#define RP2040_RESETS_WDSEL_pads_qspi        (1 << 9)
#define RP2040_RESETS_WDSEL_pads_bank0       (1 << 8)
#define RP2040_RESETS_WDSEL_jtag             (1 << 7)
#define RP2040_RESETS_WDSEL_io_qspi          (1 << 6)
#define RP2040_RESETS_WDSEL_io_bank0         (1 << 5)
#define RP2040_RESETS_WDSEL_i2c1             (1 << 4)
#define RP2040_RESETS_WDSEL_i2c0             (1 << 3)
#define RP2040_RESETS_WDSEL_dma              (1 << 2)
#define RP2040_RESETS_WDSEL_busctrl          (1 << 1)
#define RP2040_RESETS_WDSEL_adc              (1 << 0)

#define RP2040_RESETS_RESET_DONE_usbctrl     (1 << 24)
#define RP2040_RESETS_RESET_DONE_uart1       (1 << 23)
#define RP2040_RESETS_RESET_DONE_uart0       (1 << 22)
#define RP2040_RESETS_RESET_DONE_timer       (1 << 21)
#define RP2040_RESETS_RESET_DONE_tbman       (1 << 20)
#define RP2040_RESETS_RESET_DONE_sysinfo     (1 << 19)
#define RP2040_RESETS_RESET_DONE_syscfg      (1 << 18)
#define RP2040_RESETS_RESET_DONE_spi1        (1 << 17)
#define RP2040_RESETS_RESET_DONE_spi0        (1 << 16)
#define RP2040_RESETS_RESET_DONE_rtc         (1 << 15)
#define RP2040_RESETS_RESET_DONE_pwm         (1 << 14)
#define RP2040_RESETS_RESET_DONE_pll_usb     (1 << 13)
#define RP2040_RESETS_RESET_DONE_pll_sys     (1 << 12)
#define RP2040_RESETS_RESET_DONE_pio1        (1 << 11)
#define RP2040_RESETS_RESET_DONE_pio0        (1 << 10)
#define RP2040_RESETS_RESET_DONE_pads_qspi   (1 << 9)
#define RP2040_RESETS_RESET_DONE_pads_bank0  (1 << 8)
#define RP2040_RESETS_RESET_DONE_jtag        (1 << 7)
#define RP2040_RESETS_RESET_DONE_io_qspi     (1 << 6)
#define RP2040_RESETS_RESET_DONE_io_bank0    (1 << 5)
#define RP2040_RESETS_RESET_DONE_i2c1        (1 << 4)
#define RP2040_RESETS_RESET_DONE_i2c0        (1 << 3)
#define RP2040_RESETS_RESET_DONE_dma         (1 << 2)
#define RP2040_RESETS_RESET_DONE_busctrl     (1 << 1)
#define RP2040_RESETS_RESET_DONE_adc         (1 << 0)
