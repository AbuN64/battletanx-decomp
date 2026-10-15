#include "shared/bt_span_1000_code_80076068.h"
#include "shared/bt_types.h"
s32 func_80076068(s32, s32);

int func_80076390(s32 arg0, s32 arg1) {
    s32 temp_s0;
    s32 temp_s2;

    temp_s0 = arg0 & ~3;
    temp_s2 = (~arg0 & 3) * 8;
    func_80076068(temp_s0, (func_800760A0(temp_s0) & ~(0xFF << temp_s2)) | ((arg1 & 0xFF) << temp_s2));
}
