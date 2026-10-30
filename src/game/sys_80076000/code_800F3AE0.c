#include "include_asm.h"

#include <ultra64.h>
#include "game/sys_80076000.h"
#include "shared/bt_span_1000_code_800F29F0.h"
f32 func_800F3AE0(u32 angle) {
    u32 index = (angle & 0xFFFF) >> 8;
    u32 next = index + 1;
    f32 base = D_80139620[index];
    return base + (D_80139620[next] - base) * (f32)(s32)(angle & 0xFF) * D_80074F50;
}

f32 func_800F3B40(u32 angle) {
    u32 index = (((angle & 0xFFFF) >> 8) + 0x40) & 0xFF;
    u32 next = index + 1;
    f32 base = D_80139620[index];
    return base + (D_80139620[next] - base) * (f32)(s32)(angle & 0xFF) * D_80074F54;
}

INCLUDE_ASM("span_1000", func_800F3BA8);
INCLUDE_ASM("span_1000", func_800F3BE4);
INCLUDE_ASM("span_1000", func_800F3D0C);
INCLUDE_ASM("span_1000", func_800F3D40);
INCLUDE_ASM("span_1000", func_800F41C0);
