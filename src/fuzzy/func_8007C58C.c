#include "shared/bt_span_1000_code_800ABFD0.h"
#include "shared/bt_types.h"
void func_800B9C80(void);
void func_800BD1F0(void);
void func_800C0880(void);
void func_800C3EF0(void);
int func_8007C344();
int func_8007B590(int arg0);
int func_80079948(void);
extern s8 D_auto_801B4AE0;
extern s32 D_auto_80327B4C;

s32 func_8007C58C(s8 arg0) {
    s32 var_v0;
    s32 var_v0_2;
    u32 temp_s0;

    var_v0 = (u32) (arg0 - 0xF) < 5U;
    if (var_v0 != 0) {
        switch (arg0) {
        case 15:
            func_800AC2D0();
            break;
        case 16:
            func_800B9C80();
            break;
        case 17:
            func_800BD1F0();
            break;
        case 18:
            func_800C0880();
            break;
        case 19:
            func_800C3EF0();
            break;
        }
        D_auto_801B4AE0 = arg0;
        do {
            temp_s0 = func_8007C344(0) & 0xFFFF;
            var_v0_2 = temp_s0 < 2U;
            if (temp_s0 == 2) {
                func_8007B590(2);
                D_auto_801B4AE0 = (s8) D_auto_80327B4C;
                var_v0_2 = temp_s0 < 2U;
            }
        } while (var_v0_2 == 0);
        func_80079948();
        var_v0 = -(temp_s0 == 0);
    }
    return var_v0;
}
