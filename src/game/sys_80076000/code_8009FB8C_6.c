#include "game/sys_80076000.h"
#include "span_1000/code_8008F4EC.h"
void func_800A0B8C(ShotEffect *effect, s32 arg1, u32 message, s32 arg3, PositionReport *report)
{
    s32 sound;

    switch (message) {
    case 0:
        func_800A06F8(effect, arg1, arg3, report);
        break;
    case 2:
        if (effect->alternate == 0) {
            report->valid = 1;
            report->x = effect->position[0];
            report->z = effect->position[2];
        }
        break;
    case 3:
        func_800A0930(effect, 0, arg3, 0);
        break;
    case 4:
        switch (effect->kind) {
        case 0:
            sound = D_auto_802D5A5A;
            break;
        case 2:
            sound = D_auto_802D5A8E;
            break;
        case 1:
            if (effect->alternate != 0) {
                sound = D_auto_802D5AC0;
            } else {
                sound = D_auto_802D5A76;
            }
            break;
        default:
            sound = 0;
            break;
        }
        func_800905D8(sound, effect->position, 0, effect->volume, 0, effect->soundClass, 0);
        func_8008B89C(effect);
        break;
    }
}
