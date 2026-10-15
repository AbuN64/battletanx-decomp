#include "shared/bt_types.h"
#include "game/sys_8011C210.h"
extern s32 D_auto_0000936C;
extern s32 D_auto_00009370;
extern s32 D_auto_00009374;
extern s32 D_auto_0000937C;

s32 func_80086F3C(struct Slot *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_t0;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_a0;
    s32 var_v0;
    s32 var_v1;

    temp_t0 = arg0->unk28;
    var_a0 = 0;
    if (*(temp_t0 + &D_auto_0000936C) > 0) {
        var_v1 = temp_t0;
loop_2:
        if (*(var_v1 + &D_auto_00009370) != arg1) {
            var_a0 += 1;
            var_v1 += 0x10;
            if (var_a0 >= *(temp_t0 + &D_auto_0000936C)) {
                goto block_10;
            }
            goto loop_2;
        }
        if (arg3 == 0) {
            return 0;
        }
        *(var_v1 + &D_auto_0000937C) = *(var_v1 + &D_auto_0000937C) + 1;
        return 0;
    }
block_10:
    temp_v1 = *(temp_t0 + &D_auto_0000936C);
    if (temp_v1 == 0x100) {
        return -1;
    }
    if (arg3 != 0) {
        var_v0 = 2;
    } else {
        var_v0 = 1;
    }
    *(temp_t0 + (temp_v1 * 0x10) + &D_auto_0000937C) = var_v0;
    *(temp_t0 + (*(temp_t0 + &D_auto_0000936C) * 0x10) + &D_auto_00009370) = arg1;
    temp_v1_2 = *(temp_t0 + &D_auto_0000936C);
    *(temp_t0 + &D_auto_0000936C) = temp_v1_2 + 1;
    *(temp_t0 + (temp_v1_2 * 0x10) + &D_auto_00009374) = arg2;
    return 0;
}
