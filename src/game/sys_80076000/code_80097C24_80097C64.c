#include "include_asm.h"

INCLUDE_ASM("span_1000", func_80097C64);
INCLUDE_ASM("span_1000", func_80097DD0);
#ifdef NON_MATCHING
#include "shared/bt_audio_callbacks.h"
#include "shared/bt_span_1000_code_80097038.h"
#include "shared/bt_span_1000_code_8010BFDC.h"
#include "shared/bt_common_draft_fields_func_800983E0_us.h"
#include "shared/bt_span_1000_code_8007A470.h"
#include "shared/bt_span_1000_code_800A8940.h"
#include "span_1000/code_8007EBA0.h"
#include "span_1000/code_8008F4EC.h"

/* func_8007C6D8: types.declaration: solved callee prototype */
/* func_80097DD0: types.abi.word: r4: semantic type conflict; one O32 word carrier; types.abi.word: r5: semantic type conflict; one O32 word carrier; types.abi.word: r6: semantic type conflict; one O32 word carrier; types.abi.unused_return: no mapped direct caller consumes a result; semantic return unknown */
extern void func_80097DD0(int, int, int);
/* func_8009EDD0: types.abi.word: r4: semantic type conflict; one O32 word carrier; types.abi.unused_return: no mapped direct caller consumes a result; semantic return unknown */
extern void func_8009EDD0(int);
/* func_800A51E8: types.abi.declared: reuse existing C; propagated semantic conflicts remain named */
extern void func_800A51E8(struct FuncA51E8State * arg0, int arg1, float arg2);
/* func_800A6688: types.abi.word: r4: semantic type unknown; one O32 word carrier; types.abi.word_return: v0 carries one O32 word; semantic return unknown or conflicting */
/* func_800A8EF8: types.abi.declared: reuse existing C; propagated semantic conflicts remain named */
/* func_800E3460: types.abi.declared: reuse existing C; propagated semantic conflicts remain named */

                                                  /* size = 0x30 */

extern u8 D_80135762;
extern u8 D_80135763;

