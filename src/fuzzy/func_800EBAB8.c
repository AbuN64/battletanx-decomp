#include "shared/bt_types.h"
#include "span_1000/code_800E9538.h"

extern void func_800E9A00(void *, f32);
extern s32 func_800E73A4(struct ResetState *context);
extern s32 func_800E75D4(struct ResetState *);
extern void func_800E99D4(struct ResetState *arg0);
extern s32 func_800E69A4(struct ResetState *);
extern s32 func_800E6C80(struct ResetState *);
extern s32 func_800E73E0(struct ResetState *context);

s32 func_800EBAE0(struct ResetState *context);

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

