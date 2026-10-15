#include "shared/bt_types.h"
#include "game/sys_80076000.h"
#include "shared/bt_menu_render.h"
#include "shared/bt_span_1000_code_8007963C.h"
#include "span_1000/code_800ABFD0.h"
s32 func_800CE214(void)
{
    s32 buttons;
    s32 result;
    s32 delta;
    s32 value;
    buttons = func_80096920(0, 0);
    D_auto_80327614 ^= buttons & 0x80;
    if (D_auto_80327614 != 0) {
        return 0;
    }
    result = 0;
    delta = 0;
    if (buttons & 1) {
        delta = -1;
        func_800ABF40();
    }
    if (buttons & 8) {
        delta++;
        func_800ABF40();
    }
    D_auto_80134E60 += delta;
    if (D_auto_80134E60 < 0) {
        D_auto_80134E60 = 7;
    }
    if (D_auto_80134E60 >= 8) {
        D_auto_80134E60 = 0;
    }
    delta = 0;
    if (buttons & 2) {
        delta = -1;
        func_800ABF70();
    }
    if (buttons & 4) {
        delta++;
        func_800ABF70();
    }
    switch (D_auto_80134E60) {
    case 0:
        D_auto_80125790 += delta;
        D_auto_80125790 = (D_auto_80125790 < 0) ? 0 : D_auto_80125790;
        D_auto_80125790 = (D_auto_80125790 >= 8) ? 7 : D_auto_80125790;
        func_800799C0((D_auto_80125790 << 12) & 0xF000);
        break;
    case 1:
        D_80125794 += delta;
        D_80125794 = (D_80125794 < 0) ? 0 : D_80125794;
        D_80125794 = (D_80125794 >= 8) ? 7 : D_80125794;
        func_80079BF4((D_80125794 << 28) >> 16);
        break;
    case 2:
        D_auto_80134E64 += delta;
        if (D_auto_80134E64 == 0xFF) {
            D_auto_80134E64 = 2;
        }
        if (D_auto_80134E64 >= 3) {
            D_auto_80134E64 = 0;
        }
        break;
    case 3:
        D_auto_80134E65 = (D_auto_80134E65 + delta) & 1;
        break;
    case 4:
        D_auto_80134E66 = (D_auto_80134E66 + delta) & 1;
        break;
    case 5:
        D_auto_80134E67 = (D_auto_80134E67 + delta) & 1;
        break;
    case 6:
        D_auto_80134E69 = (D_auto_80134E69 + delta) & 1;
        break;
    case 7:
        if (buttons & 0x54) {
            result = 2;
        }
        break;
    }
    if (buttons & 0x20) {
        result = 1;
    }
    return result;
}
