#include "shared/bt_gfx.h"
#include "shared/bt_types.h"
#include "game/sys_80076000.h"
void func_80085290(Gfx *list, s32 count, s32 offset) {
    s32 i;
    for (i = 0; i < count; i++) {
        if (list[i].words.w0 == 0xB8000000) {
            break;
        }
        if ((*(u8 *)&list[i]) == 0x04) {
            list[i].words.w1 += offset;
        }
    }
}

void func_800852E0(Gfx *commands, s32 count, s32 offset) {
    s32 i;
    for (i = 0; i < count; i++) {
        if (commands[i].words.w0 == 0xB8000000) {
            break;
        }
        if ((*(u8 *)&commands[i]) == 0xFD) {
            commands[i].words.w1 += offset;
        }
    }
}
