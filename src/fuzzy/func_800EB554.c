#include "game/sys_80076000.h"
#include "shared/bt_types.h"
s32 func_800E76D0(void *);
extern s32 D_auto_80136658;

void func_800EB554(s32 arg0) {
    func_800E9A00(arg0, 0x42C80000);
    func_800E76D0(arg0);
    func_800E99D4(arg0);
    func_800EA93C(arg0, &D_auto_80136658);
}
