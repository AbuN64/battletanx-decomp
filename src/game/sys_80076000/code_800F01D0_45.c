#include "game/sys_80076000.h"
void func_800F2478(EffectKind17 *effect, void *sender, u32 event, s32 *index, void *output)
{
    QueryBox box;
    switch (event) {
    case 0:
        func_800F2270(effect, sender, index, output);
        break;
    case 5:
    box = D_803B8254[*index].box;
    effect->x = box.values[1];
    effect->z = box.values[2];
    func_801074AC(effect->motion, box.values[1], box.values[2], box.values[8]);
    func_80109364(&D_803B8254[effect->motion], box.values[3] * D_auto_80074E04, box.values[4] * D_auto_80074E04,
        box.values[5] * D_auto_80074E04, box.values[6] * D_auto_80074E04);
        break;
    case 4:
        effect->active = 0;
        break;
    }
}
