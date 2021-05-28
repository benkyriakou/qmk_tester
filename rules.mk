# MCU name
MCU = atmega32u4

# Bootloader selection
BOOTLOADER = caterina

# Build Options
#   change yes to no to disable
#
BOOTMAGIC_ENABLE = no     # Virtual DIP switch configuration

MOUSEKEY_ENABLE = no       # Mouse keys
CONSOLE_ENABLE = no         # Console for debug
COMMAND_ENABLE = no         # Commands for debug and configuration
# Do not enable SLEEP_LED_ENABLE. it uses the same timer as BACKLIGHT_ENABLE
SLEEP_LED_ENABLE = no       # Breathing sleep LED during USB suspend
# if this doesn't work, see here: https://github.com/tmk/tmk_keyboard/wiki/FAQ#nkro-doesnt-work
NKRO_ENABLE = no            # USB Nkey Rollover
BACKLIGHT_ENABLE = no       # Enable keyboard backlight functionality
BLUETOOTH_ENABLE = no       # Enable Bluetooth


EXTRAKEY_ENABLE = yes       # Audio control and System control
RGBLIGHT_ENABLE = yes        # Enable keyboard RGB underglow
AUDIO_ENABLE = yes           # Audio output
ENCODER_ENABLE = yes
OLED_DRIVER_ENABLE = yes
DIP_SWITCH_ENABLE = yes

# Improve compression during compilation
EXTRAFLAGS += -flto