#include "include_asm.h"

#include "game/sys_80076000.h"
#include "span_1000/code_800E9538.h"
#include "shared/bt_unit.h"
void func_800E97F0(struct ResetState *context, u32 key, f32 value)
{
    if (key & 0x1000) {
        func_800E986C(context->unk8, key, value);
    }
}

f32 *func_800E9820(struct ResetState *context, s32 parameter)
{
    if (parameter & 0x1000) {
        return func_800E9880(context->unk8, parameter);
    }
    return 0;
}

#include <ultra64.h>
#include "shared/bt_records.h"
#include "shared/bt_externs.h"

f32 func_800E9854(Unknown800E9854 *store, u8 index)
{
    return store->value10C[index];
}
INCLUDE_ASM("span_1000", func_800E986C);
