#include "game/sys_80076000.h"
#include "shared/bt_span_1000_code_800A6864.h"
#include "shared/bt_types.h"
#include "span_1000/code_8007EBA0.h"
#include "span_1000/code_8008F4EC.h"

                            /* extern */

                  













/* extern */

/* Releases linked resources when the selected object matches the active one. */
void func_800A74AC(func_800A74AC_S4_Shared800A74AC *arg0, func_800A74AC_S1_Shared800A74AC *arg1, s32 arg2) {
    func_800A74AC_S3_Shared800A74AC *temp_s0;
    void *temp_s0_2;
    func_800A74AC_S2_Shared800A74AC *temp_s1;
    func_800A74AC_S6_Shared800A74AC *var_a0;

    if ((arg2 == 0) && (arg1->unk8 == 0)) {
        temp_s1 = arg1->unkC;
        temp_s0 = func_800A6688(temp_s1->unk4);
        if (temp_s0->unk1AE == (((func_800A74AC_S3_Shared800A74AC *)(func_800A6688(arg0->unkC)))->unk1AE)) {
            var_a0 = temp_s1->unk98;
            if (var_a0 != ((void *)0)) {
                do {
                    temp_s0_2 = var_a0->unk2C;
                    func_800A6E30(var_a0, arg0->unkC);
                    var_a0 = temp_s0_2;
                } while (var_a0 != ((void *)0));
            }
            temp_s1->unk98 = ((void *)0);
        }
    }
}

/* func_800A7548 -- does nothing.
 *
 * Two words: the return and an empty delay slot. The cartridge keeps the entry point, so
 * something calls it; what it was meant to do, if anything, is not in the image.
 */

void func_800A7548(void) {
}

/* extern */



/* extern */

void func_800A7550(f32 arg0, f32 arg1, s32 arg2) {
    s32 temp_a3;
    func_800A7550_S1_Shared800A7550 *temp_v0;

    temp_v0 = func_8008AD10(0, 0x1F, 0x18);
    if (temp_v0 != ((void *)0)) {
        temp_a3 = -arg2;
        temp_v0->unkC = func_80106D18(temp_v0, (s32) arg0, (s32) arg1, temp_a3, arg2, temp_a3, arg2, 2, 0);
        temp_v0->unk14 = arg0;
        temp_v0->unk10 = arg1;
    }
}
