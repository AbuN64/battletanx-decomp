#include "include_asm.h"

#include <ultra64.h>
#include "game/sys_80076000.h"
#include "shared/bt_span_1000_code_800F29F0.h"
void func_800F45C8(void)
{
    u8 first;
    first = func_800F38F4() % (u32)D_80141050;
    D_8035BC72 = 0;
    D_8035BC70 = first;
    D_8035BC71 = (u32)(first + 1) % (u32)D_80141050;
    D_8035BC74 = func_800F38F4();
    D_8035BC75 = func_800F38F4();
    D_8035BC76 = 0;
    D_8035BC78 = 0x80;
    D_8035BC68 = D_80074F78;
    D_8035BC6C = D_80074F78;
    func_80114970(&D_8035BC80, &D_8035BCC4, 37.0f, 4.0f / 3.0f, D_80074F7C, D_80074F80, D_80074F84);
}

#include "shared/bt_records.h"
#include "shared/bt_externs.h"

void func_800F46C8(Unknown800F46C8 *extents, Vec3f *center, Vec3f *corners) {
    f32 cosine = func_800F3B40(0);
    f32 offsetZ = extents->value28 * -func_800F3AE0(0);
    f32 halfHeight = extents->value2C;
    f32 offsetX = extents->value28 * cosine;

    corners[0].z = corners[3].z = center->z + offsetZ;
    corners[0].x = corners[3].x = center->x + offsetX;
    corners[1].z = corners[2].z = center->z - offsetZ;
    corners[1].x = corners[2].x = center->x - offsetX;
    corners[0].y = corners[1].y = center->y - halfHeight;
    corners[2].y = corners[3].y = center->y + halfHeight;
}
INCLUDE_ASM("span_1000", func_800F4794);
INCLUDE_ASM("span_1000", func_800F4DFC);
INCLUDE_ASM("span_1000", func_800F4F60);
