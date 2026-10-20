.set noreorder
.set noat
.section .text
.globl __osSetSR
__osSetSR:
    mtc0 $a0, $12
    nop
    jr $ra
    nop
