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
#include "shared/bt_span_1000_code_800E0B00.h"
#include "shared/bt_records.h"
#include "shared/bt_externs.h"

void func_800E2058(Unknown800E2058_1 *unit, f32 *point)
{
    Unknown800E2058 *goal = &unit->value334;
    f32 delta[2];
    f32 scale;

    if (point == 0) {
        if (unit->valueA4 == 0) {
            return;
        }
        delta[1] = unit->valueA4[1] - unit->value24;
        delta[0] = unit->valueA4[0] - unit->value2C;
        scale = D_800744F8 / func_800E0BC4(delta);
        goal->value04 = unit->valueA4[1] + delta[1] * scale;
        goal->value00 = unit->valueA4[0] + delta[0] * scale;
    } else {
        goal->value04 = point[1];
        goal->value00 = point[0];
    }
    goal->value10 = 0;
    goal->value15 = 1;
    goal->value14 = 1;
}
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
#include "shared/bt_unit.h"

              /* size 0x0 */

s32 func_800E2614(CombatUnit *unit) {
    s32 value = 0x10;
    unit->value40A = value;
    return value;
}

              /* size 0x0 */

s32 func_800E2620(CombatUnit *unit) {
    s32 value = 0x80;
    unit->value40A = value;
    return value;
}

s32 func_800E262C(Unknown800E262C *member)
{
    return ((member->value14 >> 5) ^ 1) & 1;
}
#include "span_1000/code_80097038.h"

s32 func_800E2640(Unknown800E2640 *unit) {
    s16 i;
    s32 start;

    start = unit->value04 * 5;
    for (i = start; i < start + 5; i++) {
        if (unit == func_800A03B8(i)) {
            return i;
        }
    }
    return 0xFF;
}
static inline s16 find_unit_member_id(CombatUnit *unit) {
    s16 i;

    s32 base;

    base = unit->player * 5;
    for (i = base; i < base + 5; i++) {
        if (unit == func_800A03B8(i)) {
            return i;
        }
    }
    return 0xFF;
}

void func_800E26DC(CombatUnit *unit, u8 mode) {
    Unknown800E26DC_2 context;
    s32 previous;

    previous = unit->value350;
    unit->value350 = mode;
    if (mode == 2) {
        unit->value40A = 0x80;
        if (previous == 1 && !(unit->flags & 4)) {
            func_800E9894(&context, find_unit_member_id(unit));
            func_800EA1FC(&context, 0);
            func_800EA1B8(context.value10, 0xB);
        }
    } else {
        unit->value40A = 0x10;
    }
}
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
