/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>
Modified  2023 Vladesc

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

#include QMK_KEYBOARD_H
#include "sendstring_german.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_TAB,    DE_Q,    DE_W,    DE_E,    DE_R,    DE_T,                         DE_Z,    DE_U,    DE_I,    DE_O,   DE_P,  KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL,    DE_A,    DE_S,    DE_D,    DE_F,    DE_G,                         DE_H,    DE_J,    DE_K,    DE_L, DE_SCLN, DE_DQUO,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LGUI,    DE_Y,    DE_X,    DE_C,    DE_V,    DE_B,                         DE_N,    DE_M, DE_COMM,  DE_DOT, DE_SLSH,  KC_ESC,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LSFT,   MO(1),  KC_SPC,     KC_ENT,   MO(2), KC_RALT
                                      //`--------------------------'  `--------------------------'

  ),

    [1] = LAYOUT_split_3x6_3(
  //,------------------------------------------------------------------------------------------.                      ,-----------------------------------------------------.
       KC_TAB,    DE_1,     DE_2,                 DE_3,                DE_4,              DE_5,                           DE_6,    DE_7,    DE_8,    DE_9,    DE_0, KC_BSPC,
  //|--------+--------+---------+----------------------+--------------------+--------------------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL,  XXXXXXX, XXXXXXX,  KC_MEDIA_PLAY_PAUSE, KC_MEDIA_PREV_TRACK,   KC_AUDIO_VOL_UP,                        KC_LEFT, KC_DOWN,   KC_UP,KC_RIGHT, XXXXXXX, XXXXXXX,
  //|--------+--------+---------+----------------------+--------------------+--------------------|                    |--------+--------+--------+--------+--------+--------|
      KC_LGUI, DE_QUES,  XXXXXXX,        KC_AUDIO_MUTE, KC_MEDIA_NEXT_TRACK, KC_AUDIO_VOL_DOWN,                        KC_HOME,  KC_DEL,  KC_END, KC_PGDN,  KC_INS,  KC_ESC,
  //|--------+--------+---------+----------------------+--------------------+--------------------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                                                                KC_LSFT, _______,  KC_SPC,     KC_ENT,   MO(3), KC_RALT
                                                                            //`--------------------------'  `--------------------------'
  ),

    [2] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_TAB, DE_EXLM,   DE_AT, DE_HASH,  DE_DLR, DE_PERC,                      DE_CIRC, DE_AMPR, DE_ASTR, DE_LPRN, DE_RPRN, KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL, DE_ADIA,   DE_SS, DE_ODIA, DE_UDIA, DE_QUES,                      DE_MINS,  DE_EQL, DE_LCBR, DE_RCBR, DE_BSLS, DE_QUOT,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LGUI, DE_QUES, XXXXXXX, XXXXXXX, DE_LABK, DE_RABK,                      DE_UNDS, DE_PLUS, DE_LBRC, DE_RBRC, DE_PIPE, DE_TILD,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LSFT,   MO(3),  KC_SPC,     KC_ENT, _______, KC_RALT
                                      //`--------------------------'  `--------------------------'
  ),

    [3] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      QK_BOOT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL, RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------|--------+--------+--------+--------+--------+                    |--------+--------+--------+--------+--------+--------|
      KC_LGUI, RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  KC_ESC,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LSFT, _______,  KC_SPC,     KC_ENT, _______, KC_RALT
                                      //`--------------------------'  `--------------------------'
  )
};
