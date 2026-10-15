#include "game/sys_80076000.h"
#include "shared/bt_types.h"
s16 func_80086AE8();
extern s32 D_auto_801C9174;

s32 func_800862E8(void) {
    s32 temp_v0;

    temp_v0 = D_auto_80125858 + 0x32;
    if (D_auto_80125858 < func_80086AE8()) {
        D_auto_80125858 = temp_v0;
        D_auto_801C9174 = temp_v0 * temp_v0;
    }
    return temp_v0;
}
