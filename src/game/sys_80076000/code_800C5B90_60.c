#include "shared/bt_types.h"
#include "shared/bt_span_1000_code_80091A60.h"
#include "game/sys_80076000.h"
#include "span_1000/code_800E9538.h"


s32 func_800EBE6C(s32 arg0) {
    func_800E9A00(arg0, 0);
    func_800E7064(arg0);
    func_800E99D4(arg0);
    return -1;
}

void func_800EBEAC(s32 arg0) {
    func_800EA93C(arg0, &D_auto_80137518);
}

s32 func_800EBED4(struct ResetState *context)
{
    func_800E70C4(context);
    func_800E9A00(context, 2.0f);
    func_800E9A00(context, 10.0f);
    func_800E70DC(context);
    func_800E99D4(context);
    return -1;
}
