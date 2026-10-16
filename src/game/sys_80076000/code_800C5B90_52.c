#include "shared/bt_types.h"
#include "shared/bt_span_1000_code_80091A60.h"
#include "game/sys_80076000.h"
#include "span_1000/code_800E9538.h"


s32 func_800EB920(s32 arg0) {
    func_800E9A00(arg0, 0);
    func_800E6FF8(arg0);
    func_800E99D4(arg0);
    func_800E6C5C(arg0);
    return -1;
}

void func_800EB968(s32 arg0) {
    func_800EA93C(arg0, &D_auto_80136C18);
}

s32 func_800EB990(struct ResetState *context)
{
    func_800E9A00(context, 1.0f);
    func_800E6FF8(context);
    func_800E99D4(context);
    func_800E6C5C(context);
    return -1;
}
