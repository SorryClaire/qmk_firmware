 /*
 Copyright 2020 Lasse Küchenmeister

 This program is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 2 of the License, or
 (at your option) any later version.

 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x4652 // "FR"
#define PRODUCT_ID      0x5558 // "UX"
#define DEVICE_VER      0x0001
#define MANUFACTURER    FR4Boards
#define PRODUCT         unix60

/* key matrix size */
#define MATRIX_ROWS 7
#define MATRIX_COLS 9

/* key matrix pins */
#define MATRIX_ROW_PINS { D3, D2, D1, D0, D4, C6, D7 }
#define MATRIX_COL_PINS { E6, B4, B5, F4, F5, F6, F7, B1, B3 }
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 3
#define USB_MAX_POWER_CONSUMPTION 510
#define USB_POLLING_INTERVAL_MS 1
#define FORCE_NKRO