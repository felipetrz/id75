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

const key_override_t **key_overrides = (const key_override_t *[]){
    &ko_make_basic(MOD_MASK_CA, KC_J, KC_MINS),
    &ko_make_basic(MOD_MASK_CA, KC_K, KC_EQL),
    &ko_make_basic(MOD_MASK_CA, KC_SLSH, KC_BSLS),
    &ko_make_basic(MOD_MASK_CA, KC_M, KC_LPRN),
    &ko_make_basic(MOD_MASK_CA, KC_COMM, KC_RPRN),
    &ko_make_basic(MOD_MASK_CA, KC_L, KC_LBRC),
    &ko_make_basic(MOD_MASK_CA, KC_SCLN, KC_RBRC),
    NULL
};

#define XX_LCTL LCTL_T(KC_QUOT)
#define XX_RSFT RSFT_T(KC_GRV)
#define XX_CALT LCTL(KC_LALT)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_ortho_5x15(
        KC_ESC , KC_1   , KC_2   , KC_3   , KC_4   , KC_5   , KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , KC_DEL , /**/ PB_1   , PB_2   , PB_3   ,
        KC_TAB , KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   , KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , KC_BSPC, /**/ PB_4   , PB_5   , PB_6   ,
        XX_LCTL, KC_A   , KC_S   , KC_D   , KC_F   , KC_G   , KC_H   , KC_J   , KC_K   , KC_L   , KC_SCLN, KC_ENT , /**/ PB_7   , PB_8   , PB_9   ,
        KC_LSFT, KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   , KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, XX_RSFT, /**/ _______, KC_UP  , _______,
        KC_LCTL, MO(15) , KC_LGUI, KC_LALT, KC_SPC , KC_SPC , KC_SPC , XX_CALT, KC_RALT, KC_RGUI, MO(15) , KC_RCTL, /**/ KC_LEFT, KC_DOWN, KC_RGHT
    ),

    // Tibia Mode
    [1] = LAYOUT_ortho_5x15(
        _______, KC_F1  , KC_F2  , KC_F3  , XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, /**/ _______, _______, _______,
        TO(0)  , KC_P7  , KC_UP  , KC_P9  , KC_F5  , KC_F12 , XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, /**/ _______, _______, _______,
        _______, KC_LEFT, KC_DOWN, KC_RGHT, KC_F6  , KC_F11 , XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, TO(0)  , /**/ _______, _______, _______,
        _______, KC_P1  , KC_F4  , KC_P3  , KC_F7  , KC_F10 , XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, /**/ _______, _______, _______,
        _______, XXXXXXX, _______, _______, KC_F8  , KC_F9  , XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, /**/ _______, _______, _______
    ),

    // Fn
    [15] = LAYOUT_ortho_5x15(
        QK_BOOT, KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  , KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 , XXXXXXX, /**/ KC_F11 , KC_F12 , KC_PSCR,
        TO(1)  , XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, /**/ XXXXXXX, XXXXXXX, XXXXXXX,
        _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_LEFT, KC_DOWN, KC_UP  , KC_RGHT, XXXXXXX, TO(1)  , /**/ XXXXXXX, XXXXXXX, XXXXXXX,
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
