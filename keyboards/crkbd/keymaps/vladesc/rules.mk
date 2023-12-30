## Disable Backlight
BACKLIGHT_ENABLE = no

## Enable RGB
RGBLIGHT_ENABLE = yes

## Enable OLED
## Set Bongocat & OLED Icons
## OLED configuration -- src: https://github.com/filterpaper/qmk_userspace/tree/main/oled
OLED_ENABLE = yes
SRC += oled/oled-bongocat.c oled/oled-icons.c

## Disable Bluetooth
BLUETOOTH_ENABLE = no

## Disable Audio Interaction
AUDIO_ENABLE = no
