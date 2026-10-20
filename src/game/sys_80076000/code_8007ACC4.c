#include "include_asm.h"

#include "shared/bt_types.h"
#include "game/sys_80076000.h"
#include "shared/bt_menu_render.h"
#include "shared/bt_span_1000_code_8010BFDC.h"
void func_8007ACC4(void)
{
    u64 now;
    now = func_801120A0();
    D_801257A8 = now;
    D_801257A0 = now;
    D_801B4AC8 = now;
    D_801B4AA8 = 0;
    D_801257B0 = D_800710F0;
}

