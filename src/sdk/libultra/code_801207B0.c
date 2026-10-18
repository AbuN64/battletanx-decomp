#include "include_asm.h"

INCLUDE_ASM("span_1000", func_801207B0);
INCLUDE_ASM("span_1000", func_80120858);
INCLUDE_ASM("span_1000", func_80120910);
INCLUDE_ASM("span_1000", func_80120A98);
#ifdef NON_MATCHING
#include "shared/bt_abi.h"
#include "shared/bt_audio_callbacks.h"
#include "shared/bt_types.h"
#include "shared/bt_bt_abi.h"
#include "shared/bt_span_1000_code_801207B0.h"
#include "shared/bt_common_draft_fields_func_80120C24_us.h"
#include "shared/bt_span_1000_code_80121F10.h"

/* func_801207B0: types.declaration: solved callee prototype */

/* func_80120A98: types.abi.arguments: some mapped callers do not establish every consumed argument value; types.abi.word_return: v0 carries one O32 word; semantic return unknown or conflicting */
extern int func_80120A98(void *, unsigned int, int, int, void *);
/* func_80121F10: types.declaration: solved callee prototype */

                                                  /* size = 0x60 */

void *func_80120C24(void *arg0, void *arg1, s32 arg2, s32 arg3, void *arg4) {
    s32 sp28;
    s32 sp2C;
    void *sp30;
    s32 sp38;
    f32 sp44;
    void *sp5C;
    f32 temp_f12;
    f32 temp_f2;
    s32 temp_f16;
    s32 temp_t0;
    s32 temp_t3;
    s32 temp_t8;
    void *temp_t6;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v1;
    void *var_v1;

    if (((struct Measured_func_80120C24_us_028cd1a07375 *)(arg1))->value != 0) {
        sp38 = ((struct Measured_func_80120C24_us_4466dbb779d0 *)(arg1))->value - ((struct Measured_func_80120C24_us_d3723d959b3b *)(arg1))->value;
        temp_f2 = (f32) (1.0 - (f64) ((f32) (s32) ((func_801207B0(arg1, arg3) / (f32) sp38) * 32768.0f) / 32768.0f));
        sp44 = temp_f2;
        temp_v0 = ((struct Measured_func_80120C24_us_028cd1a07375 *)(arg1))->value;
        temp_f12 = ((struct Measured_func_80120C24_us_f8165560a06f *)(temp_v0))->value + (temp_f2 * (f32) arg3);
        temp_f16 = (s32) temp_f12;
        ((struct Measured_func_80120C24_us_f8165560a06f *)(temp_v0))->value = (f32) (temp_f12 - (f32) temp_f16);
        sp2C = temp_f16;
        temp_t0 = ((struct Measured_func_80120C24_us_7705078627e3 *)(arg0))->value + ((((struct Measured_func_80120C24_us_4466dbb779d0 *)(arg1))->value - ((struct Measured_func_80120C24_us_7705078627e3 *)(arg1))->value) * -2);
        temp_t8 = (s32) (temp_t0 & 7) >> 1;
        temp_t3 = temp_t8 * 2;
        sp28 = temp_t3;
        temp_v0_2 = func_80120A98(arg0, temp_t0 - temp_t3, 0x280, temp_f16 + temp_t8, arg4);
        temp_t6 = temp_v0_2 + 8;
        aSetBuffer((Acmd *)temp_v0_2, 0, temp_t3 + 0x280, arg2, arg3 * 2);
        sp30 = temp_t6;
        temp_v1 = temp_v0_2 + 0x10;

        sp5C = temp_v1;
        var_v1 = temp_v1;
        aResample((Acmd *)temp_t6,
            ((struct Measured_func_80120C24_us_0b0ad7aac4bc *)(((struct Measured_func_80120C24_us_028cd1a07375 *)arg1)->value))->value,
            (s32)(sp44 * 32768.0f),
            func_80121F10(((struct Measured_func_80120C24_us_5a0991979bf8 *)(((struct Measured_func_80120C24_us_028cd1a07375 *)arg1)->value))->value));
        ((struct Measured_func_80120C24_us_0b0ad7aac4bc *)(((struct Measured_func_80120C24_us_028cd1a07375 *)(arg1))->value))->value = 0;
        ((struct Measured_func_80120C24_us_7705078627e3 *)(arg1))->value = (s32) ((((struct Measured_func_80120C24_us_7705078627e3 *)(arg1))->value + temp_f16) - arg3);
    } else {
        var_v1 = func_80120A98(arg0, ((struct Measured_func_80120C24_us_7705078627e3 *)(arg0))->value + (((struct Measured_func_80120C24_us_4466dbb779d0 *)(arg1))->value * -2), arg2, arg3, arg4);
    }
    return var_v1;
}
#else
INCLUDE_ASM("span_1000", func_80120C24);
#endif
#ifdef NON_MATCHING
#include "shared/bt_common_draft_fields_func_80120E48_us.h"
#include "shared/bt_span_1000_code_801207B0.h"
#include "shared/bt_types.h"

