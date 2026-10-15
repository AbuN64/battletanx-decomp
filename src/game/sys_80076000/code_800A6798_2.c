#include "shared/bt_types.h"
#include "shared/bt_audio_callbacks.h"
#include "shared/bt_span_1000_code_800A6864.h"
#include "shared/bt_span_1000_code_8010BFDC.h"
#include "span_1000/code_800A6864.h"
#include "game/sys_80076000.h"

              /* size 0x0 */



void func_800A68E0(void) {
    D_auto_802DF350 = 0;
}

              /* size 0x0 */

s32 func_auto_800A68F0(void) {
    return D_auto_802DF350;
}

int func_800A6900(N *arg0, s32 *arg1)
{
  if (arg0->unk10 == 2)
  {
    if (D_auto_801B4AA8 > arg0->unk24)
    {
      func_800A70BC(arg0);
      goto block_3;
    }
  }
  else
  {
    block_3:
    *arg1 = 1;

  }
}
