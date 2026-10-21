#include "include_asm.h"

INCLUDE_ASM("span_1000", func_8009E3A4);
#include "shared/bt_types.h"
#include "game/sys_80076000.h"
#include "shared/bt_records.h"
#include "shared/bt_externs.h"

void func_8009EDAC(Unknown8009EDAC *context) { func_8009D4DC(context->value0C); }
INCLUDE_ASM("span_1000", func_8009EDD0);
INCLUDE_ASM("span_1000", func_8009EEC0);
INCLUDE_ASM("span_1000", func_8009F100);
INCLUDE_ASM("span_1000", func_8009F18C);
void func_8009F34C(Unknown8009F34C_1 *object, s32 arg1, s32 arg2, s8 *result)
{
    if (object->value0C->value1C > 0) {
        *result = 2;
        object->value10 = 0;
    }
}
INCLUDE_ASM("span_1000", func_8009F36C);
#include "shared/bt_menu_render.h"
#include "shared/bt_unit.h"

void func_8009F544(Unknown8009F544 *contact)
{
    CombatUnit *unit;

    unit = contact->value0C;
    if (unit->value458 != -1) {
        func_800798C0(unit->value458);
        unit->value458 = -1;
    }
    if (unit->value45C != -1) {
        func_800798C0(unit->value45C);
        unit->value45C = -1;
    }
    if (unit->value4F0 != -1) {
        func_800798C0(unit->value4F0);
        unit->value4F0 = -1;
    }
}
INCLUDE_ASM("span_1000", func_8009F5BC);
INCLUDE_ASM("span_1000", func_8009F5E0);
#include "shared/bt_gbi.h"

void func_8009F8EC(Unknown8009F100 *t, f32 x, f32 y)
{
    if (t->value3E0 < x) {
        t->value3E0 += x;
        t->value3E0 = ((t->value3E0) < (x) ? (t->value3E0) : (x));
    }
    if (t->value3E4 < y) {
        t->value3E4 += y;
        t->value3E4 = ((t->value3E4) < (y) ? (t->value3E4) : (y));
    }
}
INCLUDE_ASM("span_1000", func_8009F958);
INCLUDE_ASM("span_1000", func_8009FA70);
