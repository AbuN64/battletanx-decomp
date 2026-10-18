#include "include_asm.h"

#include "game/sys_80076000.h"
#include "shared/bt_player.h"
#include "span_1000/code_800E9538.h"
f32 func_800E867C(struct ResetState *context) {
    PlayerRecord *owner = context->owner;
    return owner->objectiveId == 0 ? 1.0f : 0.0f;
}

INCLUDE_RODATA("span_1000", D_800747B0);
INCLUDE_ASM("span_1000", func_800E86A0);
