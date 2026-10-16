#include "shared/bt_span_1000_code_800E21E4.h"
#include "shared/bt_types.h"
#include "span_1000/code_80097038.h"
#include "span_1000/code_800E21E4.h"

void func_800E3AB0(func_800E34B4_S1_Shared800E34B4 *selection, s16 sourceId, s16 targetId) {
    if (targetId != 0xFF) {
        func_800A03B8(sourceId);
        selection->unk10 = func_800A03B8(targetId);
        selection->unk14 = func_800E52A0(sourceId, targetId);
        selection->unk4 = 0;
        selection->unk0 = 5;
    } else {
        selection->unk0 = 0;
        selection->unk4 = 0;
    }
}
