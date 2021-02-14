/****************************************************************************
 * arch/arm/src/rp2040/rp2040_clock.c
 *
 * Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.  The
 * ASF licenses this file to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance with the
 * License.  You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.  See the
 * License for the specific language governing permissions and limitations
 * under the License.
 *
 ****************************************************************************/

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include <nuttx/config.h>

#include <stdint.h>
#include <assert.h>
#include <debug.h>

#include <nuttx/arch.h>

#include <arch/board/board.h>

#include "arm_arch.h"

#include "chip.h"

#include "rp2040_clock.h"

/****************************************************************************
 * Private Functions
 ****************************************************************************/

/****************************************************************************
 * Public Functions
 ****************************************************************************/

/************************************************************************************
 * Name: rp2040_clockconfig
 *
 * Description:
 *   Called to establish the clock settings based on the values in board.h.
 *
 * Input Parameters:
 *   None
 *
 * Returned Value:
 *   None
 *
 ************************************************************************************/



#include "hardware/rp2040_clocks.h"
#include "hardware/rp2040_xosc.h"
#include "hardware/rp2040_pll_sys.h"
#include "hardware/rp2040_pll_usb.h"
#include "hardware/rp2040_resets.h"
#include "hardware/rp2040_watchdog.h"
#define REG_ALIAS_XOR_BITS (0x1u << 12u)
#define REG_ALIAS_SET_BITS (0x2u << 12u)
#define REG_ALIAS_CLR_BITS (0x3u << 12u)
#define RESETS_RESET_BITS   0x01ffffff

#define XOSC_MHZ    12
#define MHZ (1000000)

void hw_write_masked(uint32_t addr, uint32_t values, uint32_t write_mask) {
    uint32_t a = (*(volatile uint32_t *)addr ^ values) & write_mask;
    putreg32(a, addr | REG_ALIAS_XOR_BITS);
}
void hw_set_bits(uint32_t addr, uint32_t values) {
    putreg32(values, addr | REG_ALIAS_SET_BITS);
}
void hw_clear_bits(uint32_t addr, uint32_t values) {
    putreg32(values, addr | REG_ALIAS_CLR_BITS);
}

void xosc_init(void) {
    // Assumes 1-15 MHz input
    assert(XOSC_MHZ <= 15);
    putreg32(RP2040_XOSC_CTRL_FREQ_RANGE_1_15MHZ, RP2040_XOSC_CTRL);

    // Set xosc startup delay
    uint32_t startup_delay = (((12 * MHZ) / 1000) + 128) / 256;
    putreg32(startup_delay, RP2040_XOSC_STARTUP);

    // Set the enable bit now that we have set freq range and startup delay
    hw_set_bits(RP2040_XOSC_CTRL, RP2040_XOSC_CTRL_ENABLE_ENABLE);

    // Wait for XOSC to be stable
    while (!(getreg32(RP2040_XOSC_STATUS) & RP2040_XOSC_STATUS_STABLE))
        ;
}

void pll_init(uint32_t pll, uint32_t refdiv, uint32_t vco_freq, uint32_t post_div1, uint8_t post_div2) {
    // Turn off PLL in case it is already running
    putreg32(0xffffffff, pll + RP2040_PLL_SYS_PWR_OFFSET);
    putreg32(0, pll + RP2040_PLL_SYS_FBDIV_INT_OFFSET);

    uint32_t ref_mhz = XOSC_MHZ / refdiv;
    putreg32(refdiv, pll + RP2040_PLL_SYS_CS_OFFSET);

    // What are we multiplying the reference clock by to get the vco freq
    // (The regs are called div, because you divide the vco output and compare it to the refclk)
    volatile uint32_t fbdiv = vco_freq / (ref_mhz * MHZ);
/// \end::pll_init_calculations[]

    // fbdiv
    assert(fbdiv >= 16 && fbdiv <= 320);

    // Check divider ranges
    assert((post_div1 >= 1 && post_div1 <= 7) && (post_div2 >= 1 && post_div2 <= 7));

    // post_div1 should be >= post_div2
    // from appnote page 11
    // postdiv1 is designed to operate with a higher input frequency
    // than postdiv2
    assert(post_div2 <= post_div1);

/// \tag::pll_init_finish[]
    // Check that reference frequency is no greater than vco / 16
    assert(ref_mhz <= (vco_freq / 16));

    // Put calculated value into feedback divider
    putreg32(fbdiv, pll + RP2040_PLL_SYS_FBDIV_INT_OFFSET);

    // Turn on PLL
    uint32_t power = RP2040_PLL_SYS_PWR_PD | // Main power
                     RP2040_PLL_SYS_PWR_VCOPD; // VCO Power

    hw_clear_bits(pll + RP2040_PLL_SYS_PWR_OFFSET, power);

    // Wait for PLL to lock
    while (!(getreg32(pll + RP2040_PLL_SYS_CS_OFFSET) & RP2040_PLL_SYS_CS_LOCK))
        ;

    // Set up post dividers - div1 feeds into div2 so if div1 is 5 and div2 is 2 then you get a divide by 10
    uint32_t pdiv = (post_div1 << RP2040_PLL_SYS_PRIM_POSTDIV1_SHIFT) |
                    (post_div2 << RP2040_PLL_SYS_PRIM_POSTDIV2_SHIFT);
    putreg32(pdiv, pll + RP2040_PLL_SYS_PRIM_OFFSET);

    // Turn on post divider
    hw_clear_bits(pll + RP2040_PLL_SYS_PWR_OFFSET, RP2040_PLL_SYS_PWR_POSTDIVPD);
/// \end::pll_init_finish[]
}

