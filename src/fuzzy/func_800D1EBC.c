#include "game/sys_80076000.h"
#include "shared/bt_types.h"
void func_800D1EBC(u32 arg0) {
    s32 var_a0;

    switch (arg0) {
    case 0:
        var_a0 = 0x26;
block_7:
        func_800796F0(var_a0, 0);
        break;
    case 1:
        var_a0 = 0x1C;
        goto block_7;
    case 2:
        var_a0 = 1;
        goto block_7;
    case 3:
        var_a0 = 3;
        goto block_7;
    case 4:
        var_a0 = 0xD;
        goto block_7;
    }
}
