#include "game/sys_80076000.h"
#include "shared/bt_types.h"
extern s32 D_auto_80125858;
extern s32 D_auto_801C9174;

s32 func_800862B4(void) {
    s32 temp_v0;

    temp_v0 = D_auto_80125858 - 0x64;
    if (D_auto_80125858 >= 0x709) {
        D_auto_80125858 = temp_v0;
        D_auto_801C9174 = temp_v0 * temp_v0;
    }
    return temp_v0;
}
