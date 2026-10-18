#include "include_asm.h"

#include "shared/bt_span_1000_code_8011DC00.h"

              /* size 0x0 */

void func_8011DC00(void) {

}

INCLUDE_ASM("span_1000", func_8011DC08);
#ifdef NON_MATCHING
#include "sdk/libultra.h"
#include "shared/bt_types.h"
void func_8011C150(ListNode *node);
void func_8011DC60(s32 arg0, ListNode *arg1) {
    func_8011C150(arg1);
    func_8011C180(arg1, arg0 + 0x14);
}
#else
INCLUDE_ASM("span_1000", func_8011DC60);
#endif
INCLUDE_ASM("span_1000", func_8011DC98);
INCLUDE_ASM("span_1000", func_8011DCF8);
INCLUDE_ASM("span_1000", func_8011DD10);
#include "shared/bt_span_1000_code_8011DC00.h"

              /* size 0x0 */

void func_8011DD40(void) {

}

INCLUDE_ASM("span_1000", func_8011DD48);
INCLUDE_ASM("span_1000", func_8011DFE0);
INCLUDE_ASM("span_1000", func_8011E2E0);
INCLUDE_ASM("span_1000", func_8011E310);
