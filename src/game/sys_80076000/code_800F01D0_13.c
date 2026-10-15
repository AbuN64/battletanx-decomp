#include "shared/bt_span_1000_code_80107168.h"
#include "shared/bt_types.h"
#include "span_1000/code_80107B44.h"

struct Record;




/* Stores three halfwords into the record at offsets 2, 4 and 0x10. All three
   stores are sh with no narrowing of the incoming registers, which fixed the
   fields as shorts and the arguments as plain words. */


void func_80109354(Record *record, int a, int b, int c) {
    record->unk2 = a;
    record->unk4 = b;
    record->unk10 = c;
}
