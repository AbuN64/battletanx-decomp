#include "include_asm.h"

#include "shared/bt_span_1000_code_80091A60.h"
#include "game/sys_80076000.h"
#include "span_1000/code_80077930.h"



void func_80106B60(s32 width, s32 height)
{
    u32 i;
    s16 *cells;

    func_80110C00(D_auto_803B8248, sizeof(SpatialRecord) * 0x514);
    for (i = 0; i < 0x514; i++) {
        D_auto_803B8248[i].cellLinks[0] = -1;
        D_auto_803B8248[i].cellLinks[1] = -1;
        D_auto_803B8248[i].cellLinks[2] = -1;
        D_auto_803B8248[i].cellLinks[3] = -1;
    }
    for (i = 0; i < 0x513; i++) {
        D_auto_803B8248[i].next = i + 1;
        D_auto_803B8248[i].prev = i - 1;
    }
    D_auto_803B8248[0x513].next = -1;
    D_auto_803B8248[0].prev = -1;
    D_auto_803B8240 = -1;
    D_auto_803B8238 = width + 0x1F4;
    D_auto_803B8234 = 0;
    D_auto_803B823C = height + 0x1F4;
    cells = D_auto_803B75B0[0][0];
    for (i = 0; i < 0x640; i++) {
        cells[i] = -1;
    }
    D_auto_803B8230 = -1;
}

INCLUDE_ASM("span_1000", func_80106C9C);
INCLUDE_ASM("span_1000", func_80106CCC);
#include "shared/bt_span_1000_code_8010527C.h"
#include "shared/bt_types.h"

/* func_80106D00 -- returns -1.
 *
 * A constant with no argument read and no state touched. -1 rather than 0xFFFFFFFF because the
 * cartridge builds it with a single `addiu` from zero, which is the sign-extended form.
 */

int func_80106D00(void) {
    return -1;
}

              /* size 0x0 */

void func_auto_80106D08(void) {

}

/* size 0x0 */

s32 func_80106D10(void) {
    return 0;
}

INCLUDE_ASM("span_1000", func_80106D18);
INCLUDE_ASM("span_1000", func_80106F94);
#include "shared/bt_types.h"
#include "shared/bt_span_1000_code_80107168.h"

              /* size 0x0 */

s32 func_80107168(void) {
    return -1;
}

INCLUDE_ASM("span_1000", func_80107170);
INCLUDE_ASM("span_1000", func_801074AC);
#include "shared/bt_span_1000_code_80107168.h"

              /* size 0x0 */

void func_80107704(void) {

}

INCLUDE_ASM("span_1000", func_8010770C);
INCLUDE_ASM("span_1000", func_80107754);
#ifdef NON_MATCHING
#include "shared/bt_common_types_d507c48987bb.h"
#include "shared/bt_span_1000_code_80091A60.h"
#include "shared/bt_span_1000_code_80107168.h"
#include "shared/bt_types.h"
extern s32 D_auto_803B8240;
extern s32 D_auto_803B8248;
extern s32 D_auto_803B824A;
extern s32 D_auto_803B8250;

void func_80107A14(QueryBox *arg0, s32 arg1, QueryResult **arg2, s32 *arg3) {
    s32 sp10;
    QueryResult **var_s3;
    s16 temp_v0;
    s32 temp_s0;
    s32 var_s1;
    s32 var_s2;
    s32 var_v0;

    var_s3 = arg2;
    var_s2 = 0;
    var_s1 = D_auto_803B8240;
    if ((s16) D_auto_803B8240 != -1) {
loop_2:
        temp_s0 = (s16) var_s1 * 0x28;
        if (*(&D_auto_803B8248 + temp_s0) & arg1) {
            var_v0 = var_s1 << 0x10;
            if (func_8010A8A8(arg0, &D_803B8254[(s16) var_s1].box, &sp10) & 0xFF) {
                var_s2 += 1;
                *var_s3 = *(&D_auto_803B8250 + temp_s0);
                var_s3 += 4;
                if (var_s2 < 0x20) {
                    goto block_5;
                }
            } else {
                goto block_6;
            }
        } else {
block_5:
            var_v0 = var_s1 << 0x10;
block_6:
            temp_v0 = *(&D_auto_803B824A + ((var_v0 >> 0x10) * 0x28));
            var_s1 = (s32) temp_v0;
            if (temp_v0 != -1) {
                goto loop_2;
            }
        }
    }
    *arg3 = var_s2;
}
#else
INCLUDE_ASM("span_1000", func_80107A14);
#endif
INCLUDE_ASM("span_1000", func_80107B44);
INCLUDE_ASM("span_1000", func_80107F14);
INCLUDE_ASM("span_1000", func_8010823C);
INCLUDE_ASM("span_1000", func_80108538);
INCLUDE_ASM("span_1000", func_8010874C);
#include "shared/bt_span_1000_code_80091A60.h"
#include "game/sys_80076000.h"



