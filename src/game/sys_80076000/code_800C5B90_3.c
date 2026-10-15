#include "shared/bt_types.h"
#include "game/sys_80076000.h"


void func_800D3A7C(s32 arg0, s32 arg1) {
    s32 temp_v1;

    temp_v1 = D_auto_80134FD4 + (arg0 * 6) + 0xF;
    D_auto_80134FD8 = temp_v1;
    D_auto_80134FDC = temp_v1 + (arg1 * 0x28) + 0x1E;
}

s32 func_800D3AC4(s32 value, s32 arg1, s32 arg2, s32 *exact, s32 *offset) {
    s32 i;
    for (i = 0; i < 8; i++) {
        if (value < D_auto_80134FC0[i]) {
            *exact = value == D_auto_80134FC0[i - 1];
            *offset = value - D_auto_80134FC0[i - 1];
            return i;
        }
    }
    return 8;
}
