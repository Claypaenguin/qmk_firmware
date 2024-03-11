/* Copyright 2021 gtips
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

enum layer_names {
  _BASE_MAC,
  _EXT_MAC,
  _SYM_MAC,
  _FN,
  _NUM,
  _ACC,
  _BASE_WIN,
  _EXT_WIN,
  _SYM_WIN,
  _SET
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_BASE_MAC] = LAYOUT_reviung34(KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_NUHS, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, MO(1), KC_LSFT, KC_SPC, MO(2)),

    [_EXT_MAC] = LAYOUT_reviung34(KC_ESC, KC_NO, KC_NO, KC_NO, TO(6), KC_PGUP, KC_HOME, KC_UP, KC_END, KC_NO, OSM(MOD_LSFT), OSM(MOD_LCTL), OSM(MOD_LALT), OSM(MOD_LGUI), KC_NO, KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, KC_DEL, LGUI(KC_Z), LGUI(KC_X), LGUI(KC_C), LGUI(KC_V), KC_NO, KC_ENT, LALT(KC_BSPC), KC_BSPC, KC_TAB, KC_NO, KC_NO, KC_NO, MO(5), MO(3)),

    [_SYM_MAC] = LAYOUT_reviung34(LSFT(KC_1), LSFT(KC_2), LSFT(KC_3), LSFT(KC_4), LSFT(KC_5), LALT(KC_7), LALT(KC_E), LALT(KC_L), KC_NUBS, LSFT(KC_NUBS), OSM(MOD_LSFT), OSM(MOD_LCTL), OSM(MOD_LALT), OSM(MOD_LGUI), KC_NO, LSFT(KC_7), LSFT(KC_8), LALT(KC_8), LALT(KC_5), KC_GRV, LSFT(KC_6), LSFT(KC_MINS), KC_EQL, LSFT(KC_EQL), LALT(KC_N), LSA(KC_7), LSFT(KC_9), LALT(KC_9), LALT(KC_6), LSFT(KC_GRV), MO(3), MO(4), KC_NO, KC_NO),

    [_FN] = LAYOUT_reviung34(KC_MPRV, KC_MPLY, KC_MNXT, KC_NO, KC_NO, KC_F12, KC_F7, KC_F8, KC_F9, KC_NO, OSM(MOD_LSFT), OSM(MOD_LCTL), OSM(MOD_LALT), OSM(MOD_LGUI), OSM(MOD_RALT), KC_F11, KC_F4, KC_F5, KC_F6, KC_NO, KC_MUTE, KC_VOLD, KC_VOLU, KC_NO, KC_NO, KC_F10, KC_F1, KC_F2, KC_F3, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO),

    [_NUM] = LAYOUT_reviung34(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_PEQL, KC_P7, KC_P8, KC_P9, KC_PPLS, OSM(MOD_LSFT), OSM(MOD_LCTL), OSM(MOD_LALT), OSM(MOD_LGUI), KC_NO, KC_PAST, KC_P4, KC_P5, KC_P6, KC_PMNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_P0, KC_P1, KC_P2, KC_P3, KC_PSLS, KC_NO, KC_TRNS, KC_NO, KC_NO),

    [_ACC] = LAYOUT_reviung34(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LBRC, KC_NO, KC_SCLN, KC_NO, KC_QUOT, KC_MINS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO),

    [_BASE_WIN] = LAYOUT_reviung34(KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_NUHS, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, MO(7), KC_LSFT, KC_SPC, MO(8)),

    [_EXT_WIN] = LAYOUT_reviung34(KC_ESC, KC_NO, KC_NO, KC_NO, TO(0), KC_PGUP, KC_HOME, KC_UP, KC_END, KC_NO, OSM(MOD_LSFT), OSM(MOD_LCTL), OSM(MOD_LALT), OSM(MOD_LGUI), OSM(MOD_RALT), KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, KC_DEL, LCTL(KC_Z), LCTL(KC_X), LCTL(KC_C), LCTL(KC_V), KC_NO, KC_ENT, LALT(KC_BSPC), KC_BSPC, KC_TAB, KC_NO, KC_NO, KC_NO, MO(5), MO(3)),

    [_SYM_WIN] = LAYOUT_reviung34(LSFT(KC_1), LSFT(KC_2), LSFT(KC_3), LSFT(KC_4), LSFT(KC_5), LALT(KC_7), LALT(KC_E), LALT(KC_L), KC_NUBS, LSFT(KC_NUBS), OSM(MOD_LSFT), OSM(MOD_LCTL), OSM(MOD_LALT), OSM(MOD_LGUI), KC_NO, LSFT(KC_7), LSFT(KC_8), LALT(KC_8), LALT(KC_5), KC_GRV, LSFT(KC_6), LSFT(KC_MINS), KC_EQL, LSFT(KC_EQL), LALT(KC_N), LSA(KC_7), LSFT(KC_9), LALT(KC_9), LALT(KC_6), LSFT(KC_GRV), MO(3), MO(4), KC_NO, KC_NO),

    [_SET] = LAYOUT_reviung34(
    RGB_VAI, RGB_SAI, RGB_HUI, RGB_MOD,  RGB_TOG,       KC_NO,   KC_NO,   KC_NO,   KC_NO,   QK_BOOT,  
    RGB_VAD, RGB_SAD, RGB_HUD, RGB_RMOD,   KC_NO,       KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, 
      KC_NO,   KC_NO,   KC_NO,    KC_NO,   KC_NO,       KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
                                    KC_NO, KC_NO,       KC_NO,   KC_NO
  )

};