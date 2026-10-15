#include "game/sys_80076000.h"
#include "shared/bt_types.h"
#include "span_1000/code_800ABFD0.h"

u8 func_800BFF68(void) {
    s32 temp_v0;

    temp_v0 = func_80096920(0, 0);
    if (temp_v0 & 0x40) {
        D_auto_80327D2C = 1;
    }
    D_auto_80327D2D = 0;
    if (temp_v0 & 0x10) {
        D_auto_80327D2D = 1;
    }
    return D_auto_80327D2C;
}
