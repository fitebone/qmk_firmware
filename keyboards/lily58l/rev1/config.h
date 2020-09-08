#pragma once

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x0058
#define DEVICE_VER      0x0100
#define MANUFACTURER    Keycapsss
#define PRODUCT         Lily58
#define DESCRIPTION     Lily58 is 6×4+5keys column-staggered split keyboard.

/* key matrix size */
/* Rows are doubled up */
#define MATRIX_ROWS 10
#define MATRIX_COLS 6

// Pro Micro
/*#define MATRIX_ROW_PINS { C6, D7, E6, B4, B5 } 
#define MATRIX_COL_PINS { F6, F7, B1, B3, B2, B6 }
#define UNUSED_PINS { D4 }

#define ENCODERS_PAD_A { F4 }
#define ENCODERS_PAD_B { F5 }
#define ENCODERS_PAD_A_RIGHT { F5 }
#define ENCODERS_PAD_B_RIGHT { F4 }

#define SOFT_SERIAL_PIN D2

#define RGB_DI_PIN D3*/

//Proton-C
#define MATRIX_ROW_PINS { B4, B3, B2, B1, B0 } 
#define MATRIX_COL_PINS { A0, B8, B13, B14, B15, B9 }

#define ENCODERS_PAD_A { A2 }
#define ENCODERS_PAD_B { A1 }
#define ENCODERS_PAD_A_RIGHT { A1 }
#define ENCODERS_PAD_B_RIGHT { A2 }

#define SOFT_SERIAL_PIN A9
#define SELECT_SOFT_SERIAL_SPEED 1 
#define SERIAL_USART_DRIVER SD2 // USART driver of TX pin. default: SD1
#define SERIAL_USART_TX_PAL_MODE 7 // Pin "alternate function", see the respective datasheet for the appropriate values for your MCU. default: 7

#define RGB_DI_PIN A10

#define WS2812_PWM_DRIVER PWMD4  // default: PWMD2
#define WS2812_PWM_CHANNEL 2  // default: 2
#define WS2812_PWM_PAL_MODE 2  // Pin "alternate function", see the respective datasheet for the appropriate values for your MCU. default: 2
#define WS2812_DMA_STREAM STM32_DMA1_STREAM2  // DMA Stream for TIMx_UP, see the respective reference manual for the appropriate values for your MCU.
#define WS2812_DMA_CHANNEL 2  // DMA Channel for TIMx_UP, see the respective reference manual for the appropriate values for your MCU.
#define WS2812_DMAMUX_ID STM32_DMAMUX1_TIM2_UP // DMAMUX configuration for TIMx_UP -- only required if your MCU has a DMAMUX peripheral, see the respective reference manual for the appropriate values for your MCU
#define WS2812_EXTERNAL_PULLUP

/* COL2ROW, ROW2COL*/
#define DIODE_DIRECTION COL2ROW

/* define if matrix has ghost (lacks anti-ghosting diodes) */
//#define MATRIX_HAS_GHOST

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 0

/*
 * Split Keyboard specific options, make sure you have 'SPLIT_KEYBOARD = yes' in your rules.mk, and define SOFT_SERIAL_PIN.
 */
#define RGBLED_SPLIT { 35, 35 }
#define RGBLED_NUM 70
#define RGBLIGHT_SPLIT
#define RGBLIGHT_LIMIT_VAL 120
#define RGB_MATRIX_MAXIMUM_BRIGHTNESS RGBLIGHT_LIMIT_VAL

#define DRIVER_LED_TOTAL RGBLED_NUM
#define RGB_MATRIX_CENTER {112, 36}
#define RGB_MATRIX_SPLIT RGBLED_SPLIT
#define SPLIT_TRANSPORT_MIRROR

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE
