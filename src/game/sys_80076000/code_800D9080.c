#include "include_asm.h"

INCLUDE_ASM("span_1000", func_800D9080);
INCLUDE_ASM("span_1000", func_800D9134);
INCLUDE_ASM("span_1000", func_800DA9B4);
#include "shared/bt_types.h"
#include "game/sys_80076000.h"
#include "span_1000/code_800ABFD0.h"
s32 func_800DAC4C(void)
{
    s32 buttons;
    s32 result;
    s32 delta;
    s32 index;
    buttons = func_80096920(0, 0);
    D_80327614 ^= buttons & 0x80;
    if (D_80327614 != 0) {
        return 0;
    }
    result = 0;
    delta = 0;
    if (buttons & 2) {
        delta = -1;
        func_800ABF70();
    }
    if (buttons & 4) {
        delta++;
        func_800ABF70();
    }
    index = D_8013566C += delta;
    if (index < 0) {
        index = D_80328410 - 1;
    }
    D_8013566C = index;
    if (index >= D_80328410) {
        index = 0;
    }
    D_8013566C = index;
    if (buttons & 0x50) {
        result = 1;
        D_80135674 = D_801352B0[index];
    }
    if (buttons & 0x20) {
        result = 2;
    }
    return result;
}

INCLUDE_ASM("span_1000", func_800DAD5C);
#include "shared/bt_types.h"
#include "game/sys_80076000.h"
void func_800DAD60(void) {
    s32 i;
    s32 fill = ' ';
    u8 *cursor;
    D_80328420 = 0;
    D_80328424 = 0;
    D_80328440 = -1;
    D_8032843C = 0;
    D_8032843A = 0;
    D_80328428 = 0;
    for (i = 9, cursor = &D_80328430[9]; i >= 0; i--, cursor--) {
        *cursor = fill;
    }
}

void func_80077930(s32 arg0, s32 arg1, s32 arg2);




void func_800DADBC(void)
{
    u32 size = D_B04AD7E0 - D_B04AC150;

    func_80077930((u32)D_B04AC150, D_803DA800, size);
    func_800F4F60(size, D_803DA800, 0x25800, D_803275F4);
    func_801053B0(1);
}

INCLUDE_ASM("span_1000", func_800DAE30);
#include "game/sys_80076000.h"
#include "shared/bt_gbi.h"
#include "shared/bt_menu_render.h"
#include "shared/bt_types.h"
void func_80077930(s32 arg0, s32 arg1, s32 arg2);
static inline s32 load_rom_span(u8 *start, u8 *end, u8 *dst) {
    s32 size = end - start;

    func_80077930(start, dst, size);
    return size;
}
s32 func_800DC93C(void) {
    s32 size;
    u8 done;

    size = load_rom_span(D_B04AC150, D_B04AD7E0, D_803DA800);
    func_800F4F60(size, D_803DA800, 0x25800, D_803275F4);
    func_801053B0(1);
    do {
        Gfx *cmd;

        func_800A8ECC();
        func_800A8EE0();
        done = func_800DCCC0();
        func_8007D850();
        D_803276D4 = D_803276D0 + D_803276D8 * 0x2200;
        func_800DAE30(D_803276D8);
        cmd = D_803276D4++;
        gSPEndDisplayListF3D(cmd);
        func_8007EEF8(D_803276D0 + D_803276D8 * 0x2200);
        D_803276D8 = (D_803276D8 + 1 < 3) ? D_803276D8 + 1 : 0;
        func_8007968C();
        func_8007D998();
    } while (!done);
    return 2;
}

