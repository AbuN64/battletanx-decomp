#include "game/sys_80076000.h"
#include "shared/bt_types.h"
int func_80106B28(DmaRegion *arg0, s32 arg1) {
    arg0->end = 0xB8000000;
    arg0->flags = 0;
    func_8007EEF8(arg1);
}
