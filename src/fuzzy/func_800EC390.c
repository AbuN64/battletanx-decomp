#include "game/sys_80076000.h"
#include "shared/bt_types.h"
int func_800EC390(void) {
    s32 var_v0;

    var_v0 = 1;
    if ((u32) (D_auto_80137904 - 2) >= 2U) {
        var_v0 = 1;
        if (((D_auto_80137904 == 7) | (D_auto_80137904 == 0xB)) == 0) {
            var_v0 = 0;
        }
    }
    return var_v0;
}
