#include "include_asm.h"

INCLUDE_ASM("span_1000", __osPiCreateAccessQueue);
INCLUDE_ASM("span_1000", __osPiGetAccess);
#ifdef NON_MATCHING
#include "shared/bt_span_1000_code_80091A60.h"
#include "shared/bt_types.h"
#include "game/sys_8011C210.h"
#include "game/sys_801121E0.h"
extern u8 D_803C7528;

__osPiRelAccess(void) {
    osSendMesg(&D_803C7528, 0, 0);
}
#else
INCLUDE_ASM("span_1000", __osPiRelAccess);
#endif
INCLUDE_ASM("span_1000", osPiRawStartDma);
INCLUDE_ASM("span_1000", osPiRawReadIo);
