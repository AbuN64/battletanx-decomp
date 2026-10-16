#include "shared/bt_gbi.h"
#include "shared/bt_gfx.h"
#include "shared/bt_types.h"
#include "game/sys_80076000.h"
Gfx *func_8008067C(Gfx *src, s32 count, Gfx *next) {
    Gfx *dst;
    if (D_auto_80125800 + count + 1 > 0x400) {
        return next;
    } else {
        s16 used = D_auto_80125800;
        D_auto_80125800 += count + 1;
        dst = &D_auto_801C2F40[D_auto_80125802][used];
        func_801106A0(src, dst, count * sizeof(Gfx));
        {
            Gfx *g = dst + count;
            _GBI_CMD(g, 0x06010000, (u32)next);
        }
        return dst;
    }
}
