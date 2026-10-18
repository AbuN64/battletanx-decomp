#include "include_asm.h"

INCLUDE_ASM("span_1000", func_800E3C34);
INCLUDE_ASM("span_1000", func_800E3CF0);
INCLUDE_ASM("span_1000", func_800E3F90);
#ifdef NON_MATCHING
#include "shared/bt_types.h"
#include "span_1000/code_800E21E4.h"
void func_800E566C(struct Rec *r);
void func_800E4094(s16 arg0) {
    s16 var_s0;
    s16 var_v0_2;
    s32 temp_a1;
    s32 var_v0;

    var_s0 = 0;
    var_v0 = 0 << 0x10;
    do {
        temp_a1 = var_v0 >> 0x10;
        var_v0_2 = var_s0 + 1;
        if (arg0 != temp_a1) {
            func_800E566C(func_800E52A0(arg0, temp_a1));
            var_v0_2 = var_s0 + 1;
        }
        var_s0 = var_v0_2;
        var_v0 = var_s0 << 0x10;
    } while (var_v0_2 < 0x14);
}
#else
INCLUDE_ASM("span_1000", func_800E4094);
#endif
INCLUDE_ASM("span_1000", func_800E4104);
INCLUDE_ASM("span_1000", func_800E4344);
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

INCLUDE_ASM("span_1000", func_800E44EC);
INCLUDE_ASM("span_1000", func_800E4584);
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

void func_auto_800E4814(void) {

}

INCLUDE_DATA("span_1000", D_800E481C);
