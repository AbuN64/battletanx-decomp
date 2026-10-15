#include "game/sys_80076000.h"
#include "shared/bt_audio_callbacks.h"
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
    prev = D_auto_801257A8 * 1000000ULL / D_80145DA0 / 1000000ULL;
    if (prev < cur) {
        D_auto_80125788 = D_auto_801257B4;
        D_auto_801257B4 = 0;
        var_s0 = 0x14;
        if (func_8007C6D8() != 0) {
            var_s0 = 0x1A;
        }
        if (var_s0 < D_auto_80125788) {
            func_800862E8();
        } else {
            func_800862B4();
        }
    } else {
        D_auto_801257B4 += 1;
        func_800F38F4();
    }
    if (D_auto_8012578C != 2) {
        delta = now - D_auto_801257A8;
        D_auto_801257A0 += delta;
        D_auto_801257B0 = ((f32) (delta * 1000000ULL / D_80145DA0) * 30.0f) / 1000000.0f;
    }
    D_auto_801257A8 = now;
    D_auto_801B4AA8 = (u32) ((D_auto_801257A0 - D_auto_801B4AC8) * 1000000ULL / D_80145DA0 * 30ULL / 1000000ULL);
}

              /* size 0x0 */


s32 func_8007B1DC(void) {
    return D_auto_801B4AA8;
}

s32 func_8007B1EC(f32 arg0) {
    return (s32) (arg0 * D_auto_800710FC);
}
