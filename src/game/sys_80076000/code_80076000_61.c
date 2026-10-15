#include "shared/bt_types.h"
#include "game/sys_80076000.h"
#include "shared/bt_span_1000_code_8007A470.h"
void func_800849B0(u8 *level, s32 arg1, s32 arg2, s32 arg3, s32 arg4, u8 mask) {
    s32 i = 0;
    s32 count = func_8007AAA0();
    for (; i < count; i++) {
        if ((mask >> i) & 1) {
            func_800824E4(level, arg1, arg2, 0, arg3, arg4, i);
        }
    }
}
