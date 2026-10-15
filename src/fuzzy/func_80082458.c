#include "shared/bt_types.h"
#include "span_1000/code_8008F4EC.h"
extern u32 D_auto_801B4AA0;

s32 func_80082458(struct Unknown800917C4 *arg0, s32 arg1) {
    u16 temp_v0;
    u16 temp_v0_2;

    if (arg1 >= 0) {
        return (arg0->unk8 & 0x7FF) + arg1;
    }
    if (arg1 != -1) {
        temp_v0_2 = arg0->unk8;
        return (temp_v0_2 & 0x7FF) + ((u32) ((u32) D_auto_801B4AA0 >> 1) % (u32) (temp_v0_2 >> 0xB));
    }
    temp_v0 = arg0->unk8;
    return (temp_v0 & 0x7FF) + ((u32) D_auto_801B4AA0 % (u32) (temp_v0 >> 0xB));
}
