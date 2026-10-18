#include "include_asm.h"

#include "shared/bt_gbi.h"
#include "game/sys_80076000.h"
#include "shared/bt_types.h"
int func_80106B28(Gfx *arg0, Gfx *arg1) {
    gSPEndDisplayListF3D(arg0);
    func_8007EEF8(arg1);
}

INCLUDE_DATA("span_1000", D_80106B54);
