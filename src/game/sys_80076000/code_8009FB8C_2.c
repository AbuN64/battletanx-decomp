#include "game/sys_80076000.h"
#include "shared/bt_types.h"
void func_800A04F0(Obj80137A3C *arg0, s32 *arg1) {
    s32 temp_a0;

    temp_a0 = arg0->unk20;
    if (temp_a0 != 0) {
        func_80107170(temp_a0);
    }
    *arg1 = 2;
}

s32 func_800A052C(ShotEffect *object)
{
    switch (object->kind) {
    case 0:
        return D_auto_802D5A5A;
    case 2:
        return D_auto_802D5A8E;
    case 1:
        if (object->alternate) {
            return D_auto_802D5AC0;
        }
        return D_auto_802D5A76;
    }
    return 0;
}
