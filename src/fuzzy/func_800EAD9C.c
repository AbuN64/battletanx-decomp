#include "game/sys_80076000.h"
#include "shared/bt_types.h"
s32 func_800E7490(void *);
s32 func_800E7628(void *);
extern s32 D_auto_800749A0;
extern s32 D_auto_800749A4;

s32 func_800EAD9C(s32 arg0) {
    s32 temp_fs0;
    s32 temp_fs1;

    temp_fs0 = D_auto_800749A0;
    temp_fs1 = D_auto_800749A4;
    func_800E9A00(arg0, temp_fs0);
    func_800E9A00(arg0, temp_fs1);
    func_800E7490(arg0);
    func_800E99D4(arg0);
    func_800E9A00(arg0, temp_fs0);
    func_800E9A00(arg0, temp_fs1);
    func_800E7628(arg0);
    func_800E99D4(arg0);
    return -1;
}