int func_800983E0(void *arg0, int arg1, int arg2, unsigned int arg3) {
    f32 temp_f20;
    f32 temp_f2;
    s32 temp_a0_2;
    s32 temp_s2;
    s32 temp_v1_2;
    s32 var_a0_2;
    s32 var_a1;
    s32 var_a1_2;
    s32 var_a1_3;
    s32 var_a1_4;
    s32 var_a2;
    s32 var_s1;
    s32 var_v1;
    u16 temp_v1;
    u8 var_a0;
    void *temp_a0;

    if (D_80135762 == 0) {
        if (((D_80135763 == 0) || (func_800E3460((u8 *) arg0) != 0)) && (((struct Measured_func_800983E0_us_572ebb6641c0 *)(arg0))->value != 0) && (temp_v1 = ((struct Measured_func_800983E0_us_dc539bebcfa1 *)(arg0))->value, ((temp_v1 & 0x8001) == 0))) {
            if (temp_v1 & 2) {
                func_8009EDD0((s32)arg0);
                var_a2 = 0;
                goto block_48;
            }
            if (arg1 != 0) {
                if (!(temp_v1 & 0x100) || (var_a0 = 1, (func_8007C6D8() == 0))) {
                    var_a0 = ((struct Measured_func_800983E0_us_11c714a35a35 *)(arg0))->value;
                }
                temp_f20 = (100.0f);
                var_s1 = (s32) ((f32) arg1 * (((struct Measured_func_800983E0_us_661d24d43cd2 *)(func_800A6688((s32) var_a0)))->value / temp_f20));
                if ((u32) arg2 < 4U) {
                    var_s1 = (s32) ((f32) var_s1 / (((struct Measured_func_800983E0_us_1b54afc73f5a *)(func_800A6688(arg2 & 0xFFFF)))->value / temp_f20));
                }
                temp_s2 = func_800A6688((s32) ((struct Measured_func_800983E0_us_11c714a35a35 *)(arg0))->value);
                if (var_s1 == 0) {
                    var_s1 = 1;
                }
                if (func_800E3460((u8 *) arg0) == 0) {
                    var_a1 = (var_s1 / 3) + 0x14;
                    if (var_a1 >= 0x29) {
                        var_a1 = 0x28;
                    }
                    func_800A8EF8((s32) ((struct Measured_func_800983E0_us_11c714a35a35 *)(arg0))->value, var_a1, 6, 4);
                }
                temp_a0 = ((struct Measured_func_800983E0_us_69e5ef5b3570 *)(arg0))->value;
                if ((temp_a0 != 0) && (((struct Measured_func_800983E0_us_1598d169e0a4 *)(arg0))->value == ((struct Measured_func_800983E0_us_5bc2a4c5e17f *)(temp_a0))->value)) {
                    temp_v1_2 = ((struct Measured_func_800983E0_us_fc8673a50ef1 *)(temp_a0))->value;
                    if (temp_v1_2 < var_s1) {
                        var_s1 -= temp_v1_2;
                        ((struct Measured_func_800983E0_us_fc8673a50ef1 *)(temp_a0))->value = 0;
                    } else {
                        ((struct Measured_func_800983E0_us_fc8673a50ef1 *)(temp_a0))->value = (s32) (temp_v1_2 - var_s1);
                        var_s1 = 0;
                    }
                }
                if ((arg2 == ((struct Measured_func_800983E0_us_11c714a35a35 *)(arg0))->value) & (arg3 != 0)) {
                    var_a0_2 = func_800A6688(arg2 & 0xFFFF);
                    var_a1_2 = 0xA;
                    goto block_31;
                }
                if (((struct Measured_func_800983E0_us_fc8673a50ef1 *)(arg0))->value == 2) {
                    var_a0_2 = temp_s2;
                    if (((struct Measured_func_800983E0_us_5cf0a8e1d176 *)(temp_s2))->value != ((struct Measured_func_800983E0_us_73da4640dc10 *)(arg0))->value) {
                        var_a1_2 = 2;
block_31:
                        func_800A51E8((struct FuncA51E8State *) var_a0_2, var_a1_2, 3.0f);
                    }
                }
                temp_a0_2 = ((struct Measured_func_800983E0_us_7d6aec9d411c *)(arg0))->value - var_s1;
                ((struct Measured_func_800983E0_us_7d6aec9d411c *)(arg0))->value = temp_a0_2;
                if ((((struct Measured_func_800983E0_us_2ac2e0f9715f *)(arg0))->value != 0) && (temp_a0_2 < ((s32) ((struct Measured_func_800983E0_us_9e38496ccf6a *)(arg0))->value / 2))) {
                    func_800A51E8((struct FuncA51E8State *) temp_s2, 0x21, 3.0f);
                }
                if (((struct Measured_func_800983E0_us_95b7c07a1977 *)(arg0))->value == 0) {
                    ((struct Measured_func_800983E0_us_db74d82bc842 *)(arg0))->value = 0xF0;
                }
                ((struct Measured_func_800983E0_us_d21dc9cabacf *)(arg0))->value = (s32) D_801B4AA8;
                if (((struct Measured_func_800983E0_us_7d6aec9d411c *)(arg0))->value <= 0) {
                    if (func_800E3460((u8 *) arg0) == 0) {
                        var_v1 = (var_s1 / 3) + 0x14;
                        if (var_v1 >= 0x29) {
                            var_v1 = 0x28;
                        }
                        temp_f2 = (f32) var_v1 * (1.5f);
                        if ((2147483648.0f) <= temp_f2) {
                            var_a1_3 = (s32) (temp_f2 - (2147483648.0f)) | 0x80000000;
                        } else {
                            var_a1_3 = (s32) temp_f2;
                        }
                        func_800A8EF8((s32) ((struct Measured_func_800983E0_us_11c714a35a35 *)(arg0))->value, var_a1_3, 2, 1);
                    }
                    ((struct Measured_func_800983E0_us_7d6aec9d411c *)(arg0))->value = 0;
                    var_a2 = 1;
block_48:
                    func_80097DD0((s32)arg0, arg2, var_a2);
                    return 1;
                }
                if (func_800E3460((u8 *) arg0) == 0) {
                    var_a1_4 = (var_s1 / 3) + 0x14;
                    if (var_a1_4 >= 0x29) {
                        var_a1_4 = 0x28;
                    }
                    func_800A8EF8((s32) ((struct Measured_func_800983E0_us_11c714a35a35 *)(arg0))->value, var_a1_4, 6, 4);
                }
            }
        }
    }
    return 0;
}
/* Warning: struct FuncA51E8State is not defined (only forward-declared) */
#else
INCLUDE_ASM("span_1000", func_800983E0);
#endif
INCLUDE_ASM("span_1000", func_80098780);
INCLUDE_ASM("span_1000", func_800987D8);
INCLUDE_ASM("span_1000", func_80099A08);
#ifdef NON_MATCHING
#include "shared/bt_span_1000_code_80097038.h"
#include "shared/bt_types.h"













/* checks field conditions and calls handler with scaled float parameter */


