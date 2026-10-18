#include "include_asm.h"

#include "game/sys_80076000.h"
#include "shared/bt_ai_team.h"
f32 func_800E9B9C(AiScoreContext *context)
{
    CombatUnit *member;
    f32 score;

    if (context->memberPlay == context->slotPlay) {
        return 1.0f;
    }
    member = context->unit;
    switch (member->kind) {
    case 2:
        score = 0.8f;
        if (member->flags & 4) {
            score = 0.1f;
        }
        return score;
    case 0:
        return 0.9f;
    case 1:
    default:
        return 0.5f;
    }
}

INCLUDE_RODATA("span_1000", R_80074928);
INCLUDE_RODATA("span_1000", R_80074948);
INCLUDE_RODATA("span_1000", R_8007494C);
INCLUDE_ASM("span_1000", func_800E9C24);
INCLUDE_ASM("span_1000", func_800E9D30);
INCLUDE_ASM("span_1000", func_800E9D80);
