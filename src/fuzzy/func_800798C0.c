#include "game/sys_8011C210.h"
#include "shared/bt_menu_render.h"
#include "shared/bt_types.h"
#include "span_1000/code_8007963C.h"
int func_8011C300(SlotTable *owner);
s32 func_8011CC10(s32);
extern s32 D_auto_801B4A58;

int func_800798C0(s32 arg0) {
    if ((arg0 != -1) && ((func_8011CB90(D_auto_80150380, (s16) arg0), (*(&D_auto_801B4A58 + (arg0 * 2)) == 0)) || (func_8011C300(D_auto_80150380) == 1))) {
        func_8011CC10(D_auto_80150380);
    }
    return -1;
}
