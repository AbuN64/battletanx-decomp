#include "include_asm.h"

#include "shared/bt_span_1000_code_8011E3F0.h"
#include <ultra64.h>








#include "shared/bt_span_1000_code_8011F7F0.h"
#include "span_1000/code_8007963C.h"
#include "sdk/libultra.h"


 /* extern */




void func_8011E564(func_8011E564_S1_Shared8011E564 *arg0, s32 (*arg1)(void *), s32 arg2) {
    func_8011F7F0(arg0, func_8011FEBC, func_8011F810, 0);
    arg0->unk14 = func_80112140(0, 0, arg2, 1, 0x20);
    arg0->unk18 = func_80112140(0, 0, arg2, 1, 0x20);
    arg0->unk30 = arg1(arg0->pad34);
    arg0->unk3C = 0;
    arg0->unk40 = 1;
    arg0->unk44 = 0;
}

