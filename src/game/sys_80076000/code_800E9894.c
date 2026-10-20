#include "include_asm.h"

#include "shared/bt_span_1000_code_800A6864.h"
#include "shared/bt_player.h"
#include "shared/bt_span_1000_code_800E9200.h"
#include "shared/bt_span_1000_code_800E9B9C.h"
#include "shared/bt_types.h"


























#include "span_1000/code_8007EBA0.h"
#include "span_1000/code_80097038.h"


                      /* extern */
                            /* extern */











/* Initializes an object from the selected resource and its metadata. */
void func_800E9894(AiUnitContext *arg0, s16 arg1) {
    s16 temp_a1;
    u8 temp_v1;
    CombatUnit *temp_a0;
    CombatUnit *temp_v0;
    PlayerRecord *player;
    temp_a1 = arg1 & 0xFF;
    arg0->mode = 2;
    arg0->unitId = temp_a1;
    temp_v0 = func_800A03B8(arg1, temp_a1);
    arg0->unit = temp_v0;
    arg0->playerId = (s16) temp_v0->player;
    player = func_800A6688(arg0->unit->player);
    arg0->player = player;
    temp_v1 = player->team;
    temp_a0 = arg0->unit;
    arg0->value40 = 0;
    arg0->value44 = 0;
    arg0->teamId = temp_v1;
    arg0->team = &D_8033A980[temp_v1 & 0xFF];
    arg0->selection = &temp_a0->state;
    arg0->queue = &temp_a0->callbackQueue;
}
INCLUDE_ASM("span_1000", func_800E9940);
