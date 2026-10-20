.set noreorder
.set noat
.section .text
.globl __osGetSR
__osGetSR:
    mfc0 $v0, $12
    jr $ra
    nop
    nop
