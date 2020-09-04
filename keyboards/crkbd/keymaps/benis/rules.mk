RGBLIGHT_ENABLE = no
RGB_MATRIX_ENABLE = WS2812
SPACE_CADET_ENABLE = yes
GRAVE_ESC_ENABLE = no
LTO_ENABLE = yes
MAGIC_ENABLE = no
COMMAND_ENABLE = no
# If you want to change the display of OLED, you need to change here
SRC +=  ./lib/glcdfont.c \
        ./lib/rgb_state_reader.c \
        ./lib/layer_state_reader.c \
        ./lib/logo_reader.c \
        ./lib/keylogger.c \
        # ./lib/mode_icon_reader.c \
        # ./lib/host_led_state_reader.c \
        # ./lib/timelogger.c \
