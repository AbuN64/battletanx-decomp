.set noreorder
.set noat
.section .text
.globl __osSetCompare
__osSetCompare:
    mtc0 $a0, $11
    jr $ra
    nop
    nop
