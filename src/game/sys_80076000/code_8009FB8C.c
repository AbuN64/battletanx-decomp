#include "include_asm.h"

#include "game/sys_80076000.h"
#include "shared/bt_unit.h"
#include "shared/bt_span_1000_code_8010BFDC.h"
#include "shared/bt_player.h"
#include "span_1000/code_8007EBA0.h"
#include "span_1000/code_8008F4EC.h"
s32 func_8009FB8C(CombatUnit *unit) {
    s32 var_v0;

    var_v0 = 0;
    if (unit->value10 == 0) {
        var_v0 = 1;
        if (unit->value98 == 0) {
            var_v0 = 0;
            if ((D_801B4AA8 - 0x5A) >= unit->value4B0) {
                if (unit->value0C != 0) {
                    return (D_801B4AA8 - 0x2D) < unit->value4B4;
                }
                var_v0 = 1;
                return var_v0;
            }
            return var_v0;
        }
        return var_v0;
    }
    return var_v0;
}

u8 func_8009FBE4(CombatUnit *unit) {
    PlayerRecord *player = func_800A6688(unit->player);
    return player->team;
}

INCLUDE_ASM("span_1000", func_8009FC0C);
INCLUDE_ASM("span_1000", func_8009FCD0);
INCLUDE_ASM("span_1000", func_8009FD94);
INCLUDE_ASM("span_1000", func_8009FEE0);
INCLUDE_ASM("span_1000", func_800A0134);
INCLUDE_ASM("span_1000", func_800A0218);
INCLUDE_ASM("span_1000", func_800A037C);
#include "game/sys_80076000.h"
#include "shared/bt_unit.h"
void func_800A0380(void) {
    s32 i;
    for (i = 0; i < 20; i++) {
        D_802D8180[i].active = 0;
        D_802D8180[i].visible = 0;
    }
}

INCLUDE_ASM("span_1000", func_800A03B8);
INCLUDE_DATA("span_1000", D_800A03F8);
