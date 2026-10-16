#include "game/sys_80076000.h"
#include "shared/bt_types.h"
#include "span_1000/code_800E9538.h"

void func_800EB818(s32 arg0) {
    func_800EA93C(arg0, &D_auto_80136930);
}

s32 func_800EB840(struct ResetState *context)
{
    func_800E9A00(context, 1.0f);
    func_800E6C14(context);
    func_800E99D4(context);
    func_800E6FD8(context);
    return -1;
}
