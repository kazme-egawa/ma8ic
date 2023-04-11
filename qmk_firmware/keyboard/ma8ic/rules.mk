# MCU name
MCU = atmega32u4

# Bootloader selection
BOOTLOADER = atmel-dfu

# Build Options
BACKLIGHT_ENABLE = no       # Enable keyboard backlight functionality
AUDIO_ENABLE = no           # Audio output

# ma8ic is a split keyboard
SPLIT_KEYBOARD = yes

# ma8ic has OLED display
OLED_ENABLE = yes

# RGB LED Settings
RGB_MATRIX_ENABLE = yes
RGB_MATRIX_DRIVER = WS2812

# WPM Setting
WPM_ENABLE = yes

# Disable other features to squeeze firmware size
SPACE_CADET_ENABLE = no
MAGIC_ENABLE = no