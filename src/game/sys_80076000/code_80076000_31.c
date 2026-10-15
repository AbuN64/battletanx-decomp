#include "shared/bt_span_1000_code_800824E4.h"
/* Original packets use the classic F3DEX command encoding. */
#undef F3DEX_GBI_2

#include "shared/bt_n64sdk.h"
#include "shared/bt_gbi.h"
#include "shared/bt_types.h"
#include "span_1000/code_800824E4.h"


                          /* unable to generate initializer: unknown type */







/* unable to generate initializer: unknown type */

/* Rewrites matching display-list entries using the paired lookup tables. */
void func_80085330(void *arg0, s32 arg1) {
    s32 *var_a1;
    s32 *var_a2;
    s32 temp_t1;
    s32 var_t0;
    Gfx *var_a0;
    Gfx *var_a3;
    Gfx *base_a1;
    Gfx *base_a2;
    s32 magic;
    s32 replacement0;
    s32 replacement4;

    var_a0 = arg0;
    if (arg1 > 0) {
        /* FAKEMATCH: copy the command constant to steer its load before the loop bound. */
        magic = (u32)G_ENDDL << 24;
        base_a1 = (Gfx *)&D_auto_80125860;
        base_a2 = (Gfx *)&D_auto_801258D8;
        temp_t1 = (s32)((arg1 << 3) + (u32)var_a0);
loop_2:
        if (var_a0->words.w0 != magic) {
            var_t0 = 0;
            var_a3 = var_a0;
            var_a2 = (s32 *)base_a2;
            var_a1 = (s32 *)base_a1;
            do {
                if (((((Gfx *)(var_a1))->words.w0) == var_a3->words.w0) && ((((Gfx *)(var_a1))->words.w1) == var_a3->words.w1)) {
                    replacement0 = ((Gfx *)var_a2)->words.w0;
                    replacement4 = ((Gfx *)var_a2)->words.w1;
                    var_a3->words.w0 = replacement0; /* GBI_RAW: computed opcode; operand can spill across parameter boundaries; runtime lookup packet copy. */
                    var_a3->words.w1 = replacement4; /* GBI_RAW: computed opcode; operand can spill across parameter boundaries; runtime lookup packet copy. */
                }
                var_a2 = (s32 *)((Gfx *)var_a2 + 1);
                var_t0 += 1;
                var_a1 = (s32 *)((Gfx *)var_a1 + 1);
            } while (var_t0 < 0xF);
            var_a0 = var_a0 + 1;
            if ((s32) var_a0 < temp_t1) {
                goto loop_2;
            }
        }
    }
}
