#include "shared/bt_types.h"
#include "game/sys_8011C210.h"
extern s32 D_auto_0000A374;
extern s32 D_auto_0000A378;

s32 func_8008805C(struct Slot *arg0, s32 arg1) {
    s32 temp_v0;
    s32 var_a0;
    s32 var_v1;

    var_a0 = arg0->unk28;
    temp_v0 = *(var_a0 + &D_auto_0000A374);
    var_v1 = 0;
    if (temp_v0 > 0) {
loop_2:
        if (*(var_a0 + &D_auto_0000A378) != arg1) {
            var_v1 += 1;
            var_a0 += 0x10;
            if (var_v1 >= temp_v0) {
                goto block_7;
            }
            goto loop_2;
        }
        return var_v1;
    }
block_7:
    return 0;
}
