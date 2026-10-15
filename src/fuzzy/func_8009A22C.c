#include "game/sys_80076000.h"
#include "shared/bt_span_1000_code_800F29F0.h"
#include "shared/bt_span_1000_code_8010BFDC.h"
#include "shared/bt_types.h"
#include "shared/bt_span_1000_code_80094704.h"
void func_8009A22C(struct Func_80096784_Record_Shared80096784 *arg0, u32 arg1) {
    u32 temp_v1;
    u32 var_a1;

    var_a1 = arg1;
    switch (var_a1) {                               /* switch 1; irregular */
    case 23:                                        /* switch 1 */
        return;
    case 22:                                        /* switch 1 */
        temp_v1 = func_800F38F4() & 0x1F;
        switch (temp_v1) {                          /* switch 2 */
        case 0:                                     /* switch 2 */
            var_a1 = 1;
        default:                                    /* switch 1 */
block_21:
            func_80099D90((s32) arg0, (s32) var_a1);
            break;
        case 1:                                     /* switch 2 */
        case 2:                                     /* switch 2 */
        case 3:                                     /* switch 2 */
        case 4:                                     /* switch 2 */
        case 5:                                     /* switch 2 */
        case 6:                                     /* switch 2 */
            var_a1 = 2;
            goto block_21;
        case 7:                                     /* switch 2 */
        case 8:                                     /* switch 2 */
        case 9:                                     /* switch 2 */
        case 10:                                    /* switch 2 */
        case 11:                                    /* switch 2 */
        case 12:                                    /* switch 2 */
            var_a1 = 3;
            goto block_21;
        case 13:                                    /* switch 2 */
        case 14:                                    /* switch 2 */
            var_a1 = 4;
            goto block_21;
        case 15:                                    /* switch 2 */
        case 16:                                    /* switch 2 */
        case 17:                                    /* switch 2 */
        case 18:                                    /* switch 2 */
        case 19:                                    /* switch 2 */
            var_a1 = 7;
            goto block_21;
        case 20:                                    /* switch 2 */
        case 21:                                    /* switch 2 */
            var_a1 = 9;
            goto block_21;
        case 22:                                    /* switch 2 */
        case 23:                                    /* switch 2 */
            var_a1 = 0xF;
            goto block_21;
        case 24:                                    /* switch 2 */
        case 25:                                    /* switch 2 */
            var_a1 = 0xC;
            goto block_21;
        case 26:                                    /* switch 2 */
        case 27:                                    /* switch 2 */
        case 28:                                    /* switch 2 */
        case 29:                                    /* switch 2 */
            var_a1 = 0x12;
            goto block_21;
        case 30:                                    /* switch 2 */
        case 31:                                    /* switch 2 */
            var_a1 = 0x13;
            goto block_21;
        }
        return;
    case 1:                                         /* switch 1 */
        if ((arg0->channel != 0) && (D_auto_801B4AA8 <= 0)) {
            var_a1 = 1;
            goto block_21;
        }
        break;
    }
}