static inline bool has_glitchless_mux(uint32_t clk_index) {
    return clk_index == RP2040_CLOCKS_CLK_SYS_CTRL ||
           clk_index == RP2040_CLOCKS_CLK_REF_CTRL;
}


/// \tag::clock_configure[]
bool clock_configure(uint32_t clk_index, uint32_t src, uint32_t auxsrc, uint32_t src_freq, uint32_t freq) {
    uint32_t div;

    assert(src_freq >= freq);

    if (freq > src_freq)
        return false;

    // Div register is 24.8 int.frac divider so multiply by 2^8 (left shift by 8)
    div = (uint32_t) (((uint64_t) src_freq << 8) / freq);

    // If increasing divisor, set divisor before source. Otherwise set source
    // before divisor. This avoids a momentary overspeed when e.g. switching
    // to a faster source and increasing divisor to compensate.
    if (div > getreg32(clk_index + RP2040_CLOCKS_CLK_REF_DIV_OFFSET - RP2040_CLOCKS_CLK_REF_CTRL_OFFSET))
        putreg32(div, clk_index + RP2040_CLOCKS_CLK_REF_DIV_OFFSET - RP2040_CLOCKS_CLK_REF_CTRL_OFFSET);

    // If switching a glitchless slice (ref or sys) to an aux source, switch
    // away from aux *first* to avoid passing glitches when changing aux mux.
    // Assume (!!!) glitchless source 0 is no faster than the aux source.
    if (has_glitchless_mux(clk_index) &&
       src == RP2040_CLOCKS_CLK_SYS_CTRL_SRC) {
        hw_clear_bits(clk_index, RP2040_CLOCKS_CLK_REF_CTRL_SRC_MASK);
        while (!(getreg32(clk_index + RP2040_CLOCKS_CLK_REF_SELECTED_OFFSET - RP2040_CLOCKS_CLK_REF_CTRL_OFFSET) & 1u))
            ;        
    }
    // If no glitchless mux, cleanly stop the clock to avoid glitches
    // propagating when changing aux mux. Note it would be a really bad idea
    // to do this on one of the glitchless clocks (clk_sys, clk_ref).
    else {
        hw_clear_bits(clk_index, RP2040_CLOCKS_CLK_GPOUT0_CTRL_ENABLE);
#if 0
        if (configured_freq[clk_index] > 0) {
            // Delay for 3 cycles of the target clock, for ENABLE propagation.
            // Note XOSC_COUNT is not helpful here because XOSC is not
            // necessarily running, nor is timer... so, 3 cycles per loop:
            uint delay_cyc = configured_freq[clk_sys] / configured_freq[clk_index] + 1;
            asm volatile (
                "1: \n\t"
                "sub %0, #1 \n\t"
                "bne 1b"
                : "+r" (delay_cyc)
            );
        }
#endif
    }

    // Set aux mux first, and then glitchless mux if this clock has one
    hw_write_masked(clk_index,
        (auxsrc << RP2040_CLOCKS_CLK_SYS_CTRL_AUXSRC_SHIFT),
        RP2040_CLOCKS_CLK_SYS_CTRL_AUXSRC_MASK
    );

    if (has_glitchless_mux(clk_index)) {
        hw_write_masked(clk_index,
            src << 0,
            RP2040_CLOCKS_CLK_REF_CTRL_SRC_MASK);
        while (!(getreg32(clk_index + RP2040_CLOCKS_CLK_REF_SELECTED_OFFSET - RP2040_CLOCKS_CLK_REF_CTRL_OFFSET) & (1u << src)))
            ;        
    }

    hw_set_bits(clk_index, RP2040_CLOCKS_CLK_GPOUT0_CTRL_ENABLE);

    // Now that the source is configured, we can trust that the user-supplied
    // divisor is a safe value.
    putreg32(div, clk_index + RP2040_CLOCKS_CLK_REF_DIV_OFFSET - RP2040_CLOCKS_CLK_REF_CTRL_OFFSET);

    // Store the configured frequency
//    configured_freq[clk_index] = freq;

    return true;
}
/// \end::clock_configure[]




