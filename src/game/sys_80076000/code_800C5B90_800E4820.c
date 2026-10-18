#include "include_asm.h"

INCLUDE_ASM("span_1000", func_800E4820);
#include "shared/bt_types.h"
#include "game/sys_80076000.h"
#include "shared/bt_span_1000_code_8007A470.h"


void func_800E4A18(s32 arg0) {
    D_auto_8033AAC8[arg0 & 0xFFFF] = 1;
}

void func_800E4A38(void) {
    u16 i;
    for (i = 0; i < func_8007AAB0(); i++) {
        D_auto_8033AAC8[i] = 1;
    }
}

INCLUDE_ASM("span_1000", func_800E4AA4);
INCLUDE_ASM("span_1000", func_800E4D2C);
INCLUDE_ASM("span_1000", func_800E4D44);
INCLUDE_ASM("span_1000", func_800E4DF8);
#include "shared/bt_span_1000_code_800E3BC0.h"
#include "shared/bt_rom_assets.h"
/* func_800E5198 -- does nothing: the return and its empty delay slot. */

void func_800E5198(void) {
}

s32 func_800E51A0(s32 index)
{
    return D_auto_80125A68[index].alternateStart != 0;
}

#include "shared/bt_span_1000_code_800E3BC0.h"
#include "game/sys_80076000.h"
#include "shared/bt_player.h"
#include "shared/bt_unit.h"
#include "span_1000/code_8007EBA0.h"

void func_800E51B8(void) {
}

void func_800E51C0(void)
{
    PlayerRecord *player = func_800A6688(0);
    void *own;
    s32 fallback;
    CombatUnit *unit;

    fallback = 0;
    unit = func_800A03B8(player->selectedUnit);
    if (unit == 0) {
        own = 0;
    } else {
        own = unit->effect;
    }
    if (D_auto_8013589D < 20) {
        CombatUnit *selected = func_800A03B8(D_auto_8013589D);
        D_auto_8013589E = selected->value350;
        if (selected->visible != 0 && D_auto_8013589F != 0) {
            player->camera.anchor = selected->effect;
        } else {
            fallback = 1;
        }
    } else {
        fallback = 1;
        D_auto_8013589E = 0;
    }
    if (fallback && ((D_auto_8013589F != 0) & (own != 0)) && player->camera.anchor != own) {
        player->camera.anchor = own;
    }
}

INCLUDE_DATA("span_1000", D_800E529C);
