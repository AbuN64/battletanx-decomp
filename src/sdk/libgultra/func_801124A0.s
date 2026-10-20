.set noreorder
.set noat
.section .text
.globl __osRestoreInt
__osRestoreInt:
    mfc0 $t0, $12
    or $t0, $t0, $a0
    mtc0 $t0, $12
    nop
    nop
    jr $ra
    nop
    nop
