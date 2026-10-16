#include "shared/bt_types.h"
#include "game/sys_80076000.h"
#include "shared/bt_span_1000_code_8007EBA0.h"
void func_800A9F80(s32 arg0, s32 arg1) {
    void *temp_v0;
    temp_v0 = func_8007F060();
    (*(s16 *)((s8 *)(temp_v0) + (0x1A))) = (s16) (arg0 << 6);
    (*(s16 *)((s8 *)(temp_v0) + (0x1C))) = (s16) (arg1 << 6);
}
