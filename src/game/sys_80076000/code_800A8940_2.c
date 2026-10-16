#include "shared/bt_types.h"
#include "game/sys_80076000.h"
#include "span_1000/code_80077930.h"
#include "game/sys_801121E0.h"


void func_800A8FB8(s32 arg0) {
    s32 temp_s0;

    temp_s0 = D_auto_802DF540[arg0];
    if ((temp_s0 >= 0) && (func_800EC644() == 0)) {
        D_auto_802DF570[temp_s0] = 1;
    }
}

void func_800A9010(void) {
    s32 i;

    func_80119240(D_auto_802DF5B0, &D_auto_802E17A0, 1);
    for (i = 0; i < 4; i++) {
        if (D_auto_802DF540[i] != -1) {
            D_auto_802DF570[i] = 0;
            func_80113C40(D_auto_802DF360, &D_auto_802DF3A0[i], i);
            func_801137F0(&D_auto_802DF3A0[i]);
        }
    }
    func_801193E0(D_auto_802DF5B0, &D_auto_802E17A0, 0);
}
