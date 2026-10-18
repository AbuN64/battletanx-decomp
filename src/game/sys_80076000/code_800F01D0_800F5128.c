#include "include_asm.h"

#include "shared/bt_span_1000_code_800F45C8.h"
#include "span_1000/code_800F45C8.h"

/* func_800F5128 -- shifts seventeen fresh bits from func_800F58F0 into D_auto_8035CD24. */



void func_800F5128(void) {
    int i;
    for (i = 0; i <= 16; i++) {
        D_auto_8035CD24 = D_auto_8035CD24 * 2 + func_800F58F0();
    }
}

/* func_auto_800F5178 -- the adaptive model's initial state, as LZARI's StartModel sets it up.
 *
 * Every symbol starts with frequency one, so the cumulative table counts down from 314 to 0; the
 * position table is the running sum of 10000 / (i + 200) over the 4096-entry window. */

     /* char_to_sym */
 /* sym_to_char */
 /* sym_freq */
 /* sym_cum */
      /* position_cum */

void func_auto_800F5178(void) {
    int ch, sym, i;

    D_auto_8035DC00[314] = 0;
    for (sym = 314; sym >= 1; sym--) {
        ch = sym - 1;
        D_auto_8035CD30[ch] = sym;
        D_auto_8035D220[sym] = ch;
        D_auto_8035D710[sym] = 1;
        D_auto_8035DC00[sym - 1] = D_auto_8035DC00[sym] + D_auto_8035D710[sym];
    }
    D_auto_8035D710[0] = 0;
    D_auto_8035E0F0[4096] = 0;
    for (i = 4096; i >= 1; i--)
        D_auto_8035E0F0[i - 1] = D_auto_8035E0F0[i] + 10000 / (i + 200);
}

#ifdef NON_MATCHING
#include "shared/bt_types.h"
#include "span_1000/code_800F45C8.h"
extern u32 D_auto_8035DBF8;

