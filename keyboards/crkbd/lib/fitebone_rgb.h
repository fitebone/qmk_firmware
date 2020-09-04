#pragma once

#include "quantum.h"

void          keyboard_post_init_rgb(void);
layer_state_t layer_state_set_rgb(layer_state_t state);
void          matrix_scan_rgb(void);
bool          process_record_rgb(const uint16_t keycode, const keyrecord_t *record);

void rgb_matrix_toggle_eeprom_helper(bool write_to_eeprom);
void rgb_matrix_toggle_noeeprom(void);
void rgb_matrix_mode_eeprom_helper(uint8_t mode, bool write_to_eeprom);
void rgb_matrix_step_noeeprom(void);
void rgb_matrix_step_reverse_noeeprom(void);
void rgb_matrix_sethsv_eeprom_helper(uint16_t hue, uint8_t sat, uint8_t val, bool write_to_eeprom);
void rgb_matrix_increase_hue_noeeprom(void);
void rgb_matrix_decrease_hue_noeeprom(void);
void rgb_matrix_increase_sat_noeeprom(void);
void rgb_matrix_decrease_sat_noeeprom(void);
void rgb_matrix_increase_val_noeeprom(void);
void rgb_matrix_decrease_val_noeeprom(void);
void rgb_matrix_set_speed_eeprom_helper(uint8_t speed, bool write_to_eeprom);
void rgb_matrix_set_speed(uint8_t speed);
void rgb_matrix_set_speed_noeeprom(uint8_t speed);
void rgb_matrix_increase_speed_noeeprom(void);
void rgb_matrix_decrease_speed_noeeprom(void);