#include "include_asm.h"

#include "shared/bt_types.h"
#include "game/sys_80076000.h"
#include "game/sys_8011C210.h"
#include "shared/bt_menu_render.h"
#include "span_1000/code_8007963C.h"
int func_8011C300(SlotTable *owner);
s32 func_800798C0(s32 id)
{
    if (id != -1) {
        func_8011CB90(D_80150380, id);
        if (D_801B4A58[id] == 0 || func_8011C300(D_80150380) == 1) {
            func_8011CC10(D_80150380);
        }
    }
    return -1;
}

int func_8011C300(SlotTable *owner);
void func_80079948(void)
{
    s32 id;
    for (id = 0; id < 32; id++) {
        func_8011CB90(D_80150380, id);
        if (func_8011C300(D_80150380) == 1) {
            func_8011CC10(D_80150380);
        }
    }
}

