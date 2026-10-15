#include "game/sys_80076000.h"
#include "shared/bt_types.h"
s32 func_800E70DC(void *);
s32 func_800EBF50(s32 arg0) {
    func_800E70B0(arg0);
    func_800E9A00(arg0, 0x40000000);
    func_800E9A00(arg0, 0x41200000);
    func_800E70DC(arg0);
    func_800E99D4(arg0);
    return -1;
}
