#include "shared/bt_types.h"
#include "game/sys_80076000.h"
#include "shared/bt_span_1000_code_800ABFD0.h"
s32 func_8007C58C(s32 state) {
    u16 result;
    switch (state) {
    case 15:
        func_800AC2D0();
        break;
    case 16:
        func_800B9C80();
        break;
    case 17:
        func_800BD1F0();
        break;
    case 18:
        func_800C0880();
        break;
    case 19:
        func_800C3EF0();
        break;
    default:
        return;
    }
    D_auto_801B4AE0 = state;
    do {
        result = func_8007C344(0);
        if (result == 2) {
            func_8007B590(2);
            D_auto_801B4AE0 = D_auto_80327B4C;
        }
    } while (result >= 2);
    func_80079948();
    return -(result == 0);
}
