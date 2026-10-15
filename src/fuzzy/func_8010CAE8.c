#include "shared/bt_types.h"
#include "shared/bt_callback_queue.h"
int func_8007DBC4();
s32 func_8010BFDC(void *);
s32 func_8010C450(void *);

void func_8010CAE8(struct CallbackDescriptor *arg0) {
    if (func_8007DBC4() == 0) {
        if ((u32) arg0->payload < 2U) {
            func_8010BFDC(arg0);
            return;
        }
        func_8010C450(arg0);
    }
}
