#include QMK_KEYBOARD_H

#define _BASE 0
#define _SECOND 1 
#define _THIRD 2

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT_ortho_1x5(
    KC_Z, KC_X, KC_C, KC_ESC, TG(_SECOND) //I'm going to change this layer to have DEL, F1, Enter, F12, TG
  ),
  [_SECOND] = LAYOUT_ortho_1x5(
    KC_B, KC_DOWN, KC_LEFT, KC_RIGHT, TG(_SECOND) //This layer will just be arrow keys and TG
  ),
  [_THIRD] = LAYOUT_ortho_1x5(
    KC_A, KC_DOWN, KC_LEFT, KC_RIGHT, TG(_BASE) //This layer will just be arrow keys and TG
  ),
};
