#include "include_asm.h"

#include "shared/bt_types.h"
#include "game/sys_80076000.h"
void func_80105750(void **displayList, char *text) {
    u8 ch;
    while ((ch = *text++) != 0) {
        if ((u32)(ch - '0') < 10) {
            D_803B75A9 = 1;
        } else {
            D_803B75A9 = 0;
        }
        func_8010647C(displayList, ch);
    }
    D_803B75A9 = 0;
}

INCLUDE_ASM("span_1000", func_801057DC);
#include "shared/bt_span_1000_code_8011D1A0.h"
#include "shared/bt_records.h"
#include "shared/bt_externs.h"

void func_8010595C(s32 ctx, s32 unused, s64 total) {
    char secondsText[8];
    u8 text[0x10];
    s32 seconds;
    s32 minutes;
    s32 len;
    s32 i;

    seconds = total % 60;
    minutes = total / 60;
    func_8011CC84(secondsText, D_80075424, seconds + 100);
    func_8011CC84(text, D_80075428, minutes, secondsText + 1);
    len = func_8011D3DC(text);
    D_803B75A0 = -1;
    for (i = 0; i < len; i++) {
        func_8010647C(ctx, text[len - 1 - i]);
    }
    D_803B75A0 = 1;
}
INCLUDE_ASM("span_1000", func_80105A50);
INCLUDE_ASM("span_1000", func_80105B48);
