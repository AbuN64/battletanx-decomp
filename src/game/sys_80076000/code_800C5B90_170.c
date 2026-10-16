#include "game/sys_80076000.h"
#include "shared/bt_player.h"
#include "span_1000/code_800E9538.h"
s32 func_800E6970(struct ResetState *context)
{
    PlayerRecord *player = context->owner;
    func_800E3980(context->unkC, context->unk18, player->objectiveId, 1);
    return -1;
}
