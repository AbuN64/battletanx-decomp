#include "game/sys_80076000.h"
#include "shared/bt_player.h"
#include "span_1000/code_800E9538.h"
f32 func_800E86C8(struct ResetState *context) {
    PlayerRecord *owner = context->owner;
    return owner->objectiveId == 2 ? 1.0f : 0.0f;
}
