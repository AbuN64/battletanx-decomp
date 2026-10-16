#include "shared/bt_types.h"
#include "game/sys_80076000.h"
#include "span_1000/code_800ABFD0.h"
s32 func_800C36E8(void) {
    s32 buttons;
    s32 result;
    buttons = func_80096920(0, 0);
    result = 0;
    if (buttons & 0x40) {
        result = 1;
    }
    D_auto_80327E31 = 0;
    if (buttons & 0x10) {
        D_auto_80327E31 = 1;
    }
    return result;
}
