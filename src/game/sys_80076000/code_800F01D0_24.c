#include "shared/bt_types.h"
#include "game/sys_80076000.h"
void func_80105C68(void *context, u8 *text, s32 lineCount, s32 lineHeight, s32 maxChars)
{
    s32 startX = D_803AAD88;
    s32 line;
    s32 len;
    s32 step;
    u8 c;
    u8 *p;
    D_803B75A8 = 0;
    for (line = 0; line < lineCount; line++) {
        if (maxChars != 0 && D_803B75A8 >= maxChars) {
            return;
        }
        c = *text;
        len = 0;
        p = text + 1;
        while (c != '\n') {
            if (maxChars != 0 && D_803B75A8 >= maxChars) {
                step = len;
                goto next_line;
            }
            func_80106010(context, c);
            c = *p;
            len++;
            p++;
        }
        step = len + 1;
next_line:
        D_803AAD88 = startX;
        D_803AAD8C += lineHeight;
        text += step;
    }
}
