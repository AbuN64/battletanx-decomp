#include "include_asm.h"

#include <ultra64.h>
#include "game/sys_80076000.h"
#include "shared/bt_menu_render.h"
void func_80077930(s32 arg0, s32 arg1, s32 arg2);




void func_800C54F0(void)
{
    u32 size = D_B04AC150 - D_B049DCD0;

    func_80077930((u32)D_B049DCD0, D_803DA800, size);
    func_800F4F60(size, D_803DA800, 0x25800, D_803275F4);
    func_80079BB4(6);
    func_80079BF4((D_80125794 << 28) >> 16);
    func_801053B0(1);
}

INCLUDE_ASM("span_1000", func_800C5580);
INCLUDE_ASM("span_1000", func_800C5848);
INCLUDE_ASM("span_1000", func_800C5B64);
