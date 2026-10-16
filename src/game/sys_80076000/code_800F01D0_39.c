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