u8 func_80108B68(QueryBox *body, s32 self, u16 mask, f32 *delta, f32 *out, s32 arg5, s32 arg6,
                     s32 *owner)
{
    s32 rows[4];
    s32 columns[4];
    s32 layers[4];
    s32 baseX;
    s32 baseZ;
    SpatialRecord *other;
    s32 cellCount;
    s32 i;
    s32 j;
    s32 row;
    s32 col;
    s32 layer;
    s16 id;
    u8 hit;

    hit = 0;
    cellCount = 0;
    *owner = 0;
    baseX = body->values[1] + D_auto_803B8238;
    baseZ = body->values[2] + D_auto_803B823C;
    for (i = 0; i < 4; i++) {
        row = (baseX + D_auto_80142B50[i]) >> 11;
        col = (baseZ + D_auto_80142B60[i]) >> 11;
        if (((row >= 20) | (col >= 20)) == 0 && ((row < 0) | (col < 0)) == 0) {
            for (j = 0; j < i; j++) {
                if (row == rows[j] && col == columns[j]) {
                    break;
                }
            }
            layers[cellCount] = i;
            rows[cellCount] = row;
            columns[cellCount] = col;
            cellCount++;
        }
    }
    for (i = 0; i < cellCount + 1; i++) {
        if (i < cellCount) {
            layer = layers[i];
            row = rows[i];
            col = columns[i];
            id = D_auto_803B75B0[layer][row][col];
        } else {
            id = D_auto_803B8230;
            layer = 0;
        }
        while (id != -1) {
            other = &D_auto_803B8248[id];
            if ((other->mode & mask) && id != self) {
                if (func_8010B9C8(body, delta, &other->body, arg5, arg6)) {
                    *owner = other->owner;
                    hit = 1;
                }
            }
            id = other->cellLinks[layer & 3];
        }
    }
    if (hit) {
        out[1] = body->values[1];
        out[0] = body->values[2];
    } else {
        out[1] = body->values[1] + delta[1];
        out[0] = body->values[2] + delta[0];
    }
    return hit;
}

INCLUDE_ASM("span_1000", func_80108E74);
#include "shared/bt_types.h"

s32 func_80109094(u32 arg0) {
    u32 rest = arg0;
    u32 root = 0;
    u32 trial;

    trial = (root << 16) + 0x40000000;
    if (rest >= trial) {
        root += 0x8000;
        rest -= trial;
    }
    trial = (root << 15) + 0x10000000;
    if (rest >= trial) {
        root += 0x4000;
        rest -= trial;
    }
    trial = (root << 14) + 0x4000000;
    if (rest >= trial) {
        root += 0x2000;
        rest -= trial;
    }
    trial = (root << 13) + 0x1000000;
    if (rest >= trial) {
        root += 0x1000;
        rest -= trial;
    }
    trial = (root << 12) + 0x400000;
    if (rest >= trial) {
        root += 0x800;
        rest -= trial;
    }
    trial = (root << 11) + 0x100000;
    if (rest >= trial) {
        root += 0x400;
        rest -= trial;
    }
    trial = (root << 10) + 0x40000;
    if (rest >= trial) {
        root += 0x200;
        rest -= trial;
    }
    trial = (root << 9) + 0x10000;
    if (rest >= trial) {
        root += 0x100;
        rest -= trial;
    }
    trial = (root << 8) + 0x4000;
    if (rest >= trial) {
        root += 0x80;
        rest -= trial;
    }
    trial = (root << 7) + 0x1000;
    if (rest >= trial) {
        root += 0x40;
        rest -= trial;
    }
    trial = (root << 6) + 0x400;
    if (rest >= trial) {
        root += 0x20;
        rest -= trial;
    }
    trial = (root << 5) + 0x100;
    if (rest >= trial) {
        root += 0x10;
        rest -= trial;
    }
    trial = (root << 4) + 0x40;
    if (rest >= trial) {
        root += 0x8;
        rest -= trial;
    }
    trial = (root << 3) + 0x10;
    if (rest >= trial) {
        root += 0x4;
        rest -= trial;
    }
    trial = (root << 2) + 0x4;
    if (rest >= trial) {
        root += 0x2;
        rest -= trial;
    }
    trial = root * 2 + 1;
    return root + (rest >= trial);
}

