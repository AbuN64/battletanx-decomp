#include "shared/bt_types.h"
#include "game/sys_80076000.h"
void func_80105D90(void *context, u8 *text, s32 lineCount, s32 lineHeight, s32 left, s32 right)
{
    s32 line;
    s32 width;
    s32 len;
    s32 span;
    u8 *p;
    s32 c;
    u8 *q;
    for (line = 0; line < lineCount; line++) {
        span = right - left;
        q = text;
        width = 0;
        p = text;
        for (;;) {
            c = *p++;
            if (c == '\n') {
                goto measured;
            }
            if (c == ' ') {
                width += (s32)((D_803B75A0 * 3) * D_803AAD90);
            } else {
                c = *(D_803AAD98 + c + 0x18);
                if (c == 0xFF) {
                    continue;
                }
                width += (s32)(*(D_803AAD98 + (c << 2) + 0x9A) * D_803AAD90);
            }
        }
    measured:
        D_803AAD88 = (span - width) / 2 + left;
        c = *q;
        len = 0;
        q++;
        while (c != '\n') {
            func_80106010(context, c);
            c = *q;
            len++;
            q++;
        }
        text += len + 1;
        D_803AAD8C += lineHeight;
    }
}
