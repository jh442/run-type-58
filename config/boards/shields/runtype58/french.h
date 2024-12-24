#ifndef CUSTOM_KEYCODES_H
#define CUSTOM_KEYCODES_H

#include <dt-bindings/zmk/keys.h>

// Define custom keycodes for French accents
#define E_ACUTE (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_E) | (1 << 8))
#define E_GRAVE (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_E) | (2 << 8))
#define A_GRAVE (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_A) | (3 << 8))
#define C_CEDILLA (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_C) | (4 << 8))
#define E_CIRCUMFLEX (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_E) | (5 << 8))
#define A_CIRCUMFLEX (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_A) | (6 << 8))
#define I_CIRCUMFLEX (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_I) | (7 << 8))
#define O_CIRCUMFLEX (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_O) | (8 << 8))
#define U_CIRCUMFLEX (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_U) | (9 << 8))
#define E_DIAERESIS (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_E) | (10 << 8))

#endif // CUSTOM_KEYCODES_H