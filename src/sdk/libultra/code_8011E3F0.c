#include "include_asm.h"

#include "shared/bt_span_1000_code_8011E3F0.h"
#include <ultra64.h>
#include "sdk/libultra.h"
#include "shared/bt_span_1000_code_8011DC00.h"

struct Shape_func_8011E3F0;




/* Registers a pair of callbacks for the object with kind 3, then clears the
   object's word at 0x14 and sets the one at 0x18 to 1. The two lui/addiu
   pairs on function symbols fixed arguments two and three as function
   pointers, and the sw pair fixed both fields as words. */



void func_8011E3F0(Shape_func_8011E3F0 *obj) {
    func_8011F7F0(obj, func_80121434, func_80121400, 3);
    obj->unk14 = 0;
    obj->unk18 = 1;
}

/* func_8011E434 -- initialises one object by registering a pair of callbacks for it and then
 * clearing and filling three of its own words. The call takes the two function addresses and a
 * count of seven; afterwards the word at 0x14 is zeroed and the second and third arguments are
 * stored at 0x18 and 0x1C, in that order. Every access is a full word (lw/sw), so the object's
 * fields and both remaining arguments are int-wide.
 */


void func_8011E434(int *arg0, int arg1, int arg2) {
    func_8011F7F0(arg0, func_80120390, func_80120360, 7);
    arg0[5] = 0;
    arg0[6] = arg2;
    arg0[7] = arg1;
}

/* func_8011E488 -- initialises one object by handing func_8011F7F0 the object, its two handler
 * entry points and the count 6, then clearing the field at 0x14 and storing the two incoming
 * arguments at 0x18 and 0x1C. All three stores are sw, so the fields are words; the two handler
 * addresses are taken with %hi/%lo, so they are function pointers.
 */



void func_8011E488(int *arg0, int arg1, int arg2) {
    func_8011F7F0(arg0, func_8011E310, func_8011E2E0, 6);
    arg0[5] = 0;
    arg0[6] = arg2;
    arg0[7] = arg1;
}

