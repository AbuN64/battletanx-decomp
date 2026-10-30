#include "include_asm.h"

INCLUDE_ASM("span_1000", func_800E3C34);
INCLUDE_ASM("span_1000", func_800E3CF0);
INCLUDE_ASM("span_1000", func_800E3F90);
#include <ultra64.h>
#include "game/sys_80076000.h"
#include "span_1000/code_800E21E4.h"
#include "shared/bt_records.h"
#include "shared/bt_externs.h"

void func_800E4094(s16 unitId) {
    s16 other;

    for (other = 0; other < 20; other++) {
        if (unitId != other) {
            func_800E566C(func_800E52A0(unitId, other));
        }
    }
}
INCLUDE_ASM("span_1000", func_800E4104);
#include "span_1000/code_80097038.h"
#include "shared/bt_unit.h"
static inline s16 find_unit_member_id(CombatUnit *unit) {
    s16 i;
    s32 base;

    base = unit->player * 5;
    for (i = base; i < base + 5; i++) {
        if (unit == func_800A03B8(i)) {
            return i;
        }
    }
    return 0xFF;
}
static inline void set_unit_mode(CombatUnit *unit, u8 mode) {
    Unknown800E26DC_2 context;
    s32 previous;

    previous = unit->value350;
    unit->value350 = mode;
    if (mode == 2) {
        unit->value40A = 0x80;
        if (previous == 1 && !(unit->flags & 4)) {
            func_800E9894(&context, find_unit_member_id(unit));
            func_800EA1FC(&context, 0);
            func_800EA1B8(context.value10, 0xB);
        }
    } else {
        unit->value40A = 0x10;
    }
}

void func_800E4344(CombatUnit *unit, s32 engaged) {
    if (unit->visible) {
        if (engaged) {
            set_unit_mode(unit, 2);
        } else {
            set_unit_mode(unit, 1);
        }
    } else {
        set_unit_mode(unit, 0);
    }
}
INCLUDE_ASM("span_1000", func_800E445C);
#include "game/sys_80076000.h"
#include "shared/bt_player.h"
#include "shared/bt_unit.h"
#include "span_1000/code_8007EBA0.h"
void func_800E4494(CombatUnit *unit)
{
    PlayerRecord *entity;
    u16 count;

    func_800983E0(unit, 10000, unit->player, 0);
    entity = func_800A6688(unit->player);
    count = entity->killCount;
    if (count < 10000) {
        entity->killCount = count + 1;
    }
}

void func_800E44EC(Unknown800E44EC_raw0 *arg0, Unknown800E44EC_raw1 *arg1) {
    u16 temp_v1;
    u8 var_a0;
    Unknown800E44EC_raw2 *temp_v0;

    if ((arg0->value98) != 0) {
        func_800983E0(arg1, 0x2710, (arg1->value04), 0);
        var_a0 = (arg1->value04);
        goto block_4;
    }
    if ((arg1->value98) != 0) {
        func_800983E0(arg0, 0x2710, (arg0->value04), 0);
        var_a0 = (arg0->value04);
block_4:
        temp_v0 = func_800A6688(var_a0);
        temp_v1 = (temp_v0->value1AC);
        if (temp_v1 < 0x2710U) {
            (temp_v0->value1AC) = (u16) (temp_v1 + 1);
        }
    }
}
void func_800E4584(Unknown800E4584_1 *first, Unknown800E4584_1 *second)
{
    Unknown800A5D5C *record;
    u8 entityId;
    Unknown800E4584 *contact = &second->value9C;

    if (first->value9C.value00 == 8 && first->value9C.value14 == second) {
        first->value9C.value11 = 1;
    } else if (contact->value00 == 8 && contact->value14 == first) {
        contact->value11 = 1;
    }

    if (first->value98 != 0) {
        func_800983E0(second, 10000, second->value04, 0);
        entityId = second->value04;
    } else if (second->value98 != 0) {
        func_800983E0(first, 10000, first->value04, 0);
        entityId = first->value04;
    } else {
        return;
    }

    record = func_800A6688(entityId);
    if (record->value1AC < 10000) {
        record->value1AC++;
    }
}
INCLUDE_ASM("span_1000", func_800E4660);
#include "shared/bt_span_1000_code_800E3BC0.h"

/* func_800E480C -- does nothing.
 *
 * Two words: the return and an empty delay slot. The cartridge keeps the entry point, so
 * something calls it; what it was meant to do, if anything, is not in the image.
 */

void func_800E480C(void) {
}

              /* size 0x0 */

void func_800E4814(void) {

}

INCLUDE_DATA("span_1000", D_800E481C);