INCLUDE_ASM("span_1000", func_800DCA7C);
#include "shared/bt_types.h"
#include "game/sys_80076000.h"
#include "span_1000/code_800ABFD0.h"
s32 func_800DCCC0(void) {
    s32 count = 0;
    s32 buttons;
    s32 delta;
    s32 toggle;
    s32 input;
    s32 i;
    u8 *p;
    input = func_80096920(0, 0);
    toggle = D_80327614 ^ (input & 0x80);
    D_80327614 = toggle;
    buttons = input;
    if (toggle != 0) {
        return 0;
    }
    switch (D_80328424) {
    case 1:
        count = 10;
        break;
    case 2:
        count = 2;
        break;
    case 0:
        count = 11;
        break;
    }
    delta = 0;
    if (buttons & 1) {
        delta = -1;
        func_800ABF40();
    }
    if (buttons & 8) {
        delta++;
        func_800ABF40();
    }
    D_80328424 += delta;
    if (D_80328424 < 0) {
        D_80328424 = 2;
    }
    if (D_80328424 >= 3) {
        D_80328424 = 0;
    }
    delta = 0;
    if (buttons & 2) {
        delta = -1;
        func_800ABF70();
    }
    if (buttons & 4) {
        delta++;
        func_800ABF70();
    }
    D_80328420 += delta;
    if (D_80328420 < 0) {
        D_80328420 = count - 1;
    }
    if (D_80328420 >= count) {
        D_80328420 = 0;
    }
    if (buttons & 0x50) {
        func_800ABF1C();
        switch (D_80328424) {
        case 2:
            if (D_80328420 == 0) {
                if (D_80328428 > 0) {
                    D_8032842F[D_80328428] = ' ';
                    D_80328428--;
                }
                D_80328440 = -1;
            } else {
                func_800DCA7C();
            }
            break;
        case 1:
            if (D_8032843A != 0) {
                i = 9;
                p = &D_80328439;
                D_8032843A = 0;
                D_80328428 = 0;
                do {
                    *p = ' ';
                    i--;
                    p--;
                } while (i >= 0);
            }
            if (D_80328428 < 10) {
                D_80328430[D_80328428++] = D_8013568C[D_80328420];
            }
            break;
        case 0:
            if (D_8032843A != 0) {
                i = 9;
                p = &D_80328439;
                D_8032843A = 0;
                D_80328428 = 0;
                do {
                    *p = ' ';
                    i--;
                    p--;
                } while (i >= 0);
            }
            if (D_80328428 < 10) {
                D_80328430[D_80328428++] = D_80135680[D_80328420];
            }
            break;
        }
    }
    return buttons & 0x20;
}

#include "shared/bt_types.h"
#include "game/sys_80076000.h"


void func_800DCFCC(u32 arg0, u8 *arg1) {
    u32 key = arg0 ^ 0xEFF8DF2B;
    u32 check;

    arg1[0] = D_80135778[key >> 28];
    arg1[1] = D_80135778[(key >> 24) & 0xF];
    arg1[2] = D_80135778[(key >> 20) & 0xF];
    arg1[3] = D_80135778[(key >> 16) & 0xF];
    arg1[4] = D_80135778[(key >> 12) & 0xF];
    arg1[5] = D_80135778[(key >> 8) & 0xF];
    arg1[6] = D_80135778[(key >> 4) & 0xF];
    check = (((key * 0x19660D) + 0x5F) & 0xFF) ^ 0xB2;
    arg1[7] = D_80135778[key & 0xF];
    arg1[8] = D_80135778[check >> 4];
    arg1[9] = D_80135778[check & 0xF];
    arg1[10] = 0;
}

INCLUDE_ASM("span_1000", func_800DD0DC);
#include "shared/bt_types.h"
#include "shared/bt_span_1000_code_800D1AD0.h"
#include "game/sys_80076000.h"


u32 func_800DD200(u32 arg0, s32 arg1, s32 arg2) {
    u32 var_a0;
    u32 var_a1;

    var_a0 = arg0;
    if ((var_a0 >> arg1) & 1) {
        var_a1 = arg1 + arg2;
        if (var_a1 < 0x20U) {
            do {
                var_a0 ^= 1 << var_a1;
                var_a1 += arg2;
            } while (var_a1 < 0x20U);
        }
    }
    return var_a0;
}

u32 func_800DD244(u32 value)
{
    u32 bit;
    s32 i;
    s32 start;
    s32 stride;
    for (i = 0; i < 16; i++) {
        start = D_8013578C[i].start;
        stride = D_8013578C[i].stride;
        if ((value >> start) & 1) {
            for (bit = start + stride; bit < 32; bit += stride) {
                value ^= 1 << bit;
            }
        }
    }
    return value;
}

u32 func_800DD2A8(u32 value)
{
    u32 one = 1;
    s32 offset;
    u32 bit;
    s32 stride;
    u32 result;
    for (offset = 15; offset >= 0; offset--) {
        result = value;
        bit = D_8013578C[offset].start;
        stride = D_8013578C[offset].stride;
        if ((result >> bit) & 1) {
            for (bit += stride; bit < 32; bit += stride) {
                result ^= one << bit;
            }
        }
        value = result;
    }
    return value;
}

INCLUDE_ASM("span_1000", func_800DD310);
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
            if ((u8)password[i] == D_80135778[digit]) {
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
        bit = D_8013578C[offset].start;
        stride = D_8013578C[offset].stride;
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

INCLUDE_DATA("span_1000", D_800DD798);
