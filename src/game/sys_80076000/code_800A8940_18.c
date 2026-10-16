#include "shared/bt_types.h"
#include "game/sys_80076000.h"
s32 func_800A933C(void)
{
    s32 stillPresent;
    s32 i;
    func_800A90E0();
    stillPresent = 1;
    for (i = 0; i < D_auto_80134E58; i++) {
        if (D_auto_802DF560[i] != 0 && D_auto_802DF540[i] == -1) {
            stillPresent = 0;
            break;
        }
        D_auto_802DF560[i] = D_auto_802DF540[i] != -1;
    }
    return stillPresent;
}
void func_800A93C8(void)
{
    s32 i;
    func_800A90E0();
    for (i = 0; i < D_auto_80134E58; i++) {
        D_auto_802DF560[i] = D_auto_802DF540[i] != -1;
    }
}
