#include "shared/bt_common_types_d507c48987bb.h"
#include "shared/bt_span_1000_code_80091A60.h"
#include "shared/bt_span_1000_code_80107168.h"
#include "shared/bt_types.h"
extern s32 D_auto_803B8240;
extern s32 D_auto_803B8248;
extern s32 D_auto_803B824A;
extern s32 D_auto_803B8250;

void func_80107A14(QueryBox *arg0, s32 arg1, QueryResult **arg2, s32 *arg3) {
    s32 sp10;
    QueryResult **var_s3;
    s16 temp_v0;
    s32 temp_s0;
    s32 var_s1;
    s32 var_s2;
    s32 var_v0;

    var_s3 = arg2;
    var_s2 = 0;
    var_s1 = D_auto_803B8240;
    if ((s16) D_auto_803B8240 != -1) {
loop_2:
        temp_s0 = (s16) var_s1 * 0x28;
        if (*(&D_auto_803B8248 + temp_s0) & arg1) {
            var_v0 = var_s1 << 0x10;
            if (func_8010A8A8(arg0, &D_803B8254[(s16) var_s1].box, &sp10) & 0xFF) {
                var_s2 += 1;
                *var_s3 = *(&D_auto_803B8250 + temp_s0);
                var_s3 += 4;
                if (var_s2 < 0x20) {
                    goto block_5;
                }
            } else {
                goto block_6;
            }
        } else {
block_5:
            var_v0 = var_s1 << 0x10;
block_6:
            temp_v0 = *(&D_auto_803B824A + ((var_v0 >> 0x10) * 0x28));
            var_s1 = (s32) temp_v0;
            if (temp_v0 != -1) {
                goto loop_2;
            }
        }
    }
    *arg3 = var_s2;
}
