.set noreorder
.set noat
.set gp=64
.set fp=64
.section .text
.globl __osException
__osException:
    lui $k0, 0x8011
    addiu $k0, $k0, 0x16A0
    jr $k0
    nop
    lui $k0, 0x803C
    addiu $k0, $k0, 0x4E20
    sd $at, 0x20($k0)
    mfc0 $k1, $12
    sw $k1, 0x118($k0)
    addiu $at, $zero, -0x4
    and $k1, $k1, $at
    mtc0 $k1, $12
    sd $t0, 0x58($k0)
    sd $t1, 0x60($k0)
    sd $t2, 0x68($k0)
    sw $zero, 0x18($k0)
    mfc0 $t0, $13
    move $t0, $k0
    lui $k0, %hi(D_80146100)
    lw $k0, %lo(D_80146100)($k0)
    ld $t1, 0x20($t0)
    sd $t1, 0x20($k0)
    ld $t1, 0x118($t0)
    sd $t1, 0x118($k0)
    ld $t1, 0x58($t0)
    sd $t1, 0x58($k0)
    ld $t1, 0x60($t0)
    sd $t1, 0x60($k0)
    ld $t1, 0x68($t0)
    sd $t1, 0x68($k0)
    lw $k1, 0x118($k0)
    mflo $t0
    sd $t0, 0x108($k0)
    mfhi $t0
    andi $t1, $k1, 0xFF00
    sd $v0, 0x28($k0)
    sd $v1, 0x30($k0)
    sd $a0, 0x38($k0)
    sd $a1, 0x40($k0)
    sd $a2, 0x48($k0)
    sd $a3, 0x50($k0)
    sd $t3, 0x70($k0)
    sd $t4, 0x78($k0)
    sd $t5, 0x80($k0)
    sd $t6, 0x88($k0)
    sd $t7, 0x90($k0)
    sd $s0, 0x98($k0)
    sd $s1, 0xA0($k0)
    sd $s2, 0xA8($k0)
    sd $s3, 0xB0($k0)
    sd $s4, 0xB8($k0)
    sd $s5, 0xC0($k0)
    sd $s6, 0xC8($k0)
    sd $s7, 0xD0($k0)
    sd $t8, 0xD8($k0)
    sd $t9, 0xE0($k0)
    sd $gp, 0xE8($k0)
    sd $sp, 0xF0($k0)
    sd $fp, 0xF8($k0)
    sd $ra, 0x100($k0)
    beqz $t1, .L__osException_138
    sd $t0, 0x110($k0)
    lui $t0, %hi(D_80145DB0)
    addiu $t0, $t0, %lo(D_80145DB0)
    lw $t0, 0x0($t0)
    addiu $at, $zero, -0x1
    xor $t2, $t0, $at
    lui $at, 0xFFFF
    andi $t2, $t2, 0xFF00
    ori $at, $at, 0xFF
    or $t4, $t1, $t2
    and $t3, $k1, $at
    andi $t0, $t0, 0xFF00
    or $t3, $t3, $t4
    and $t1, $t1, $t0
    and $k1, $k1, $at
    sw $t3, 0x118($k0)
    or $k1, $k1, $t1
.L__osException_138:
    lui $t1, 0xA430
    lw $t1, 0xC($t1)
    beqz $t1, .L__osException_170
    nop
    lui $t0, %hi(D_80145DB0)
    addiu $t0, $t0, %lo(D_80145DB0)
    lw $t0, 0x0($t0)
    lw $t4, 0x128($k0)
    addiu $at, $zero, -0x1
    srl $t0, $t0, 16
    xor $t0, $t0, $at
    andi $t0, $t0, 0x3F
    and $t0, $t0, $t4
    or $t1, $t1, $t0
.L__osException_170:
    sw $t1, 0x128($k0)
    mfc0 $t0, $14
    sw $t0, 0x11C($k0)
    lw $t0, 0x18($k0)
    beqz $t0, .L__osException_1D4
    nop
    cfc1 $t0, $31
    nop
    sw $t0, 0x12C($k0)
    sdc1 $f0, 0x130($k0)
    sdc1 $f2, 0x138($k0)
    sdc1 $f4, 0x140($k0)
    sdc1 $f6, 0x148($k0)
    sdc1 $f8, 0x150($k0)
    sdc1 $f10, 0x158($k0)
    sdc1 $f12, 0x160($k0)
    sdc1 $f14, 0x168($k0)
    sdc1 $f16, 0x170($k0)
    sdc1 $f18, 0x178($k0)
    sdc1 $f20, 0x180($k0)
    sdc1 $f22, 0x188($k0)
    sdc1 $f24, 0x190($k0)
    sdc1 $f26, 0x198($k0)
    sdc1 $f28, 0x1A0($k0)
    sdc1 $f30, 0x1A8($k0)
