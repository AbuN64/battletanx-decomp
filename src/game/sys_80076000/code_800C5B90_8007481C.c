#include "include_asm.h"

#include "game/sys_80076000.h"
#include "shared/bt_unit.h"
#include "shared/bt_player.h"
#include "span_1000/code_800E9538.h"



s32 func_800E8DFC(void *entity, s16 unitId)
{
    CombatUnit *unit = func_800A03B8(unitId);
    f32 point[2];
    s32 result;

    point[1] = unit->position[0];
    point[0] = unit->position[2];
    func_800E28DC(entity, point, 0, &result, 0);
    return (u32)result >> 31;
}

f32 func_800E8E5C(struct ResetState *context) {
    PlayerRecord *owner = context->owner;
    return owner->linkedId != 0xFF ? 1.0f : 0.0f;
}

INCLUDE_RODATA("span_1000", R_80074820);
INCLUDE_RODATA("span_1000", R_80074828);
INCLUDE_RODATA("span_1000", R_8007482C);
INCLUDE_RODATA("span_1000", R_80074830);
INCLUDE_RODATA("span_1000", R_80074834);
INCLUDE_RODATA("span_1000", R_80074838);
INCLUDE_RODATA("span_1000", R_8007483C);
INCLUDE_RODATA("span_1000", R_80074840);
INCLUDE_RODATA("span_1000", R_80074844);
INCLUDE_RODATA("span_1000", R_80074848);
INCLUDE_RODATA("span_1000", R_80074850);
INCLUDE_RODATA("span_1000", R_80074854);
INCLUDE_RODATA("span_1000", R_80074858);
INCLUDE_ASM("span_1000", func_800E8E84);
INCLUDE_ASM("span_1000", func_800E8EB4);
INCLUDE_ASM("span_1000", func_800E8F1C);
INCLUDE_ASM("span_1000", func_800E8F84);
INCLUDE_ASM("span_1000", func_800E9008);
INCLUDE_ASM("span_1000", func_800E9098);
INCLUDE_ASM("span_1000", func_800E90C0);
INCLUDE_ASM("span_1000", func_800E90E8);
INCLUDE_ASM("span_1000", func_800E9148);
INCLUDE_ASM("span_1000", func_800E91AC);
#include "game/sys_80076000.h"
#include "shared/bt_unit.h"
#include "span_1000/code_800E9538.h"
f32 func_800E9200(struct ResetState *context)
{
    f32 weight;
    CombatUnit *unit = context->unk8;
    if (unit->secondaryState == 1 && func_auto_800E3470(unit->secondaryTarget)) {
        weight = D_auto_80074848;
    } else {
        weight = 0.0f;
    }
    return D_auto_8007484C - weight;
}

INCLUDE_ASM("span_1000", func_800E925C);
INCLUDE_ASM("span_1000", func_800E9288);
INCLUDE_ASM("span_1000", func_800E92B8);
