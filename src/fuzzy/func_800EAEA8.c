#include "game/sys_80076000.h"
#include "shared/bt_types.h"
s32 func_800E7560(void *);
s32 func_800E7628(void *);
s32 func_800EAEA8(s32 arg0) {
    func_800E9A00(arg0, 0);
    func_800E7560(arg0);
    func_800E99D4(arg0);
    func_800E9A00(arg0, 0x3DCCCCCD);
    func_800E9A00(arg0, 0x3E800000);
    func_800E7628(arg0);
    func_800E99D4(arg0);
    return -1;
}
