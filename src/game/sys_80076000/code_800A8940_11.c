#include "game/sys_80076000.h"
#include "shared/bt_types.h"

s32 func_800B9C34(s32 arg0, s16 arg1) {
    s32 temp_v0;

    temp_v0 = func_800796F0(arg0, 0);
    func_800799D0(temp_v0, (s32) arg1);
    return temp_v0;
}

void func_800B9C80(void) {
    D_auto_80327B50 = 0xFF;
    D_auto_80327C0F = 0;
}
