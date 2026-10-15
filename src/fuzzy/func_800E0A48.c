#include "shared/bt_types.h"
#include "span_1000/code_800E0B00.h"
s32 func_800E0A48(s32 arg0) {
    u32 temp_a0;

    temp_a0 = arg0 & 0xFFFF;
    if ((temp_a0 < (u16) D_auto_80135834->unk8) && (temp_a0 != 0)) {
        return D_auto_80135834->unkC + (temp_a0 * 8);
    }
    return 0;
}