/* func_8011E6B0: types.abi.unused_return: no mapped direct caller consumes a result; semantic return unknown */
extern void func_8011E6B0(void *);

                                                  /* size = 0x18 */

extern void *D_80145E10;

s32 func_80120E48(s32 arg0, s32 arg1, void *arg2) {
    f64 var_f18;
    s16 *temp_a1;
    s32 temp_t0;
    s32 temp_t5;
    s32 temp_t6_2;
    s32 temp_v1;
    u32 temp_t6;
    void *temp_v0;

    temp_v1 = arg1 - 2;
    temp_t6 = temp_v1 & 7;
    temp_t0 = ((s32 *)arg2)[0];
    switch (temp_t6) {
    case 0:
        ((struct Measured_func_80120E48_us_07091f3fea0d *)(((struct Measured_func_80120E48_us_9e38496ccf6a *)arg0)->value + ((temp_v1 / 8) * 0x28)))->value = temp_t0 & ~7;
        break;
    case 1:
        ((struct Measured_func_80120E48_us_5bc2a4c5e17f *)((((struct Measured_func_80120E48_us_9e38496ccf6a *)(arg0))->value + ((temp_v1 / 8) * 0x28))))->value = (s32) (temp_t0 & ~7);
        break;
    case 3:
        ((struct Measured_func_80120E48_us_850d9776b906 *)((((struct Measured_func_80120E48_us_9e38496ccf6a *)(arg0))->value + ((temp_v1 / 8) * 0x28))))->value = (s16) temp_t0;
        break;
    case 2:
        ((struct Measured_func_80120E48_us_7432af7348b3 *)((((struct Measured_func_80120E48_us_9e38496ccf6a *)(arg0))->value + ((temp_v1 / 8) * 0x28))))->value = (s16) temp_t0;
        break;
    case 4:
        ((struct Measured_func_80120E48_us_d5373a855630 *)((((struct Measured_func_80120E48_us_9e38496ccf6a *)(arg0))->value + ((temp_v1 / 8) * 0x28))))->value = (s16) temp_t0;
        break;
    case 5:
        ((struct Measured_func_80120E48_us_949b950a3b21 *)((((struct Measured_func_80120E48_us_9e38496ccf6a *)(arg0))->value + ((temp_v1 / 8) * 0x28))))->value = (f32) ((2.0 * (f64) ((f32) temp_t0 / 1000.0f)) / (f64) ((struct Measured_func_80120E48_us_71ab4e09f94a *)(D_80145E10))->value);
        break;
    case 6:
        temp_v0 = ((struct Measured_func_80120E48_us_9e38496ccf6a *)(arg0))->value + ((temp_v1 / 8) * 0x28);
        temp_t6_2 = ((struct Measured_func_80120E48_us_5bc2a4c5e17f *)(temp_v0))->value - ((struct Measured_func_80120E48_us_07091f3fea0d *)(temp_v0))->value;
        var_f18 = (f64) temp_t6_2;
        if (temp_t6_2 < 0) {
            var_f18 += 4294967296.0;
        }
        ((struct Measured_func_80120E48_us_a9fa63ae5932 *)(temp_v0))->value = (f32) (var_f18 * ((f64) (f32) temp_t0 / (173123.404906676)));
        break;
    case 7:
        temp_t5 = (temp_v1 / 8) * 0x28;
        temp_a1 = ((struct Measured_func_80120E48_us_0b91e0e95412 *)((((struct Measured_func_80120E48_us_9e38496ccf6a *)(arg0))->value + temp_t5)))->value;
        if (temp_a1 != 0) {
            *temp_a1 = (s16) temp_t0;
            func_8011E6B0(((struct Measured_func_80120E48_us_3fe6923ed817 *)((((struct Measured_func_80120E48_us_9e38496ccf6a *)(arg0))->value + temp_t5)))->value);
        }
        break;
    }
    return 0;
}
#else
INCLUDE_ASM("span_1000", func_80120E48);
#endif
#ifdef NON_MATCHING
#include "shared/bt_types.h"
s32 func_801210A4(s32 *arg0, s32 arg1, s32 arg2) {
    if (arg1 == 1) {
        *arg0 = arg2;
    }
    return 0;
}
#else
INCLUDE_ASM("span_1000", func_801210A4);
#endif
INCLUDE_ASM("span_1000", func_801210BC);
