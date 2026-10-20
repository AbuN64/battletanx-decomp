.set noreorder
.set noat
.section .text
.globl osGetCount
osGetCount:
    mfc0 $v0, $9
    jr $ra
    nop
    nop
