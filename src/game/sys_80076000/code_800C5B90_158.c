#include "game/sys_80076000.h"
#include "shared/bt_navigation_mesh.h"


s32 func_800DF214(u16 id) {
    s32 kind = D_auto_80135834->kinds[id];

    if (D_auto_80135834->enabled[kind] == 0) {
        return 0;
    }
    if (kind >= 15) {
        return 1;
    }
    switch (kind) {
    case 0:
        return 0;
    case 5:
        return 1;
    case 13:
        return func_8007C6D8() != 0;
    case 6:
        return 2;
    case 14:
        return (func_8007C6D8() != 0) << 1;
    case 4:
        return 3;
    case 12:
        return func_8007C6D8() ? 3 : 0;
    }
    return 4;
}
