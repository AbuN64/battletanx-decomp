#include "include_asm.h"

#ifdef NON_MATCHING
#include "shared/bt_types.h"
s32 func_801254A0(s32 arg0, s32 arg1) {
    s32 var_a1;
    s32 var_a2;
    s32 var_a3;
    s32 var_v1;

    var_a2 = arg0;
    var_a3 = arg1;
    var_a1 = 0;
    if (var_a2 < 0) {
        var_a3 = -var_a3;
        var_a2 = -var_a2 - (var_a3 != 0);
        var_a1 = 1;
    }
    if ((u32) var_a2 > 0x1FFFFFU) {
        var_v1 = var_a2 >> 0;
        if (var_a3 & 0x7FF) {
            var_a2 |= 0;
            var_a3 |= 0x800;
            goto block_5;
        }
    } else {
block_5:
        var_v1 = var_a2 >> 0;
    }
    if (var_v1 < 0) {

    }
    if (var_a3 < 0) {

    }
    if (var_a1 != 0) {

    }
    return var_a2 >> 0x1F;
}
#else
INCLUDE_ASM("span_1000", func_801254A0);
#endif
INCLUDE_DATA("span_1000", D_80125550);
INCLUDE_DATA("span_1000", D_80125558);
INCLUDE_DATA("span_1000", D_801256C0);
INCLUDE_DATA("span_1000", D_80125710);
INCLUDE_DATA("span_1000", D_80125714);
INCLUDE_DATA("span_1000", D_80125764);
INCLUDE_DATA("span_1000", D_801257C8);
INCLUDE_DATA("span_1000", D_80125808);
INCLUDE_DATA("span_1000", D_80125850);
INCLUDE_DATA("span_1000", D_80125860);
INCLUDE_DATA("span_1000", D_80125A68);
INCLUDE_DATA("span_1000", D_80125A70);
INCLUDE_DATA("span_1000", D_80125A78);
INCLUDE_DATA("span_1000", D_80125C44);
INCLUDE_DATA("span_1000", D_80125D40);
INCLUDE_DATA("span_1000", D_80125D50);
INCLUDE_DATA("span_1000", D_80125EB0);
INCLUDE_DATA("span_1000", D_80125EC0);
INCLUDE_RODATA("span_1000", R_80125EF0);
