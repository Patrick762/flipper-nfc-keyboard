#ifndef NFC_HID_KEYBOARD
#define NFC_HID_KEYBOARD

#include "flipper.h"

#define KB_PRESS_DELAY 100

uint16_t get_key(char c);
void capslock();
void numlock();
void write_char(char c);
void write_string(char* str, size_t len);

#endif
