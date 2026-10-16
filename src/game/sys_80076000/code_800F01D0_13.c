#include "shared/bt_span_1000_code_80107168.h"
#include "shared/bt_types.h"
#include "span_1000/code_80107B44.h"
#include "shared/bt_span_1000_code_80091A60.h"
#include "game/sys_80076000.h"

struct Record;




/* Stores three halfwords into the record at offsets 2, 4 and 0x10. All three
   stores are sh with no narrowing of the incoming registers, which fixed the
   fields as shorts and the arguments as plain words. */


void func_80109354(Record *record, int a, int b, int c) {
    record->unk2 = a;
    record->unk4 = b;
    record->unk10 = c;
}

void func_80109364(QueryRecord *record, s32 minZ, s32 maxZ, s32 minX, s32 maxX)
{
    s32 a, b;
    a = ((minZ < 0 ? -minZ : minZ) > (maxZ < 0 ? -maxZ : maxZ)) ? (minZ < 0 ? -minZ : minZ) : (maxZ < 0 ? -maxZ : maxZ);
    b = ((minX < 0 ? -minX : minX) > (maxX < 0 ? -maxX : maxX)) ? (minX < 0 ? -minX : minX) : (maxX < 0 ? -maxX : maxX);
    record->box.values[7] = func_80109094(a * a + b * b);
    record->box.values[3] = minZ;
    record->box.values[4] = maxZ;
    record->box.values[5] = minX;
    record->box.values[6] = maxX;
    record->box.values[0] &= 0xFFF0;
}
