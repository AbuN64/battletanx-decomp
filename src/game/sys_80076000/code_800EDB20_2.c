#include "game/sys_80076000.h"
#include "shared/bt_types.h"

s32 func_800EF11C(s32 arg0) {
    func_800EF16C(arg0 + 0x18, 0x23, 2);
    return 1;
}

s32 func_800EF144(s32 arg0) {
    func_800EF16C(arg0 + 0x18, 0x20, 0);
    return 1;
}
