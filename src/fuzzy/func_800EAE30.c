#include "game/sys_80076000.h"
#include "shared/bt_types.h"
s32 func_800E7560(void *);
s32 func_800E7628(void *);
extern s32 D_auto_800749A8;

s32 func_800EAE30(s32 arg0) {
    s32 temp_fs0;

    temp_fs0 = D_auto_800749A8;
    func_800E9A00(arg0, temp_fs0);
    func_800E7560(arg0);
    func_800E99D4(arg0);
    func_800E9A00(arg0, temp_fs0);
    func_800E9A00(arg0, 0x3F000000);
    func_800E7628(arg0);
    func_800E99D4(arg0);
    return -1;
}
