#include "include_asm.h"
#include "shared/bt_navigation_mesh.h"

#include "shared/bt_span_1000_code_80091A60.h"
#include "shared/bt_span_1000_code_800E0B00.h"
#include <ultra64.h>
























#include "span_1000/code_800E0B00.h"


           /* extern */
const f32 D_80074428 = 2.0f;

void func_800E0B00(s32 arg0, struct PolygonPoint *arg1) {
    u16 sp10;
    u16 sp12;
    struct PolygonPoint *var_a1;
    struct PolygonPoint *var_v1;
    func_800E1818(arg0 & 0xFFFF, &sp10, &sp12);
    var_a1 = ((void *)0);
    if ((sp10 < D_80135834->vertexCount) && (sp10 != 0)) {
        var_a1 = &D_80135834->vertices[sp10];
    }
    if (sp12 >= D_80135834->vertexCount) {
        var_v1 = ((void *)0);
    } else if (sp12 == 0) {
        var_v1 = ((void *)0);
    } else {
        var_v1 = &D_80135834->vertices[sp12];
    }
    arg1->x = (var_a1->x + var_v1->x) / D_80074428;
    arg1->y = (var_a1->y + var_v1->y) / D_80074428;
}

INCLUDE_RODATA("span_1000", D_8007442C);
INCLUDE_DATA("span_1000", D_80074430);
INCLUDE_DATA("span_1000", D_80074434);
INCLUDE_DATA("span_1000", D_80074438);
INCLUDE_RODATA("span_1000", D_8007443C);
INCLUDE_DATA("span_1000", D_80074440);
INCLUDE_DATA("span_1000", D_80074444);
INCLUDE_DATA("span_1000", D_80074448);
INCLUDE_RODATA("span_1000", D_8007444C);
INCLUDE_RODATA("span_1000", D_8007445C);
INCLUDE_RODATA("span_1000", D_80074478);
INCLUDE_DATA("span_1000", D_8007447C);
INCLUDE_RODATA("span_1000", D_80074480);
INCLUDE_RODATA("span_1000", D_800744B0);
INCLUDE_RODATA("span_1000", D_800744B4);
INCLUDE_RODATA("span_1000", D_800744B8);
INCLUDE_DATA("span_1000", D_800744C8);
#include "game/sys_80076000.h"
#include "shared/bt_span_1000_code_800E0B00.h"
f32 func_800E0BC4(f32 *offset)
{
    f32 z;
    f32 x;
    z = offset[1];
    if (!(z > 0.0f)) {
        z = -z;
    }
    x = offset[0];
    if (!(x > 0.0f)) {
        x = -x;
    }
    if (x < z) {
        return z + x * D_80074434 / D_80074438;
    }
    return x + z * D_8007442C / D_80074430;
}

f32 func_800E0C44(f32 *offset) {
    return sqrtf(offset[1] * offset[1] + offset[0] * offset[0]);
}
#include "game/sys_80076000.h"
static inline f32 approx_horizontal_length(f32 *v) {
    f32 a = v[1];
    f32 b;
    if (!(a > 0.0f)) {
        a = -a;
    }
    b = v[0];
    if (!(b > 0.0f)) {
        b = -b;
    }
    if (b < a) {
        return a + (b * D_8007443C) / D_80074440;
    }
    return b + (a * D_80074444) / D_80074448;
}
f32 func_800E0C8C(f32 *a, f32 *b) {
    f32 offset[2];
    f32 dz;
    f32 dx;
    dz = a[1] - b[1];
    if (!(dz > 0.0f)) {
        dz = -dz;
    }
    offset[1] = dz;
    dx = a[0] - b[0];
    if (!(dx > 0.0f)) {
        dx = -dx;
    }
    offset[0] = dx;
    return approx_horizontal_length(offset);
}

INCLUDE_ASM("span_1000", func_800E0D54);
#include "game/sys_80076000.h"
u16 func_800E0E1C(u16 index) {
    u16 group = index / 3;
    u16 slot = index % 3;
    return (slot + 2) % 3 + group * 3;
}

INCLUDE_ASM("span_1000", func_800E0E84);
#include "shared/bt_span_1000_code_80091A60.h"
#include "game/sys_80076000.h"

s32 func_800E0EA8(struct PolygonPoint *a, struct PolygonPoint *origin, struct PolygonPoint *c)
{
    f32 ay = a->x - origin->x;
    f32 ax = a->y - origin->y;
    f32 cx = c->y - origin->y;
    f32 cy = c->x - origin->x;
    return ay * cx - cy * ax < 0.0f;
}

INCLUDE_ASM("span_1000", func_800E0EFC);
#include "shared/bt_span_1000_code_80091A60.h"
#include "game/sys_80076000.h"
s32 func_800E1098(struct PolygonPoint *arg0, struct PolygonPoint *arg1) {
    s32 var_v0;

    var_v0 = 0;
    if ((arg0->x == arg1->x) && (arg0->y == arg1->y)) {
        var_v0 = 1;
    }
    return var_v0;
}

void func_800E10D0(f32 *source, f32 *target)
{
    f32 value = *source;
    if (*target < value + D_80074478) {
        f32 step = D_8007447C;
        *source = value - step;
        *target += step;
    }
}

INCLUDE_ASM("span_1000", func_800E1118);
INCLUDE_ASM("span_1000", func_800E1648);
INCLUDE_ASM("span_1000", func_800E16DC);
INCLUDE_ASM("span_1000", func_800E1710);
INCLUDE_ASM("span_1000", func_800E1818);
#include "game/sys_80076000.h"
#include "shared/bt_navigation_mesh.h"




static inline struct PolygonPoint *mesh_vertex(u16 *index)
{
    if (*index >= D_80135834->vertexCount) {
        return 0;
    }
    if (*index == 0) {
        return 0;
    }
    return &D_80135834->vertices[*index];
}
void func_800E18B0(u16 corner, struct PolygonPoint **start, struct PolygonPoint **end)
{
    u16 first;
    u16 second;
    u16 offset;
    u16 next;

    offset = corner % 3;
    next = (offset + 1) % 3 + (corner - offset);
    first = D_80135834->corners[corner].vertex;
    second = D_80135834->corners[next].vertex;
    *start = mesh_vertex(&first);
    *end = mesh_vertex(&second);
}

INCLUDE_ASM("span_1000", func_800E19B8);
INCLUDE_ASM("span_1000", func_800E19DC);
#include "shared/audio_callbacks.h"
#include "shared/bt_span_1000_code_800E0B00.h"



              /* size 0x0 */

s32 func_800E1A08(s32 arg0, s32 arg1) {
    return arg0 & arg1 & 0xFF;
}
