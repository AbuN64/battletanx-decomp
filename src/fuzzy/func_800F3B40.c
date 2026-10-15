#include "shared/bt_span_1000_code_800F29F0.h"
#include "shared/bt_types.h"
extern f32 D_auto_80074F54;
extern s32 D_auto_80139620;

float func_800F3B40(s32 arg0) {
    f32 temp_ft0;
    s32 temp_v0;

    temp_v0 = (((u32) (arg0 & 0xFFFF) >> 8) + 0x40) & 0xFF;
    temp_ft0 = *(&D_auto_80139620 + (temp_v0 * 4));
    return temp_ft0 + ((*(&D_auto_80139620 + ((temp_v0 + 1) * 4)) - temp_ft0) * (f32) (arg0 & 0xFF) * D_auto_80074F54);
}
