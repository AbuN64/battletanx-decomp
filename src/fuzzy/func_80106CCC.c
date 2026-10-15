#include "shared/bt_types.h"
extern s32 D_auto_803B8248;

void * func_80106CCC(s32 arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = arg0 * 0x28;
    *(&D_auto_803B8248 + temp_v0) = *(&D_auto_803B8248 + temp_v0) & ~arg1;
}
