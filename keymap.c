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
    [X] = LAYOUT_ortho_5x15(
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
    ),
*/

/* Transparent Layer
    [X] = LAYOUT_ortho_5x15(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
    ),
*/

#define M1_SPC LT(1, KC_SPC)
#define M2_P5  LT(2, KC_P5)

#define LC_QUOT LCTL_T(KC_QUOT)
#define RC_ENT  RCTL_T(KC_ENT)

// alt-gr
#define RA_CIRC RALT(KC_6)
#define RA_BSLS RALT(KC_BSLS)


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT_ortho_5x15(
        KC_ESC , KC_1   , KC_2   , KC_3   , KC_4   , KC_5   , KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , KC_DEL , /**/ KC_P7  , KC_P8  , KC_P9  ,
        KC_TAB , KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   , KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , KC_BSPC, /**/ KC_P4  , M2_P5  , KC_P6  ,
        LC_QUOT, KC_A   , KC_S   , KC_D   , KC_F   , KC_G   , KC_H   , KC_J   , KC_K   , KC_L   , KC_SCLN, RC_ENT , /**/ KC_P1  , KC_P2  , KC_P3  ,
        KC_LSFT, KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   , KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, KC_RSFT, /**/ KC_P0  , KC_UP  , KC_PENT,
        KC_LCTL, MO(15) , KC_LGUI, KC_LALT, KC_SPC , KC_SPC , M1_SPC , MO(1)  , KC_RALT, KC_RGUI, MO(15) , KC_RCTL, /**/ KC_LEFT, KC_DOWN, KC_RGHT
    ),

    // Accents and Symbols
    [1] = LAYOUT_ortho_5x15(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, /**/ _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, KC_CIRC, KC_GRV , KC_QUOT, _______, /**/ _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, KC_MINS, KC_EQL , KC_LBRC, KC_RBRC, _______, /**/ _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, KC_LPRN, KC_RPRN, RA_BSLS, KC_BSLS, _______, /**/ _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, /**/ _______, _______, _______
    ),

    // Numpad extra
    [2] = LAYOUT_ortho_5x15(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, /**/ KC_PSLS, XXXXXXX, KC_PMNS,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, /**/ KC_PAST, _______, KC_PPLS,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, /**/ KC_PDOT, XXXXXXX, KC_PEQL,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, /**/ KC_PCMM, _______, XXXXXXX,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, /**/ _______, _______, _______
    ),

    // Fn
    [15] = LAYOUT_ortho_5x15(
        QK_BOOT, KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  , KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 , XXXXXXX, /**/ KC_F11 , KC_F12 , KC_CAPS,
        _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, /**/ XXXXXXX, KC_NUM , KC_SCRL,
        _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, /**/ XXXXXXX, XXXXXXX, XXXXXXX,
        _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, /**/ XXXXXXX, _______, XXXXXXX,
        _______, _______, _______, _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, _______, _______, _______, /**/ _______, _______, _______
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
        default:
            rgblight_setrgb(0x00, 0x00, 0x00);
            break;
    }
    return state;
}
