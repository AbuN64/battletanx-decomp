#include "shared/bt_types.h"
#include "game/sys_80076000.h"
#include "span_1000/code_800E9538.h"


s32 func_800EB00C(s32 arg0) {
    func_800E6B3C(arg0);
    return -1;
}

void func_800EB02C(s32 arg0) {
    func_800EA93C(arg0, &D_auto_801360E8);
}

void func_800EB054(s32 arg0) {
    func_800EA93C(arg0, &D_auto_80136164);
}

s32 func_800EB07C(struct ResetState *context)
{
    func_800E9A00(context, 0.5f);
    func_800E75D4(context);
    func_800E99D4(context);
    func_800E9A00(context, 1.0f);
    func_800E6AAC(context);
    func_800E99D4(context);
    func_800E6A78(context);
    func_800E6C80(context);
    return -1;
}
