#include "shared/bt_types.h"
#include "game/sys_80076000.h"
extern s32 func_80096920(s32 controller, s32 repeat);
extern void func_800C80E0(void);
extern s32 D_auto_80134010[];
extern u8 D_auto_80135773;
extern s32 D_auto_80327EE8;
extern s32 D_auto_80327EF0;
s32 func_800C7FC0(void);
s32 func_800C7FC0(void)
{
    s32 buttons;
    s32 result;
    s32 delta;
    s32 left;
    s32 right;
    s32 digit;
    s32 masked;
    u16 held;
    buttons = func_80096920(0, 0);
    result = 0;
    held = buttons;
    if (buttons & 1) {
        D_auto_80327EF0 = -D_auto_80327EF0;
    }
    if (buttons & 8) {
        D_auto_80327EF0 = -D_auto_80327EF0;
    }
    left = (buttons & 2) > 0;
    right = (buttons & 4) > 0;
    delta = right - left;
    D_auto_80134010[D_auto_80327EE8] += delta;
    if (D_auto_80135773 == 0 &&
        D_auto_80134010[D_auto_80327EE8] == 1) {
        D_auto_80134010[D_auto_80327EE8] = delta + 1;
    }
    digit = D_auto_80134010[D_auto_80327EE8];
    if (digit < 0) {
        digit = 9;
    }
    masked = -(digit < 10) & digit;
    D_auto_80134010[D_auto_80327EE8] = masked;
    func_800C80E0();
    if (held & 0x50) {
        result = 1;
    }
    if (held & 0x20) {
        result = 2;
    }
    return result;
}

void func_80077930(s32 arg0, s32 arg1, s32 arg2);




void func_800C80E0(void) {
    s32 previousMode;
    u32 romStart;
    u32 size;
    s32 bundle;

    if (D_auto_80134010[D_auto_80327EE8] >= 10) {
        D_auto_80134010[D_auto_80327EE8] = 0;
    }
    if (D_auto_80134010[D_auto_80327EE8] != D_auto_80327EE4) {
        previousMode = func_800AB95C(4);
        bundle = D_auto_80134010[D_auto_80327EE8];
        size = D_auto_80134080[bundle] - D_auto_80134058[bundle];
        romStart = D_auto_80134058[bundle];
        func_80077930(romStart, D_auto_803DA800, size);
        func_800F4F60(size, D_auto_803DA800, 0x25800, D_auto_803275F4);
        func_800AB95C(previousMode);
        D_auto_80133FE0 = 0x40;
        D_auto_80327EE4 = D_auto_80134010[D_auto_80327EE8];
    }
}
