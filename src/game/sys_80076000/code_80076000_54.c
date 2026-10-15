#include "game/sys_80076000.h"
#include "shared/bt_span_1000_code_80076000.h"
#include "shared/bt_types.h"
int func_80077028(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_s0;
    s32 temp_s0_2;

    temp_s0_2 = func_80076000();
    temp_s0 = func_80076BF0(0x707, arg0, arg1, arg2);
    func_80076038(temp_s0_2);
    return temp_s0;
}
