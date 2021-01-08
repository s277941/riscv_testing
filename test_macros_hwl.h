#define TEST_HWLOOP() \
LI_DRAM_ADDR(x29); \
li x31, 0x00000000; \
li x25, 0xFFFFFFFF; \
li x1,1; \
csrw 0x7C0, x31; \
csrw 0x7C1, x31; \
csrw 0x7C2, x31; \
csrw 0x7C4, x31; \
csrw 0x7C5, x31; \
csrw 0x7C6, x31; \
csrrw x1, 0x7C0, x25; \
csrrw x2, 0x7C1, x25; \
csrrw x3, 0x7C2, x25; \
csrrw x4, 0x7C4, x25; \
csrrw x5, 0x7C5, x25; \
csrrw x6, 0x7C6, x25; \
sw x1, 1567(x29); \
sw x2, 1567(x29); \
sw x3, 1567(x29); \
sw x4, 1567(x29); \
sw x5, 1567(x29); \
sw x6, 1567(x29); \
csrr x7, 0x7C0; \
csrr x8, 0x7C1; \
csrr x9, 0x7C2; \
csrr x10, 0x7C4; \
csrr x11, 0x7C5; \
csrr x12, 0x7C6; \
sw x7, 123(x29); \
sw x8, 123(x29); \
sw x9, 200(x29); \
sw x10, 200(x29); \
sw x11, 89(x29); \
sw x12, 9(x29); \
\
lp.starti x0, HW_loopx0; \
lp.endi x0, end_HW_loopx0; \
lp.counti x0, 0xF; \
csrr x7, 0x7C0; \
csrr x8, 0x7C1; \
sw x7, 127(x29); \
sw x8, 127(x29); \
HW_loopx0: ; \
csrr x9, 0x7C2; \
end_HW_loopx0: sw x9, 3012(x29); \
\
li x2, 10; \
lp.starti x1, HW_loopx1; \
lp.endi x1, end_HW_loopx1; \
lp.count x1, x2; \
csrr x7, 0x7C4; \
csrr x8, 0x7C5; \
nop; \
sw x7, 3012(x29); \
sw x8, 1999(x29); \
HW_loopx1:; \
csrr x9, 0x7C6; \
end_HW_loopx1: sw x9, 1999(x29); \
\
li x2, 4; \
lp.setup x0, x2, end_HW_loopx0_2; \
addi x2,x2, 15; \
end_HW_loopx0_2: sw x2, 1999(x29); \
\
lp.setupi x0, 31, end_HW_loopx0_3; \
addi x2,x2, 15; \
nop;\
end_HW_loopx0_3: sw x2, 1999(x29); \
\
lp.setup x1, x2, end_HW_loopx0_4; \
addi x2,x2, 15; \
end_HW_loopx0_4: sw x2, 1999(x29); \
\
lp.setupi x1, 31, end_HW_loopx0_5; \
addi x2,x2, 15; \
end_HW_loopx0_5: sw x2, 1999(x29); \
\
li x2, 4; \
lp.setup x0, x2, end_HW_loopx0_22; \
addi x2,x2, 15; \
nop;\
end_HW_loopx0_22: sw x2, 16(x29); \
\
lp.setupi x0, 4, end_HW_loopx0_33; \
addi x2,x2, 15; \
nop;\
nop;\
end_HW_loopx0_33: sw x2, 16(x29); \
\
lp.setup x1, x2, end_HW_loopx0_44; \
addi x2,x2, 15; \
nop;\
end_HW_loopx0_44: sw x2, 16(x29); \
\
lp.setupi x1, 4, end_HW_loopx0_55; \
addi x2,x2, 15; \
nop;\
nop;\
end_HW_loopx0_55: sw x2, 16(x29); \
\
li x5, 2;\
li x3, 3;\
li x2, 0x80000000;\
lp.starti x0, HW_loopx05; \
lp.endi x0, end_HW_loopx05; \
lp.count x0, x2; \
HW_loopx05: ; \
beq x5, x3, endl1;\
add x5, x5, 1;\
csrr x9, 0x7C2; \
end_HW_loopx05: sw x9, 16(x29); \
endl1:;\
\
li x5, 2;\
lp.starti x1, HW_loopx15; \
lp.endi x1, end_HW_loopx15; \
lp.count x1, x2; \
HW_loopx15:; \
beq x5, x3, endl2;\
add x5, x5, 1;\
csrr x9, 0x7C6; \
end_HW_loopx15: sw x9, 16(x29); \
endl2:;\
\
li x5, 2;\
lp.starti x0, HW_loopx06; \
lp.endi x0, end_HW_loopx06; \
lp.counti x0, 0x800; \
HW_loopx06: ; \
beq x5, x3, endl16;\
add x5, x5, 1;\
csrr x9, 0x7C2; \
end_HW_loopx06: sw x9, 16(x29); \
endl16:;\
\
li x5, 2;\
lp.starti x1, HW_loopx16; \
lp.endi x1, end_HW_loopx16; \
lp.counti x1, 0x800; \
HW_loopx16:;\
beq x5, x3, endl26;\
add x5, x5, 1;\
csrr x9, 0x7C6;\
end_HW_loopx16: sw x9, 16(x29); \
endl26:;\
addi                x1,     x0,     10;\
addi                x2,     x0,     10;\
lp.setup            x0,     x1,     nested_1;\
addi                x1,     x1,     5;\
lp.setup            x1,     x2,     nested_2;\
addi                x1,     x1,     7;\
lp.setup            x1,     x1,     nested_1;\
addi                x1,     x1,     10;\
addi                x0,     x0,     0;\
nested_2:;\
sw                  x2,     100(x29);\
nested_1:;\
sw                  x2,     100(x29);\
