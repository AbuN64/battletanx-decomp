#include "game/sys_80076000.h"
#include "span_1000/code_800E9538.h"
void func_800E97F0(struct ResetState *context, u32 key, f32 value)
{
    if (key & 0x1000) {
        func_800E986C(context->unk8, key, value);
    }
}
