#include "shared/bt_types.h"
s32 func_80112480();
s32 func_801124A0(s32);
extern u16 *D_auto_80146184;

void func_801219B0(u8 arg0) {
    s32 temp_s0;

    temp_s0 = func_80112480();
    if (arg0 != 0) {
        *D_auto_80146184 |= 0x20;
    } else {
        *D_auto_80146184 &= ~0x20;
    }
    func_801124A0(temp_s0);
}
