#include "shared/bt_types.h"
#include "shared/bt_common_types_d507c48987bb.h"
#include "shared/bt_span_1000_code_80107168.h"
#include "shared/bt_span_1000_code_800F29F0.h"
#include "shared/bt_span_1000_code_80091A60.h"

/* Both callees end in add.s to f0 and jr ra. Each takes the low 16 bits
 * of a0, interpolates a single precision table, and returns f32. */

s32 func_8010A680(struct QueryBox *dst, struct QueryBox *base,
                     struct QueryBox *other)
{
    f32 points[4][2];
    f32 bounds[4];
    f32 dx;
    f32 dy;
    f32 cosine;
    f32 sine;
    s32 i;
    f32 rotated_x;
    f32 rotated_y;
    s16 x;
    s16 y;

    dx = other->values[1] - base->values[1];
    dy = other->values[2] - base->values[2];
    cosine = func_800F3B40((u16)base->values[8]);
    sine = func_800F3AE0((u16)base->values[8]);
    rotated_x = cosine * dx - sine * dy;
    rotated_y = sine * dx + cosine * dy;
    x = (s16)(s32)rotated_x;
    y = (s16)(s32)rotated_y;
    dst->values[1] = x;
    dst->values[2] = y;
    dst->values[8] = (u16)other->values[8] - (u16)base->values[8];
    dst->values[3] = other->values[3];
    dst->values[4] = other->values[4];
    dst->values[5] = other->values[5];
    dst->values[6] = other->values[6];
    func_8010A474(dst, points);
    bounds[1] = bounds[0] = points[0][1];
    bounds[3] = bounds[2] = points[0][0];
    for (i = 1; i < 4; i++) {
        if (points[i][1] < bounds[0]) bounds[0] = points[i][1];
        if (points[i][1] > bounds[1]) bounds[1] = points[i][1];
        if (points[i][0] < bounds[2]) bounds[2] = points[i][0];
        if (points[i][0] > bounds[3]) bounds[3] = points[i][0];
    }
    if ((f32)base->values[4] < bounds[0]) return 1;
    if (bounds[1] < (f32)base->values[3]) return 1;
    if ((f32)base->values[6] < bounds[2]) return 1;
    if (bounds[3] < (f32)base->values[5]) return 1;
    return 0;
}

s32 func_8010A8A8(QueryBox *a, QueryBox *b, f32 *normal) {
    QueryBox localA;
    QueryBox localB;
    f32 dx;
    f32 dz;
    f32 cosine;
    f32 sine;
    f32 negSine;
    f32 normalSine;
    f32 normalCosine;

    if (func_8010A680(&localA, a, b)) {
        return 0;
    }
    if (func_8010A680(&localB, b, a)) {
        return 0;
    }
    dx = a->values[1] - b->values[1];
    dz = a->values[2] - b->values[2];
    cosine = func_800F3B40((u16)b->values[8]);
    sine = func_800F3AE0((u16)b->values[8]);
    localA.values[1] = cosine * dx - sine * dz;
    localA.values[2] = sine * dx + cosine * dz;
    localA.values[8] = a->values[8] - b->values[8];
    localA.values[3] = a->values[3];
    localA.values[4] = a->values[4];
    localA.values[5] = a->values[5];
    localA.values[6] = a->values[6];
    normalSine = func_800F3AE0((u16)b->values[8]);
    negSine = -normalSine;
    normalCosine = func_800F3B40((u16)b->values[8]);
    normal[1] = 0.0f;
    normal[0] = 0.0f;
    if (localA.values[1] < 0) {
        normal[0] = normalSine;
        normal[1] = -normalCosine;
    } else if (localA.values[1] > 0) {
        normal[1] = normalCosine;
        normal[0] = negSine;
    }
    if (localA.values[2] < 0) {
        normal[1] = normal[1] + negSine;
        normal[0] = normal[0] - normalCosine;
    } else if (localA.values[2] > 0) {
        normal[1] = normal[1] - negSine;
        normal[0] = normal[0] + normalCosine;
    }
    return 1;
}
