#include "game/sys_80076000.h"
#include "shared/bt_callback_queue.h"
#include "shared/bt_span_1000_code_800E9B9C.h"
#include "shared/bt_types.h"
#include "span_1000/code_800EA1FC.h"

void func_800EA1EC(s32 *arg0) {
    *arg0 -= 1;
}

/* Pops pending callbacks from the object's queue at its shared +16 field. */
void func_800EA1FC(func_800E9894_S1_Shared800EA1FC *arg0, u32 arg1) {
    s32 (*temp_v0)(void *);
    u32 *arg0_2;
    u32 *temp_v0_2;
    if (arg1 < (u32) *(u32 *)arg0->unk10) {
        temp_v0_2 = arg0->unk10;
        do {
            temp_v0 = D_auto_80137888[((struct CallbackQueueSlot *)((u32)temp_v0_2 - (-(*temp_v0_2 * sizeof(struct CallbackQueueSlot)))))->kind]->callback;
            if (temp_v0 != 0) {
                temp_v0(arg0);
            }
            arg0_2 = arg0->unk10;
            *arg0_2 -= 1;
        } while (arg1 < (u32) *(temp_v0_2 = arg0->unk10));
    }
}
