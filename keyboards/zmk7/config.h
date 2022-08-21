/* Copyright 2020 Ungodly Design <hello@ungodly.design>
 *
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
#define PRODUCT_ID 0x4879  // 
#define DEVICE_VER 0x0002
#define MANUFACTURER ZiddyMakes
#define PRODUCT ZMK_7_KEY

#define RGB_DI_PIN F7
#define RGBLED_NUM 4
#define RGBLIGHT_ANIMATIONS	

/* key matrix size */
#define MATRIX_ROWS 3
#define MATRIX_COLS 3

#define DIRECT_PINS { \
    { D1, D0 }, \
    { D4, C6 }, \
    { D7, E6, B4 }, \
}
#define UNUSED_PINS
