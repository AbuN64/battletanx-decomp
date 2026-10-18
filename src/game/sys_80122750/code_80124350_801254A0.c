#include "include_asm.h"

#ifdef NON_MATCHING
#include "shared/bt_types.h"
s32 __floatdisf(s32 arg0, s32 arg1) {
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
INCLUDE_ASM("span_1000", __floatdisf);
#endif
INCLUDE_DATA("span_1000", D_80125550);
INCLUDE_DATA("span_1000", D_80125558);
INCLUDE_DATA("span_1000", D_80125568);
INCLUDE_DATA("span_1000", D_801256C0);
INCLUDE_DATA("span_1000", D_80125710);
INCLUDE_DATA("span_1000", D_80125714);
INCLUDE_DATA("span_1000", D_80125764);
INCLUDE_DATA("span_1000", D_80125768);
INCLUDE_DATA("span_1000", D_8012576C);
INCLUDE_DATA("span_1000", D_80125770);
INCLUDE_DATA("span_1000", D_80125774);
INCLUDE_DATA("span_1000", D_80125778);
INCLUDE_DATA("span_1000", D_80125780);
INCLUDE_DATA("span_1000", D_80125788);
INCLUDE_DATA("span_1000", D_8012578C);
INCLUDE_DATA("span_1000", D_80125790);
INCLUDE_DATA("span_1000", D_80125794);
INCLUDE_DATA("span_1000", D_801257A0);
INCLUDE_DATA("span_1000", D_801257A8);
INCLUDE_DATA("span_1000", D_801257B0);
INCLUDE_DATA("span_1000", D_801257B4);
INCLUDE_DATA("span_1000", D_801257C4);
INCLUDE_DATA("span_1000", D_801257C8);
INCLUDE_DATA("span_1000", D_801257D0);
INCLUDE_DATA("span_1000", D_801257E0);
INCLUDE_DATA("span_1000", D_801257F0);
INCLUDE_DATA("span_1000", D_801257F4);
INCLUDE_DATA("span_1000", D_80125800);
INCLUDE_DATA("span_1000", D_80125808);
INCLUDE_DATA("span_1000", D_80125850);
INCLUDE_DATA("span_1000", D_80125854);
INCLUDE_DATA("span_1000", D_80125858);
INCLUDE_DATA("span_1000", D_80125860);
INCLUDE_DATA("span_1000", D_801258D8);
INCLUDE_DATA("span_1000", D_80125A30);
INCLUDE_DATA("span_1000", D_80125A68);
INCLUDE_DATA("span_1000", D_80125A70);
INCLUDE_DATA("span_1000", D_80125A78);
INCLUDE_DATA("span_1000", D_80125C40);
INCLUDE_DATA("span_1000", D_80125C44);
INCLUDE_DATA("span_1000", D_80125D40);
INCLUDE_DATA("span_1000", D_80125D44);
INCLUDE_DATA("span_1000", D_80125D48);
INCLUDE_DATA("span_1000", D_80125D50);
INCLUDE_DATA("span_1000", D_80125EB0);
INCLUDE_DATA("span_1000", D_80125EC0);
INCLUDE_RODATA("span_1000", D_80125EF0);