void clocks_init(void) {
    // Start tick in watchdog
    putreg32(XOSC_MHZ | RP2040_WATCHDOG_TICK_ENABLE, RP2040_WATCHDOG_TICK);

    // Disable resus that may be enabled from previous software
    putreg32(0, RP2040_CLOCKS_CLK_SYS_RESUS_CTRL);

    // Enable the xosc
    xosc_init();

    // Before we touch PLLs, switch sys and ref cleanly away from their aux sources.
    hw_clear_bits(RP2040_CLOCKS_CLK_SYS_CTRL, RP2040_CLOCKS_CLK_SYS_CTRL_SRC);
    while (getreg32(RP2040_CLOCKS_CLK_SYS_SELECTED) != 1)
        ;
    hw_clear_bits(RP2040_CLOCKS_CLK_REF_CTRL, RP2040_CLOCKS_CLK_REF_CTRL_SRC_MASK);
    while (getreg32(RP2040_CLOCKS_CLK_REF_SELECTED) != 1)
        ;

    /// \tag::pll_settings[]
    // Configure PLLs
    //                   REF     FBDIV VCO            POSTDIV
    // PLL SYS: 12 / 1 = 12MHz * 125 = 1500MHZ / 6 / 2 = 125MHz
    // PLL USB: 12 / 1 = 12MHz * 40  = 480 MHz / 5 / 2 =  48MHz
    /// \end::pll_settings[]

    hw_set_bits(RP2040_RESETS_RESET,
        RP2040_RESETS_RESET_pll_sys | RP2040_RESETS_RESET_pll_usb);
    hw_clear_bits(RP2040_RESETS_RESET,
        RP2040_RESETS_RESET_pll_sys | RP2040_RESETS_RESET_pll_usb);
    while (~getreg32(RP2040_RESETS_RESET_DONE) &
        (RP2040_RESETS_RESET_pll_sys | RP2040_RESETS_RESET_pll_usb))
        ;

    /// \tag::pll_init[]
    pll_init(RP2040_PLL_SYS_BASE, 1, 1500 * MHZ, 6, 2);
    pll_init(RP2040_PLL_USB_BASE, 1, 480 * MHZ, 5, 2);
    /// \end::pll_init[]

    // Configure clocks
    // CLK_REF = XOSC (12MHz) / 1 = 12MHz
    clock_configure(RP2040_CLOCKS_CLK_REF_CTRL,
                    RP2040_CLOCKS_CLK_REF_CTRL_SRC_XOSC_CLKSRC,
                    0, // No aux mux
                    12 * MHZ,
                    12 * MHZ);

    /// \tag::configure_clk_sys[]
    // CLK SYS = PLL SYS (125MHz) / 1 = 125MHz
    clock_configure(RP2040_CLOCKS_CLK_SYS_CTRL,
                    RP2040_CLOCKS_CLK_SYS_CTRL_SRC,
                    RP2040_CLOCKS_CLK_SYS_CTRL_AUXSRC_CLKSRC_PLL_SYS,
                    125 * MHZ,
                    125 * MHZ);
    /// \end::configure_clk_sys[]

    // CLK USB = PLL USB (48MHz) / 1 = 48MHz
    clock_configure(RP2040_CLOCKS_CLK_USB_CTRL,
                    0, // No GLMUX
                    RP2040_CLOCKS_CLK_USB_CTRL_AUXSRC_CLKSRC_PLL_USB,
                    48 * MHZ,
                    48 * MHZ);

    // CLK ADC = PLL USB (48MHZ) / 1 = 48MHz
    clock_configure(RP2040_CLOCKS_CLK_ADC_CTRL,
                    0, // No GLMUX
                    RP2040_CLOCKS_CLK_ADC_CTRL_AUXSRC_CLKSRC_PLL_USB,
                    48 * MHZ,
                    48 * MHZ);

    // CLK RTC = PLL USB (48MHz) / 1024 = 46875Hz
    clock_configure(RP2040_CLOCKS_CLK_RTC_CTRL,
                    0, // No GLMUX
                    RP2040_CLOCKS_CLK_RTC_CTRL_AUXSRC_CLKSRC_PLL_USB,
                    48 * MHZ,
                    46875);

    // CLK PERI = clk_sys. Used as reference clock for Peripherals. No dividers so just select and enable
    // Normally choose clk_sys or clk_usb
    clock_configure(RP2040_CLOCKS_CLK_PERI_CTRL,
                    0,
                    RP2040_CLOCKS_CLK_PERI_CTRL_AUXSRC_CLK_SYS,
                    125 * MHZ,
                    125 * MHZ);
}


