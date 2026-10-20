#include "include_asm.h"

#include "shared/bt_span_1000_code_8011BD50.h"
#include "game/sys_8011C210.h"
#include "game/sys_801121E0.h"
/* func_8011BDE4 -- a wrapper that takes no arguments and calls osSendMesg with
 * the address of D_803C75C8 and two zeros. The lui/addiu pair builds the address of
 * the global rather than loading from it, so the first argument is a pointer to that
 * object; $a1 and $a2 are cleared with `or $zero, $zero`, so the other two arguments
 * are integer zeros.
 */

void func_8011BDE4(void) {
    osSendMesg(D_803C75C8, 0, 0);
}

