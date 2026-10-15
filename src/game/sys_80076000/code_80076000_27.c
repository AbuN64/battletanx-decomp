#include "game/sys_80076000.h"
#include "shared/bt_audio_callbacks.h"
#include "shared/bt_span_1000_code_8008011C.h"
#include "shared/bt_types.h"
#include "span_1000/code_8008011C.h"

void func_8008054C(u8 arg0, u8 arg1, u8 arg2, u8 arg3, u8 arg4) {
    D_auto_801257F0 = arg0;
    D_auto_801257F1 = arg1;
    D_auto_801257F2 = arg2;
    D_auto_801257F3 = arg3;
    D_auto_801257F4 = arg4;
}

void func_80080580(s8 arg0, s8 arg1, s8 arg2, s8 arg3, s32 arg4) {
    s32 temp_v0;

    temp_v0 = arg4 * 4;
    D_auto_801257E0[temp_v0] = arg0;
    D_auto_801257E1[temp_v0] = arg1;
    D_auto_801257E2[temp_v0] = arg2;
    D_auto_801257E3[temp_v0] = arg3;
}

unsigned char *func_800805C0(void) {
    return &D_auto_801B6C20;
}

/*
 * Returns the constant 0x12320.  The value is built with lui plus ori into
 * $v0, which is how a 32-bit integer constant too large for one immediate is
 * loaded, so the return type is int rather than anything narrower.
 */

int func_800805D0(void) {
    return 0x12320;
}
