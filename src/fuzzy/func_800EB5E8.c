#include "game/sys_80076000.h"
#include "shared/bt_types.h"
s32 func_800E7320(s32 arg0);
s32 func_800E7360(s32 arg0);
s32 func_800E7380(void *);
s32 func_800E6BBC(void *);
s32 func_800EB5E8(s32 arg0) {
    func_800E9A00(arg0, 0x3F000000);
    func_800E7320(arg0);
    func_800E99D4(arg0);
    func_800E7360(arg0);
    func_800E7380(arg0);
    func_800E6BBC(arg0);
    return -1;
}
