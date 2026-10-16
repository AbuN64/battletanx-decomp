#include "game/sys_80076000.h"
#include "game/sys_801121E0.h"
#include "span_1000/code_80077930.h"

s32 func_800A9484(s32 channel)
{
    s32 status;

    func_80119240(D_auto_802DF5B0, &D_auto_802E17A0, 1);
    channel--;
    status = func_80116C70(D_auto_802DF360, &D_auto_802DF3A0[channel], channel);
    if (status == 10 && func_80113C40(D_auto_802DF360, &D_auto_802DF3A0[channel], channel) == 0) {
        status = 1;
    }
    func_801193E0(D_auto_802DF5B0, &D_auto_802E17A0, 0);
    if (status == 2) {
        D_auto_80126710 = status;
    }
    return status;
}
