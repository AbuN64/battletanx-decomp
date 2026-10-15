#include "shared/bt_types.h"
#include "game/sys_80076000.h"
#include "span_1000/code_800ABFD0.h"
s32 func_800DAC4C(void)
{
    s32 buttons;
    s32 result;
    s32 delta;
    s32 index;
    buttons = func_80096920(0, 0);
    D_auto_80327614 ^= buttons & 0x80;
    if (D_auto_80327614 != 0) {
        return 0;
    }
    result = 0;
    delta = 0;
    if (buttons & 2) {
        delta = -1;
        func_800ABF70();
    }
    if (buttons & 4) {
        delta++;
        func_800ABF70();
    }
    index = D_auto_8013566C += delta;
    if (index < 0) {
        index = D_auto_80328410 - 1;
    }
    D_auto_8013566C = index;
    if (index >= D_auto_80328410) {
        index = 0;
    }
    D_auto_8013566C = index;
    if (buttons & 0x50) {
        result = 1;
        D_auto_80135674 = D_auto_801352B0[index];
    }
    if (buttons & 0x20) {
        result = 2;
    }
    return result;
}