INCLUDE_ASM("span_1000", func_80109268);
#include "shared/bt_span_1000_code_80107168.h"
#include "shared/bt_types.h"
#include "span_1000/code_80107B44.h"
#include "shared/bt_span_1000_code_80091A60.h"
#include "game/sys_80076000.h"

struct Record;




/* Stores three halfwords into the record at offsets 2, 4 and 0x10. All three
   stores are sh with no narrowing of the incoming registers, which fixed the
   fields as shorts and the arguments as plain words. */


void func_80109354(Record *record, int a, int b, int c) {
    record->unk2 = a;
    record->unk4 = b;
    record->unk10 = c;
}

void func_80109364(QueryRecord *record, s32 minZ, s32 maxZ, s32 minX, s32 maxX)
{
    s32 a, b;
    a = ((minZ < 0 ? -minZ : minZ) > (maxZ < 0 ? -maxZ : maxZ)) ? (minZ < 0 ? -minZ : minZ) : (maxZ < 0 ? -maxZ : maxZ);
    b = ((minX < 0 ? -minX : minX) > (maxX < 0 ? -maxX : maxX)) ? (minX < 0 ? -minX : minX) : (maxX < 0 ? -maxX : maxX);
    record->box.values[7] = func_80109094(a * a + b * b);
    record->box.values[3] = minZ;
    record->box.values[4] = maxZ;
    record->box.values[5] = minX;
    record->box.values[6] = maxX;
    record->box.values[0] &= 0xFFF0;
}

#ifdef NON_MATCHING
#include "shared/bt_common_types_d507c48987bb.h"
#include "shared/bt_span_1000_code_800F29F0.h"
#include "shared/bt_span_1000_code_80107168.h"
#include "shared/bt_types.h"
int func_80109498(s16 arg0, s16 arg1, QueryBox *arg2) {
    f32 sp10;
    f32 sp14;
    f32 temp_fs0;
    f32 temp_fs1;
    f32 temp_fs2;
    f32 temp_fv0;
    s32 var_v0;

    temp_fs2 = (f32) (arg0 - arg2->values[1]);
    temp_fs1 = (f32) (arg1 - arg2->values[2]);
    if ((u16) arg2->values[0] & 1) {
        sp14 = temp_fs2;
        sp10 = temp_fs1;
    } else {
        temp_fs0 = func_800F3AE0((s32) (u16) arg2->values[8]);
        temp_fv0 = func_800F3B40((s32) (u16) arg2->values[8]);
        sp10 = (temp_fs0 * temp_fs2) + (temp_fv0 * temp_fs1);
        sp14 = (temp_fv0 * temp_fs2) + (-temp_fs0 * temp_fs1);
    }
    var_v0 = 0;
    if (!(sp14 < (f32) arg2->values[3])) {
        var_v0 = 0;
        if (!((f32) arg2->values[4] < sp14)) {
            var_v0 = 0;
            if (!(sp10 < (f32) arg2->values[5])) {
                var_v0 = 0;
                if (!((f32) arg2->values[6] < sp10)) {
                    var_v0 = 1;
                }
            }
        }
    }
    return var_v0;
}
#else
INCLUDE_ASM("span_1000", func_80109498);
#endif
INCLUDE_ASM("span_1000", func_801095D0);
INCLUDE_ASM("span_1000", func_8010A474);
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

