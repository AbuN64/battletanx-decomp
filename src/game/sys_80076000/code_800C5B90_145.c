#include "game/sys_80076000.h"
#include "shared/bt_types.h"
#include "span_1000/code_800E9538.h"



s32 func_800EABB0(struct ResetState *context)
{
    func_800E9A00(context, 0.0f);
    func_800E75D4(context);
    func_800E99D4(context);
    return func_800EA93C(context, &D_auto_80135D80);
}

