#include "shared/bt_span_1000_code_8008B1F0.h"
#include "game/sys_80076000.h"



void func_8008B48C(void)
{
    s32 index;
    EffectSlot *effect;

    for (index = D_auto_802C13F4; index != -1; index = D_auto_802C3A30[index].header.next) {
        effect = &D_auto_802C3A30[index];
        if (D_auto_802C3800[effect->header.kind].draw) {
            D_auto_802C3800[effect->header.kind].draw(effect);
        }
    }
    for (index = D_auto_802C3A28; index != -1; index = D_auto_802C3A30[index].header.next) {
        effect = &D_auto_802C3A30[index];
        if (D_auto_802C3800[effect->header.kind].draw) {
            D_auto_802C3800[effect->header.kind].draw(effect);
        }
    }
    for (index = D_auto_802C13E2; index != -1; index = D_auto_802C3A30[index].header.next) {
        effect = &D_auto_802C3A30[index];
        if (D_auto_802C3800[effect->header.kind].draw) {
            D_auto_802C3800[effect->header.kind].draw(effect);
        }
    }
    for (index = D_auto_802C13F6; index != -1; index = D_auto_802C3A30[index].header.next) {
        effect = &D_auto_802C3A30[index];
        if (D_auto_802C3800[effect->header.kind].draw) {
            D_auto_802C3800[effect->header.kind].draw(effect);
        }
    }
}

