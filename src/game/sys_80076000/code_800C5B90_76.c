#include "shared/bt_types.h"
#include "game/sys_80076000.h"

void func_800E055C(s16 arg0) {
    s32 temp_v0;

    D_auto_80135838 = arg0;
    temp_v0 = func_800E09B0(arg0 & 0xFFFF);
    D_auto_8013583C = temp_v0;
    func_800E1648(temp_v0, &D_auto_80328450);
}
