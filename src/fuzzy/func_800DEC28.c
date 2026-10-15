#include "shared/bt_types.h"
void func_800DEC28(s32 *arg0, s32 arg1, s32 arg3) {
    u8 *temp_v1;

    if (!(arg3 & 0xFFFF)) {
        *(arg0 + (arg1 & 0xFFFF)) = 0;
        return;
    }
    temp_v1 = arg0 + (arg1 & 0xFFFF);
    *temp_v1 += 1;
}
