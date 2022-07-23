/*
 Copyright 2022 superswitch

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

/* USB Device descriptor parameters */
#define VENDOR_ID       0x5052  // "PR"
#define PRODUCT_ID      0x494F  // "IO"
#define DEVICE_VER      0x0001
#define MANUFACTURER    superswitch
#define PRODUCT         Ionic

/* Key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 8

/* Keyboard Matrix Assignments */
#define MATRIX_ROW_PINS { E6, D7, C6, D4, D2 }
#define MATRIX_COL_PINS { F7, B1, B3, B2, B6, D3, B5, B4 }
#define UNUSED_PINS { B7, D5, C7, F1, F0}


/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Indicator lights */
#define LED_CAPS_LOCK_PIN F6
#define LED_NUM_LOCK_PIN F5
#define LED_SCROLL_LOCK_PIN F4
#define LED_PIN_ON_STATE 0

/* Define if matrix has ghost */
//#define MATRIX_HAS_GHOST

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* Tapping this number of times holds the key until tapped once again. */
#define ONESHOT_TAP_TOGGLE 5

/* Time (in ms) before the one shot key is released */
#define ONESHOT_TIMEOUT 5000

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
