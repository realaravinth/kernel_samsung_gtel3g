/*
<<<<<<< HEAD
 * Copyright (C) 2012 Spreadtrum Communications Inc.
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */
=======
* * Copyright (C) 2012 Spreadtrum Communications Inc.
* *
* * This software is licensed under the terms of the GNU General Public
* * License version 2, as published by the Free Software Foundation, and
* * may be copied, distributed, and modified under those terms.
* *
* * This program is distributed in the hope that it will be useful,
* * but WITHOUT ANY WARRANTY; without even the implied warranty of
* * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* * GNU General Public License for more details.
* */
>>>>>>> ef4e2d99b0e... drivers: Merge upstream camera source for scx30g
#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>
#include <mach/hardware.h>
#include <mach/board.h>
#include <mach/adi.h>
#include <linux/leds.h>
#include <linux/mfd/sm5701_core.h>

int sprd_flash_on(void)
{
<<<<<<< HEAD
	sm5701_led_ready(MOVIE_MODE);
	sm5701_set_fleden(SM5701_FLEDEN_ON_MOVIE);
		return 0;
=======

	sm5701_led_ready(MOVIE_MODE);
	sm5701_set_fleden(SM5701_FLEDEN_ON_MOVIE);

	return 0;
>>>>>>> ef4e2d99b0e... drivers: Merge upstream camera source for scx30g
}

int sprd_flash_high_light(void)
{
<<<<<<< HEAD
	sm5701_led_ready(FLASH_MODE);
	sm5701_set_fleden(SM5701_FLEDEN_ON_FLASH);
		return 0;
=======

	sm5701_led_ready(FLASH_MODE);
	sm5701_set_fleden(SM5701_FLEDEN_ON_FLASH);

	return 0;
>>>>>>> ef4e2d99b0e... drivers: Merge upstream camera source for scx30g
}

int sprd_flash_close(void)
{
<<<<<<< HEAD
=======

>>>>>>> ef4e2d99b0e... drivers: Merge upstream camera source for scx30g
	sm5701_set_fleden(SM5701_FLEDEN_DISABLED);
	sm5701_led_ready(LED_DISABLE);

	return 0;
}
<<<<<<< HEAD
=======

>>>>>>> ef4e2d99b0e... drivers: Merge upstream camera source for scx30g
