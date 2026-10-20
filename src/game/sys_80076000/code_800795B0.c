#include "include_asm.h"

#include "game/sys_801121E0.h"
#include "shared/bt_types.h"
#include "game/sys_80076000.h"

int func_800795B0(void) {
    osSendMesg(&D_80152F90, 1, 0);
    return D_80125764;
}

int func_800795E4(void) {
    osSendMesg(&D_801B4A28, D_80152A10, 1);
    D_80125764 = 0;
}

