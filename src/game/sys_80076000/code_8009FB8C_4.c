#include "game/sys_80076000.h"
#include "shared/bt_unit.h"
void func_800A0380(void) {
    s32 i;
    for (i = 0; i < 20; i++) {
        D_auto_802D8180[i].active = 0;
        D_auto_802D8180[i].visible = 0;
    }
}
