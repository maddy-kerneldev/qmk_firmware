// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_BSLS, KC_0, KC_9, KC_8, KC_7, KC_6, KC_BSPC, KC_NO,
        KC_LBRC, KC_P, KC_O, KC_I, KC_U, KC_Y, KC_DEL, KC_NO,
        KC_RBRC, KC_SCLN, KC_L, KC_K, KC_J, KC_H, KC_INS, KC_PGUP,
        KC_QUOT, KC_SLSH, KC_DOT, KC_COMM, KC_M, KC_N, KC_PGDN, KC_PGDN,
        KC_RSFT, KC_PLUS, KC_MINS, KC_RIGHT, KC_LEFT, KC_ENTER, KC_SPACE, KC_HOME
    )
};
