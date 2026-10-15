#include "shared/bt_span_1000_code_800ABFD0.h"
#include "shared/bt_types.h"
#include "shared/bt_audio_callbacks.h"
#include "shared/bt_menu_render.h"
#include "span_1000/code_800ABFD0.h"




                         /* extern */
                /* extern */

/* Updates controller button state and consumes a pending event. */
u8 func_800B8750(void) {
    s32 temp_v0;

    temp_v0 = func_80096920(0, 0);
    if (temp_v0 & 0x40) {
        D_auto_80327B20 = 1;
    }
    if (temp_v0 & 0x20) {
        D_auto_80327B20 = 2;
    }
    D_auto_80327B21 = 0;
    if (temp_v0 & 0x10) {
        D_auto_80327B21 = 1;
    }
    if ((temp_v0 != 0) && (D_auto_80327B34 != -1)) {
        func_800798C0(D_auto_80327B34);
        D_auto_80327B34 = -1;
    }
    return D_auto_80327B20;
}

                                                  /* size = 0x10 */

void func_auto_800B87F4(void) {
    s32 unused[4];
}
