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
#define VENDOR_ID 0x7546   
#define PRODUCT_ID 0x4877  
#define DEVICE_VER 0x0002
#define MANUFACTURER ZiddyMakes
#define PRODUCT ZMK_10_EN2

/* key matrix size */
#define MATRIX_ROWS 3
#define MATRIX_COLS 4


#define ENCODERS_PAD_A { F4, F7 }
#define ENCODERS_PAD_B { F5, B1 }

#define DIRECT_PINS { \
    { F6, D1, D0, B3 }, \
    { D4, C6, D7, E6 }, \
    { B4, B5, B6, B2 } \
}
#define UNUSED_PINS