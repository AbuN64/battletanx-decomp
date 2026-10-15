#include "shared/bt_types.h"
#include "span_1000/code_800E0B00.h"
void func_800E0954(s32 arg0) {
    s32 temp_v0;

    temp_v0 = D_auto_80135834->unk4;
    D_auto_80135834->unk4 = temp_v0 + (temp_v0 & 7) + ((arg0 & 7) + arg0);
}
