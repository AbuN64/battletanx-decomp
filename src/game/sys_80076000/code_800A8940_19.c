#include "shared/bt_types.h"
#include "game/sys_80076000.h"
#include "shared/bt_span_1000_code_8007EBA0.h"
#include "shared/bt_gbi.h"
#include "shared/bt_gfx.h"
void func_800A9DA8(void *arg0) {
    void *temp_a1;
    void *temp_v0;
    temp_v0 = func_8007F060();
    temp_a1 = (*(void **)((s8 *)(temp_v0) + (4)));
    (*(void **)((s8 *)(temp_v0) + (4))) = (void *) (temp_a1 + 8);
    (*(s32 *)((s8 *)(temp_a1) + (0))) = 0xFA000000;
    (*(s32 *)((s8 *)(temp_a1) + (4))) = (s32) (((*(u8 *)((s8 *)(arg0) + (0))) << 0x18) | ((*(u8 *)((s8 *)(arg0) + (1))) << 0x10) | ((*(u8 *)((s8 *)(arg0) + (2))) << 8) | (*(u8 *)((s8 *)(arg0) + (3))));
}

void func_800A9E10(u8 color[4])
{
    Gfx **list = func_8007F060();
    Gfx *command = *list;
    *list = command + 1;
    gDPSetEnvColor(command, color[0], color[1], color[2], color[3]);
}
