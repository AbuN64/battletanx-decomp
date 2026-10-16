#include "game/sys_80076000.h"
#include "game/sys_801121E0.h"
#include "span_1000/code_80077930.h"

s32 func_800A9AB0(s32 channel)
{
    s32 status;

    func_80119240(D_auto_802DF5B0, &D_auto_802E17A0, 1);
    channel--;
    status = func_801181B0(&D_auto_802DF3A0[channel]);
    func_801193E0(D_auto_802DF5B0, &D_auto_802E17A0, 0);
    return status;
}
