/****************************************************************************
 * boards/arm/rp2040/common/src/rp2040_spisd.c
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

#include <debug.h>
#include <nuttx/mmcsd.h>
#include <nuttx/board.h>
#include <nuttx/fs/fs.h>

#include "rp2040_spi.h"
#include "rp2040_gpio.h"

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

/* Configuration ************************************************************/

#ifndef CONFIG_RP2040_SPISD_SLOT_NO
#  define CONFIG_RP2040_SPISD_SLOT_NO 0
#endif

/* Please configure the pin assignment for your board */

#ifndef MMCSD_DETECT
#  define MMCSD_DETECT PIN_I2S0_DATA_OUT
#endif

/****************************************************************************
 * Public Functions
 ****************************************************************************/

/****************************************************************************
 * Name: board_spisd_initialize
 *
 * Description:
 *   Initialize the SPI-based SD card.
 *
 ****************************************************************************/

#include "hardware/rp2040_pads_bank0.h"
#include "hardware/rp2040_io_bank0.h"
#include "hardware/rp2040_sio.h"

int board_spisd_initialize(int minor, int bus)
{
  int ret;
  FAR struct spi_dev_s *spi;

#if 0
  /* Enable input of detect pin */

  cxd56_gpio_config(MMCSD_DETECT, true);
#endif

  /* Initialize spi deivce */

  spi = rp2040_spibus_initialize(bus);
  if (!spi)
    {
      ferr("ERROR: Failed to initialize spi%d.\n", bus);
      return -ENODEV;
    }

#if 1
  rp2040_gpio_set_function(20,
                           RP2040_IO_BANK0_GPIO_CTRL_FUNCSEL_SIO);
  putreg32(1 << 20, RP2040_SIO_GPIO_OE_SET);
  putreg32(1 << 20, RP2040_SIO_GPIO_OUT_SET);
#endif

  /* Get the SPI driver instance for the SD chip select */

  finfo("Initializing SPI for the MMC/SD slot\n");

  ret = mmcsd_spislotinitialize(minor, CONFIG_RP2040_SPISD_SLOT_NO, spi);
  if (ret < 0)
    {
      ferr("ERROR: Failed to bind SPI device to MMC/SD slot %d: %d\n",
           CONFIG_RP2040_SPISD_SLOT_NO, ret);
      return ret;
    }

  /* Mount filesystem */

  ret = nx_mount("/dev/mmcsd0", "/mnt/sd0", "vfat", 0, NULL);
  if (ret < 0)
    {
      _err("ERROR: Failed to mount the SDCARD. %d\n", ret);
    }

  return OK;
}

/****************************************************************************
 * Name: board_spisd_status
 *
 * Description:
 *   Get the status whether SD Card is present or not.
 *   This function is called only from cxd56_spi.c.
 *
 * Returned Value:
 *   Return SPI_STATUS_PRESENT if SD Card is present. Otherwise, return 0.
 *
 ****************************************************************************/

uint8_t board_spisd_status(FAR struct spi_dev_s *dev, uint32_t devid)
{
  uint8_t ret = 0;

  if (devid == SPIDEV_MMCSD(0))
    {
      /* MMCSD_DETECT is mapping to SD Card detect pin
       * MMCSD_DETECT = 0: Inserted
       * MMCSD_DETECT = 1: Removed
       */

//      ret = cxd56_gpio_read(MMCSD_DETECT) ? 0 : SPI_STATUS_PRESENT;
      ret = SPI_STATUS_PRESENT;
    }

  return ret;
}
