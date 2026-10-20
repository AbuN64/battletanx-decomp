#include "include_asm.h"
#include "shared/bt_unit.h"
#include "shared/bt_player.h"

#include "shared/bt_types.h"
#include "game/sys_80076000.h"
#include "shared/bt_span_1000_code_800F29F0.h"
void func_800A30A8(void)
{
    D_801260A0[0] = func_800F38F4() & 3;
    do {
        D_801260A0[1] = func_800F38F4() & 3;
    } while (D_801260A0[1] == D_801260A0[0]);
    do {
        D_801260A0[2] = func_800F38F4() & 3;
    } while (D_801260A0[2] == D_801260A0[1] || D_801260A0[2] == D_801260A0[0]);
    do {
        D_801260A0[3] = func_800F38F4() & 3;
    } while (D_801260A0[3] == D_801260A0[1] || D_801260A0[3] == D_801260A0[0] || D_801260A0[3] == D_801260A0[2]);
    D_801260A4[D_801260A0[0]] = 0;
    D_801260A4[D_801260A0[1]] = 1;
    D_801260A4[D_801260A0[2]] = 2;
    D_801260A4[D_801260A0[3]] = 3;
}

INCLUDE_ASM("span_1000", func_800A31C0);
#include "shared/bt_span_1000_code_800A27D0.h"
#include "shared/bt_types.h"




















#include "shared/bt_span_1000_code_8007A470.h"
#include "span_1000/code_80097038.h"
#include "span_1000/code_800A27D0.h"


                 /* extern */
                 /* extern */
                                /* extern */
                           /* extern */
                          /* unable to generate initializer: unknown type; const */
                          /* unable to generate initializer: unknown type; const */







void func_800A3D30(PlayerRecord *player) {
    Vec3f **offsets;
    s32 var_v0;
    CombatUnit *unit;
    unit = func_800A03B8(player->selectedUnit);
    if (unit->visible != 0) {
        if (player->soundMode == 1) {
            var_v0 = func_8007AAA0();
            offsets = (var_v0 >= 3) ? D_80126140[1] : D_80126140[0];
        } else {
            var_v0 = func_8007AAA0();
            offsets = (var_v0 >= 3) ? D_80126128[1] : D_80126128[0];
        }
        func_80078680(&player->camera, offsets[unit->kind]);
        func_80078634(&player->camera, unit->effect);
    }
}
INCLUDE_ASM("span_1000", func_800A3DE0);
#include "shared/bt_span_1000_code_800A27D0.h"
#include "shared/bt_types.h"
#include "span_1000/code_800A27D0.h"
#include "shared/bt_callback_word.h"
#include "shared/bt_span_1000_code_800F29F0.h"

/* func_800A424C -- the camera a player record carries (no load: the argument plus 0x48). */
AttachedCamera *func_800A424C(PlayerRecord *player) {
    return &player->camera;
}
struct A;




/* func_800A4254 -- the value func_800F3BE4 gives for the float at 0xB0, negated when the float at 0xB8 is negative, as a halfword. */


unsigned short func_800A4254(A *a) {
    unsigned short r;
    if (a->b8 < 0.0f) {
        r = -func_800F3BE4(a->b0);
    } else {
        r = func_800F3BE4(a->b0);
    }
    return r;
}

s32 func_800A42A4(PlayerRecord *player) {
    return player->value0F4;
}

s32 func_800A42B0(s32 arg0) {
    return ((CallbackWord *)arg0)->value;
}

