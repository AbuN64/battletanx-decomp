#include "game/sys_80076000.h"
#include "shared/bt_span_1000_code_80076000.h"
#include "shared/bt_types.h"
s32 func_80076E34(s32 arg0) {
    s32 temp_s1;
    s32 var_s0;

    temp_s1 = func_80076000();
    var_s0 = func_80076BF0(0x404, arg0, 0, 0);
    if (var_s0 & 0x8000) {
        var_s0 |= 0xFFFF0000;
    }
    func_80076038(temp_s1);
    return var_s0;
}
