#include "game/sys_8011C210.h"
#include "shared/bt_types.h"
#include "span_1000/code_8007963C.h"
int func_8011C300(SlotTable *owner);
s32 func_8011CC10(s32);

int func_80079948(void) {
    s16 var_s0;

    var_s0 = 0;
    do {
        func_8011CB90(D_auto_80150380, var_s0);
        var_s0 += 1;
        if (func_8011C300(D_auto_80150380) == 1) {
            func_8011CC10(D_auto_80150380);
        }
    } while (var_s0 < 0x20);
}
