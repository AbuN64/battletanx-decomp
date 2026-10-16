#include "shared/bt_types.h"
#include "game/sys_80076000.h"


s32 func_800EC3F0(void) {
    return D_auto_8013790C[D_auto_80137904];
}

void func_80077930(s32 arg0, s32 arg1, s32 arg2);
s32 func_800EC410(void) {
    u32 rom;
    s32 i;

    switch (D_auto_80137904) {
    case 1:
        rom = (u32)D_auto_B0334630;
        break;
    case 2:
        rom = (u32)D_auto_B0348DB0;
        break;
    case 4:
        rom = (u32)D_auto_B03747F0;
        break;
    case 5:
        rom = (u32)D_auto_B0380670;
        break;
    case 6:
        rom = (u32)D_auto_B0383CC0;
        break;
    case 7:
        rom = (u32)D_auto_B038BBE0;
        break;
    case 8:
        rom = (u32)D_auto_B03A0820;
        break;
    case 9:
        rom = (u32)D_auto_B03B9630;
        break;
    case 10:
        rom = (u32)D_auto_B03C1550;
        break;
    case 3:
    case 11:
        rom = (u32)D_auto_B0364100;
        break;
    case 0:
    default:
        rom = (u32)D_auto_B0319B30;
        break;
    }
    func_80077930(rom, &D_auto_8033B600, sizeof(DemoHeader));
    D_auto_8033B5F4 = D_auto_8033B600.objectCount * 12 + 0x30;
    D_auto_8033B618 = func_80081A78(D_auto_8033B5F4 * D_auto_8033B600.frameCount + D_auto_8033B600.trailerCount * 12);
    if (D_auto_8033B618 == 0) {
        return -1;
    }
    func_80077930(rom + sizeof(DemoHeader), D_auto_8033B618,
                 D_auto_8033B5F4 * D_auto_8033B600.frameCount + D_auto_8033B600.trailerCount * 12);
    D_auto_8033B5F0 = 0;
    D_auto_8033B624 = 0;
    D_auto_80137900 = 1;
    D_auto_8033B61C = (f32 (*)[3])D_auto_8033B618;
    D_auto_8033B620 = D_auto_8033B618 + D_auto_8033B5F4 * D_auto_8033B600.frameCount;
    for (i = 0; i < D_auto_8033B600.trailerCount; i++) {
    }
    if (D_auto_8033B600.trailerCount == 0) {
        D_auto_8033B624 = -1;
    }
    D_auto_8033B628 = -1;
    func_800ECBA8();
    return 0;
}