void func_800F5264(s32 arg0) {
    s32 *temp_a0;
    s32 *temp_a3;
    s32 *temp_v0_2;
    s32 *temp_v1;
    s32 *temp_v1_2;
    s32 *var_a0_2;
    s32 *var_a1;
    s32 *var_a1_2;
    s32 *var_v1_2;
    s32 temp_a0_2;
    s32 temp_a1;
    s32 var_a0;
    s32 var_a2;
    s32 var_a2_2;
    s32 var_a2_3;
    s32 var_v0;
    u32 *var_v1;
    u32 temp_v0;

    if ((u32) *D_auto_8035DC00 >= 0x7FFFU) {
        var_a0 = 0;
        var_a2 = 0x13A;
        var_v1 = &D_auto_8035DBF8;
        var_a1 = &D_auto_8035DC00[0x13A];
        do {
            *var_a1 = var_a0;
            var_a1 -= 4;
            var_a2 -= 1;
            temp_v0 = (u32) (*var_v1 + 1) >> 1;
            var_a0 += temp_v0;
            *var_v1 = temp_v0;
            var_v1 -= 4;
        } while (var_a2 > 0);
        *D_auto_8035DC00 = var_a0;
    }
    var_a2_2 = arg0;
    temp_a3 = &D_auto_8035D710[var_a2_2];
    temp_a0 = &(D_auto_8035D710 - 4)[var_a2_2];
    var_v0 = var_a2_2 < arg0;
    if (*temp_a3 == *temp_a0) {
        var_a1_2 = temp_a0;
        var_a0_2 = temp_a3;
        do {
            var_a1_2 -= 4;
            var_a0_2 -= 4;
            var_a2_2 -= 1;
        } while (*var_a0_2 == *var_a1_2);
        var_v0 = var_a2_2 < arg0;
    }
    if (var_v0 != 0) {
        temp_v1 = &D_auto_8035D220[var_a2_2];
        temp_a1 = *temp_v1;
        temp_v0_2 = &D_auto_8035D220[arg0];
        temp_a0_2 = *temp_v0_2;
        *temp_v1 = temp_a0_2;
        *temp_v0_2 = temp_a1;
        D_auto_8035CD30[temp_a1] = arg0;
        D_auto_8035CD30[temp_a0_2] = var_a2_2;
    }
    temp_v1_2 = &D_auto_8035D710[var_a2_2];
    var_a2_3 = var_a2_2 - 1;
    *temp_v1_2 += 1;
    if (var_a2_3 >= 0) {
        var_v1_2 = &D_auto_8035DC00[var_a2_3];
        do {
            var_a2_3 -= 1;
            *var_v1_2 += 1;
            var_v1_2 -= 4;
        } while (var_a2_3 >= 0);
    }
}
#else
INCLUDE_ASM("span_1000", func_800F5264);
#endif
INCLUDE_ASM("span_1000", func_800F53B8);
INCLUDE_ASM("span_1000", func_800F5610);
#ifdef NON_MATCHING
#include "shared/bt_types.h"
#include "span_1000/code_800F45C8.h"
int func_800F5850(u32 arg0) {
    s32 temp_v1;
    s32 var_a1;
    s32 var_a2;

    var_a1 = 1;
    var_a2 = 0x13A;
    do {
        temp_v1 = (s32) (var_a1 + var_a2) / 2;
        if (arg0 >= (u32) D_auto_8035DC00[temp_v1]) {
            var_a2 = temp_v1;
        } else {
            var_a1 = temp_v1 + 1;
        }
    } while (var_a1 < var_a2);
    return var_a1;
}
#else
INCLUDE_ASM("span_1000", func_800F5850);
#endif
#ifdef NON_MATCHING
#include "shared/bt_types.h"
#include "span_1000/code_800F45C8.h"
int func_800F58A0(u32 arg0) {
    s32 temp_v1;
    s32 var_a1;
    s32 var_a2;

    var_a1 = 1;
    var_a2 = 0x1000;
    do {
        temp_v1 = (s32) (var_a1 + var_a2) / 2;
        if (arg0 >= (u32) D_auto_8035E0F0[temp_v1]) {
            var_a2 = temp_v1;
        } else {
            var_a1 = temp_v1 + 1;
        }
    } while (var_a1 < var_a2);
    return var_a1 - 1;
}
#else
INCLUDE_ASM("span_1000", func_800F58A0);
#endif
#ifdef NON_MATCHING
#include "shared/bt_span_1000_code_800F45C8.h"
#include "shared/bt_types.h"
extern u8 *D_auto_803620FC;
extern s32 D_auto_80362104;
extern u32 D_auto_80362108;

int func_800F58F0(void) {
    u32 temp_v0;
    u8 *temp_v1;

    temp_v0 = (u32) D_auto_80362108 >> 1;
    D_auto_80362108 = temp_v0;
    if (temp_v0 == 0) {
        temp_v1 = D_auto_803620FC;
        D_auto_803620FC = temp_v1 + 1;
        D_auto_80362108 = 0x80;
        D_auto_80362104 = (s32) *temp_v1;
    }
    return (D_auto_80362104 & D_auto_80362108) != 0;
}
#else
INCLUDE_ASM("span_1000", func_800F58F0);
#endif
INCLUDE_ASM("span_1000", func_800F5954);
INCLUDE_ASM("span_1000", func_800F5960);
INCLUDE_ASM("span_1000", func_800F5B6C);
INCLUDE_ASM("span_1000", func_800F66F0);
INCLUDE_ASM("span_1000", func_800F6934);
INCLUDE_ASM("span_1000", func_800F8120);
INCLUDE_ASM("span_1000", func_800F9F34);
INCLUDE_ASM("span_1000", func_800FC674);
INCLUDE_ASM("span_1000", func_800FF73C);
INCLUDE_ASM("span_1000", func_800FFB58);
INCLUDE_ASM("span_1000", func_800FFF78);
INCLUDE_ASM("span_1000", func_80100550);
INCLUDE_ASM("span_1000", func_801009E8);
INCLUDE_ASM("span_1000", func_80101E9C);
INCLUDE_ASM("span_1000", func_80102050);
INCLUDE_ASM("span_1000", func_80102A30);
INCLUDE_ASM("span_1000", func_80102F8C);
INCLUDE_ASM("span_1000", func_8010316C);
INCLUDE_ASM("span_1000", func_80103E50);
INCLUDE_ASM("span_1000", func_8010435C);
INCLUDE_ASM("span_1000", func_80104CD8);
