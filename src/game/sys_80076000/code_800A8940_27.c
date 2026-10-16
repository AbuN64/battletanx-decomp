#include "shared/bt_span_1000_code_800A8940.h"
#include "game/sys_80076000.h"
#include "game/sys_801121E0.h"
#include "span_1000/code_80077930.h"
#include "span_1000/code_80094704.h"




s32 func_800A90E0(void)
{
    s32 i;
    s32 result;

    func_80119240(D_auto_802DF5B0, &D_auto_802E17A0, 1);
    while (func_80119240(D_auto_802DF360, 0, 0) == 0) {
    }
    func_80110CA0(D_auto_802DF360);
    func_80119240(D_auto_802DF360, 0, 1);
    func_80110D24(D_auto_802DF390);
    for (i = 0; i < 4; i++) {
        D_auto_802DF540[i] = -1;
        D_auto_802DF550[i] = -1;
        D_auto_802E17A8[i] = -1;
    }
    D_auto_80126714 = 0;
    for (i = 0; i < 4; i++) {
        if (!(D_auto_802DF390[i].errnum & 8) && (D_auto_802DF390[i].type & 4) && (D_auto_802DF390[i].type & 1)) {
            D_auto_802E17A8[D_auto_80126714] = i;
            if (D_auto_802DF390[i].status & 1) {
                result = func_80116C70(D_auto_802DF360, &D_auto_802DF3A0[i], i);
                if (result == 2) {
                    D_auto_80126710 = result;
                }
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
    func_801193E0(D_auto_802DF5B0, &D_auto_802E17A0, 0);
    return D_auto_80126714;
}

