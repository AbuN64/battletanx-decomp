.set noreorder
.set noat
.section .text
.globl func_80122720
func_80122720:
    lui $t0, 0x8000
    addiu $t2, $zero, 0x2000
    addu $t1, $t0, $t2
    addiu $t1, $t1, -0x10
.Lfunc_80122720_010:
    cache 0x01, 0x0($t0)
    sltu $at, $t0, $t1
    bnez $at, .Lfunc_80122720_010
    addiu $t0, $t0, 0x10
    jr $ra
    nop
    nop
    nop
