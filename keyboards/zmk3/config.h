/* 
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID 0x7546   //
#define PRODUCT_ID 0x4878  // 
#define DEVICE_VER 0x0002
#define MANUFACTURER ZiddyMakes
#define PRODUCT ZMK_3_KEY

#define RGB_DI_PIN B1
#define RGBLED_NUM 1
#define RGBLIGHT_ANIMATIONS	

/* key matrix size */
#define MATRIX_ROWS 1
#define MATRIX_COLS 3

#define DIRECT_PINS { \
    { D1, D0, D7 }, \
}
#define UNUSED_PINS
