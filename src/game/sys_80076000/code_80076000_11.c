#include "shared/bt_span_1000_code_8007963C.h"
#include "shared/bt_audio_callbacks.h"
#include "shared/bt_types.h"
#include "span_1000/code_8007963C.h"
#include "game/sys_80076000.h"



              /* size 0x0 */


void func_800799C0(s32 arg0) {
    D_auto_80125774 = (s16) arg0;
}

void func_800799D0(s32 id, s16 volume) {
    s16 scaled = (volume * D_auto_80125774) / 32767;
    if (id != -1) {
        func_8011CB90(D_auto_80150380, id);
        func_8011CBB0(D_auto_80150380, scaled);
    }
}
