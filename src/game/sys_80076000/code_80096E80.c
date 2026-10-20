#include "include_asm.h"
#include "shared/bt_unit.h"

#include "shared/bt_types.h"
#include "game/sys_80076000.h"
void func_80096E80(f32 x, f32 y, u16 flags, u32 shape, AreaBox *box, f32 scale)
{
    switch (shape) {
    case 0:
        func_80109268(box, x, y, scale * D_8007212C, scale * D_80072120, scale * D_80072124, scale * D_80072128, flags);
        break;
    case 1:
        func_80109268(box, x, y, scale * D_80072130, scale * D_80072138, scale * D_80072134, scale * D_80072138, flags);
        break;
    case 2:
        func_80109268(box, x, y, scale * D_80072148, scale * D_8007213C, scale * D_80072140, scale * D_80072144, flags);
        break;
    }
}

INCLUDE_ASM("span_1000", func_80096FC8);
INCLUDE_ASM("span_1000", func_80097038);
INCLUDE_ASM("span_1000", func_80097B04);
#include "shared/bt_span_1000_code_80097038.h"
#include "shared/bt_types.h"








#include "shared/bt_menu_render.h"
#include "span_1000/code_80097038.h"


                         /* extern */



/* Resets the active entries and releases their associated resources. */

void func_80097B7C(void) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 var_s1;
    CombatUnit *unit;

    var_s1 = 0;
    do {
        unit = func_800A03B8((s16)var_s1);
        if (unit->visible != 0) {
            temp_a0 = unit->value458;
            if (temp_a0 != -1) {
                func_800798C0(temp_a0);
                unit->value458 = -1;
            }
            temp_a0_2 = unit->value45C;
            if (temp_a0_2 != -1) {
                func_800798C0(temp_a0_2);
                unit->value45C = -1;
            }
            temp_a0_3 = unit->value4F0;
            if (temp_a0_3 != -1) {
                func_800798C0(temp_a0_3);
                unit->value4F0 = -1;
            }
        }
        var_s1 += 1;
    } while (var_s1 < 0x14);
}

