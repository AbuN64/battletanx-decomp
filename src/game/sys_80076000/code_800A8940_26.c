#include "shared/bt_span_1000_code_800A8940.h"
#include "game/sys_80076000.h"
#include "game/sys_801121E0.h"
#include "shared/bt_menu_render.h"
#include "span_1000/code_80077930.h"
#include "span_1000/code_80094704.h"




s32 func_800A8940(void) {
    u8 pattern;
    s32 i;
    s32 result;

    func_80111510(D_auto_802DF5B0, D_auto_802DF5C8, 1);
    func_80111510(D_auto_802DF5D0, D_auto_802DF5E8, 2);
    func_80111540(D_auto_802DF5F0, 5, func_800A8C88, 0, &D_auto_802E17A0, 0x10);
    func_8011D1A0(D_auto_802DF5F0);
    func_80111510(D_auto_802DF360, D_auto_802DF380, 4);
    func_8011BA10(5, D_auto_802DF360, 1);
    if (D_auto_8000030C != 0) {
        while (func_801120A0() < 0x2000000) {
        }
    }
    func_80110FE0(D_auto_802DF360, &pattern, D_auto_802DF390);
    func_80110C00(D_auto_802E17B8, 0x18);
    func_80110C00(D_auto_802E17D8, 0x18);
    for (i = 0; i < 4; i++) {
        D_auto_802DF540[i] = -1;
        D_auto_802DF560[i] = 1;
        D_auto_802DF570[i] = 0;
        D_auto_802DF550[i] = -1;
        D_auto_802E17A8[i] = -1;
    }
    D_auto_80126714 = 0;
    for (i = 0; i < 4; i++) {
        if (((pattern >> i) & 1) && !(D_auto_802DF390[i].errnum & 8) && (D_auto_802DF390[i].type & 4)
            && (D_auto_802DF390[i].type & 1)) {
            D_auto_802E17A8[D_auto_80126714] = i;
            if (D_auto_802DF390[i].status & 1) {
                result = func_80116C70(D_auto_802DF360, &D_auto_802DF3A0[i], i);
                if (result == 10) {
                    if (func_80113C40(D_auto_802DF360, &D_auto_802DF3A0[i], i) == 0) {
                        D_auto_802DF540[D_auto_80126714] = i;
                    } else {
                        D_auto_802DF550[D_auto_80126714] = i;
                    }
                } else if (result != 11) {
                    D_auto_802DF550[D_auto_80126714] = i;
                }
            }
            D_auto_80126714++;
        }
    }
    while (func_80119240(D_auto_802DF360, 0, 0) == 0) {
    }
    func_801193E0(D_auto_802DF5B0, &D_auto_802E17A0, 0);
    return D_auto_80126714;
}