.L__osException_1D4:
    mfc0 $t0, $13
    sw $t0, 0x120($k0)
    addiu $t1, $zero, 0x2
    sh $t1, 0x10($k0)
    andi $t1, $t0, 0x7C
    addiu $t2, $zero, 0x24
    beq $t1, $t2, .L__osException_4B0
    nop
    addiu $t2, $zero, 0x2C
    beq $t1, $t2, send_mesg+0xB4
    nop
    addiu $t2, $zero, 0x0
    bne $t1, $t2, .L__osException_514
    nop
    and $s0, $k1, $t0
.L__osException_210:
    andi $t1, $s0, 0xFF00
    srl $t2, $t1, 12
    bnez $t2, .L__osException_228
    nop
    srl $t2, $t1, 8
    addi $t2, $t2, 0x10
.L__osException_228:
    lui $at, 0x8007
    addu $at, $at, $t2
    lbu $t2, 0x59A0($at)
    lui $at, 0x8007
    addu $at, $at, $t2
    lw $t2, 0x59C0($at)
    jr $t2
    nop
    addiu $at, $zero, -0x2001
    b .L__osException_210
    and $s0, $s0, $at
    addiu $at, $zero, -0x4001
    b .L__osException_210
    and $s0, $s0, $at
    mfc0 $t1, $11
    mtc0 $t1, $11
    jal send_mesg
    addiu $a0, $zero, 0x18
    lui $at, 0xFFFF
    ori $at, $at, 0x7FFF
    b .L__osException_210
    and $s0, $s0, $at
    addiu $at, $zero, -0x801
    and $s0, $s0, $at
    addiu $t2, $zero, 0x4
    lui $at, 0x8014
    addu $at, $at, $t2
    lw $t2, 0x5D80($at)
    lui $sp, 0x803C
    addiu $sp, $sp, 0x4FD0
    addiu $a0, $zero, 0x10
    beqz $t2, .L__osException_2C4
    addiu $sp, $sp, 0xFF0
    jalr $t2
    nop
    beqz $v0, .L__osException_2C4
    addiu $a0, $zero, 0x10
    b .L__osException_4C8
    nop
.L__osException_2C4:
    jal send_mesg
    nop
    b .L__osException_210
    nop
    lui $t0, %hi(D_80145DB0)
    addiu $t0, $t0, %lo(D_80145DB0)
    lw $t0, 0x0($t0)
    lui $s1, 0xA430
    lw $s1, 0x8($s1)
    srl $t0, $t0, 16
    and $s1, $s1, $t0
    andi $t1, $s1, 0x1
    beqz $t1, .L__osException_344
    nop
    lui $t4, 0xA404
    lw $t4, 0x10($t4)
    ori $t1, $zero, 0x8008
    lui $at, 0xA404
    andi $t4, $t4, 0x300
    andi $s1, $s1, 0x3E
    beqz $t4, .L__osException_334
    sw $t1, 0x10($at)
    jal send_mesg
    addiu $a0, $zero, 0x20
    beqz $s1, .L__osException_408
    nop
    b .L__osException_344
    nop
.L__osException_334:
    jal send_mesg
    addiu $a0, $zero, 0x58
    beqz $s1, .L__osException_408
    nop
.L__osException_344:
    andi $t1, $s1, 0x8
    beqz $t1, .L__osException_368
    lui $at, 0xA440
    andi $s1, $s1, 0x37
    sw $zero, 0x10($at)
    jal send_mesg
    addiu $a0, $zero, 0x38
    beqz $s1, .L__osException_408
    nop
.L__osException_368:
    andi $t1, $s1, 0x4
    beqz $t1, .L__osException_394
    nop
    addiu $t1, $zero, 0x1
    lui $at, 0xA450
    andi $s1, $s1, 0x3B
    sw $t1, 0xC($at)
    jal send_mesg
    addiu $a0, $zero, 0x30
    beqz $s1, .L__osException_408
    nop
