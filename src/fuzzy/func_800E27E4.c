#include "shared/bt_types.h"
int func_800E27E4(s32 arg0, s32 arg1) {
    if ((u32) (arg1 & 0xFFFF) < (u32) (arg0 & 0xFFFF)) {
        return (((u32) (arg0 - arg1) >> 0xF) & 1) ^ 1;
    }
    return (u32) ((arg1 - arg0) & 0xFFFF) > 0x8000U;
}
