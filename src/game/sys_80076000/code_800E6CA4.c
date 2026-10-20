#include "include_asm.h"
#include "shared/bt_unit.h"

#include "shared/bt_span_1000_code_800E5328.h"
#include "shared/bt_types.h"
#include "shared/bt_span_1000_code_800E0B00.h"










/* Tests whether two points remain within the object's scaled distance threshold. */



/* extern */

s32 func_800E6CA4(CombatUnit *unit, s32 arg1) {
    f32 sp10[4];
    f32 temp_f20;
    f32 temp_f4;
    f32 arg0_2;
    f32 temp_f6;
    s32 var_v0;
    float temp_2;

    temp_f4 = unit->railZ;
    sp10[1] = temp_f4;
    temp_f6 = unit->railX;
    sp10[0] = temp_f6;
    sp10[3] = temp_f4 + (unit->railDirZ * unit->railLength);
    sp10[2] = temp_f6 + ((arg0_2 = unit->railDirX) * unit->railLength);
    temp_f20 = func_800E1A20(arg1, &sp10[0]);
    temp_2 = temp_f20 + func_800E1A20(arg1, &sp10[2]);
    var_v0 = 1;
    if (!(temp_2 < (unit->railLength * 1.2f))) {
        var_v0 = 0;
    }
    return var_v0;
}

INCLUDE_RODATA("span_1000", D_800746C8);
INCLUDE_RODATA("span_1000", D_800746D4);
INCLUDE_RODATA("span_1000", D_800746D8);
INCLUDE_RODATA("span_1000", D_800746DC);
INCLUDE_RODATA("span_1000", D_800746E0);
INCLUDE_RODATA("span_1000", D_800746E8);
INCLUDE_DATA("span_1000", D_800746EC);
INCLUDE_RODATA("span_1000", D_800746F0);
INCLUDE_RODATA("span_1000", D_800746FC);
INCLUDE_RODATA("span_1000", D_80074704);
INCLUDE_RODATA("span_1000", D_8007470C);
INCLUDE_ASM("span_1000", func_800E6D58);
#include "shared/bt_span_1000_code_800E5328.h"
#include "game/sys_80076000.h"
#include "shared/bt_types.h"
#include "span_1000/code_800E9538.h"

s32 func_800E6FA0(void) {
    return -1;
}

s32 func_800E6FA8(void) {
    return -1;
}

s32 func_800E6FB0(struct ResetState *arg0) {
    func_800E986C(arg0->unk8, 0x1003, 0);
    return -1;
}

#include "game/sys_80076000.h"
#include "shared/bt_types.h"

s32 func_800E6FD8(struct ResetState *context) {
    func_800E9E5C(context);
    return -1;
}

INCLUDE_ASM("span_1000", func_800E6FF8);
INCLUDE_ASM("span_1000", func_800E7064);
INCLUDE_ASM("span_1000", func_800E70B0);
INCLUDE_ASM("span_1000", func_800E70C4);
INCLUDE_ASM("span_1000", func_800E70DC);
INCLUDE_ASM("span_1000", func_800E7168);
#include "game/sys_80076000.h"
#include "shared/bt_types.h"
#include "span_1000/code_800E9538.h"

s32 func_800E72FC(struct ResetState *arg0) {
    func_80099D90(arg0->unk8, 0);
    return -1;
}

#include "game/sys_80076000.h"
#include "shared/bt_types.h"
#include "span_1000/code_800E9538.h"

s32 func_800E7320(struct ResetState *arg0) {
    func_800E7168(arg0, 8);
    return -1;
}

s32 func_800E7340(struct ResetState *arg0) {
    func_800E7168(arg0, 3);
    return -1;
}

s32 func_800E7360(struct ResetState *arg0) {
    func_800E7168(arg0, 2);
    return -1;
}

INCLUDE_ASM("span_1000", func_800E7380);
INCLUDE_ASM("span_1000", func_800E7394);
INCLUDE_ASM("span_1000", func_800E73A4);
#include "game/sys_80076000.h"
#include "shared/bt_types.h"
#include "span_1000/code_800E9538.h"
#include "shared/bt_unit.h"
#include "shared/bt_span_1000_code_8007A470.h"

s32 func_800E73BC(struct ResetState *arg0) {
    func_800E4494(arg0->unk8);
    return -1;
}

s32 func_800E73E0(struct ResetState *context) {
    f32 amount = context->params[0];
    s32 now = func_8007B1DC();
    s32 delay = (amount * D_800746E8) / D_800746EC;
    CombatUnit *unit = context->unk8;
    unit->deadline = now + delay;
    return -1;
}

s32 func_800E7448(struct ResetState *context) {
    CombatUnit *unit = context->unk8;
    unit->deadline = 0;
    return -1;
}

#include "game/sys_80076000.h"
#include "shared/bt_unit.h"
s32 func_800E7458(struct ResetState *context) {
    CombatUnit *unit = context->unk8;
    unit->threshold = unit->health - 1;
    return -1;
}

s32 func_800E7470(struct ResetState *context) {
    CombatUnit *unit = context->unk8;
    unit->threshold = unit->health / 2;
    return -1;
}

INCLUDE_ASM("span_1000", func_800E7490);
INCLUDE_ASM("span_1000", func_800E7560);
INCLUDE_ASM("span_1000", func_800E75D4);
INCLUDE_ASM("span_1000", func_800E7628);
