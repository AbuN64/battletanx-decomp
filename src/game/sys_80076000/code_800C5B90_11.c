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

void func_800DEC28(u8 *workspace, u16 index, s32 arg2, u16 increment)
{
    if (increment == 0) {
        workspace[index] = 0;
    } else {
        workspace[index]++;
    }
}
