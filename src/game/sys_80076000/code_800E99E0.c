#include "include_asm.h"

#include <ultra64.h>
#include "game/sys_80076000.h"
#include "shared/bt_records.h"
#include "shared/bt_externs.h"

void func_800E99E0(Unknown800E99E0 *params, s32 value)
{
    params->value30[params->value44] = value;
    params->value44++;
}
void func_800E9A00(Unknown800E9A00 *context, f32 value)
{
    context->value20[context->value40] = value;
    context->value40++;
}
#include "shared/bt_span_1000_code_800E9200.h"

              /* size 0x0 */

s32 func_800E9A20(void) {
    return 0;
}

              /* size 0x0 */

s32 func_800E9A28(void) {
    return 0;
}

INCLUDE_ASM("span_1000", func_800E9A30);
INCLUDE_ASM("span_1000", func_800E9A54);
INCLUDE_ASM("span_1000", func_800E9A9C);
INCLUDE_ASM("span_1000", func_800E9B24);
