#include "shared/bt_types.h"
#include "span_1000/code_800ABFD0.h"
#include "game/sys_80076000.h"

s32 func_800C4DFC(void) {
    s32 buttons = func_80096920(0, 0);
    s32 confirm = (buttons & 0x40) > 0;
    D_auto_80327EB2 = 0;
    if (buttons & 0x10) {
        D_auto_80327EB2 = 1;
    }
    return confirm;
}
