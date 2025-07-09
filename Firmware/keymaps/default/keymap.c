// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Layer 0: Default Numpad Layer */
    [0] = {
        { KC_ESC,  KC_LPRN, KC_RPRN, KC_PSLS },   // Row 0
        { KC_PAST, KC_PMNS, KC_A,    KC_B    },   // Row 1
        { KC_P7,   KC_P8,   KC_P9,   KC_PPLS },   // Row 2
        { KC_P4,   KC_P5,   KC_P6,   KC_C    },   // Row 3
        { KC_P0,   KC_PDOT, KC_PENT, KC_D    }    // Row 4
    },

    /* Layer 1: Navigation / System Layer */
    [1] = {
        { QK_BOOT, _______, _______, KC_PSLS },   // Row 0
        { KC_PAST, KC_PMNS, KC_HOME, KC_UP   },   // Row 1
        { KC_LEFT, XXXXXXX, KC_RGHT, KC_PGUP },   // Row 2
        { KC_END,  KC_DOWN, KC_PGDN, _______ },   // Row 3
        { KC_INS,  KC_DEL,  _______, _______ }    // Row 4
    }
};
