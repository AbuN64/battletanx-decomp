.set noreorder
.set noat
.section .text
.globl bcopy
bcopy:
    beqz $a2, .Lbcopy_06C
    move $a3, $a1
    beq $a0, $a1, .Lbcopy_06C
    slt $at, $a1, $a0
    bnel $at, $zero, .Lbcopy_034
    slti $at, $a2, 0x10
    add $v0, $a0, $a2
    slt $at, $a1, $v0
    beql $at, $zero, .Lbcopy_034
    slti $at, $a2, 0x10
    b .Lbcopy_198
    slti $at, $a2, 0x10
    slti $at, $a2, 0x10
.Lbcopy_034:
    bnez $at, .Lbcopy_04C
    nop
    andi $v0, $a0, 0x3
    andi $v1, $a1, 0x3
    beq $v0, $v1, .Lbcopy_074
    nop
.Lbcopy_04C:
    beqz $a2, .Lbcopy_06C
    nop
    addu $v1, $a0, $a2
.Lbcopy_058:
    lb $v0, 0x0($a0)
    addiu $a0, $a0, 0x1
    addiu $a1, $a1, 0x1
    bne $a0, $v1, .Lbcopy_058
    sb $v0, -0x1($a1)
.Lbcopy_06C:
    jr $ra
    move $v0, $a3
.Lbcopy_074:
    beqz $v0, .Lbcopy_0D8
    addiu $at, $zero, 0x1
    beq $v0, $at, .Lbcopy_0BC
    addiu $at, $zero, 0x2
    beql $v0, $at, .Lbcopy_0A8
    lh $v0, 0x0($a0)
    lb $v0, 0x0($a0)
    addiu $a0, $a0, 0x1
    addiu $a1, $a1, 0x1
    addiu $a2, $a2, -0x1
    b .Lbcopy_0D8
    sb $v0, -0x1($a1)
    lh $v0, 0x0($a0)
.Lbcopy_0A8:
    addiu $a0, $a0, 0x2
    addiu $a1, $a1, 0x2
    addiu $a2, $a2, -0x2
    b .Lbcopy_0D8
    sh $v0, -0x2($a1)
.Lbcopy_0BC:
    lb $v0, 0x0($a0)
    lh $v1, 0x1($a0)
    addiu $a0, $a0, 0x3
    addiu $a1, $a1, 0x3
    addiu $a2, $a2, -0x3
    sb $v0, -0x3($a1)
    sh $v1, -0x2($a1)
.Lbcopy_0D8:
    slti $at, $a2, 0x20
    bnel $at, $zero, .Lbcopy_138
    slti $at, $a2, 0x10
    lw $v0, 0x0($a0)
    lw $v1, 0x4($a0)
    lw $t0, 0x8($a0)
    lw $t1, 0xC($a0)
    lw $t2, 0x10($a0)
    lw $t3, 0x14($a0)
    lw $t4, 0x18($a0)
    lw $t5, 0x1C($a0)
    addiu $a0, $a0, 0x20
    addiu $a1, $a1, 0x20
    addiu $a2, $a2, -0x20
    sw $v0, -0x20($a1)
    sw $v1, -0x1C($a1)
    sw $t0, -0x18($a1)
    sw $t1, -0x14($a1)
    sw $t2, -0x10($a1)
    sw $t3, -0xC($a1)
    sw $t4, -0x8($a1)
    b .Lbcopy_0D8
    sw $t5, -0x4($a1)
.Lbcopy_134:
    slti $at, $a2, 0x10
.Lbcopy_138:
    bnel $at, $zero, .Lbcopy_174
    slti $at, $a2, 0x4
    lw $v0, 0x0($a0)
    lw $v1, 0x4($a0)
    lw $t0, 0x8($a0)
    lw $t1, 0xC($a0)
    addiu $a0, $a0, 0x10
    addiu $a1, $a1, 0x10
    addiu $a2, $a2, -0x10
    sw $v0, -0x10($a1)
    sw $v1, -0xC($a1)
    sw $t0, -0x8($a1)
    b .Lbcopy_134
    sw $t1, -0x4($a1)
.Lbcopy_170:
    slti $at, $a2, 0x4
