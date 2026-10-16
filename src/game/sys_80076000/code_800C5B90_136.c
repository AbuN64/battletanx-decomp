#include "shared/bt_span_1000_code_800D1AD0.h"
#include "game/sys_80076000.h"
#include "shared/bt_span_1000_code_8011D1A0.h"

static inline s32 decode_password(unsigned char *password, u32 *outValue)
{
    s32 value = 0;
    s32 check = 0;
    s32 i;
    s32 digit;
    s32 found;

    if (password == 0) {
        return -1;
    }
    if ((u32)func_8011D3DC(password) < 10) {
        return -1;
    }
    for (i = 0; i < 10; i++) {
        found = 0;
        for (digit = 0; digit < 16; digit++) {
            if ((u8)password[i] == D_auto_80135778[digit]) {
                if (i < 8) {
                    value += digit << ((7 - i) * 4);
                    found = 1;
                } else {
                    check += digit << ((9 - i) * 4);
                    found = 1;
                }
            }
        }
        if (!found) {
            return -1;
        }
    }
    check ^= 0xB2;
    if (check != ((value * 0x19660D + 0x5F) & 0xFF)) {
        return -1;
    }
    *outValue = value ^ 0xEFF8DF2B;
    return 0;
}
static inline u32 unpropagate_bit_stride_table(u32 value)
{
    u32 one = 1;
    s32 offset;
    u32 bit;
    s32 stride;
    u32 result;

    for (offset = 15; offset >= 0; offset--) {
        result = value;
        bit = D_auto_8013578C[offset].start;
        stride = D_auto_8013578C[offset].stride;
        if ((result >> bit) & 1) {
            for (bit += stride; bit < 32; bit += stride) {
                result ^= one << bit;
            }
        }
        value = result;
    }
    return value;
}
s32 func_800DD544(unsigned char *code, s32 *level, s32 *stage, s32 *score, s32 *lives, s32 *mode) {
    u32 value;
    s32 n;

    if (decode_password(code, &value) < 0) {
        goto fail;
    }
    value = unpropagate_bit_stride_table(value);
    n = value & 0x1F;
    *level = n;
    if (n >= 18) {
        goto fail;
    }
    if (n < 2) {
        goto fail;
    }
    *stage = (value >> 5) & 0x3F;
    *score = ((value >> 11) & 0x7FFF) * 1000;
    *mode = (value >> 26) & 3;
    *lives = value >> 28;
    if (*mode == 3) {
        goto fail;
    }
    if (*lives >= 10) {
        goto fail;
    }
    if (*lives < 0) {
        goto fail;
    }
    return 1;
fail:
    return 0;
}
