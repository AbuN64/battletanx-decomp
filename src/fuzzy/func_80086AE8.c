#include "shared/bt_types.h"
#include "span_1000/code_8007A470.h"
S *func_8007AAF4(void);
extern s32 D_auto_80125A30;

s16 func_80086AE8(void) {
    return *(&D_auto_80125A30 + (func_8007AAF4()->unk4 * 2));
}
