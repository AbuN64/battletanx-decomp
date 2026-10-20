#include "include_asm.h"
#include "shared/bt_unit.h"

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







void func_800A3D30(void *arg0) {
    func_800A3D30_S1_Shared800A3D30 *ptr;
    s32 var_v0;
    void *temp_s0;
    CombatUnit *unit;

    ptr = arg0;
    unit = func_800A03B8(ptr->unk20);
    if (unit->visible != 0) {
        if (ptr->unk44 == 1) {
            var_v0 = func_8007AAA0();
            temp_s0 = (var_v0 >= 3) ? (FuncA3D30Table_Shared800A3D30 *)&D_80126140 + 1 : (FuncA3D30Table_Shared800A3D30 *)&D_80126140;
        } else {
            var_v0 = func_8007AAA0();
            temp_s0 = (var_v0 >= 3) ? (FuncA3D30Table_Shared800A3D30 *)&D_80126128 + 1 : (FuncA3D30Table_Shared800A3D30 *)&D_80126128;
        }
        func_80078680(ptr->data, ((FuncA3D30Table_Shared800A3D30 *)temp_s0)->value[unit->kind]);
        temp_s0 = ptr->data;
        func_80078634(temp_s0, unit->effect);
    }
}

INCLUDE_ASM("span_1000", func_800A3DE0);
#include "shared/bt_span_1000_code_800A27D0.h"
#include "shared/bt_types.h"
#include "span_1000/code_800A27D0.h"
#include "shared/bt_callback_word.h"
#include "shared/bt_span_1000_code_800F29F0.h"

struct Unknown800A424C;



/* func_800A424C -- the address of the member at 0x048.
 *
 * No load: the cartridge adds 0x48 to the argument and returns it, which is a pointer into the
 * object rather than anything read out of it. What lives at 0x48 is unknown, so the member is
 * named for its offset and left an opaque byte run.
 */



void *func_800A424C(struct Unknown800A424C *self) {
    return self->member;
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

struct Unknown800A42A4;



/* func_800A42A4 -- returns the word at offset 0xF4 of its argument. */


s32 func_800A42A4(struct Unknown800A42A4 *arg0) {
    return arg0->value;
}

s32 func_800A42B0(s32 arg0) {
    return ((CallbackWord *)arg0)->value;
}

