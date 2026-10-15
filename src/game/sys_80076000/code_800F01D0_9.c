#include "shared/bt_span_1000_code_8010527C.h"
#include "shared/bt_types.h"

/* func_80106D00 -- returns -1.
 *
 * A constant with no argument read and no state touched. -1 rather than 0xFFFFFFFF because the
 * cartridge builds it with a single `addiu` from zero, which is the sign-extended form.
 */

int func_80106D00(void) {
    return -1;
}

              /* size 0x0 */

void func_auto_80106D08(void) {

}

/* size 0x0 */

s32 func_80106D10(void) {
    return 0;
}
