#include "shared/bt_types.h"
#include "game/sys_80076000.h"
#include "span_1000/code_800E9538.h"


s32 func_800EAD2C(struct ResetState *context) {
    func_800E6FD8(context);
    return -1;
}

void func_800EAD4C(struct ResetState *arg0) {
    func_800EA93C(arg0, &D_auto_80135E64);
}

void func_800EAD74(struct ResetState *arg0) {
    func_800EA93C(arg0, &D_auto_80135F84);
}

s32 func_800EAD9C(struct ResetState *context)
{
    f32 weight0;
    f32 weight1;

    weight0 = D_auto_800749A0;
    weight1 = D_auto_800749A4;
    func_800E9A00(context, weight0);
    func_800E9A00(context, weight1);
    func_800E7490(context);
    func_800E99D4(context);
    func_800E9A00(context, weight0);
    func_800E9A00(context, weight1);
    func_800E7628(context);
    func_800E99D4(context);
    return -1;
}
