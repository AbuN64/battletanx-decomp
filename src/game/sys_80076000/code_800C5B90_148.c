#include "game/sys_80076000.h"
#include "shared/bt_types.h"
void func_80077930(s32 arg0, s32 arg1, s32 arg2);




void func_800D6908(void)
{
    u32 size = D_auto_B03D6940 - D_auto_B03D16D0;
    s32 *option = D_auto_80328400;
    s32 i;

    func_80077930((u32)D_auto_B03D16D0, D_auto_803DA800, size);
    func_800F4F60(size, D_auto_803DA800, 0x25800, D_auto_803275F4);
    D_auto_803283E8 = -2;
    D_auto_803283C4 = 0;
    for (i = 0; i < 4; i++) {
        D_auto_803283F0[i] = 0;
        if (i < D_auto_80134E58) {
            D_auto_803283C8[i] = 0;
            D_auto_803283C4++;
        } else if (option[i] < 4) {
            D_auto_803283D8[i] = 1;
            D_auto_801262C0[i] = 3;
            D_auto_803283C4++;
        } else {
            option[i] = 4;
            D_auto_803283D8[i] = 2;
            D_auto_801262C0[i] = 4;
        }
    }
    D_auto_803283C0 = func_800D9024();
}

