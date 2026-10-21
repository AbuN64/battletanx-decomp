#include "include_asm.h"

#include "shared/bt_types.h"
#include "game/sys_80076000.h"
#include "span_1000/code_80097038.h"
#include "shared/bt_player.h"
#include "shared/bt_records.h"
#include "shared/bt_externs.h"

void func_800E4820(u16 slot)
{
    s16 *members = func_800A6688(slot);
    Unknown800E4820 query;
    Unknown800A5CD0 *unit;
    s16 id;
    u16 i;

    for (i = 0; i < 5; i++) {
        id = members[i];
        unit = func_800A03B8(id);
        if (unit->value01 == 0) {
            continue;
        }
        if (func_800E3470(unit)) {
            continue;
        }
        if (unit->value98 == 0) {
            if (unit->valueCC != 0 && unit->valueD4 == 16) {
                func_800E9894(&query, id);
                func_800EA1FC(&query, 0);
            }
        } else if (unit->valueCC != 0 && unit->valueD4 != 16) {
            func_800E9894(&query, id);
            func_800EA1FC(&query, 0);
            func_800EA1B8(query.value10, 16);
        }
    }
}
INCLUDE_ASM("span_1000", func_800E493C);
#include "shared/bt_types.h"
#include "game/sys_80076000.h"
#include "shared/bt_span_1000_code_8007A470.h"


void func_800E4A18(s32 arg0) {
    D_8033AAC8[arg0 & 0xFFFF] = 1;
}

void func_800E4A38(void) {
    u16 i;
    for (i = 0; i < func_8007AAB0(); i++) {
        D_8033AAC8[i] = 1;
    }
}

INCLUDE_ASM("span_1000", func_800E4AA4);
void func_800E4D2C(Unknown800E4D2C *fields)
{
    fields->value2E = 0;
    fields->value4E = 0;
    fields->value06 = 0;
    fields->value26 = 0;
    fields->value50 = 0;
}
#include "shared/bt_bt_gbi.h"

void func_800E4D44(Unknown800E4D44 *lists, s16 id)
{
    s16 linkedId;
    s16 *linkedIds;
    s32 i;
    s32 index;

    linkedIds = func_800A6688(id & 0xFFFF);
    lists->value00[lists->value06] = id;
    lists->value06++;
    for (i = 0; (u32)(i & 0xFFFF) < 5U; i++) {
        index = i & 0xFFFF;
        linkedId = linkedIds[index];
        func_800A03B8(linkedId);
        lists->value08[lists->value26] = linkedId;
        lists->value26++;
    }
}
INCLUDE_ASM("span_1000", func_800E4DF8);
#include "shared/bt_span_1000_code_800E3BC0.h"
#include "shared/bt_rom_assets.h"
/* func_800E5198 -- does nothing: the return and its empty delay slot. */

void func_800E5198(void) {
}

s32 func_800E51A0(s32 index)
{
    return D_80125A68[index].alternateStart != 0;
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
    if (D_8013589D < 20) {
        CombatUnit *selected = func_800A03B8(D_8013589D);
        D_8013589E = selected->value350;
        if (selected->visible != 0 && D_8013589F != 0) {
            player->camera.anchor = selected->effect;
        } else {
            fallback = 1;
        }
    } else {
        fallback = 1;
        D_8013589E = 0;
    }
    if (fallback && ((D_8013589F != 0) & (own != 0)) && player->camera.anchor != own) {
        player->camera.anchor = own;
    }
}

INCLUDE_DATA("span_1000", D_800E529C);
