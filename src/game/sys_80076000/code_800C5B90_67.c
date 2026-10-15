#include "shared/bt_types.h"
#include "game/sys_80076000.h"


s32 func_800EC644(void) {
    return D_auto_80137900;
}

s32 func_800EC654(void) {
    return (D_auto_80137900 != 0) * 2;
}

s32 func_800EC668(s32 arg0) {
    if (D_auto_80137900 == 0) {
        return 0;
    }
    switch (arg0) {
    case 0:
        return D_auto_8033B608;
    case 1:
        return D_auto_8033B604 - D_auto_8033B608;
    default:
        return 0;
    }
}

s32 func_800EC6BC(s32 arg0, s32 arg1) {
    if (D_auto_80137900 == 0) {
        return 0;
    }
    switch (arg0) {
    case 0:
        return arg1;
    case 1:
        return arg1 + D_auto_8033B608;
    default:
        return 0;
    }
}

f32 *func_800EC700(s32 index) {
    f32 *result;
    if (D_auto_80137900 != 0) {
        result = D_auto_8033B61C[index + 4];
    } else {
        result = 0;
    }
    return result;
}
