#include "tools.h"

void convertToHexString(FuriString* str, uint8_t* uid, size_t length) {
    for (size_t i = 0; i < length; i++) {
        furi_string_cat_printf(str, "%02X", uid[i]);
    }
}
