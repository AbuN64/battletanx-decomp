#include "include_asm.h"

INCLUDE_ASM("span_1000", __osDequeueThread);
INCLUDE_ASM("span_1000", __osTimerServicesInit);
INCLUDE_ASM("span_1000", __osTimerInterrupt);
INCLUDE_ASM("span_1000", __osSetTimerIntr);
INCLUDE_ASM("span_1000", __osInsertTimer);
