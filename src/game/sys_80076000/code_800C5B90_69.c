#include "shared/bt_types.h"
#include "game/sys_80076000.h"


s32 func_800ECB98(void) {
    return D_auto_80137908;
}

void func_800ECBA8(void) {
    switch (D_auto_80137904) {
    case 2:
    case 3:
    case 11:
        D_auto_80137908 = 0x11;
        break;
    case 7:
        D_auto_80137908 = 0x18;
        break;
    }
}
