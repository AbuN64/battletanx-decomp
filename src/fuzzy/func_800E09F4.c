#include "shared/bt_types.h"
#include "span_1000/code_800E0B00.h"
s32 func_800E09F4(s32 arg0) {
    u32 temp_v1;

    temp_v1 = ((arg0 & 0xFFFF) / 3) & 0xFFFF;
    if ((temp_v1 < (u16) D_auto_80135834->unkA) && (temp_v1 != 0)) {
        return D_auto_80135834->unk10 + ((arg0 & 0xFFFF) * 4);
    }
    return 0;
}
