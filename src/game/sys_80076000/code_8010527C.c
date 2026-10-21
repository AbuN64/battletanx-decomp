#include "include_asm.h"

#include "shared/bt_types.h"
#include "game/sys_80076000.h"


void func_8010527C(void) {
    D_801416F0 = 0xFA;
}

#include "shared/bt_menu_render.h"
#include "shared/bt_records.h"
#include "shared/bt_externs.h"

void func_80105290(void **gfxp)
{
    void *gfx;
    s32 i;

    gfx = *gfxp;
    func_8010698C(&gfx);
    for (i = 0; i < 48; i++) {
        if ((u32)(D_801416F0 + i * 14 + 9) < 0x149) {
            func_8010555C(D_80142904[i].value04[0], D_80142904[i].value04[1],
                                   D_80142904[i].value04[2], D_80142904[i].value04[3]);
            func_8010552C(50, D_801416F0 + i * 14);
            func_801054E0(D_80142904[i].value00);
            func_80105A50(&gfx, D_80142904[i].value08, 0, 320);
        }
    }
    D_801416F0--;
    *gfxp = gfx;
}
