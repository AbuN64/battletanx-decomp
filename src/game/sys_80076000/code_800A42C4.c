#include "include_asm.h"

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
        table = D_80126140[func_8007AAA0() >= 3];
    } else {
        table = D_80126128[func_8007AAA0() >= 3];
    }
    func_80078654(&player->camera, table[unit->kind]);
    func_800786D4(&player->camera, 2);
}

#include "shared/bt_span_1000_code_800A27D0.h"
#include "shared/bt_types.h"
#include "shared/bt_callback_control.h"
void func_800A4368(s32 arg0) {
    ((CallbackControl *)arg0)->value = 0xFF;
}

INCLUDE_ASM("span_1000", func_800A4374);
#include "shared/bt_navigation_mesh.h"
#include "span_1000/code_80097038.h"
#include "shared/bt_unit.h"
#include "shared/bt_records.h"
#include "shared/bt_externs.h"
static inline CombatUnit *make_unit_active(Unknown800A4500 *squad, CombatUnit *unit, s16 *slot) {
    unit->primary = 1;
    unit->flags &= 0x7FFF;
    squad->value20 = *slot;
    if (squad->value1A6 == 0 && D_80135834 != 0) {
        func_800E4344(unit, 0);
    }
    return unit;
}

CombatUnit *func_800A4500(Unknown800A4500 *squad) {
    CombatUnit *unit;
    s32 i;

    for (i = 0; i < 5; i++) {
        unit = func_800A03B8(squad->value00[i]);
        if (unit->visible & func_800A0218(unit)) {
            return make_unit_active(squad, unit, &squad->value00[i]);
        }
    }
    for (i = 0; i < 5; i++) {
        unit = func_800A03B8(squad->value00[i]);
        if (unit->visible != 0 && func_800A0134(unit) > 0) {
            return make_unit_active(squad, unit, &squad->value00[i]);
        }
    }
    return 0;
}
INCLUDE_ASM("span_1000", func_800A4610);
INCLUDE_ASM("span_1000", func_800A47AC);
INCLUDE_ASM("span_1000", func_800A4A00);
#include "shared/bt_span_1000_code_800A27D0.h"
#include "shared/bt_types.h"
#include "shared/bt_span_1000_code_8007A470.h"
#include "span_1000/code_8007EBA0.h"
#include "span_1000/code_800A27D0.h"
/* func_800A4A64 -- appends the point arg1 to the player's one-entry point list and keeps the
 * first point's id from func_800A6AB4. */



void func_800A4A64(s32 arg0, f32 *arg1, s32 arg2, s32 arg3) {
    PlayerRecord *player;
    s32 id;

    if (arg0 < func_8007AAB0()) {
        player = func_800A6688(arg0 & 0xFFFF);
        if (player->pointCount != 1) {
            player->points[player->pointCount].x = arg1[1];
            player->points[player->pointCount].z = arg1[0];
            id = func_800A6AB4(arg0 & 0xFF, arg1, arg2, arg3);
            if (player->pointCount == 0) {
                player->pointId = id;
            }
            player->pointCount = player->pointCount + 1;
        }
    }
}

INCLUDE_ASM("span_1000", func_800A4B2C);
