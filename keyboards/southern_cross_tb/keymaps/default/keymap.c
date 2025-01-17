/* Copyright 2021 swan_match
 *
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
#include QMK_KEYBOARD_H
#include "pointing_device.h"

// ポスト初期化コードを呼び出す
void keyboard_post_init_user(void) {
  rgblight_enable_noeeprom(); // 設定を保存せずにRGBを有効にする
  rgblight_sethsv_noeeprom(180, 255, 80); // 設定を保存せずに色を暗めのシアンに設定する
}

// Defines names for use in layer keycodes and the keymap
enum custom_layers {
    _BASE,
    _RAISE
};

#define RAISE LT(_RAISE, MS_BTN3)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT(
        UG_NEXT, MS_BTN1, MS_BTN2, UG_HUEU,
        UG_TOGG, KC_LSFT, RAISE,   UG_HUED
    ),
    [_RAISE] = LAYOUT(
        UG_VALU, MS_BTN4, MS_BTN5, UG_SATU,
        UG_VALD, KC_ESC,  KC_TRNS, UG_SATD
    )
};