s32 func_800796F0();                /* extern */
s32 func_800799D0();                    /* extern */
s32 func_800E3470();                                /* extern */
const f64 D_800723B0 = 0.3;
const f32 D_800723B8 = 0.5f;
const f32 D_800723BC = 28672.0f;

void func_80099CD8(void *arg0, s32 arg1) {
    s32 temp_a0;

    if ((((struct Func_80099CD8_View0_Shared80099CD8 *)arg0)->field_464 == 0) && (D_800723B0 < (f64) ((struct Func_80099CD8_View0_Shared80099CD8 *)arg0)->field_3b4) && (func_800E3470() != 0)) {
        temp_a0 = func_800796F0(arg1, 0);
        if (((struct Func_80099CD8_View0_Shared80099CD8 *)arg0)->field_3b4 < D_800723B8) {
            func_800799D0(temp_a0, (s16) (s32) (2.0f * ((struct Func_80099CD8_View0_Shared80099CD8 *)arg0)->field_3b4 * D_800723BC));
        }
        ((struct Func_80099CD8_View0_Shared80099CD8 *)arg0)->field_464 = 0x20U;
    }
}
#else
INCLUDE_ASM("span_1000", func_80099CD8);
#endif
INCLUDE_ASM("span_1000", func_80099D90);
#ifdef NON_MATCHING
#include "game/sys_80076000.h"
#include "shared/bt_span_1000_code_800F29F0.h"
#include "shared/bt_span_1000_code_8010BFDC.h"
#include "shared/bt_types.h"
#include "shared/bt_span_1000_code_80094704.h"
void func_8009A22C(struct Func_80096784_Record_Shared80096784 *arg0, u32 arg1) {
    u32 temp_v1;
    u32 var_a1;

    var_a1 = arg1;
    switch (var_a1) {                               /* switch 1; irregular */
    case 23:                                        /* switch 1 */
        return;
    case 22:                                        /* switch 1 */
        temp_v1 = func_800F38F4() & 0x1F;
        switch (temp_v1) {                          /* switch 2 */
        case 0:                                     /* switch 2 */
            var_a1 = 1;
        default:                                    /* switch 1 */
block_21:
            func_80099D90((s32) arg0, (s32) var_a1);
            break;
        case 1:                                     /* switch 2 */
        case 2:                                     /* switch 2 */
        case 3:                                     /* switch 2 */
        case 4:                                     /* switch 2 */
        case 5:                                     /* switch 2 */
        case 6:                                     /* switch 2 */
            var_a1 = 2;
            goto block_21;
        case 7:                                     /* switch 2 */
        case 8:                                     /* switch 2 */
        case 9:                                     /* switch 2 */
        case 10:                                    /* switch 2 */
        case 11:                                    /* switch 2 */
        case 12:                                    /* switch 2 */
            var_a1 = 3;
            goto block_21;
        case 13:                                    /* switch 2 */
        case 14:                                    /* switch 2 */
            var_a1 = 4;
            goto block_21;
        case 15:                                    /* switch 2 */
        case 16:                                    /* switch 2 */
        case 17:                                    /* switch 2 */
        case 18:                                    /* switch 2 */
        case 19:                                    /* switch 2 */
            var_a1 = 7;
            goto block_21;
        case 20:                                    /* switch 2 */
        case 21:                                    /* switch 2 */
            var_a1 = 9;
            goto block_21;
        case 22:                                    /* switch 2 */
        case 23:                                    /* switch 2 */
            var_a1 = 0xF;
            goto block_21;
        case 24:                                    /* switch 2 */
        case 25:                                    /* switch 2 */
            var_a1 = 0xC;
            goto block_21;
        case 26:                                    /* switch 2 */
        case 27:                                    /* switch 2 */
        case 28:                                    /* switch 2 */
        case 29:                                    /* switch 2 */
            var_a1 = 0x12;
            goto block_21;
        case 30:                                    /* switch 2 */
        case 31:                                    /* switch 2 */
            var_a1 = 0x13;
            goto block_21;
        }
        return;
    case 1:                                         /* switch 1 */
        if ((arg0->channel != 0) && (D_801B4AA8 <= 0)) {
            var_a1 = 1;
            goto block_21;
        }
        break;
    }
}
#else
INCLUDE_ASM("span_1000", func_8009A22C);
#endif
INCLUDE_ASM("span_1000", func_8009A354);
INCLUDE_ASM("span_1000", func_8009BB5C);
INCLUDE_ASM("span_1000", func_8009BBC0);
INCLUDE_ASM("span_1000", func_8009C8C8);
INCLUDE_ASM("span_1000", func_8009CA6C);
INCLUDE_ASM("span_1000", func_8009D4B4);
INCLUDE_ASM("span_1000", func_8009D4DC);
