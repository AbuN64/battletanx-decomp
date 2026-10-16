#include "shared/bt_types.h"
#include "game/sys_80076000.h"
#include "span_1000/code_800E9538.h"


s32 func_800EAC80(s32 arg0) {
    func_800E6B3C(arg0);
    func_800E7064(arg0);
    return -1;
}

void func_800EACB4(s32 arg0) {
    func_800E6D58();
    func_800EA93C(arg0, &D_auto_80135DDC);
}

s32 func_800EACEC(struct ResetState *context)
{
    func_800E9A00(context, 4.0f);
    func_800E6C14(context);
    func_800E99D4(context);
    return -1;
}
