#include "shared/bt_types.h"
#include "game/sys_80076000.h"
void * func_801106A0(s32, void *, s32);
extern s16 D_auto_80125800;
extern u8 D_auto_80125802;
extern s32 D_auto_801C2F40;

int func_8008067C(s32 arg0, s32 arg1, void *arg2) {
    s16 temp_a2;
    s32 temp_s1;
    DmaRegion *temp_a0;
    void *temp_s0;

    temp_a2 = D_auto_80125800;
    if ((temp_a2 + arg1 + 1) < 0x401) {
        D_auto_80125800 = temp_a2 + 1 + arg1;
        temp_s1 = arg1 * 8;
        temp_s0 = (D_auto_80125802 << 0xD) + ((temp_a2 * 8) + &D_auto_801C2F40);
        func_801106A0(arg0, temp_s0, temp_s1);
        temp_a0 = temp_s0 + temp_s1;
        temp_a0->end = 0x06010000;
        temp_a0->flags = arg2;
        return temp_s0;
    }
    return arg2;
}
