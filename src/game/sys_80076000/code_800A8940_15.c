#include "shared/bt_types.h"
#include "game/sys_80076000.h"
#include "shared/bt_span_1000_code_800A8940.h"
void func_800A8EF8(s32 slot, s32 value, s32 param, s32 period)
{
    s32 mappedSlot;
    mappedSlot = D_auto_802DF540[slot];
    if (mappedSlot >= 0 && func_800EC644() == 0) {
        D_auto_802DF580[mappedSlot] = (param = (param != 0) ? param : 1);
        D_auto_802DF590[mappedSlot] = -((period > 0) ? period : 1);
        D_auto_802DF5A0[mappedSlot] = -1;
        D_auto_802DF570[mappedSlot] = value;
    }
}
