#include "include_asm.h"

INCLUDE_ASM("span_1000", func_800C5B90);
INCLUDE_ASM("span_1000", func_800C5C60);
INCLUDE_ASM("span_1000", func_800C7D74);
#include "shared/bt_types.h"
#include "game/sys_80076000.h"
extern s32 func_80096920(s32 controller, s32 repeat);
extern void func_800C80E0(void);
extern s32 D_80134010[];
extern u8 D_80135773;
extern s32 D_80327EE8;
extern s32 D_80327EF0;
s32 func_800C7FC0(void);
s32 func_800C7FC0(void)
{
    s32 buttons;
    s32 result;
    s32 delta;
    s32 left;
    s32 right;
    s32 digit;
    s32 masked;
    u16 held;
    buttons = func_80096920(0, 0);
    result = 0;
    held = buttons;
    if (buttons & 1) {
        D_80327EF0 = -D_80327EF0;
    }
    if (buttons & 8) {
        D_80327EF0 = -D_80327EF0;
    }
    left = (buttons & 2) > 0;
    right = (buttons & 4) > 0;
    delta = right - left;
    D_80134010[D_80327EE8] += delta;
    if (D_80135773 == 0 &&
        D_80134010[D_80327EE8] == 1) {
        D_80134010[D_80327EE8] = delta + 1;
    }
    digit = D_80134010[D_80327EE8];
    if (digit < 0) {
        digit = 9;
    }
    masked = -(digit < 10) & digit;
    D_80134010[D_80327EE8] = masked;
    func_800C80E0();
    if (held & 0x50) {
        result = 1;
    }
    if (held & 0x20) {
        result = 2;
    }
    return result;
}

void func_80077930(s32 arg0, s32 arg1, s32 arg2);




void func_800C80E0(void) {
    s32 previousMode;
    u32 romStart;
    u32 size;
    s32 bundle;

    if (D_80134010[D_80327EE8] >= 10) {
        D_80134010[D_80327EE8] = 0;
    }
    if (D_80134010[D_80327EE8] != D_80327EE4) {
        previousMode = func_800AB95C(4);
        bundle = D_80134010[D_80327EE8];
        size = D_80134080[bundle] - D_80134058[bundle];
        romStart = D_80134058[bundle];
        func_80077930(romStart, D_803DA800, size);
        func_800F4F60(size, D_803DA800, 0x25800, D_803275F4);
        func_800AB95C(previousMode);
        D_80133FE0 = 0x40;
        D_80327EE4 = D_80134010[D_80327EE8];
    }
}

INCLUDE_ASM("span_1000", func_800C8204);
INCLUDE_ASM("span_1000", func_800C8210);
INCLUDE_ASM("span_1000", func_800C83D4);
#include "game/sys_80076000.h"
#include "shared/bt_gbi.h"
#include "shared/bt_menu_render.h"
static inline void draw_frame(f32 *value)
{
    Gfx *dl;
    Gfx *cmd;
    s32 next;
    s32 mask;

    func_8007D850();
    D_803276D4 = D_803276D0 + D_803276D8 * 0x2200;
    func_800C83D4(*value);
    cmd = D_803276D4;
    dl = D_803276D0 + D_803276D8 * 0x2200;
    D_803276D4 = cmd + 1;
    gSPEndDisplayListF3D(cmd);
    func_8007EEF8(dl);
    next = D_803276D8 + 1;
    mask = -(next < 3);
    D_803276D8 = next & mask;
    func_8007968C();
    func_8007D998();
}
s32 func_800CA398(void) {
    u8 result;
    s32 i;

    func_800C8210();
    do {
        func_800A8ECC();
        func_800A8EE0();
        result = func_800CA5BC();
        draw_frame(&D_80073700);
    } while (result == 0);
    for (i = 0; i < 3; i++) {
        draw_frame(&D_80073704);
    }
    if (result == 2) {
        return 7;
    }
    for (i = 0; i < 4; i++) {
        D_80134020[i] = D_80134A80[D_80134010[i]];
    }
    return 8;
}

#ifdef NON_MATCHING
#include "game/sys_80076000.h"
#include "shared/bt_types.h"
#include "span_1000/code_800ABFD0.h"
s32 func_800CA8C0(s32, s32 *, s32, s32);
extern s32 D_80134010;
extern s32 D_80134E58;
extern u8 D_80135773;
extern s32 D_80327614;
extern s32 D_80327F10;
extern u8 D_80327F20;
extern s32 D_80327F3C;

