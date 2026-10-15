#include "shared/bt_types.h"
extern s32 D_auto_80125A70;

int func_800E51A0(s32 arg0) {
    return *(&D_auto_80125A70 + (arg0 * 0x10)) != 0;
}
