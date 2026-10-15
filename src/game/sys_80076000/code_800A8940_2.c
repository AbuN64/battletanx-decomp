#include "shared/bt_types.h"
#include "game/sys_80076000.h"


void func_800A8FB8(s32 arg0) {
    s32 temp_s0;

    temp_s0 = D_auto_802DF540[arg0];
    if ((temp_s0 >= 0) && (func_800EC644() == 0)) {
        D_auto_802DF570[temp_s0] = 1;
    }
}

