#include "shared/bt_types.h"
#include "game/sys_80076000.h"
void func_800DAD60(void) {
    s32 i;
    s32 fill = ' ';
    u8 *cursor;
    D_auto_80328420 = 0;
    D_auto_80328424 = 0;
    D_auto_80328440 = -1;
    D_auto_8032843C = 0;
    D_auto_8032843A = 0;
    D_auto_80328428 = 0;
    for (i = 9, cursor = &D_auto_80328430[9]; i >= 0; i--, cursor--) {
        *cursor = fill;
    }
}

void func_80077930(s32 arg0, s32 arg1, s32 arg2);




void func_800DADBC(void)
{
    u32 size = D_auto_B04AD7E0 - D_auto_B04AC150;

    func_80077930((u32)D_auto_B04AC150, D_auto_803DA800, size);
    func_800F4F60(size, D_auto_803DA800, 0x25800, D_auto_803275F4);
    func_801053B0(1);
}
