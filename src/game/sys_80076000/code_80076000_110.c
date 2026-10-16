#include "game/sys_80076000.h"
#include "shared/bt_player.h"
#include "span_1000/code_8007EBA0.h"
void func_80081934(void)
{
    s32 count = func_8007AAA0();
    u16 i;
    for (i = 0; i < count; i++) {
        PlayerRecord *player = func_800A6688(i);
        func_800A424C(player);
        memcpy(D_auto_801C9058[i].matrix, player->matrix.matrix, sizeof(player->matrix.matrix));
        D_auto_801C9058[i].fixed = 0;
    }
    func_80080C60(0, D_auto_801C9058, D_auto_801C9050);
}
