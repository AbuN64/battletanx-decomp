#include "include_asm.h"

#include "game/sys_80076000.h"
#include "shared/bt_span_1000_code_8007963C.h"
#include <ultra64.h>
#include "span_1000/code_8007963C.h"
#include "span_1000/code_80077930.h"
/* func_80079A5C -- unless the handle is -1, sets it and then the float value on the object D_80150380 holds. */

void func_80079A5C(int a, float b) {
    if (a != -1) {
        func_8011CB90(D_80150380, a);
        func_8011CB00(D_80150380, b);
    }
}

s32 func_80079AB4(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = -1;
    if (arg0 != -1) {
        func_8011CB90(D_80150380, (s16) arg0);
        var_v0 = func_8011CAA0(D_80150380, arg1 & 0xFF);
    }
    return var_v0;
}

void func_80079B08(void) {
    D_80125768 = 0;
    D_8012576C = 0;
    D_80125770 = 0;
    func_80079DC8();
    func_8007A004();
    func_8007A178();
    func_8007A26C();
    func_8007A36C();
    func_80079EFC();
    func_80079FA4();
    osStartThread(&D_80152A38);
}

INCLUDE_ASM("span_1000", func_80079B80);
