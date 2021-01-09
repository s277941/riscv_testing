#define FORWARDING_STALL_JUMPS() \
LI_DRAM_ADDR(x31); \
li x2, 0xFFFFFFFF; \
csrw 0x000, x2; \
csrr x10, 0x000; \
sw x10, 4(x31); \
csrw 0x300, x2; \
csrr x10, 0x300; \
sw x10, 4(x31); \
li x4, 20; \
sw x4, 4(x31); \
sw x4, 4(x31); \
sw x4, 4(x31); \
sw x4, 4(x31); \
lw x12, 4(x31); \
add x12, x12, x12; \
sw x12, 4(x31); \
sw x12, 4(x31); \
sw x12, 4(x31); \
sw x12, 4(x31); \
jal jump_al; \
li x7, 30; \
nop; \
jump_al: ;\
li x6, 0; \
la x8, JALR_JUMP; \
jalr x8; \
li x6,0xFFFFFFFF; \
JALR_JUMP: ;\
sw x6, 4(x31); \
li x6, 0xFFFFFFFF; \
la x9, JALR_JUMP2; \
jalr x9; \
li x6,0; \
JALR_JUMP2: ;\
sw x6, 4(x31); \
li x2, 0xFFFFFFFF; \
csrw 0x00, x2; \
csrr x10, 0x00; \
sw x10, 4(x31); \
sw x10, 4(x31); \
sw x10, 4(x31); \
li x9, 0xFF; \
mv x2, x9; \
sw x2, 4(x31); \
csrw 0x00, 0x00000000; \
csrr x10, 0x00; \
sw x10, 4(x31); \
sw x10, 4(x31); \
sw x10, 4(x31); \
li x2, 0xFFFFFFFF; \
csrw 0x04, x2; \
csrr x10, 0x04; \
sw x10, 4(x31); \
li x2, 0; \
csrw 0x04, x2; \
csrr x10, 0x04; \
sw x10, 4(x31); \
li x2, 0xFFFFFFFF; \
csrw 0x08, x2; \
csrr x10, 0x08; \
sw x10, 4(x31); \
li x2, 0; \
csrw 0x08, x2; \
csrr x10, 0x08; \
sw x10, 4(x31); \
BNEIMM_JUMP: ; \
li x4, 0xFFF; \
sw x4, 4(x31); \
li x4, 10; \
p.beqimm x4, 10, BEQIMM_JUMP; \
li x4, 0xFFF; \
BEQIMM_JUMP:; \
sw x4, 4(x31); \
p.bneimm x4, 10, BNEIMM_JUMP; \
sw x4, 4(x31); \
li x5, 20; \
li x4, 10; \
blt x4, x5, BLT_JUMP; \
li x4, 0xFFFF; \
BLT_JUMP:; \
sw x4, 4(x31); \
bge x5, x4, BGE_JUMP; \
li x4, 0xFFFF; \
BGE_JUMP:; \
sw x4, 4(x31); \
addi x1, x0, 1; \
addi x2, x1, 2;\
addi x3, x1, 11	; \
addi x4, x1, 125; \
addi x5, x1, 89; \
add  x6, x1, x1; \
add  x7, x6, x6; \
add  x8, x6, x6	; \
add  x9, x6, x6	; \
add  x10, x4, x6; \
sw x10, 4(x1); \
sw x10, 7(x1); \
sw x10, 11(x1); \
lw x11, 11(x1); \
lw x12, 11(x1)	; \
lw x13, 11(x1)	; \
sw x13, 12(x1)	; \
add  x14, x6, x6; \
lw x14, 11(x1)	; \
add  x15, x6, x14; \
add  x16, x6, x14; \
add  x16, x6, x14; \
lw x2, 4(x1); \
sw x18, 8(x31); \
sw x17, 8(x31); \
sw x6, 8(x31); \
sw x3, 8(x31); \
sw x7, 8(x31); \
sw x5, 8(x31); \
sw x15, 8(x31); \
sw x16, 8(x31); \
sw x14, 8(x31); \
\
addi x1, x0, 1; \
addi x2, x1, 2; \
addi x3, x2, 9; \
addi x4, x3, 52; \
sw x4, 4(x1)	; \
lw x2, 4(x1); \
sw x2, 20(x1) ; \
lw x2, 4(x2); \
lw x2, 4(x1)	; \
addi x5, x2, 10; \
addi x6, x2, 10; \
addi x7, x2, 10; \
sw x2, 8(x31); \
sw x3, 8(x31); \
sw x4, 8(x31); \
sw x5, 8(x31); \
sw x6, 8(x31); \
sw x7, 8(x31); \
