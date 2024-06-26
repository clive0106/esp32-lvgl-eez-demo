#include <eez/core/vars.h>

#include "flow_def.h"
#include "vars.h"

// ASSETS DEFINITION
const uint8_t assets[976] = {
    0x7E, 0x65, 0x65, 0x7A, 0x03, 0x00, 0x06, 0x00, 0x70, 0x0E, 0x00, 0x00, 0x6E, 0x24, 0x00, 0x00,
    0x00, 0x24, 0x00, 0x01, 0x00, 0x18, 0x20, 0x0C, 0x00, 0x43, 0x03, 0x58, 0x02, 0x01, 0x28, 0x00,
    0x13, 0x02, 0x1C, 0x00, 0xE6, 0x04, 0x00, 0x00, 0x00, 0x1C, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00,
    0x00, 0xE4, 0x0D, 0x2C, 0x00, 0x11, 0x18, 0x06, 0x00, 0x20, 0xFF, 0xFF, 0x1C, 0x00, 0xD3, 0x40,
    0x00, 0x00, 0x00, 0x64, 0x00, 0x00, 0x00, 0x88, 0x00, 0x00, 0x00, 0xAC, 0x3C, 0x00, 0x00, 0x08,
    0x00, 0x80, 0x12, 0x00, 0x00, 0x00, 0xA8, 0x00, 0x00, 0x00, 0x54, 0x00, 0x50, 0xE8, 0x00, 0x00,
    0x00, 0x08, 0x18, 0x00, 0x1E, 0x0D, 0x84, 0x00, 0x53, 0x0A, 0x00, 0x00, 0x00, 0xCC, 0x28, 0x00,
    0x2F, 0xEC, 0x00, 0x01, 0x00, 0x07, 0x53, 0x0B, 0x00, 0x00, 0x00, 0xD0, 0x28, 0x00, 0x1F, 0xF4,
    0x28, 0x00, 0x08, 0x53, 0x0C, 0x00, 0x00, 0x00, 0xD8, 0x28, 0x00, 0x2F, 0x00, 0x01, 0x28, 0x00,
    0x07, 0xF0, 0x4B, 0x64, 0x65, 0x66, 0x61, 0x75, 0x6C, 0x74, 0x00, 0xFF, 0xFF, 0x08, 0x42, 0xDC,
    0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x14, 0x01, 0x00, 0x00, 0x30, 0x01, 0x00, 0x00, 0x4C,
    0x01, 0x00, 0x00, 0x68, 0x01, 0x00, 0x00, 0x84, 0x01, 0x00, 0x00, 0xA0, 0x01, 0x00, 0x00, 0xBC,
    0x01, 0x00, 0x00, 0xD8, 0x01, 0x00, 0x00, 0xF4, 0x01, 0x00, 0x00, 0x10, 0x02, 0x00, 0x00, 0x34,
    0x02, 0x00, 0x00, 0x50, 0x02, 0x00, 0x00, 0x74, 0x02, 0x00, 0x00, 0x90, 0x02, 0x00, 0x00, 0xB4,
    0x02, 0x00, 0x00, 0xD0, 0x02, 0x00, 0x00, 0xF8, 0x02, 0x00, 0x00, 0x04, 0x03, 0x4C, 0x01, 0xF2,
    0x0D, 0x00, 0x00, 0x3C, 0x03, 0x00, 0x00, 0x58, 0x03, 0x00, 0x00, 0x74, 0x03, 0x00, 0x00, 0x90,
    0x03, 0x00, 0x00, 0xAC, 0x03, 0x00, 0x00, 0xC8, 0x03, 0x00, 0x00, 0xE4, 0x03, 0x59, 0x01, 0xF6,
    0x5B, 0x1C, 0x04, 0x00, 0x00, 0x28, 0x04, 0x00, 0x00, 0x44, 0x04, 0x00, 0x00, 0x60, 0x04, 0x00,
    0x00, 0x7C, 0x04, 0x00, 0x00, 0x98, 0x04, 0x00, 0x00, 0xB4, 0x04, 0x00, 0x00, 0xD0, 0x04, 0x00,
    0x00, 0xEC, 0x04, 0x00, 0x00, 0x08, 0x05, 0x00, 0x00, 0x24, 0x05, 0x00, 0x00, 0x40, 0x05, 0x00,
    0x00, 0x5C, 0x05, 0x00, 0x00, 0x68, 0x05, 0x00, 0x00, 0x84, 0x05, 0x00, 0x00, 0xA0, 0x05, 0x00,
    0x00, 0xBC, 0x05, 0x00, 0x00, 0xD8, 0x05, 0x00, 0x00, 0xF4, 0x05, 0x00, 0x00, 0x10, 0x06, 0x00,
    0x00, 0x2C, 0x06, 0x00, 0x00, 0x48, 0x06, 0x00, 0x00, 0x64, 0x06, 0x00, 0x00, 0x80, 0x06, 0x00,
    0x00, 0x9C, 0x06, 0x00, 0x00, 0xB8, 0x06, 0x00, 0x00, 0x20, 0x4E, 0xF4, 0x00, 0x00, 0x7B, 0x00,
    0x26, 0xB4, 0x06, 0x10, 0x00, 0x5B, 0xFF, 0xFF, 0x00, 0x00, 0x21, 0x20, 0x00, 0x1B, 0xA0, 0x20,
    0x00, 0x1B, 0x22, 0x20, 0x00, 0x1F, 0x8C, 0x20, 0x00, 0x0C, 0x1F, 0x78, 0x20, 0x00, 0x0C, 0x1F,
    0x64, 0x20, 0x00, 0x0C, 0x1F, 0x50, 0x20, 0x00, 0x0C, 0x1F, 0x3C, 0x20, 0x00, 0x0C, 0x1F, 0x28,
    0x20, 0x00, 0x0C, 0x1B, 0x14, 0x20, 0x00, 0x2E, 0xE9, 0x03, 0x1C, 0x02, 0x10, 0x01, 0x10, 0x02,
    0x12, 0x05, 0x20, 0x00, 0x23, 0xF6, 0x03, 0x9C, 0x02, 0x13, 0x05, 0xCC, 0x02, 0x03, 0x08, 0x00,
    0x13, 0xE4, 0x20, 0x00, 0x22, 0x06, 0x04, 0x10, 0x00, 0x2A, 0xD8, 0x05, 0x40, 0x00, 0x13, 0xCC,
    0x20, 0x00, 0x00, 0x0C, 0x00, 0x26, 0xC4, 0x05, 0x48, 0x00, 0x13, 0xBC, 0x40, 0x00, 0x13, 0xB8,
    0x08, 0x00, 0x1B, 0xB4, 0x48, 0x00, 0x1B, 0xA8, 0x48, 0x00, 0x17, 0x9C, 0x48, 0x00, 0x17, 0x94,
    0x48, 0x00, 0x13, 0x8C, 0x40, 0x00, 0x13, 0x88, 0x08, 0x00, 0x1B, 0x84, 0x48, 0x00, 0x1B, 0x78,
    0x48, 0x00, 0x17, 0x6C, 0x48, 0x00, 0x17, 0x64, 0x48, 0x00, 0x13, 0x5C, 0x40, 0x00, 0x13, 0x58,
    0x08, 0x00, 0x1B, 0x54, 0x48, 0x00, 0x1B, 0x48, 0x48, 0x00, 0x17, 0x3C, 0x48, 0x00, 0x13, 0x34,
    0x1C, 0x00, 0x1C, 0x07, 0x58, 0x04, 0x0B, 0x74, 0x01, 0x2F, 0x10, 0x05, 0x74, 0x02, 0x0B, 0x2A,
    0xFC, 0x04, 0x20, 0x00, 0x0C, 0x40, 0x00, 0x2F, 0xE8, 0x04, 0xD4, 0x01, 0x0B, 0x1F, 0xD4, 0x20,
    0x00, 0x0C, 0x1F, 0xC0, 0x20, 0x00, 0x0C, 0x1F, 0xAC, 0x20, 0x00, 0x0C, 0x1F, 0x98, 0x20, 0x00,
    0x0C, 0x1F, 0x84, 0x20, 0x00, 0x0C, 0x1F, 0x70, 0x20, 0x00, 0x0C, 0x1B, 0x5C, 0x20, 0x00, 0x0F,
    0x50, 0x01, 0x0D, 0x2F, 0x38, 0x04, 0x50, 0x01, 0x0B, 0x1F, 0x24, 0x50, 0x01, 0x0C, 0x1F, 0x10,
    0x20, 0x00, 0x0C, 0x2F, 0xFC, 0x03, 0xB0, 0x00, 0x0B, 0x2F, 0xE8, 0x03, 0x90, 0x01, 0x0C, 0x1F,
    0x03, 0x90, 0x01, 0x0C, 0x1F, 0x03, 0x90, 0x01, 0x0C, 0x1F, 0x03, 0x90, 0x01, 0x0C, 0x1F, 0x03,
    0x90, 0x01, 0x0C, 0x1F, 0x03, 0x90, 0x01, 0x0C, 0x1F, 0x03, 0x70, 0x01, 0x1B, 0x2F, 0x4C, 0x03,
    0x70, 0x01, 0x0B, 0x2F, 0x38, 0x03, 0x50, 0x01, 0x0B, 0x2F, 0x24, 0x03, 0x90, 0x01, 0x0C, 0x1F,
    0x03, 0x90, 0x01, 0x0C, 0x1F, 0x02, 0x90, 0x01, 0x0C, 0x1F, 0x02, 0x90, 0x01, 0x0C, 0x1F, 0x02,
    0x90, 0x01, 0x0C, 0x1F, 0x02, 0x90, 0x01, 0x0C, 0x1F, 0x02, 0x90, 0x01, 0x0C, 0x1F, 0x02, 0x90,
    0x01, 0x0C, 0x1F, 0x02, 0x90, 0x01, 0x0C, 0x1F, 0x02, 0x90, 0x01, 0x0B, 0x2F, 0x5C, 0x02, 0x04,
    0x00, 0x5B, 0x00, 0x01, 0x00, 0x22, 0x60, 0x02, 0x04, 0x00, 0x01, 0x30, 0x05, 0x52, 0x02, 0x00,
    0x00, 0x6C, 0x02, 0xDC, 0x08, 0x22, 0x78, 0x02, 0x04, 0x00, 0x00, 0xB8, 0x00, 0x22, 0x7C, 0x02,
    0xDC, 0x00, 0x00, 0x4F, 0x03, 0x13, 0x90, 0x0C, 0x08, 0x10, 0x05, 0xA8, 0x05, 0x80, 0x02, 0x00,
    0x00, 0x9C, 0x02, 0x00, 0x00, 0x06, 0xD0, 0x05, 0x12, 0x02, 0x04, 0x00, 0x13, 0x07, 0x48, 0x01,
    0x00, 0x2C, 0x08, 0x1F, 0xC4, 0x04, 0x00, 0xFF, 0x79, 0x2F, 0x00, 0xE0, 0x04, 0x00, 0x57, 0x01,
    0x60, 0x07, 0x02, 0x54, 0x02, 0x00, 0x4C, 0x02, 0x11, 0xE0, 0x60, 0x07, 0x03, 0x10, 0x00, 0x10,
    0x01, 0x4C, 0x0B, 0x16, 0x02, 0xB3, 0x0A, 0x1B, 0x02, 0x04, 0x03, 0x04, 0x30, 0x00, 0x17, 0x20,
    0x30, 0x00, 0x17, 0x18, 0x30, 0x00, 0x1F, 0x03, 0x30, 0x00, 0x04, 0x26, 0xF8, 0x01, 0x30, 0x00,
    0x26, 0xF0, 0x01, 0x30, 0x00, 0x1F, 0x04, 0x30, 0x00, 0x04, 0x17, 0xD0, 0x30, 0x00, 0x17, 0xC8,
    0x30, 0x00, 0x0D, 0x4B, 0x0B, 0x1F, 0xE0, 0x04, 0x00, 0xFF, 0x78, 0x2F, 0x24, 0x00, 0x04, 0x00,
    0x0F, 0x11, 0x0A, 0x44, 0x0D, 0xF1, 0x0A, 0x01, 0x00, 0x0C, 0x00, 0x02, 0x00, 0x0D, 0x00, 0x03,
    0x00, 0x0E, 0x00, 0x04, 0x00, 0x0F, 0x00, 0x05, 0x00, 0x10, 0x00, 0x06, 0x00, 0x11, 0x00, 0x07,
    0x20, 0x00, 0x13, 0x18, 0x2C, 0x00, 0x10, 0x30, 0xF0, 0x01, 0x12, 0x03, 0x02, 0x00, 0x0E, 0x3C,
    0x0D, 0x0E, 0x0C, 0x02, 0x04, 0xB0, 0x05, 0x80, 0xD0, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

native_var_t native_vars[] = {
    { NATIVE_VAR_TYPE_NONE, 0, 0 },
};

