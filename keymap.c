/* Copyright 2018 MechMerlin
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

/* Empty Layer
 *  [X] = LAYOUT_ortho_5x15(
 *      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
 *      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
 *      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
 *      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
 *      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
 *  ),
*/
/* Transparent Layer
 *  [X] = LAYOUT_ortho_5x15(
 *      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
 *      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
 *      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
 *      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
 *      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
 *  ),
*/

#define LC_QUOT LCTL_T(KC_QUOT)
#define RC_ENT  RCTL_T(KC_ENT)

#define AG_QUOT ALGR(KC_QUOT)
#define AG_GRV ALGR(KC_GRV)
#define AG_CIRC ALGR(KC_6)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT_ortho_5x15(
         KC_ESC,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,  KC_DEL, KC_MINS,  KC_EQL, KC_LOCK,
         KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P, KC_BSPC, KC_LBRC, KC_RBRC,   MO(1),
        LC_QUOT,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN,  RC_ENT, KC_QUOT,  KC_GRV,   MO(2),
        KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, KC_RSFT, KC_BSLS,   KC_UP, XXXXXXX,
        KC_LCTL,  MO(15), KC_LGUI, KC_LALT,  KC_SPC,  KC_SPC,  KC_SPC,  KC_SPC, KC_RALT, KC_RGUI,  MO(15), KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT
    ),

    // Fn
    [15] = LAYOUT_ortho_5x15(
        QK_BOOT,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10, XXXXXXX,  KC_F11,  KC_F12, _______,
        _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,   TO(1),
        _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,   TO(2),
        _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, XXXXXXX, _______, XXXXXXX,
        _______, _______, _______, _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, _______, _______, _______, _______, _______, _______
    ),

    // Mouse / Numpad
    [1] = LAYOUT_ortho_5x15(
        _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_PSLS, KC_PAST, KC_PMNS, XXXXXXX, _______, XXXXXXX, XXXXXXX, _______,
        _______, KC_BTN1, KC_MS_U, KC_BTN2, KC_WH_U, XXXXXXX,   KC_P7,   KC_P8,   KC_P9, KC_PPLS, XXXXXXX, _______, XXXXXXX, XXXXXXX,   TO(0),
        _______, KC_MS_L, KC_MS_D, KC_MS_R, KC_WH_D, XXXXXXX,   KC_P4,   KC_P5,   KC_P6, KC_PEQL, XXXXXXX, _______, XXXXXXX, XXXXXXX, XXXXXXX,
        _______, KC_WH_L, KC_BTN3, KC_WH_R, KC_BTN4, XXXXXXX,   KC_P1,   KC_P2,   KC_P3, KC_PENT, XXXXXXX, _______, XXXXXXX, _______, XXXXXXX,
        _______, _______, _______, _______, KC_BTN5, XXXXXXX,   KC_P0, KC_PDOT, _______, _______, _______, _______, _______, _______, _______
    ),

    // Tibia
    [2] = LAYOUT_ortho_5x15(
        _______,   KC_F1,   KC_F2,   KC_F3,   KC_F5,   KC_F9, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, XXXXXXX, XXXXXXX, _______,
        _______,   KC_P7,   KC_UP,   KC_P9,   KC_F6,  KC_F10, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, XXXXXXX, XXXXXXX, XXXXXXX,
        _______, KC_LEFT, KC_DOWN, KC_RGHT,   KC_F7,  KC_F11, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, XXXXXXX, XXXXXXX,   TO(0),
        _______,   KC_P1,   KC_F4,   KC_P3,   KC_F8,  KC_F12, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, XXXXXXX, _______, XXXXXXX,
        _______, _______, _______, _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, _______, _______, _______, _______, _______, _______
    ),
};


void keyboard_post_init_user(void)
{
    rgblight_setrgb(0x00, 0x00, 0x00);
}


layer_state_t layer_state_set_user(layer_state_t state)
{
    switch (get_highest_layer(state)) {
        case 15:
            rgblight_setrgb(0xff, 0xff, 0xff);
            break;
        case 1:
            rgblight_setrgb(0x00, 0xff, 0x55);
            break;
        case 2:
            rgblight_setrgb(0x00, 0x55, 0xff);
            break;
        case 3:
            rgblight_setrgb(0xff, 0x55, 0x00);
            break;
        default:
            rgblight_setrgb(0x00, 0x00, 0x00);
            break;
    }
    return state;
}
