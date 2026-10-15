#include "game/sys_80076000.h"
#include "shared/bt_types.h"
int func_8007B590(int arg0);
int func_8007C344();
extern s8 D_auto_8012579D;
extern s8 D_auto_801B4AE0;
extern s32 D_auto_80327B4C;

s32 func_8007AC20(s32 arg0) {
    s32 var_a0;
    s32 var_v1;

    var_a0 = arg0;
loop_1:
    var_v1 = var_a0 & 0xFFFF;
loop_2:
    if (var_v1 == 1) {
        D_auto_8012579D = 0;
        var_a0 = func_8007B590(1);
        goto loop_1;
    }
    if (var_v1 >= 2) {
        var_v1 = var_a0 & 0xFFFF;
        if (var_v1 == 2) {
            func_8007B590(2);
            D_auto_801B4AE0 = (s8) D_auto_80327B4C;
            var_a0 = 0;
            goto loop_1;
        }
        goto loop_2;
    }
    if (var_v1 != 0) {
        var_v1 = var_a0 & 0xFFFF;
        goto loop_2;
    }
    var_a0 = func_8007C344(0);
    goto loop_1;
}
