#include "game/sys_80076000.h"
#include "shared/bt_span_1000_code_8010BFDC.h"
void func_8010DC0C(EffectKind1D *effect, s32 *state)
{
    f32 point[3];
    if (effect->startTick == 0) {
        point[0] = effect->center.x;
        point[1] = 0.0f;
        point[2] = effect->center.z;
        func_800ED8C0(point, 13);
        if (effect->motion != 0) {
            func_80107170(effect->motion);
        }
        func_80085B4C(5, effect->center.x, effect->center.z);
        effect->startTick = D_auto_801B4AA8;
    } else if (effect->startTick + 8 < D_auto_801B4AA8) {
        func_8009F958(effect, &effect->center, 108.0f, 20.0f, (u8)effect->owner);
        *state = 2;
    }
}
