// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum layers {
    _BASE,
    _FN
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    /* Base layer
     * ┌───┬───┬───┐
     * │ 1 │ 2 │ 3 │
     * ├───┼───┼───┤
     * │ 4 │ 5 │ 6 │
     * ├───┼───┼───┤
     * │ 7 │ 8 │ 9 │
     * └───┴───┴───┘
     */
    [_BASE] = LAYOUT_3x3(
        KC_1, KC_2, KC_3,
        KC_4, KC_5, KC_6,
        KC_7, KC_8, KC_9
    ),

    /* FN layer (hold any key you later map to MO(_FN))
     * ┌────┬────┬────┐
     * │ F1 │ F2 │ F3 │
     * ├────┼────┼────┤
     * │ F4 │ F5 │ F6 │
     * ├────┼────┼────┤
     * │ F7 │ F8 │ F9 │
     * └────┴────┴────┘
     */
    [_FN] = LAYOUT_3x3(
        KC_F1, KC_F2, KC_F3,
        KC_F4, KC_F5, KC_F6,
        KC_F7, KC_F8, KC_F9
    )
};
