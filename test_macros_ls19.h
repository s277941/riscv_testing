#define TEST_LOAD_STORE() \
LI_DRAM_ADDR(x29);\
xor x1, x1, x1;\
xor x3, x3, x3;\
xori x3, x3, -1;\
p.sw x1, 4(x29!);\
p.sw x3, 4(x29!);\
lui x1, 0xFFFF0;\
lui x3, 0xFFFF0;\
xori x3, x3, -1;\
p.sw x1, 4(x29!);\
p.sw x3, 4(x29!);\
lui x1, 0x00FF0;\
ori x1, x1, 0x0FF;\
lui x3, 0x00FF0;\
ori x3, x1, 0x0FF;\
xori x3, x3, -1;\
p.sw x1, 4(x29!);\
p.sw x3, 4(x29!);\
lui x1, 0xF0F0F;\
ori x1, x1, 0x0F0;\
lui x3, 0xF0F0F;\
ori x3, x3, 0x0F0;\
xori x3, x3, -1;\
p.sw x1, 4(x29!);\
p.sw x3, 4(x29!);\
lui x1, 0x33333;\
ori x1, x1, 0x333;\
lui x3, 0x33333;\
ori x3, x3, 0x333;\
xori x3, x3, -1;\
p.sw x1, 4(x29!);\
p.sw x3, 4(x29!);\
lui x1, 0x55555;\
ori x1, x1, 0x555;\
lui x3, 0x55555;\
ori x3, x3, 0x555;\
xori x3, x3, -1;\
p.sw x1, 4(x29!);\
p.sw x3, 4(x29!);\
lui x2, 0x00104;\
lui x1, 0x00100;\
lp.setupi x0, 0xC, ext_loop_end6;\
p.lw x31, 4(x29!);\
pv.dotup.h x3, x31, x30 ;\
mulhsu x4, x31, x30;\
lhu x30, 16(x29);\
pv.dotsp.b x5, x31, x30;\
mulhu x6, x31, x30;\
p.sw x3, 16(x29);\
p.sw x4, 16(x29);\
p.sw x5, 16(x29);\
p.sw x5, 16(x29);\
p.sb x3, 16(x29);\
p.sb x4, 16(x29);\
p.sb x5, 16(x29);\
p.sb x5, 16(x29);\
ext_loop_end6: lui x1, 0x00000;\
lui x3, 0xFFFFF;\
ori x3, x3, 0x0FF;\
sll x3, x3, 4;\
ori x3, x3, 0x0FF;\
sw x0, 16(x29);\
nop;\
nop;\
nop;\
sw x3, 16(x29);\
lw x5, 16(x29);\
nop;\
nop;\
nop;\
lw x6, 16(x29);\
lui x3, 0x33333;\
ori x3, x3, 0x333;\
sw x3, 16(x29);\
lw x6, 16(x29);\