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
