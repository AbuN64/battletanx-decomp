#include "shared/bt_types.h"
int func_800E0E1C(s32 arg0) {
    return ((((((arg0 & 0xFFFF) % 3) & 0xFFFF) + 2) % 3) + ((((arg0 & 0xFFFF) / 3) & 0xFFFF) * 3)) & 0xFFFF;
}
