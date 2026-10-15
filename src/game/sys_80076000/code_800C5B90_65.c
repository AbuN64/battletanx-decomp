#include "shared/bt_types.h"
#include "game/sys_80076000.h"


void func_800EC380(s32 arg0) {
    D_auto_80137904 = arg0;
}

s32 func_800EC390(void) {
    s32 mode = D_auto_80137904;
    if ((u32)(mode - 2) < 2 || (mode == 7 | mode == 11)) {
        return 1;
    }
    return 0;
}
