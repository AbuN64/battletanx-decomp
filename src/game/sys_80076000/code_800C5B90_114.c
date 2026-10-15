#include "shared/bt_types.h"
#include "game/sys_80076000.h"
#include "span_1000/code_800ABFD0.h"
s32 func_800DCCC0(void) {
    s32 count = 0;
    s32 buttons;
    s32 delta;
    s32 toggle;
    s32 input;
    s32 i;
    u8 *p;
    input = func_80096920(0, 0);
    toggle = D_auto_80327614 ^ (input & 0x80);
    D_auto_80327614 = toggle;
    buttons = input;
    if (toggle != 0) {
        return 0;
    }
    switch (D_auto_80328424) {
    case 1:
        count = 10;
        break;
    case 2:
        count = 2;
        break;
    case 0:
        count = 11;
        break;
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
    D_auto_80328424 += delta;
    if (D_auto_80328424 < 0) {
        D_auto_80328424 = 2;
    }
    if (D_auto_80328424 >= 3) {
        D_auto_80328424 = 0;
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
    D_auto_80328420 += delta;
    if (D_auto_80328420 < 0) {
        D_auto_80328420 = count - 1;
    }
    if (D_auto_80328420 >= count) {
        D_auto_80328420 = 0;
    }
    if (buttons & 0x50) {
        func_800ABF1C();
        switch (D_auto_80328424) {
        case 2:
            if (D_auto_80328420 == 0) {
                if (D_auto_80328428 > 0) {
                    D_auto_8032842F[D_auto_80328428] = ' ';
                    D_auto_80328428--;
                }
                D_auto_80328440 = -1;
            } else {
                func_800DCA7C();
            }
            break;
        case 1:
            if (D_auto_8032843A != 0) {
                i = 9;
                p = &D_auto_80328439;
                D_auto_8032843A = 0;
                D_auto_80328428 = 0;
                do {
                    *p = ' ';
                    i--;
                    p--;
                } while (i >= 0);
            }
            if (D_auto_80328428 < 10) {
                D_auto_80328430[D_auto_80328428++] = D_auto_8013568C[D_auto_80328420];
            }
            break;
        case 0:
            if (D_auto_8032843A != 0) {
                i = 9;
                p = &D_auto_80328439;
                D_auto_8032843A = 0;
                D_auto_80328428 = 0;
                do {
                    *p = ' ';
                    i--;
                    p--;
                } while (i >= 0);
            }
            if (D_auto_80328428 < 10) {
                D_auto_80328430[D_auto_80328428++] = D_auto_80135680[D_auto_80328420];
            }
            break;
        }
    }
    return buttons & 0x20;
}
