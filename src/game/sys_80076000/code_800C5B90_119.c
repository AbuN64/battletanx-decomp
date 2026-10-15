#include "shared/bt_types.h"
#include "game/sys_80076000.h"
u16 func_800E0E1C(u16 index) {
    u16 group = index / 3;
    u16 slot = index % 3;
    return (slot + 2) % 3 + group * 3;
}
