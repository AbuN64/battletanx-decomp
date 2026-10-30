#include "include_asm.h"
#include "shared/bt_span_1000_code_8008B1F0.h"

INCLUDE_ASM("span_1000", func_800A1170);
#include "shared/bt_common_types_d507c48987bb.h"
#include "shared/bt_span_1000_code_80107168.h"
#include <ultra64.h>
#include "game/sys_80076000.h"

s32 func_800A12E4(f32 x, f32 y, s32 sizeIndex)
{
    struct QueryResult *results[16];
    AreaBox box;
    s32 count;
    f32 half;
    half = D_80126038[sizeIndex] * D_80072C80;
    func_80109268(&box, x, y, -half, half, -half, half, 0);
    return !func_80107A14(&box, 16, results, &count);
}

#include "shared/bt_records.h"
#include "shared/bt_externs.h"
static inline void build_box(AreaBox *box, f32 x, f32 y, f32 half)
{
    func_80109268(box, x, y, -half, half, -half, half, 0);
}

s32 func_800A137C(f32 x, f32 y, s32 unused2, s32 unused3, s32 sizeIndex)
{
    void *results[16];
    AreaBox box;
    s32 count;
    f32 half;

    half = D_80126038[sizeIndex] * D_80072C84;
    build_box(&box, x, y, half);
    return !func_80107A14(&box, 16, results, &count);
}
INCLUDE_ASM("span_1000", func_800A1408);
INCLUDE_ASM("span_1000", func_800A16C0);
INCLUDE_ASM("span_1000", func_800A27D0);
void func_800A2A28(Unknown800A2A28 *object, s32 arg1, s32 arg2, Unknown800A2A28_1 *report)
{
    report->value00 = 1;
    report->value08 = object->value20;
    report->value04 = object->value1C;
}
INCLUDE_ASM("span_1000", func_800A2A44);
INCLUDE_ASM("span_1000", func_800A2C38);
INCLUDE_ASM("span_1000", func_800A2DC0);
#include "shared/bt_span_1000_code_800A27D0.h"














#include "span_1000/code_800A27D0.h"


             /* extern */
   /* extern */





/* extern */

void func_800A2EA4(EffectKind1B *arg0, s32 arg1, u32 arg2, s32 arg3, PositionReport *arg4) {
    switch (arg2) {                                 /* irregular */
    case 0:
        func_800A27D0(arg0, arg1, arg3, arg4);
        return;
    case 2:
        arg4->valid = 1;
        arg4->x = arg0->point.x;
        arg4->z = arg0->point.z;
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
