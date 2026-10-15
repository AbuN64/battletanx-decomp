#include "shared/bt_types.h"
#include "sdk/libultra.h"
void *func_800DF55C(s32 arg0, void *arg1) {
    struct Node *var_a1;

    var_a1 = arg1;
loop_2:
    if (var_a1->h4 != 0) {
        var_a1 = arg0 + (var_a1->h4 * 0x18);
        goto loop_2;
    }
    return var_a1 + 4;
}
