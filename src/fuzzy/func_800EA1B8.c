#include "shared/bt_types.h"
#include "span_1000/code_800EA1FC.h"
#include "shared/bt_callback_queue.h"
void func_800EA1B8(s32 *arg0, s32 arg1) {
    s32 temp_a2;
    struct CallbackDescriptor *temp_v0;

    temp_a2 = *arg0;
    temp_v0 = arg0 + (temp_a2 * 8);
    temp_v0->reserved8 = arg1;
    temp_v0->payload = (u32) D_auto_80137888[arg1]->payload;
    *arg0 = temp_a2 + 1;
}
