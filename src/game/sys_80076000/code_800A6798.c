#include "shared/bt_types.h"
#include "game/sys_80076000.h"


void func_800A6864(s32 arg0) {
    D_auto_802DF344[arg0] = D_auto_802DF344[arg0] + 1;
}

void func_800A6888(s32 arg0) {
    D_auto_802DF344[arg0] = D_auto_802DF344[arg0] - 1;
}

u8 func_800A68AC(s32 arg0) {
    return D_auto_802DF344[arg0];
}
