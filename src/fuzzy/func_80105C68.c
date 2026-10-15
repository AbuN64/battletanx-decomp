#include "game/sys_80076000.h"
#include "shared/bt_types.h"
s32 func_80106010(s32, u8);
extern u8 D_803B75A8;

void func_80105C68(s32 arg0, u8 *arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 sp14;
    s32 temp_fp;
    s32 var_s1;
    s32 var_s3;
    s32 var_v1;
    u8 *var_s0;
    u8 *var_s2;
    u8 var_a1;

    temp_fp = D_803AAD88;
    var_s2 = arg1;
    sp14 = arg3;
    D_803B75A8 = 0;
    var_s3 = 0;
    if (arg2 > 0) {
loop_1:
        if ((arg4 == 0) || ((s32) D_803B75A8 < arg4)) {
            var_a1 = *var_s2;
            var_s1 = 0;
            var_s0 = var_s2 + 1;
            if (var_a1 != 0xA) {
loop_5:
                if ((arg4 == 0) || (var_v1 = var_s1, (((s32) D_803B75A8 < arg4) != 0))) {
                    func_80106010(arg0, var_a1);
                    var_a1 = *var_s0;
                    var_s1 += 1;
                    var_s0 += 1;
                    if (var_a1 == 0xA) {
                        goto block_8;
                    }
                    goto loop_5;
                }
            } else {
block_8:
                var_v1 = var_s1 + 1;
            }
            var_s3 += 1;
            D_803AAD88 = temp_fp;
            D_803AAD8C += sp14;
            var_s2 += var_v1;
            if (var_s3 < arg2) {
                goto loop_1;
            }
        }
    }
}
