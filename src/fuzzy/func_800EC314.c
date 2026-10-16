#include "shared/bt_types.h"
#include "span_1000/code_800E9538.h"

extern void func_800E9A00(void *, f32);
extern void func_800E6C14(void *);
extern void func_800E99D4(struct ResetState *arg0);
extern s32 func_800E6FD8(void);

s32 func_800EC314(struct ResetState *context);

s32 func_800EC314(struct ResetState *context)
{
    func_800E9A00(context, 1.0f);
    func_800E6C14(context);
    func_800E99D4(context);
    func_800E6FD8();
    return -1;
}

