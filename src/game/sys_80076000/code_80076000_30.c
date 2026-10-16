#include "game/sys_80076000.h"
#include "shared/bt_audio_callbacks.h"
#include "shared/bt_span_1000_code_8008011C.h"
#include "shared/bt_span_1000_code_80091A60.h"
#include "shared/bt_types.h"
#include "span_1000/code_8008011C.h"



                 /* size 0x0 */


Scene *func_800821C0(void) {
    return D_auto_801C9170;
}

s32 func_800821D0(struct PolygonPoint *a, struct PolygonPoint *b, s32 mode)
{
    f32 dy;
    f32 dx;
    switch (mode) {
    case 2:
        dy = a->x - b->x;
        dx = a->y - b->y;
        if (D_auto_800714A0 < dy * dy + dx * dx) {
            return 1;
        }
        return 0;
    case 3:
        dy = a->x - b->x;
        dx = a->y - b->y;
        if (D_auto_800714A4 < dy * dy + dx * dx) {
            return 2;
        }
        if (D_auto_800714A8 < dy * dy + dx * dx) {
            return 1;
        }
        return 0;
    default:
        return 0;
    }
}
