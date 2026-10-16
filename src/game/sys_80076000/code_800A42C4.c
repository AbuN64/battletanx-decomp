#include "shared/bt_span_1000_code_800A27D0.h"
#include "shared/bt_types.h"
#include "shared/bt_callback_word.h"
#include "game/sys_80076000.h"
#include "shared/bt_player.h"
u8 func_800A42C4(CallbackWord *arg0) {
    return arg0->flag;
}

void func_800A42D0(PlayerRecord *player, s32 unused, CombatUnit *unit)
{
    Vec3f **table;
    if (player->soundMode == 1) {
        table = D_auto_80126140[func_8007AAA0() >= 3];
    } else {
        table = D_auto_80126128[func_8007AAA0() >= 3];
    }
    func_80078654(&player->camera, table[unit->kind]);
    func_800786D4(&player->camera, 2);
}
