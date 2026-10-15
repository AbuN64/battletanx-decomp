#include "shared/bt_types.h"
int func_800D1F20(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 *arg5, s32 *arg6) {
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_a2;
    s32 temp_a3;
    s32 temp_a3_2;
    s32 temp_t0;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_v0;
    s32 var_v1;

    if (arg0 < 0xA) {
        *arg5 = arg0 == 0;
        *arg6 = arg0;
        return 0;
    }
    var_v0 = 1;
    if (arg0 < 0x28) {
        *arg5 = arg0 == 0xA;
        var_v1 = arg0 - 0xA;
    } else {
        var_v0 = 2;
        if (arg0 < 0x46) {
            *arg5 = arg0 == 0x28;
            var_v1 = arg0 - 0x28;
        } else {
            var_v0 = 3;
            if (arg0 < 0x64) {
                *arg5 = arg0 == 0x46;
                var_v1 = arg0 - 0x46;
            } else {
                var_v0 = 4;
                if (arg0 < 0x82) {
                    *arg5 = arg0 == 0x64;
                    var_v1 = arg0 - 0x64;
                } else {
                    temp_a3 = (arg3 / 200) * 2;
                    temp_v1 = temp_a3 + 0x91;
                    var_v0 = 5;
                    if (arg0 < temp_v1) {
                        *arg5 = arg0 == 0x82;
                        var_v1 = arg0 - 0x82;
                    } else {
                        temp_a1 = temp_a3 + ((arg1 * 6) + 0x91);
                        temp_t0 = temp_a1 + 0xF;
                        var_v0 = 6;
                        if (arg0 < temp_t0) {
                            *arg5 = arg0 == temp_v1;
                            var_v1 = (arg0 - 0x91) - temp_a3;
                        } else {
                            temp_a2 = temp_a1 + ((arg2 * 0x28) + 0xF);
                            temp_a3_2 = temp_a2 + 0x1E;
                            var_v0 = 7;
                            if (arg0 < temp_a3_2) {
                                *arg5 = arg0 == temp_t0;
                                var_v1 = (arg0 - 0xF) - temp_a1;
                            } else {
                                temp_a1_2 = temp_a2 + ((arg4 * 0x28) + 0x1E);
                                temp_v1_2 = temp_a1_2 + 0x1E;
                                var_v0 = 8;
                                if (arg0 >= temp_v1_2) {
                                    var_v0 = 9;
                                    *arg5 = arg0 == temp_v1_2;
                                    var_v1 = (arg0 - 0x1E) - temp_a1_2;
                                } else {
                                    *arg5 = arg0 == temp_a3_2;
                                    var_v1 = (arg0 - 0x1E) - temp_a2;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    *arg6 = var_v1;
    return var_v0;
}
