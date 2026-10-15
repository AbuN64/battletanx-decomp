#include "shared/bt_types.h"
#include "game/sys_80076000.h"
void func_800D1EBC(u32 kind) {
    switch (kind) {
    case 0:
        func_800796F0(0x26, 0);
        break;
    case 1:
        func_800796F0(0x1C, 0);
        break;
    case 2:
        func_800796F0(1, 0);
        break;
    case 3:
        func_800796F0(3, 0);
        break;
    case 4:
        func_800796F0(0xD, 0);
        break;
    }
}
