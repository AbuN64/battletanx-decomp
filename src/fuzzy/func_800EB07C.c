#include "game/sys_80076000.h"
#include "shared/bt_types.h"
s32 func_800E6A78(void *);
s32 func_800EB07C(s32 arg0) {
    func_800E9A00(arg0, 0x3F000000);
    func_800E75D4(arg0);
    func_800E99D4(arg0);
    func_800E9A00(arg0, 0x3F800000);
    func_800E6AAC(arg0);
    func_800E99D4(arg0);
    func_800E6A78(arg0);
    func_800E6C80(arg0);
    return -1;
}
