#include "shared/bt_types.h"
#include "game/sys_80076000.h"
void func_8007A758(AudioFrameInfo *frame) {
    if ((((u32)func_80110480() >> 2) == 0) && (D_auto_80125778 == 0)) {
        D_auto_80125778 = 0;
    }
}
