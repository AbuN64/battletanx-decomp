#include "game/sys_80076000.h"
#include "shared/bt_types.h"
#include "span_1000/code_800ABFD0.h"

u8 func_800BC448(void) {
    s32 temp_v0;

    temp_v0 = func_80096920(0, 0);
    if (temp_v0 & 0x40) {
        D_auto_80327C0F = 1;
    }
    D_auto_80327C10 = 0;
    if (temp_v0 & 0x10) {
        D_auto_80327C10 = 1;
    }
    return D_auto_80327C0F;
}
