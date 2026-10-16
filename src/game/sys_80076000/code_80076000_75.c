#include "shared/bt_types.h"
#include "game/sys_80076000.h"
#include "span_1000/code_8008F4EC.h"
void func_800933B8(void *arg0) {
    if ((s32) (*(u8 *)((s8 *)(arg0) + (0xE))) < ((*(u8 *)((s8 *)(arg0) + (0xD))) - 1)) {
        func_8008B89C();
        func_80093F3C(arg0);
        (*(u8 *)((s8 *)(arg0) + (0xC))) = (u8) ((*(u8 *)((s8 *)(arg0) + (0xC))) | 0x10);
    }
}