.L__osException_394:
    andi $t1, $s1, 0x2
    beqz $t1, .L__osException_3B8
    lui $at, 0xA480
    andi $s1, $s1, 0x3D
    sw $zero, 0x18($at)
    jal send_mesg
    addiu $a0, $zero, 0x28
    beqz $s1, .L__osException_408
    nop
.L__osException_3B8:
    andi $t1, $s1, 0x10
    beqz $t1, .L__osException_3E4
    nop
    addiu $t1, $zero, 0x2
    lui $at, %hi(D_A4600010)
    andi $s1, $s1, 0x2F
    sw $t1, %lo(D_A4600010)($at)
    jal send_mesg
    addiu $a0, $zero, 0x40
    beqz $s1, .L__osException_408
    nop
.L__osException_3E4:
    andi $t1, $s1, 0x20
    beqz $t1, .L__osException_408
    nop
    addiu $t1, $zero, 0x800
    lui $at, 0xA430
    andi $s1, $s1, 0x1F
    sw $t1, 0x0($at)
    jal send_mesg
    addiu $a0, $zero, 0x48
.L__osException_408:
    addiu $at, $zero, -0x401
    b .L__osException_210
    and $s0, $s0, $at
    lw $k1, 0x118($k0)
    addiu $at, $zero, -0x1001
    lui $t1, %hi(D_80145DAC)
    and $k1, $k1, $at
    sw $k1, 0x118($k0)
    addiu $t1, $t1, %lo(D_80145DAC)
    lw $t2, 0x0($t1)
    beqz $t2, .L__osException_440
    addiu $at, $zero, -0x1001
    b .L__osException_4C8
    and $s0, $s0, $at
.L__osException_440:
    addiu $t2, $zero, 0x1
    sw $t2, 0x0($t1)
    jal send_mesg
    addiu $a0, $zero, 0x70
    lui $t2, %hi(D_801460F8)
    lw $t2, %lo(D_801460F8)($t2)
    addiu $at, $zero, -0x1001
    and $s0, $s0, $at
    lw $k1, 0x118($t2)
    and $k1, $k1, $at
    b .L__osException_4C8
    sw $k1, 0x118($t2)
    addiu $at, $zero, -0x201
    and $t0, $t0, $at
    mtc0 $t0, $13
    jal send_mesg
    addiu $a0, $zero, 0x8
    addiu $at, $zero, -0x201
    b .L__osException_210
    and $s0, $s0, $at
    addiu $at, $zero, -0x101
    and $t0, $t0, $at
    mtc0 $t0, $13
    jal send_mesg
    addiu $a0, $zero, 0x0
    addiu $at, $zero, -0x101
    b .L__osException_210
    and $s0, $s0, $at
.L__osException_4B0:
    addiu $t1, $zero, 0x1
    sh $t1, 0x12($k0)
    jal send_mesg
    addiu $a0, $zero, 0x50
    b .L__osException_4C8
    nop
.L__osException_4C8:
    lui $t2, %hi(D_801460F8)
    lw $t2, %lo(D_801460F8)($t2)
    lw $t1, 0x4($k0)
    lw $t3, 0x4($t2)
    slt $at, $t1, $t3
    beqz $at, .L__osException_4FC
    nop
    lui $a0, 0x8014
    move $a1, $k0
    jal __osEnqueueThread
    addiu $a0, $a0, 0x60F8
    j D_80111E14
    nop
.L__osException_4FC:
    lui $t1, %hi(D_801460F8)
    addiu $t1, $t1, %lo(D_801460F8)
    lw $t2, 0x0($t1)
    sw $t2, 0x0($k0)
    j D_80111E14
    sw $k0, 0x0($t1)
.L__osException_514:
    lui $at, %hi(D_80146104)
    sw $k0, %lo(D_80146104)($at)
    addiu $t1, $zero, 0x1
    sh $t1, 0x10($k0)
    addiu $t1, $zero, 0x2
    sh $t1, 0x12($k0)
    mfc0 $t2, $8
    sw $t2, 0x124($k0)
    jal send_mesg
    addiu $a0, $zero, 0x60
    j D_80111E14
    nop
