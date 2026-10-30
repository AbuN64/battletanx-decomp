#include "include_asm.h"

#include "shared/bt_unit.h"
#include "shared/bt_ai_team.h"
#include "shared/bt_span_1000_code_800E0B00.h"
#include "game/sys_80076000.h"

f32 func_800E9DA4(AiScoreContext *context) {
    f32 pos[2];
    f32 t;
    f32 r;
    s32 k;

    if (func_800E3470(context->unit) != 0) {
        return 0.0f;
    }
    k = context->unit->state;
    pos[1] = context->unit->position[0];
    r = 0.0f;
    pos[0] = context->unit->position[2];
    if ((u32)(k - 8) < 2U) {
        r = 0.5f;
    }
    t = 0.5f - (func_800E0BC4(pos) / 16000.0f);
    if (t > 0.0f) {
        r += t;
    }
    return r;
}

INCLUDE_RODATA("span_1000", D_8007495C);
INCLUDE_RODATA("span_1000", D_80074960);
INCLUDE_RODATA("span_1000", D_800749A0);
INCLUDE_DATA("span_1000", D_800749A4);
INCLUDE_RODATA("span_1000", D_800749A8);
INCLUDE_DATA("span_1000", D_800749AC);
INCLUDE_ASM("span_1000", func_800E9E5C);
INCLUDE_ASM("span_1000", func_800EA1AC);
#include "shared/bt_span_1000_code_800E9B9C.h"
/* func_800EA1B0 -- clears the word the argument points at.
 *
 * The whole function is the store, which rides the return's delay slot. Nothing says the target
 * is a struct rather than a bare word, so it is written as the word it is.
 */

void func_800EA1B0(int *slot) {
    *slot = 0;
}

INCLUDE_ASM("span_1000", func_800EA1B8);
#include "game/sys_80076000.h"
#include "shared/bt_callback_queue.h"
#include "shared/bt_span_1000_code_800E9B9C.h"
#include <ultra64.h>
#include "span_1000/code_800EA1FC.h"

void func_800EA1EC(s32 *arg0) {
    *arg0 -= 1;
}

/* Pops pending callbacks from the object's queue at its shared +16 field. */
void func_800EA1FC(AiUnitContext *arg0, u32 arg1) {
    s32 (*temp_v0)(void *);
    u32 *arg0_2;
    u32 *temp_v0_2;
    if (arg1 < *arg0->queue) {
        temp_v0_2 = arg0->queue;
        do {
            temp_v0 = D_80137888[((struct CallbackQueueSlot *)((u32)temp_v0_2 - (-(*temp_v0_2 * sizeof(struct CallbackQueueSlot)))))->kind]->callback;
            if (temp_v0 != 0) {
                temp_v0(arg0);
            }
            arg0_2 = arg0->queue;
            *arg0_2 -= 1;
        } while (arg1 < *(temp_v0_2 = arg0->queue));
    }
}

INCLUDE_ASM("span_1000", func_800EA2A4);
INCLUDE_ASM("span_1000", func_800EA3D0);
INCLUDE_ASM("span_1000", func_800EA478);
INCLUDE_ASM("span_1000", func_800EA828);
INCLUDE_ASM("span_1000", func_800EA89C);
INCLUDE_ASM("span_1000", func_800EA93C);
