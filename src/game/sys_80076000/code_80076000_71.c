#include "shared/bt_types.h"
#include "game/sys_80076000.h"
void func_8007AC20(u16 state) {
    for (;;) {
        switch (state) {
        case 2:
            func_8007B590(2);
            D_auto_801B4AE0 = D_auto_80327B4C;
            state = 0;
            break;
        case 1:
            D_auto_8012579D = 0;
            state = func_8007B590(1);
            break;
        case 0:
            state = func_8007C344(0);
            break;
        }
    }
}
