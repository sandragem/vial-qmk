/*
 Copyright 2022 superswitch

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

// Defines names for use in layer keycodes and the keymap
enum layer_names {
        _LAYER0,
        _LAYER1,
        _LAYER2

    };

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    /* LAYER0
      * ┌───┐  ┌───┬───┐  ┌───┬───┬───┐  ┌───┬───┐
      * │Esc│  │Del│OSL│  │F8 │F9 │F3 │  │Num│Cap│
      * └───┘  └───┴───┘  └───┴───┴───┘  └───┴───┘
      *
      * ┌───┐  ┌───┬───┐  ┌───┬───┬───┐  ┌───┬───┐
      * │A  │  │Q  │W  │  │7  │8  │9  │  │-  │=  │
      * ├───┤  ├───┼───┤  ├───┼───┼───┤  ├───┼───┤
      * │B  │  │E  │R  │  │4  │5  │6  │  │'  │"  │
      * ├───┤  ├───┼───┤  ├───┼───┼───┤  ├───┼───┤
      * │C  │  │T  │Y  │  │1  │2  │3  │  │*  │/  │
      * ├───┤  ├───┼───┤  ├───┼───┼───┤  ├───┼───┤
      * │D  │  │U  │OSL│  │0  │.  │/  │  │Ent│Bck│
      * └───┘  └───┴───┘  └───┴───┴───┘  └───┴───┘
      *
      */


[_LAYER0] = LAYOUT_all_5x8(
        KC_ESC, KC_DEL, OSL(2), KC_F8,  KC_F9,   KC_F3,   KC_NUM,  KC_CAPS,
        KC_A,   KC_Q,   KC_W,   KC_P7,  KC_P8,   KC_P9,   KC_MINS, KC_EQL,
        KC_B,   KC_E,   KC_R,   KC_P4,  KC_P5,   KC_P6,   KC_QUOT, KC_DQUO,
        KC_C,   KC_T,   KC_Y,   KC_P1,  KC_P2,   KC_P3,   KC_PAST, KC_PSLS,
        KC_D,   KC_U,   OSL(1), KC_P0,  KC_PDOT, KC_PSLS, KC_ENT,  KC_BSPC
    ),

    /* LAYER1
     * ┌───┐  ┌───┬───┐  ┌───┬───┬───┐  ┌───┬───┐
     * │Esc│  │Del│OSL│  │NO │NO │NO │  │Num│Cap│
     * └───┘  └───┴───┘  └───┴───┴───┘  └───┴───┘
     *
     * ┌───┐  ┌───┬───┐  ┌───┬───┬───┐  ┌───┬───┐
     * │NO │  │NO │NO │  │NO │NO │NO │  │NO │NO │
     * ├───┤  ├───┼───┤  ├───┼───┼───┤  ├───┼───┤
     * │NO │  │NO │NO │  │NO │NO │NO │  │   │   │
     * ├───┤  ├───┼───┤  ├───┼───┼───┤  │NO │NO │
     * │NO │  │NO │NO │  │NO │NO │NO │  │   │   │
     * ├───┤  ├───┼───┤  ├───┼───┼───┤  ├───┴───┤
     * │NO │  │NO │OSL│  │NO │NO │NO │  │Ent│Bck│
     * └───┘  └───┴───┘  └───┴───┴───┘  └───┴───┘
     *
     */

[_LAYER1] = LAYOUT_all_5x8(
        KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS,
        KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO,
        KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO,
        KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO,
        KC_NO,   KC_TRNS, KC_NO,   KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS
    ),

    /* LAYER2
     * ┌───┐  ┌───┬───┐  ┌───┬───┬───┐  ┌───┬───┐
     * │Esc│  │Del│OSL│  │NO │NO │NO │  │Num│Cap│
     * └───┘  └───┴───┘  └───┴───┴───┘  └───┴───┘
     *
     * ┌───┐  ┌───┬───┐  ┌───┬───┬───┐  ┌───┬───┐
     * │NO │  │NO │NO │  │NO │NO │NO │  │NO │NO │
     * ├───┤  ├───┼───┤  ├───┼───┼───┤  ├───┼───┤
     * │NO │  │NO │NO │  │NO │NO │NO │  │   │   │
     * ├───┤  ├───┼───┤  ├───┼───┼───┤  │NO │NO │
     * │NO │  │NO │NO │  │NO │NO │NO │  │   │   │
     * ├───┤  ├───┼───┤  ├───┼───┼───┤  ├───┴───┤
     * │NO │  │NO │OSL│  │NO │NO │NO │  │Ent│Bck│
     * └───┘  └───┴───┘  └───┴───┴───┘  └───┴───┘
     */


[_LAYER2] = LAYOUT_all_5x8(
        KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS,
        KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO,
        KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO,
        KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO,
        KC_NO,   KC_TRNS, KC_NO,   KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS
    )

};

//Function for layer indicator LED
void led_init_ports(void) {
    // * Set our LED pins as output
    setPinOutput(D0);
    setPinOutput(D1);
    setPinOutput(D2);
}

void matrix_init_user(void) {
    led_init_ports(); // Sets up our LED pins
}

bool led_update_user(led_t usb_led) {
    writePin(D0, IS_LAYER_ON(1)); // Write High when Layer 1 is on, Low when off
    writePin(D1, IS_LAYER_ON(2)); // Write High when Layer 2 is on, Low when off
    writePin(D2, usb_led.caps_lock); // Write High when Caps Lock is on, Low when off
    return false; // Return false to override the default implementation
}

//OLED Task Call

#ifdef OLED_ENABLE

oled_rotation_t oled_init_user(oled_rotation_t rotation) { return OLED_ROTATION_180; }

bool oled_task_user(void) {
    // Host Keyboard Layer Status
    oled_write_P(PSTR("Layer: "), false);

    switch (get_highest_layer(layer_state)) {
        case _LAYER0:
            oled_write_P(PSTR("Default\n"), false);
            break;
        case _LAYER1:
            oled_write_P(PSTR("1\n"), false);
            break;
        case _LAYER2:
            oled_write_P(PSTR("2\n"), false);
            break;
        default:
            // Or use the write_ln shortcut over adding '\n' to the end of your string
            oled_write_ln_P(PSTR("Undefined"), false);
    }

    // Host Keyboard LED Status
    led_t led_state = host_keyboard_led_state();
    oled_write_P(led_state.num_lock ? PSTR("NUM ") : PSTR("    "), false);
    oled_write_P(led_state.caps_lock ? PSTR("CAP ") : PSTR("    "), false);
    oled_write_P(led_state.scroll_lock ? PSTR("SCR ") : PSTR("    "), false);

    return false;
}
#endif
