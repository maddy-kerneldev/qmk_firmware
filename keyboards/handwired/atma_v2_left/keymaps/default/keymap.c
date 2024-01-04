// Copyright 2023 QMa
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_WH_U, KC_NO,
	KC_GRV, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_WH_D, KC_NO,
	KC_TAB, KC_A, KC_S, KC_D, KC_F, KC_G, KC_END, KC_VOLU,
	KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_VOLD, KC_VOLD,
	KC_LCTL, KC_LALT, KC_LWIN, KC_UP, KC_DOWN, KC_SPACE, KC_ENTER, KC_MUTE
	)	
};
