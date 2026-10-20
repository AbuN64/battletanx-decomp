#include "include_asm.h"

INCLUDE_ASM("span_1000", func_800E1A20);
INCLUDE_ASM("span_1000", func_800E1A84);
INCLUDE_ASM("span_1000", func_800E1C00);
INCLUDE_ASM("span_1000", func_800E1D34);
INCLUDE_ASM("span_1000", func_800E1D40);
#include "shared/bt_types.h"
#include "game/sys_80076000.h"


f32 func_800E1ED0(void) {
    return D_800744E4;
}

INCLUDE_ASM("span_1000", func_800E1EE0);
INCLUDE_ASM("span_1000", func_800E1F14);
INCLUDE_ASM("span_1000", func_800E2058);
INCLUDE_ASM("span_1000", func_800E2110);
#include "shared/bt_types.h"
#include "shared/bt_span_1000_code_8007A470.h"
#include "game/sys_80076000.h"


f32 func_800E21B4(void) {
    return (f32) func_8007B1DC() * D_80074500;
}

INCLUDE_ASM("span_1000", func_800E21E4);
#include "shared/audio_callbacks.h"
#include "shared/bt_types.h"
#include "shared/bt_span_1000_code_800E21E4.h"
#include "shared/bt_common_draft_fields_func_800E2614_us.h"

              /* size 0x0 */

s32 func_800E2614(void *arg0) {
    s32 value = 0x10;
    ((struct Measured_func_800E2614_us_85b85564f990 *)(arg0))->value = value;
    return value;
}

              /* size 0x0 */

s32 func_800E2620(void *arg0) {
    s32 value = 0x80;
    ((struct Measured_func_800E2620_us_85b85564f990 *)(arg0))->value = value;
    return value;
}

INCLUDE_ASM("span_1000", func_800E262C);
#ifdef NON_MATCHING
#include "shared/bt_types.h"
#include "span_1000/code_80097038.h"
#include "span_1000/code_800E5328.h"
int func_800E2640(struct Rec *arg0) {
    s16 temp_v0;
    s16 temp_v0_2;
    s16 var_s1;
    s32 temp_s0;
    s32 temp_v1_2;
    s32 var_v0;
    u8 temp_v1;

    temp_v1 = arg0->b;
    temp_v0 = temp_v1 * 5;
    var_s1 = temp_v0;
    temp_v1_2 = temp_v0 + 5;
    if (temp_v0 < temp_v1_2) {
        var_v0 = temp_v1 * 0x50000;
loop_2:
        temp_s0 = var_v0 >> 0x10;
        temp_v0_2 = var_s1 + 1;
        if (arg0 == func_800A03B8(temp_s0)) {
            return temp_s0;
        }
        var_s1 = temp_v0_2;
        var_v0 = var_s1 << 0x10;
        if (temp_v0_2 >= temp_v1_2) {
            /* Duplicate return node #6. Try simplifying control flow for better match */
            return 0xFF;
        }
        goto loop_2;
    }
    return 0xFF;
}
#else
INCLUDE_ASM("span_1000", func_800E2640);
#endif
INCLUDE_ASM("span_1000", func_800E26DC);
#include "shared/bt_types.h"
#include "game/sys_80076000.h"
#include "shared/bt_span_1000_code_800E0B00.h"
#include "shared/bt_span_1000_code_800F29F0.h"
s32 func_800E27E4(u16 angle, u16 reference) {
    u16 delta;
    if (angle > reference) {
        delta = angle - reference;
        return delta < 0x8000;
    }
    delta = reference - angle;
    return delta > 0x8000;
}

u16 func_800E2820(f32 *from, f32 *to)
{
    f32 offset[2];
    f32 length;
    u16 heading;
    offset[1] = to[1] - from[1];
    offset[0] = to[0] - from[0];
    length = func_800E0BC4(offset);
    offset[1] /= length;
    offset[0] /= length;
    if (offset[1] < 0.0f) {
        heading = -func_800F3BE4(offset[0]);
    } else {
        heading = func_800F3BE4(offset[0]);
    }
    return heading;
}

#include "shared/bt_types.h"
#include "game/sys_80076000.h"
s32 func_800E289C(s32 from, s32 to) {
    to -= from;
    if (to > 0) {
        if (to > 0x8000) {
            return to - 0xFFFF;
        }
        return to;
    }
    if (to < -0x8000) {
        return to + 0xFFFF;
    }
    return to;
}

INCLUDE_ASM("span_1000", func_800E28DC);
