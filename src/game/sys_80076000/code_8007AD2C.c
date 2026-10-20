#include "include_asm.h"

#include "game/sys_80076000.h"
#include "shared/audio_callbacks.h"
#include "shared/bt_menu_render.h"
#include "shared/bt_span_1000_code_8007A470.h"
#include "shared/bt_span_1000_code_800F29F0.h"
#include "shared/bt_span_1000_code_8010BFDC.h"
#include "shared/bt_types.h"

void func_8007AD2C(void) {
    u64 now;
    u64 delta;
    s32 var_s0;
    u64 cur;
    u64 prev;

    now = func_801120A0();
    cur = now * 1000000ULL / D_80145DA0 / 1000000ULL;
    prev = D_801257A8 * 1000000ULL / D_80145DA0 / 1000000ULL;
    if (prev < cur) {
        D_80125788 = D_801257B4;
        D_801257B4 = 0;
        var_s0 = 0x14;
        if (func_8007C6D8() != 0) {
            var_s0 = 0x1A;
        }
        if (var_s0 < D_80125788) {
            func_800862E8();
        } else {
            func_800862B4();
        }
    } else {
        D_801257B4 += 1;
        func_800F38F4();
    }
    if (D_8012578C != 2) {
        delta = now - D_801257A8;
        D_801257A0 += delta;
        D_801257B0 = ((f32) (delta * 1000000ULL / D_80145DA0) * 30.0f) / 1000000.0f;
    }
    D_801257A8 = now;
    D_801B4AA8 = (u32) ((D_801257A0 - D_801B4AC8) * 1000000ULL / D_80145DA0 * 30ULL / 1000000ULL);
}

              /* size 0x0 */


s32 func_8007B1DC(void) {
    return D_801B4AA8;
}

s32 func_8007B1EC(f32 arg0) {
    return (s32) (arg0 * D_800710FC);
}

INCLUDE_RODATA("span_1000", D_800710FC);
INCLUDE_RODATA("span_1000", D_80071100);
INCLUDE_DATA("span_1000", D_80071104);
#include "shared/bt_types.h"
#include "game/sys_80076000.h"

f32 func_8007B208(s32 *r, s32 value) {
    s32 len = r[1] - r[0];
    value -= r[0];
    if (value >= len) return D_80071100;
    if (len <= 0) return D_80071100;
    if (value < 0) return 0.0f;
    return (f32)value / (f32)len;
}

u64 func_8007B268(void) {
    return D_801257A0;
}

INCLUDE_ASM("span_1000", func_8007B280);
INCLUDE_ASM("span_1000", func_8007B590);
INCLUDE_ASM("span_1000", func_8007B9E4);
INCLUDE_ASM("span_1000", func_8007BD24);
#include "shared/bt_span_1000_code_8007A470.h"
/* func_8007C298 -- does nothing.
 *
 * Two words: the return and an empty delay slot. The cartridge keeps the entry point, so
 * something calls it; what it was meant to do, if anything, is not in the image.
 */

void func_8007C298(void) {
}

INCLUDE_ASM("span_1000", func_8007C2A0);
#include "shared/bt_span_1000_code_8007A470.h"
/* func_8007C33C -- returns 11.
 *
 * A bare constant. What the eleven counts is not visible from here, so it is left as the number
 * the cartridge loads.
 */

int func_8007C33C(void) {
    return 11;
}

INCLUDE_ASM("span_1000", func_8007C344);
