.set noreorder
.set noat
.section .text
.globl func_80113790
func_80113790:
    mfc0 $t0, $10
    addiu $t1, $zero, 0x1F
    mtc0 $t1, $0
    mtc0 $zero, $5
    addiu $t2, $zero, 0x17
    lui $t1, 0xC000
    mtc0 $t1, $10
    lui $t1, 0x8000
    srl $t3, $t1, 6
    or $t3, $t3, $t2
    mtc0 $t3, $2
    addiu $t1, $zero, 0x1
    mtc0 $t1, $3
    nop
    tlbwi
    nop
    nop
    nop
    nop
    mtc0 $t0, $10
    jr $ra
    nop
    nop
    nop
