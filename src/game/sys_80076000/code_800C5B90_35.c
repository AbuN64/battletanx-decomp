#include "shared/bt_unit.h"
#include "shared/bt_ai_team.h"
#include "shared/bt_span_1000_code_800E0B00.h"
#include "game/sys_80076000.h"

f32 func_800E9DA4(AiScoreContext *context) {
    f32 pos[2];
    f32 t;
    f32 r;
    s32 k;

    if (func_auto_800E3470(context->unit) != 0) {
        return 0.0f;
    }
    k = context->unit->state;
    pos[1] = context->unit->position[0];
    r = 0.0f;
    pos[0] = context->unit->position[2];
    if ((u32)(k - 8) < 2U) {
        r = 0.5f;
    }
    t = 0.5f - (func_800E0BC4(pos) / 16000.0f);
    if (t > 0.0f) {
        r += t;
    }
    return r;
}
