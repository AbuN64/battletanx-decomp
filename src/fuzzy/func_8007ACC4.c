#include "game/sys_80076000.h"
#include "shared/bt_menu_render.h"
#include "shared/bt_span_1000_code_8010BFDC.h"
#include "shared/bt_types.h"
extern f32 D_auto_800710F0;
extern u32 D_auto_801257A4;
extern u32 D_auto_801257AC;
extern u32 D_auto_801B4ACC;

void func_8007ACC4(void) {
    s32 temp_v0;
    u32 temp_v1;
    u64 temp_ret;

    temp_ret = func_801120A0();
    temp_v0 = temp_ret;
    temp_v1 = (u32) temp_ret;
    D_auto_801257A8 = temp_v0;
    D_auto_801257AC = temp_v1;
    D_auto_801257A0 = temp_v0;
    D_auto_801257A4 = temp_v1;
    D_auto_801B4AC8 = temp_v0;
    D_auto_801B4ACC = temp_v1;
    D_auto_801B4AA8 = 0;
    D_auto_801257B0 = D_auto_800710F0;
}
