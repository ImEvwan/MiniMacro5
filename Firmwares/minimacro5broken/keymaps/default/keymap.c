#include QMK_KEYBOARD_H

#define _BASE 0
#define _SECOND 1

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT(
    KC_A, KC_B, KC_C, KC_D, TG(_SECOND)
  ),
  [_SECOND] = LAYOUT(
    KC_E, KC_F, KC_G, KG_H, TG(_BASE)
  )
};

