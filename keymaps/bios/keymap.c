#include QMK_KEYBOARD_H

#define _BASE 0
#define _SECOND 1 

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT_ortho_1x5(
    KC_F11, KC_F10, KC_ENTER, KC_DEL, TG(_SECOND) //I'm going to change this layer to have DEL, F1, Enter, F12, TG
  ),
  [_SECOND] = LAYOUT_ortho_1x5(
    KC_UP, KC_DOWN, KC_LEFT, KC_RIGHT, TG(_SECOND) //This layer will just be arrow keys and TG
  ),
};
