#ifndef USB_HID_CALLBACKS
#define USB_HID_CALLBACKS

#include "app.h"

/** Draws the UI */
void nfc_hid_render_callback(Canvas* canvas, void* ctx);

/** Callback for User inputs (buttons) */
void nfc_hid_input_callback(InputEvent* input_event, void* ctx);

// NOT CALLED!!!
void nfc_hid_scanner_callback(NfcScannerEvent event, void* ctx);

#endif
