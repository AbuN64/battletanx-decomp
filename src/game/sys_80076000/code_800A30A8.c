#include "shared/bt_span_1000_code_800A27D0.h"
#include "shared/bt_types.h"




















#include "shared/bt_span_1000_code_8007A470.h"
#include "span_1000/code_80097038.h"
#include "span_1000/code_800A27D0.h"


                 /* extern */
                 /* extern */
                                /* extern */
                           /* extern */
                          /* unable to generate initializer: unknown type; const */
                          /* unable to generate initializer: unknown type; const */







void func_800A3D30(void *arg0) {
    func_800A3D30_S1_Shared800A3D30 *ptr;
    s32 var_v0;
    void *temp_s0;
    func_800A3D30_S2_Shared800A3D30 *temp_v0;

    ptr = arg0;
    temp_v0 = func_800A03B8(ptr->unk20);
    if (temp_v0->unk1 != 0) {
        if (ptr->unk44 == 1) {
            var_v0 = func_8007AAA0();
            temp_s0 = (var_v0 >= 3) ? (FuncA3D30Table_Shared800A3D30 *)&D_auto_80126140 + 1 : (FuncA3D30Table_Shared800A3D30 *)&D_auto_80126140;
        } else {
            var_v0 = func_8007AAA0();
            temp_s0 = (var_v0 >= 3) ? (FuncA3D30Table_Shared800A3D30 *)&D_auto_80126128 + 1 : (FuncA3D30Table_Shared800A3D30 *)&D_auto_80126128;
        }
        func_80078680(ptr->data, ((FuncA3D30Table_Shared800A3D30 *)temp_s0)->value[temp_v0->unk18]);
        temp_s0 = ptr->data;
        func_80078634(temp_s0, temp_v0->unk504);
    }
}
