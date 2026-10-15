#include "shared/bt_types.h"
#include "game/sys_80076000.h"


void func_800DEC04(void) {
    s32 var_v1;
    s8 *var_v0;

    var_v1 = 0xBB7;
    var_v0 = &D_auto_8032900F;
    do {
        *var_v0 = 0;
        var_v1 -= 1;
        var_v0 -= 1;
    } while (var_v1 >= 0);
}

