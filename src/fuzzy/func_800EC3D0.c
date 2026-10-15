#include "game/sys_80076000.h"
#include "shared/bt_types.h"
int func_800EC3D0(void) {
    s32 var_v0;

    var_v0 = 0;
    if ((u32) D_auto_80137904 < 0xBU) {
        var_v0 = D_auto_80137904 != 0;
    }
    return var_v0;
}
