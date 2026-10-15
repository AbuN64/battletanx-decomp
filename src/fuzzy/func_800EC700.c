#include "game/sys_80076000.h"
#include "shared/bt_types.h"
extern s32 D_auto_8033B61C;

void * func_800EC700(s32 arg0) {
    if (D_auto_80137900 != 0) {
        return D_auto_8033B61C + ((arg0 * 0xC) + 0x30);
    }
    return 0;
}
