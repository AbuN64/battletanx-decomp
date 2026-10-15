#include "game/sys_80076000.h"
#include "shared/bt_menu_render.h"
#include "shared/bt_types.h"
extern s32 D_auto_80126154;
extern s32 D_auto_801261EC;

void func_80101E9C(s32 arg0, u32 arg1, s32 arg2, s32 arg3) {
    s32 temp_s0;
    s32 var_s1;
    s32 var_s3;
    s32 var_s4;
    s8 *var_a1;

    var_s3 = 0xF;
    var_s4 = 0x131;
    var_s1 = 0x78;
    switch (arg2) {                                 /* switch 1; irregular */
    case 1:                                         /* switch 1 */
        var_s1 = 0xB4;
        if (arg1 == 0) {
            var_s1 = 0x3C;
        }
        break;
    case 2:                                         /* switch 1 */
        switch (arg1) {                             /* switch 2; irregular */
        case 0:                                     /* switch 2 */
            var_s1 = 0x3C;
            break;
        default:                                    /* switch 2 */
            if (arg1 == arg2) {
                var_s1 = 0xAA;
block_22:
                var_s3 = 0xA0;
            }
            break;
        case 1:                                     /* switch 2 */
            var_s1 = 0xAA;
            var_s4 = 0xA0;
            break;
        }
        break;
    case 3:                                         /* switch 1 */
        var_s1 = 0xAA;
        if (arg1 < 2U) {
            var_s1 = 0x3C;
        }
        if (((arg1 == 0) | (arg1 == 2)) != 0) {
            var_s4 = 0xA0;
        } else {
            goto block_22;
        }
        break;
    }
    func_8010698C(&D_8037A174);
    func_801054E0(4);
    func_8010552C(0, var_s1);
    func_8010555C(0xFF, 0xFF, 0xFF, 0xB4);
    if (arg0 == 0x27) {
        func_80105A50(&D_8037A174, arg3 + 0x220, var_s3, var_s4);
        func_8010552C(0, var_s1 + 0xA);
        var_a1 = arg3 + 0x240;
    } else {
        temp_s0 = arg0 * 4;
        func_80105A50(&D_8037A174, *(&D_auto_80126154 + temp_s0), var_s3, var_s4);
        func_8010552C(0, var_s1 + 0xA);
        var_a1 = *(&D_auto_801261EC + temp_s0);
    }
    func_80105A50(&D_8037A174, var_a1, var_s3, var_s4);
}