.Lbcopy_174:
    bnez $at, .Lbcopy_04C
    nop
    lw $v0, 0x0($a0)
    addiu $a0, $a0, 0x4
    addiu $a1, $a1, 0x4
    addiu $a2, $a2, -0x4
    b .Lbcopy_170
    sw $v0, -0x4($a1)
    slti $at, $a2, 0x10
.Lbcopy_198:
    add $a0, $a0, $a2
    bnez $at, .Lbcopy_1B4
    add $a1, $a1, $a2
    andi $v0, $a0, 0x3
    andi $v1, $a1, 0x3
    beq $v0, $v1, .Lbcopy_1E4
    nop
.Lbcopy_1B4:
    beqz $a2, .Lbcopy_06C
    nop
    addiu $a0, $a0, -0x1
    addiu $a1, $a1, -0x1
    subu $v1, $a0, $a2
.Lbcopy_1C8:
    lb $v0, 0x0($a0)
    addiu $a0, $a0, -0x1
    addiu $a1, $a1, -0x1
    bne $a0, $v1, .Lbcopy_1C8
    sb $v0, 0x1($a1)
    jr $ra
    move $v0, $a3
.Lbcopy_1E4:
    beqz $v0, .Lbcopy_248
    addiu $at, $zero, 0x3
    beq $v0, $at, .Lbcopy_22C
    addiu $at, $zero, 0x2
    beql $v0, $at, .Lbcopy_218
    lh $v0, -0x2($a0)
    lb $v0, -0x1($a0)
    addiu $a0, $a0, -0x1
    addiu $a1, $a1, -0x1
    addiu $a2, $a2, -0x1
    b .Lbcopy_248
    sb $v0, 0x0($a1)
    lh $v0, -0x2($a0)
.Lbcopy_218:
    addiu $a0, $a0, -0x2
    addiu $a1, $a1, -0x2
    addiu $a2, $a2, -0x2
    b .Lbcopy_248
    sh $v0, 0x0($a1)
.Lbcopy_22C:
    lb $v0, -0x1($a0)
    lh $v1, -0x3($a0)
    addiu $a0, $a0, -0x3
    addiu $a1, $a1, -0x3
    addiu $a2, $a2, -0x3
    sb $v0, 0x2($a1)
    sh $v1, 0x0($a1)
.Lbcopy_248:
    slti $at, $a2, 0x20
    bnel $at, $zero, .Lbcopy_2A8
    slti $at, $a2, 0x10
    lw $v0, -0x4($a0)
    lw $v1, -0x8($a0)
    lw $t0, -0xC($a0)
    lw $t1, -0x10($a0)
    lw $t2, -0x14($a0)
    lw $t3, -0x18($a0)
    lw $t4, -0x1C($a0)
    lw $t5, -0x20($a0)
    addiu $a0, $a0, -0x20
    addiu $a1, $a1, -0x20
    addiu $a2, $a2, -0x20
    sw $v0, 0x1C($a1)
    sw $v1, 0x18($a1)
    sw $t0, 0x14($a1)
    sw $t1, 0x10($a1)
    sw $t2, 0xC($a1)
    sw $t3, 0x8($a1)
    sw $t4, 0x4($a1)
    b .Lbcopy_248
    sw $t5, 0x0($a1)
.Lbcopy_2A4:
    slti $at, $a2, 0x10
.Lbcopy_2A8:
    bnel $at, $zero, .Lbcopy_2E4
    slti $at, $a2, 0x4
    lw $v0, -0x4($a0)
    lw $v1, -0x8($a0)
    lw $t0, -0xC($a0)
    lw $t1, -0x10($a0)
    addiu $a0, $a0, -0x10
    addiu $a1, $a1, -0x10
    addiu $a2, $a2, -0x10
    sw $v0, 0xC($a1)
    sw $v1, 0x8($a1)
    sw $t0, 0x4($a1)
    b .Lbcopy_2A4
    sw $t1, 0x0($a1)
.Lbcopy_2E0:
    slti $at, $a2, 0x4
.Lbcopy_2E4:
    bnez $at, .Lbcopy_1B4
    nop
    lw $v0, -0x4($a0)
    addiu $a0, $a0, -0x4
    addiu $a1, $a1, -0x4
    addiu $a2, $a2, -0x4
    b .Lbcopy_2E0
    sw $v0, 0x0($a1)
    nop
    nop
    nop
    jr $ra
    nop
