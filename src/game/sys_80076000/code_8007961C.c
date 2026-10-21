#include "include_asm.h"

#include "shared/bt_types.h"
#include "game/sys_80076000.h"


void func_8007961C(void) {
    func_8007A3D8(0x14);
}

void func_8007963C(s32 unused)
{
    s16 *flag;
    s32 i;
    s16 value;

    value = 1;
    i = 31;
    flag = &D_801B4A96;
    do {
        *flag = value;
        i--;
        flag--;
    } while (i >= 0);
    func_80079B08(unused);
}
