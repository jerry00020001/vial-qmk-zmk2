/* Copyright 2020 Alex Zidros
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

#define SCREENSAVE_DELAY 120000  //configure how long to wait after last activity. 120000ms = 2 mins

enum custom_keycodes {
	NO_SLEEP = SAFE_RANGE,  //custom macro key.  turns on screensaver mode
	PSWD,
	PSWD2,
	PSWD3,
};

bool stop_screensaver = false;     //screensaver mode status
uint32_t last_activity_timer = 0;

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
   if (record->event.pressed)
        stop_screensaver = false;  //turn off screensaver mode on any keypress
	
   switch (keycode) {
		case NO_SLEEP:
			if (record->event.pressed) {               //if NO_SLEEP is pressed
                stop_screensaver = true;               //turn on screensaver mode
                last_activity_timer = timer_read32();  //reset timer
            }
			break;
   case PSWD:
        if (record->event.pressed) {
            // when keycode PSWD is pressed
            SEND_STRING("Rehydrate$Doorstep$Old0");
        } else {
            // when keycode PSWD is released
        }
        break;

   case PSWD2:
        if (record->event.pressed) {
            // when keycode PSWD2 is pressed
            SEND_STRING("Blooming$Thwarting$Absence0");
        } else {
            // when keycode PSWD2 is released
        }
        break;

   case PSWD3:
        if (record->event.pressed) {
            // when keycode PSWD3 is pressed
            SEND_STRING("Retired$Outnumber$Polymer0");
        } else {
            // when keycode PSWD3 is released
        }
        break;
    }
	return true;
}


void matrix_scan_user(void) {
	if (stop_screensaver) {                                             //if screensaver mode is active
		if (timer_elapsed32(last_activity_timer) > SCREENSAVE_DELAY) {  //and no key has been pressed in more than SCREENSAVE_DELAY ms
			tap_code16(KC_F13);						                    //  tap F13
			last_activity_timer = timer_read32();                       //  reset last_activity_timer
		}
	}
}


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* Keymap _BL: (Base Layer) Default Numpad Layer
 * ,-------------------.
 * |LAYR| /  | *  |BACK |
 * |----|----|----|-----|
 * | 7  | 8  | 9  |  -  |
 * |----|----|----|-----|
 * | 4  | 5  | 6  |  +  |
 * |----|----|----|-----|
 * | 1  | 2  | 3  | En  |
 * `--------------------'
 */
 [0] = LAYOUT(
   NO_SLEEP,     SGUI(KC_S)
 )
};
