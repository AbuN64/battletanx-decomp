#include "shared/bt_span_1000_code_800DAD5C.h"
#include "shared/bt_types.h"
#include "span_1000/code_800DDA08.h"

struct Shape_func_800DDCA4;




/* func_800DDCA4 -- initialises a header in place: its data pointer to just past the header, four halfwords to zero and the last to 0xF8; returns the header. */


Shape_func_800DDCA4 *func_800DDCA4(Shape_func_800DDCA4 *arg0) {
    arg0->unk0 = arg0->data;
    arg0->unk4 = 0;
    arg0->unk6 = 0;
    arg0->unk8 = 0;
    arg0->unkA = 0;
    arg0->unkC = 0xF8;
    return arg0;
}
