#include "shared/bt_types.h"
#include "game/sys_80076000.h"
#include "shared/bt_menu_render.h"
void func_80077930(s32 arg0, s32 arg1, s32 arg2);


 


void func_800CA980(void)
{
    u32 size = D_auto_B049DCD0 - D_auto_B049C740;

    if (size <= 0x3A980) {
        func_80077930((u32)D_auto_B049C740, D_auto_803275F4, size);
        func_801053B0(1);
        D_auto_80327F40 = 0;
        D_auto_80327F44 = 1;
        func_80079BB4(6);
        func_80079BF4((D_80125794 << 28) >> 16);
    }
}

