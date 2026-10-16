#include "game/sys_80076000.h"
#include "shared/bt_types.h"
#include "span_1000/code_800E9538.h"

void func_800EBAB8(struct ResetState *arg0) {
    func_800EA93C(arg0, &D_auto_80137038);
}

s32 func_800EBAE0(struct ResetState *context)
{
    func_800E73A4(context);
    func_800E9A00(context, 0.0f);
    func_800E75D4(context);
    func_800E99D4(context);
    func_800E69A4(context);
    func_800E6C80(context);
    func_800E9A00(context, 0.39996f);
    func_800E73E0(context);
    func_800E99D4(context);
    return -1;
}
