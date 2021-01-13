#define EXCEPTIONS() \
li x3, 0xFFFFFFFF; \
li x4, 0x0000FFFF; \
div x30, x3,x4; \
add x30,x30,x30; \
sub x30,x30,x30; \
mul x30, x30,x30; \
\
li x31, 0x0020108C; \
sw x30,0(x31); \
li x3, 7; \
p.sw x3, x3(x31); \
p.sw x3, x3(x31!); \
p.sw x3, x3(x31!); \
p.sw x3, x3(x31!); \
sw x31, 0(x31); \
lw x2, 0(x31); \
sw x2, 0(x31); \
li x1, 1; \
beq x1, x0, mai; \
beq x1, x0, mai; \
beq x1, x0, mai; \
mai:; \
beq x0, x1, mai; \
beq x0, x1, mai; \
beq x0, x1, mai; \
p.mac x1, x2, x3; \
p.mac x1, x1, x1; \
sw x1, 0(x31); \
\
p.mac x1, x2, x3; \
nop; \
p.mac x1, x1, x1; \
nop; \
sw x1, 0(x31); \
\
p.mac x1, x2, x3; \
nop; \
nop; \
p.mac x1, x1, x1; \
nop; \
nop; \
sw x1, 0(x31); \
\
lw x3, 0x(x31);\
p.mac x1, x2, x3; \
nop; \
nop; \
nop; \
p.mac x1, x1, x1; \
nop; \
nop; \
nop; \
sw x1, 0(x31); \
\
lw x2, 0(x31);\
p.mac x1, x2, x3; \
nop; \
nop; \
nop; \
nop; \
p.mac x1, x1, x1; \
nop; \
nop; \
nop; \
nop; \
sw x1, 0(x31); \
li x31, 0x0020108C; \
LUI x1, 0xFFFFF; \
sw x1, 0(x31); \
LUI x1, 0; \
sw x1, 0(x31); \
/*
la x13, WFI_PPC_1; \
la x14, WFI_NPC_1; \
la x15, WFI_NPC_2; \
ebreak; \
WFI_PPC_1: ; \
wfi; \
WFI_NPC_1: addi x14, x13, 1; \
WFI_NPC_2: addi x15, x13, 2; \
\
\
la x13,     before_ill; \
li x14,     0x84; \
la x15,     after_ill; \
nop; \
before_ill:; \
after_ill:  nop; \
wfi;\
call pippo;\
call pippo;\
addi x3, x3, 5;\
call pippo;\
j npippo;\
pippo:;\
addi x3, x3, 1;\
ret;\
ret;\
ret;\
npippo:;\
sw x3, 0(x31);\*/
