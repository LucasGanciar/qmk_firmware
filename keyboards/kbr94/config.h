#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x6060
#define DEVICE_VER      0x0001
#define MANUFACTURER    KBR
#define PRODUCT         KBR94

/* key matrix size */
#define MATRIX_ROWS 7
#define MATRIX_COLS 15

/* key matrix pins */
#define MATRIX_ROW_PINS { B0, B1, B2, B3, D4, F0, E6}
#define MATRIX_COL_PINS { D0, D1, D2, D3, D5, F1, F4, F5, F6, F7, C7, C6, B6, B5, B4 }
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

#define LED_CAPS_LOCK_PIN B7

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
