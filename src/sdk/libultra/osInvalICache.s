.set noreorder
.set noat
.section .text
.globl osInvalICache
osInvalICache:
    blez $a1, .LosInvalICache_048
    nop
    addiu $t3, $zero, 0x4000
    sltu $at, $a1, $t3
    beqz $at, .LosInvalICache_050
    nop
    move $t0, $a0
    addu $t1, $a0, $a1
    sltu $at, $t0, $t1
    beqz $at, .LosInvalICache_048
    nop
    andi $t2, $t0, 0x1F
    addiu $t1, $t1, -0x20
    subu $t0, $t0, $t2
.LosInvalICache_038:
    cache 0x10, 0x0($t0)
    sltu $at, $t0, $t1
    bnez $at, .LosInvalICache_038
    addiu $t0, $t0, 0x20
.LosInvalICache_048:
    jr $ra
    nop
.LosInvalICache_050:
    lui $t0, 0x8000
    addu $t1, $t0, $t3
    addiu $t1, $t1, -0x20
.LosInvalICache_05C:
    cache 0x00, 0x0($t0)
    sltu $at, $t0, $t1
    bnez $at, .LosInvalICache_05C
    addiu $t0, $t0, 0x20
    jr $ra
    nop
    nop
    nop
    nop
