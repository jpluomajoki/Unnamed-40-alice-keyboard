// Copyright 2022 Jere Luomajoki (@Jere Luomajoki)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#define MATRIX_ROWS 4
#define MATRIX_COLS 13
#define VIAL_KEYBOARD_UID {0xB2, 0x47, 0xA3, 0xE8, 0x72, 0x48, 0xB4, 0x0F}

#define MATRIX_COL_PINS { A5, A6, A7, B0, B1, B12, A0, B8, B7, B6, B5, B4, B3 }
#define MATRIX_ROW_PINS { A4, A3, A2, A1 }

#define DIODE_DIRECTION COL2ROW

#define DEBOUNCE 1

#define VIAL_TAP_DANCE_ENTRIES 5
#define VIAL_COMBO_ENTRIES 5
#define VIAL_KEY_OVERRIDE_ENTRIES 5
#define DYNAMIC_KEYMAP_LAYER_COUNT 4

#define VIAL_UNLOCK_COMBO_ROWS { 1, 0 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 12 }
        
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
