#include "include_asm.h"

#include "game/sys_80076000.h"
#include "shared/bt_player.h"
#include "span_1000/code_8007EBA0.h"
static inline PlayerRecord *barrage_player(u16 index) {
    PlayerRecord *player = func_800A6688(index);
    return player;
}
void func_8010DF90(void *arg, s32 *state) {
    EffectKind1E *barrage;
    PointZX pos;

    barrage = arg;
    pos.x = barrage->origin.x + barrage->step.x * (barrage->row + 1) +
            barrage->side.x * ((f32)barrage->column - 2.0f) + func_800F3880(60.0f) - 30.0f;
    pos.z = barrage->origin.z + barrage->step.z * (barrage->row + 1) +
            barrage->side.z * ((f32)barrage->column - 2.0f) + func_800F3880(60.0f) - 30.0f;
    if (barrage->useEntity) {
        if ((barrage->column + barrage->row) % 3 == 0) {
            func_800A1408(barrage_player(barrage->target)->team, barrage->target, 1, barrage->value30,
                          &pos, &pos, 0, 0, 0);
        }
    } else if (func_8010DAA0(&pos, barrage->target) >= 0) {
        func_80085B4C(0x19, pos.x, pos.z);
    }
    if (++barrage->column == 5) {
        barrage->column = 0;
        if (++barrage->row == 5) {
            *state = 2;
        }
    }
}

INCLUDE_DATA("span_1000", D_80075624);
