#include "shared/bt_types.h"
#include "game/sys_80076000.h"
#include "shared/bt_span_1000_code_8007A470.h"
#include "span_1000/code_800ABFD0.h"
s32 func_800CC1A8(void)
{
    s32 buttons;
    s32 delta;
    s32 item;
    buttons = func_80096920(0, 0);
    D_auto_80327614 ^= buttons & 0x80;
    if (D_auto_80327614 != 0) {
        return 0;
    }
    delta = 0;
    if (buttons & 1) {
        delta = -1;
        func_800ABF40();
    }
    if (buttons & 8) {
        delta++;
        func_800ABF40();
    }
    D_auto_80134E54 += delta;
    if ((D_auto_80134E74 == 0 || D_auto_80134E5C != 0) && D_auto_80134E54 == 5) {
        D_auto_80134E54 = delta + 5;
    }
    if (D_auto_80134E54 < 0) {
        D_auto_80134E54 = 6;
    }
    if (D_auto_80134E54 >= 7) {
        D_auto_80134E54 = 0;
    }
    delta = 0;
    if (buttons & 2) {
        delta--;
    }
    if (buttons & 4) {
        delta++;
    }
    item = D_auto_80134E54;
    switch (item) {
    case 0:
        if (delta != 0) {
            func_800ABF70();
            D_auto_80134E58 += delta;
            func_800A90E0();
            if (D_auto_80134E58 <= 0) {
                D_auto_80134E58 = D_auto_80126714;
            }
            if (D_auto_80134E58 > D_auto_80126714) {
                D_auto_80134E58 = 1;
            }
            if (D_auto_80134E58 >= 2) {
                D_auto_80134E5C = (D_auto_80134E5C <= 0) ? 1 : D_auto_80134E5C;
            }
        }
        break;
    case 1:
        if (delta != 0) {
            func_800ABF70();
        }
        if (D_auto_80134E58 >= 2) {
            D_auto_80134E5C += delta;
            if (D_auto_80134E5C >= 5) {
                D_auto_80134E5C = item;
            }
            if (D_auto_80134E5C <= 0) {
                D_auto_80134E5C = 4;
            }
        } else {
            D_auto_80134E5C += delta;
            if (D_auto_80134E5C >= 5) {
                D_auto_80134E5C = 0;
            }
            if (D_auto_80134E5C < 0) {
                D_auto_80134E5C = 4;
            }
        }
        break;
    }
    if (buttons & 0x40) {
        D_auto_80134E54 = 6;
        func_800ABF1C();
        return 1;
    }
    if (D_auto_80134E54 >= 2) {
        delta = buttons & 0x10;
        if (delta) {
            func_800ABF1C();
        }
        return delta;
    }
    return 0;
}
