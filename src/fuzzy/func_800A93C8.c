#include "game/sys_80076000.h"
#include "shared/bt_types.h"
int func_800A90E0();
extern s32 D_auto_80134E58;
extern s32 D_auto_802DF560;

void func_800A93C8(void) {
    s32 *var_a0;
    s32 *var_a1;
    s32 temp_v0;
    s32 var_v1;

    func_800A90E0();
    var_v1 = 0;
    if (D_auto_80134E58 > 0) {
        var_a1 = &D_auto_802DF560;
        var_a0 = D_auto_802DF540;
        do {
            temp_v0 = *var_a0;
            var_a0 += 4;
            var_v1 += 1;
            *var_a1 = ~temp_v0 != 0;
            var_a1 += 4;
        } while (var_v1 < D_auto_80134E58);
    }
}
