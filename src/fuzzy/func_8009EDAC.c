#include "shared/bt_types.h"
#include "shared/bt_callback_queue.h"
s32 func_8009D4DC(s32);

void func_8009EDAC(struct CallbackDescriptor *arg0) {
    func_8009D4DC(arg0->payload);
}
