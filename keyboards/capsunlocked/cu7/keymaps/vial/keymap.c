/* Copyright 2021 CapsUnlocked
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

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT(
             MO(1),
    KC_1,    KC_2,    KC_3,
    KC_4,    KC_5,    KC_6
  ),
  [1] = LAYOUT(
             _______,
    RGB_MOD, KC_UP,   RESET,
    KC_LEFT, KC_DOWN, KC_RGHT
  ),
  [2] = LAYOUT(
             _______,
    _______, _______, _______,
    _______, _______, _______
  ),
  [3] = LAYOUT(
             _______,
    _______, _______, _______,
    _______, _______, _______
  ),
};

const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] = { ENCODER_CCW_CW(KC_NO, KC_NO) },
    [1] = { ENCODER_CCW_CW(KC_NO, KC_NO) },
    [2] = { ENCODER_CCW_CW(KC_NO, KC_NO) },
    [3] = { ENCODER_CCW_CW(KC_NO, KC_NO) },
};

// LED Layer Indication

// Light LED 1 in RED when keyboard WHO KNOWS because it never turns red
const rgblight_segment_t PROGMEM my_layer0_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {1, 2, HSV_RED}
);
// Light LED 1 in CYAN when keyboard layer 1 is active
const rgblight_segment_t PROGMEM my_layer1_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {1, 2, HSV_CYAN}
);
// Light LED 1 in BLUE when keyboard layer 2 is active
const rgblight_segment_t PROGMEM my_layer2_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {1, 2, HSV_BLUE}
);
// Light LED 1 in PURPLE when keyboard layer 3 is active
const rgblight_segment_t PROGMEM my_layer3_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {1, 2, HSV_PURPLE}
);

// Now define the array of layers. Later layers take precedence
const rgblight_segment_t* const PROGMEM my_rgb_layers[] = RGBLIGHT_LAYERS_LIST(
    my_layer0_layer,    // Overrides other layers
    my_layer1_layer,    // Overrides other layers
    my_layer2_layer,    // Overrides other layers
    my_layer3_layer     // Overrides other layers
);

#ifdef RGBLIGHT_ENABLE
void keyboard_post_init_user(void) {
  rgblight_enable_noeeprom(); // Enables RGB, without saving settings
  rgblight_sethsv_noeeprom(HSV_WHITE);
  rgblight_mode_noeeprom(RGBLIGHT_MODE_STATIC_LIGHT);
  rgblight_layers = my_rgb_layers;
}
#endif

// Enabling and disabling lighting layers

layer_state_t layer_state_set_user(layer_state_t state) {
    rgblight_set_layer_state(1, layer_state_cmp(state, 1));
    rgblight_set_layer_state(2, layer_state_cmp(state, 2));
    rgblight_set_layer_state(3, layer_state_cmp(state, 3));
    return state;
}
