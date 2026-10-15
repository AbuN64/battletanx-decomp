#include "shared/bt_types.h"
#include "span_1000/code_800ABFD0.h"
extern s8 D_auto_80327EB2;

s32 func_800C4DFC(void) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1;

    temp_v0 = func_80096920(0, 0);
    temp_v1 = temp_v0 & 0x40;
    temp_v0_2 = temp_v0 & 0x10;
    D_auto_80327EB2 = 0;
    if (temp_v0_2 != 0) {
        D_auto_80327EB2 = 1;
    }
    return temp_v1 != 0;
}
