#include "game/sys_80076000.h"
#include "shared/bt_types.h"
s32 func_800CF374(void) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;

    temp_v0 = func_800A942C();
    D_auto_8032815C = temp_v0;
    if (temp_v0 != 0) {
        temp_v0_2 = func_800A9484(temp_v0);
        D_auto_80328160 = temp_v0_2;
        if (((temp_v0_2 == 2) | (temp_v0_2 == 0)) != 0) {
            temp_v0_3 = func_800A95C0(D_auto_8032815C, &D_auto_80327F50, &D_auto_80328168);
            D_auto_80328160 = temp_v0_3;
            if (temp_v0_3 == 0) {
                D_auto_80328160 = func_auto_800A9B70(D_auto_8032815C, &D_auto_80328164);
                goto block_5;
            }
        } else {
            goto block_5;
        }
    } else {
        D_auto_80328160 = 0;
block_5:
        if (D_auto_80328160 == 0) {
            D_auto_80328160 = D_auto_80126710;
        }
    }
    return D_auto_80328160;
}