s32 func_800CA5BC(void) {
    s32 *temp_a1;
    s32 *temp_v0_2;
    s32 *temp_v1_2;
    s32 *temp_v1_3;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a3;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_a2;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s1;
    s32 var_v0;
    s32 var_v1;
    u8 *var_s2;

    var_s1 = func_80096920(0, 0);
    temp_v1 = D_80327614 ^ (var_s1 & 0x80);
    D_80327614 = temp_v1;
    if (temp_v1 != 0) {
        goto block_1;
    }
    temp_v0 = D_80134E58;
    var_s0 = 0;
    if (temp_v0 > 0) {
        var_s2 = &D_80327F20;
loop_4:
        if (var_s0 != 0) {
            var_s1 = func_80096920(var_s0, 0);
        }
        if (*var_s2 == 0) {
            if (var_s0 == 0) {
loop_9:
                if (var_s1 & 0x100) {
                    D_80327F3C -= 1;
                }
                if (var_s1 & 0x200) {
                    D_80327F3C += 1;
                }
                if (D_80327F3C < -2) {
                    D_80327F3C = 3;
                }
                if (D_80327F3C == -1) {
                    D_80327F3C = D_80134E58;
                }
                if ((D_80327F3C < D_80134E58) || (D_80327F3C == 4)) {
                    D_80327F3C = -2;
                }
                if ((D_80327F3C != -2) && ((&D_80328400)[D_80327F3C] == 4)) {
                    goto loop_9;
                }
            }
            var_a2 = var_s0;
            if ((D_80327F3C != -2) & (var_s0 == 0)) {
                var_a2 = D_80327F3C;
            }
            if (var_s1 & 1) {
                temp_v1_2 = (var_a2 * 4) + &D_80327F10;
                *temp_v1_2 = -*temp_v1_2;
            }
            if (var_s1 & 8) {
                temp_v1_3 = (var_a2 * 4) + &D_80327F10;
                *temp_v1_3 = -*temp_v1_3;
            }
            temp_a1 = (var_a2 * 4) + &D_80134010;
            temp_a3 = (0 - ((var_s1 & 2) != 0)) + ((var_s1 & 4) != 0);
            temp_a0 = *temp_a1 + temp_a3;
            *temp_a1 = temp_a0;
            if ((D_80135773 == 0) && (temp_a0 == 1)) {
                *temp_a1 = temp_a3 + 1;
            }
            temp_v0_2 = (var_a2 * 4) + &D_80134010;
            var_v1 = *temp_v0_2;
            if (var_v1 < 0) {
                var_v1 = 9;
            }
            temp_a0_2 = var_v1 & -(var_v1 < 0xA);
            *temp_v0_2 = temp_a0_2;
            func_800CA8C0(temp_a0_2, temp_a1, var_a2, temp_a3);
        }
        if (var_s1 & 0x10) {
            *var_s2 ^= 1;
        }
        if ((var_s0 != 0) || (var_v0 = 2, ((var_s1 & 0x20) == 0))) {
            var_s0 += 1;
            var_s2 += 1;
            if (var_s0 >= D_80134E58) {
                goto block_40;
            }
            goto loop_4;
        }
        /* Duplicate return node #45. Try simplifying control flow for better match */
        return var_v0;
    }
block_40:
    var_s0_2 = 0;
    if (temp_v0 > 0) {
loop_42:
        var_s0_2 += 1;
        if ((&D_80327F20)[var_s0_2] != 0) {
            if (var_s0_2 >= temp_v0) {
                goto block_44;
            }
            goto loop_42;
        }
block_1:
        return 0;
    }
block_44:
    var_v0 = 1;
    return var_v0;
}
#else
INCLUDE_ASM("span_1000", func_800CA5BC);
#endif
INCLUDE_ASM("span_1000", func_800CA8C0);
#include "shared/bt_types.h"
#include "game/sys_80076000.h"
#include "shared/bt_menu_render.h"
void func_80077930(s32 arg0, s32 arg1, s32 arg2);


 


void func_800CA980(void)
{
    u32 size = D_B049DCD0 - D_B049C740;

    if (size <= 0x3A980) {
        func_80077930((u32)D_B049C740, D_803275F4, size);
        func_801053B0(1);
        D_80327F40 = 0;
        D_80327F44 = 1;
        func_80079BB4(6);
        func_80079BF4((D_80125794 << 28) >> 16);
    }
}

INCLUDE_ASM("span_1000", func_800CAA04);
INCLUDE_ASM("span_1000", func_800CBDBC);
#include "shared/bt_types.h"
#include "game/sys_80076000.h"
#include "shared/bt_span_1000_code_8007A470.h"
#include "span_1000/code_800ABFD0.h"
s32 func_800CC1A8(void)
{
    s32 buttons;
    s32 delta;
    s32 item;
    buttons = func_80096920(0, 0);
    D_80327614 ^= buttons & 0x80;
    if (D_80327614 != 0) {
        return 0;
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
    D_80134E54 += delta;
    if ((D_80134E74 == 0 || D_80134E5C != 0) && D_80134E54 == 5) {
        D_80134E54 = delta + 5;
    }
    if (D_80134E54 < 0) {
        D_80134E54 = 6;
    }
    if (D_80134E54 >= 7) {
        D_80134E54 = 0;
    }
    delta = 0;
    if (buttons & 2) {
        delta--;
    }
    if (buttons & 4) {
        delta++;
    }
    item = D_80134E54;
    switch (item) {
    case 0:
        if (delta != 0) {
            func_800ABF70();
            D_80134E58 += delta;
            func_800A90E0();
            if (D_80134E58 <= 0) {
                D_80134E58 = D_80126714;
            }
            if (D_80134E58 > D_80126714) {
                D_80134E58 = 1;
            }
            if (D_80134E58 >= 2) {
                D_80134E5C = (D_80134E5C <= 0) ? 1 : D_80134E5C;
            }
        }
        break;
    case 1:
        if (delta != 0) {
            func_800ABF70();
        }
        if (D_80134E58 >= 2) {
            D_80134E5C += delta;
            if (D_80134E5C >= 5) {
                D_80134E5C = item;
            }
            if (D_80134E5C <= 0) {
                D_80134E5C = 4;
            }
        } else {
            D_80134E5C += delta;
            if (D_80134E5C >= 5) {
                D_80134E5C = 0;
            }
            if (D_80134E5C < 0) {
                D_80134E5C = 4;
            }
        }
        break;
    }
    if (buttons & 0x40) {
        D_80134E54 = 6;
        func_800ABF1C();
        return 1;
    }
    if (D_80134E54 >= 2) {
        delta = buttons & 0x10;
        if (delta) {
            func_800ABF1C();
        }
        return delta;
    }
    return 0;
}

INCLUDE_ASM("span_1000", func_800CC470);
INCLUDE_ASM("span_1000", func_800CC4E4);
INCLUDE_ASM("span_1000", func_800CDFFC);
