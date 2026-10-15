#include "shared/bt_types.h"
#include "game/sys_80076000.h"


void func_800D0940(void) {
    func_80079064();
    func_800AB690();
    D_auto_80134E75 = 3;
    do {

    } while ((func_800CEE2C() & 0xFFFF) == 0xA);
    func_80079064();
}

s32 func_800D0994(void) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 var_a3;

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
    var_a3 = D_auto_80328160;
    if ((D_auto_8032815C > 0) & (var_a3 == 0)) {
        s32 i;
        s32 j;
        s32 found;
        u8 *p;
        for (i = 0; i < 15; i++) {
            p = D_auto_80327F5E + i * 32;
            for (j = 0; j < 16; j++) {
                if (*p++ != D_auto_80126718[j]) {
                    break;
                }
            }
            if (j == 16) {
                found = i;
                goto done;
            }
        }
        found = -1;
done:
        D_auto_8032816C = found;
        if (found != -1) {
            var_a3 = func_800D0B0C();
        }
    }
    return var_a3;
}
