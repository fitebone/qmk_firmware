
#include QMK_KEYBOARD_H
#include <stdio.h>
#include "crkbd.h"

// in the future, should use (1U<<_LAYER_NAME) instead, but needs to be moved to keymap,c
/*#define L_COLEMAK 0
#define L_QWERTY 2
#define L_LOWER 4
#define L_RAISE 8
#define L_ADJUST 12
#define L_ADJUST_TRI 16
*/
#define L_COLEMAK 0
#define L_QWERTY 1
#define L_LOWER 2
#define L_RAISE 3
#define L_ADJUST 4

char layer_state_str[24];

const char *read_layer_state(void) {
  switch (get_highest_layer(layer_state))
  {
  case L_COLEMAK:
    snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Colemak");
    break;
  case L_QWERTY:
    snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Qwerty");
    break;
  case L_RAISE:
    snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Raise");
    break;
  case L_LOWER:
    snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Lower");
    break;
  case L_ADJUST:
    snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Adjust");
    break;
  default:
    snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Undef-%ld", layer_state);
  }

  return layer_state_str;
}
