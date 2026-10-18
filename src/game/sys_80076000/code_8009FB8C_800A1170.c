#include "include_asm.h"

INCLUDE_ASM("span_1000", func_800A1170);
#include "shared/bt_common_types_d507c48987bb.h"
#include "shared/bt_span_1000_code_80107168.h"
#include "shared/bt_types.h"
#include "game/sys_80076000.h"

s32 func_800A12E4(f32 x, f32 y, s32 sizeIndex)
{
    struct QueryResult *results[16];
    AreaBox box;
    s32 count;
    f32 half;
    half = D_auto_80126038[sizeIndex] * D_auto_80072C80;
    func_80109268(&box, x, y, -half, half, -half, half, 0);
    return !func_80107A14(&box, 16, results, &count);
}

INCLUDE_ASM("span_1000", func_800A137C);
INCLUDE_ASM("span_1000", func_800A1408);
INCLUDE_ASM("span_1000", func_800A16C0);
INCLUDE_ASM("span_1000", func_800A27D0);
INCLUDE_ASM("span_1000", func_800A2A28);
INCLUDE_ASM("span_1000", func_800A2A44);
INCLUDE_ASM("span_1000", func_800A2C38);
INCLUDE_ASM("span_1000", func_800A2DC0);
#include "shared/bt_span_1000_code_800A27D0.h"
#include "shared/bt_types.h"














#include "span_1000/code_800A27D0.h"


             /* extern */
   /* extern */





/* extern */

void func_800A2EA4(func_800A2EA4_S2_Shared800A2EA4 *arg0, s32 arg1, u32 arg2, s32 arg3, func_800A2EA4_S1_Shared800A2EA4 *arg4) {
    switch (arg2) {                                 /* irregular */
    case 0:
        func_800A27D0(arg0, arg1, arg3, arg4);
        return;
    case 2:
        arg4->unk0 = 1;
        arg4->unk8 = (f32) arg0->unk20;
        arg4->unk4 = (f32) arg0->unk1C;
        return;
    case 3:
        func_800A2A44(arg0, 0, arg3, 0);
        break;
        return;
    case 7:
        func_800A2C38(arg0, arg1, arg3);
        return;
    }
}

INCLUDE_DATA("span_1000", D_800A2F48);
