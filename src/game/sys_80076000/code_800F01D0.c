#include "shared/bt_audio_callbacks.h"
#include "shared/bt_callback_state.h"
#include "shared/bt_types.h"
#include "shared/bt_span_1000_code_800F01D0.h"
#include "game/sys_80076000.h"



              /* size 0x0 */

void func_800F2120(struct CallbackState *arg0) {
    ((arg0))->state = 0;
}

void func_800F2128(EffectKind17 *effect, void *sender, s32 *index)
{
    QueryBox box;
    box = D_803B8254[*index].box;
    effect->x = box.values[1];
    effect->z = box.values[2];
    func_801074AC(effect->motion, box.values[1], box.values[2], box.values[8]);
    func_80109364(&D_803B8254[effect->motion], box.values[3] * D_auto_80074E00, box.values[4] * D_auto_80074E00,
        box.values[5] * D_auto_80074E00, box.values[6] * D_auto_80074E00);
}
