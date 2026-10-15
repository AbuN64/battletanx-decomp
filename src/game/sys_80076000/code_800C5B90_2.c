#include "shared/bt_types.h"
#include "game/sys_80076000.h"


void func_800D0CB4(s32 arg0) {
    s32 temp_v0;
    s32 temp_v1;
    s32 var_a0;
    s32 var_v1;

    var_v1 = 0;
    if (arg0 & 1) {
        var_v1 = -1;
        D_auto_80328158 = 8;
    }
    if (arg0 & 8) {
        var_v1 += 1;
        D_auto_80328159 = 8;
    }
    temp_v0 = D_auto_80328150 + var_v1;
    temp_v1 = temp_v0 & ((s32) ~temp_v0 >> 0x1F);
    D_auto_80328150 = temp_v1;
    var_a0 = 0xF;
    if (temp_v1 < 0xF) {
        var_a0 = temp_v1;
    }
    D_auto_80328150 = var_a0;
}