void runtime_init(void) {
    // Reset all peripherals to put system into a known state,
    // - except for QSPI pads and the XIP IO bank, as this is fatal if running from flash
    // - and the PLLs, as this is fatal if clock muxing has not been reset on this boot

    hw_set_bits(RP2040_RESETS_RESET,
        RESETS_RESET_BITS &
        ~(RP2040_RESETS_RESET_io_qspi |
          RP2040_RESETS_RESET_pads_qspi |
          RP2040_RESETS_RESET_pll_usb |
          RP2040_RESETS_RESET_pll_sys));

    // Remove reset from peripherals which are clocked only by clk_sys and
    // clk_ref. Other peripherals stay in reset until we've configured clocks.

    hw_clear_bits(RP2040_RESETS_RESET,
        RESETS_RESET_BITS &
        ~(RP2040_RESETS_RESET_adc |
          RP2040_RESETS_RESET_rtc |
          RP2040_RESETS_RESET_spi0 |
          RP2040_RESETS_RESET_spi1 |
          RP2040_RESETS_RESET_uart0 |
          RP2040_RESETS_RESET_uart1 |
          RP2040_RESETS_RESET_usbctrl));
    while (~getreg32(RP2040_RESETS_RESET_DONE) &
        (RESETS_RESET_BITS &
        ~(RP2040_RESETS_RESET_adc |
          RP2040_RESETS_RESET_rtc |
          RP2040_RESETS_RESET_spi0 |
          RP2040_RESETS_RESET_spi1 |
          RP2040_RESETS_RESET_uart0 |
          RP2040_RESETS_RESET_uart1 |
          RP2040_RESETS_RESET_usbctrl)))
        ;

    // After calling preinit we have enough runtime to do the exciting maths
    // in clocks_init
    clocks_init();

    // Peripheral clocks should now all be running
    hw_clear_bits(RP2040_RESETS_RESET, RESETS_RESET_BITS);
    while (~getreg32(RP2040_RESETS_RESET_DONE) & RESETS_RESET_BITS)
        ;

#if 0
#if !PICO_IE_26_29_UNCHANGED_ON_RESET
    // after resetting BANK0 we should disable IE on 26-29
    hw_clear_alias(padsbank0_hw)->io[26] = hw_clear_alias(padsbank0_hw)->io[27] =
            hw_clear_alias(padsbank0_hw)->io[28] = hw_clear_alias(padsbank0_hw)->io[29] = PADS_BANK0_GPIO0_IE_BITS;
#endif
#endif
}

#include "hardware/rp2040_pads_bank0.h"
#include "hardware/rp2040_io_bank0.h"
#include "hardware/rp2040_sio.h"

void rp2040_clockconfig(void)
{
    runtime_init();

    hw_write_masked(RP2040_PADS_BANK0_GPIO0,
                    RP2040_PADS_BANK0_GPIO0_IE,
                    RP2040_PADS_BANK0_GPIO0_IE | RP2040_PADS_BANK0_GPIO0_OD);

    putreg32(RP2040_IO_BANK0_GPIO0_CTRL_FUNCSEL_UART0_TX,
             RP2040_IO_BANK0_GPIO0_CTRL);

    hw_write_masked(RP2040_PADS_BANK0_GPIO1,
                    RP2040_PADS_BANK0_GPIO1_IE,
                    RP2040_PADS_BANK0_GPIO1_IE | RP2040_PADS_BANK0_GPIO1_OD);

    putreg32(RP2040_IO_BANK0_GPIO1_CTRL_FUNCSEL_UART0_RX,
             RP2040_IO_BANK0_GPIO1_CTRL);

    hw_set_bits(RP2040_RESETS_RESET, RP2040_RESETS_RESET_uart0);
    hw_clear_bits(RP2040_RESETS_RESET, RP2040_RESETS_RESET_uart0);
    while (~getreg32(RP2040_RESETS_RESET_DONE) & RP2040_RESETS_RESET_uart0)
        ;

    putreg32(RP2040_IO_BANK0_GPIO25_CTRL_FUNCSEL_SIO_25,
             RP2040_IO_BANK0_GPIO25_CTRL);
    putreg32(1 << 25, RP2040_SIO_GPIO_OE_SET);
    putreg32(1 << 25, RP2040_SIO_GPIO_OUT_SET);
    putreg32(1 << 25, RP2040_SIO_GPIO_OUT_CLR);
    putreg32(1 << 25, RP2040_SIO_GPIO_OUT_SET);
    putreg32(1 << 25, RP2040_SIO_GPIO_OUT_CLR);
    putreg32(1 << 25, RP2040_SIO_GPIO_OUT_SET);

#if 0
    {
        int i;
        while (1) {
            putreg32(1 << 25, RP2040_SIO_GPIO_OUT_XOR);
            for (i = 0; i < 125000000 / 5; i++) {
                __asm__ volatile("nop");
            }
        }
    }
#endif
}
