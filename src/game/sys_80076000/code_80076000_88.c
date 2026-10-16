#include "shared/bt_types.h"
#include "game/sys_80076000.h"
static inline s32 int_power(s32 base, s32 exponent)
{
    s32 result;
    s32 i;

    result = 1;
    for (i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}
char *func_80086378(s32 value, s32 digits, char *out)
{
    char buffer[16];

    func_8011CC84(buffer, D_auto_80071560, value + int_power(10, digits));
    func_8011CC84(out, D_auto_80071564, buffer + 1);
    return out;
}
