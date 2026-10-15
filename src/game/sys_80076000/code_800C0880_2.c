#include "shared/bt_types.h"
#include "game/sys_80076000.h"


s32 func_800C3EA4(s32 arg0, s16 arg1) {
    s32 temp_v0;

    temp_v0 = func_800796F0(arg0, 0);
    func_800799D0(temp_v0, (s32) arg1);
    return temp_v0;
}

void func_800C3EF0(void) {
    D_auto_80327E50 = 0;
}
