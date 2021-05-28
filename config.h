/*
Copyright 2021 bk6u

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
#define VENDOR_ID    0xFEED
#define PRODUCT_ID   0x0000
#define DEVICE_VER   0x0001
#define MANUFACTURER bk6u
#define PRODUCT      qmk_tester

/* key matrix size */
#define MATRIX_ROWS 8
#define MATRIX_COLS 3
#define MATRIX_ROW_PINS { B1, B3, B2, B6 }
#define MATRIX_COL_PINS { B5, B4, E6 }
#define UNUSED_PINS

/* COL2ROW, ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* ENCODER */
#define DEBOUNCE 5
#define ENCODERS_PAD_A { F6 }
#define ENCODERS_PAD_B { F7 }
#define ENCODER_RESOLUTION 4

/* LIGHTING */
#define RGB_DI_PIN F5
#define RGBLIGHT_EFFECT_RAINBOW_MOOD
#define RGBLED_NUM 6
#define RGBLIGHT_DEFAULT_VAL 30

/* STATUS */
#define LED_CAPS_LOCK_PIN F4

/* DIP */
#define DIP_SWITCH_PINS { D7, D4 }

/* AUDIO */
#define C6_AUDIO
#define AUDIO_CLICKY

/* disable these deprecated features by default */
#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION

/* Disable some other features to save space */
#define NO_ACTION_LAYER
#define NO_ACTION_TAPPING
#define NO_ACTION_ONESHOT

/* Split keyboard */
#define MASTER_LEFT
#define SOFT_SERIAL_PIN D3
