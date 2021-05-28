/* Copyright 2021 benkyriakou
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
    /* Base */
    [0] = LAYOUT(
        KC_MUTE, \
        KC_A, KC_B,      KC_C, \
        KC_D, RGB_VAD,   RGB_VAI, \
        KC_G, KC_BSPACE, KC_CAPSLOCK
    ),
};

void encoder_update_user(int8_t index, bool clockwise) {
    if (clockwise) {
      tap_code(KC_AUDIO_VOL_UP);
    } else {
      tap_code(KC_AUDIO_VOL_DOWN);
    }
}

void update_display(void) {
  oled_clear();

  oled_write_P(PSTR("QMK Tester\n"), false);

  oled_write_P(PSTR("Audio: "), false);
  oled_write_P(is_audio_on() ? PSTR("On\n") : PSTR("Off\n"), false);

  oled_write_P(PSTR("RGB: "), false);
  oled_write_P(rgblight_is_enabled() ? PSTR("On\n") : PSTR("Off\n"), false);

  oled_write_P(PSTR("Capslock: "), false);
  oled_write_P(host_keyboard_led_state().caps_lock ? PSTR("On\n") : PSTR("Off\n"), false);
}


bool led_update_user(led_t led_state) {
    update_display();
    return true;
}


#ifdef DIP_SWITCH_PINS
void dip_switch_update_user(uint8_t index, bool active) {
  switch (index) {
    case 0:
      clicky_on();
      active ? audio_on() : audio_off();
      break;
    case 1:
      rgblight_sethsv(91, 255, 30);
      rgblight_mode(RGBLIGHT_MODE_RAINBOW_MOOD);
      active ? rgblight_enable() : rgblight_disable();
      break;
  }

  update_display();
}
#endif
