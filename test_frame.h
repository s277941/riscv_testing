#define LI_DRAM_ADDR(reg1) \
li	reg1, 0x00201084; \


#define PROLOGUE()             \
addi    sp, sp, -220; \
sw      x1, 64(sp); \
sw      x3, 60(sp); \
sw      x8, 56(sp); \
sw      x9, 52(sp); \
sw      x18, 48(sp); \
sw      x19, 44(sp); \
sw      x20, 40(sp); \
sw      x21, 36(sp); \
sw      x22, 32(sp); \
sw      x23, 28(sp); \
sw      x24, 24(sp); \
sw      x25, 20(sp); \
sw      x26, 16(sp); \
sw      x27, 12(sp); \
csrr	x5, 0x79F;\
sw	x5, 68(sp);\
csrr	x5, 0x780;\
sw	x5, 72(sp);\
csrr	x5, 0x781;\
sw	x5, 76(sp);\
csrr	x5, 0x782;\
sw	x5, 80(sp);\
csrr	x5, 0x783;\
sw	x5, 84(sp);\
csrr	x5, 0x784;\
sw	x5, 88(sp);\
csrr	x5, 0x785;\
sw	x5, 92(sp);\
csrr	x5, 0x786;\
sw	x5, 96(sp);\
csrr	x5, 0x787;\
sw	x5, 100(sp);\
csrr	x5, 0x788;\
sw	x5, 104(sp);\
csrr	x5, 0x789;\
sw	x5, 108(sp);\
csrr	x5, 0x78A;\
sw	x5, 112(sp);\
csrr	x5, 0x78B;\
sw	x5, 116(sp);\
csrr	x5, 0x78C;\
sw	x5, 120(sp);\
csrr	x5, 0x78D;\
sw	x5, 124(sp);\
csrr	x5, 0x78E;\
sw	x5, 128(sp);\
csrr	x5, 0x78F;\
sw	x5, 132(sp);\
\
csrr	x5, 0x790;\
sw	x5, 136(sp);\
csrr	x5, 0x791;\
sw	x5, 140(sp);\
csrr	x5, 0x792;\
sw	x5, 144(sp);\
csrr	x5, 0x793;\
sw	x5, 148(sp);\
csrr	x5, 0x794;\
sw	x5, 152(sp);\
\
csrr	x5, 0x300;\
sw	x5, 156(sp);\
csrr	x5, 0x341;\
sw	x5, 160(sp);\
csrr	x5, 0x305;\
sw	x5, 164(sp);\
csrr	x5, 0x7A1;\
sw	x5, 168(sp);\
csrr	x5, 0x7A0;\
sw	x5, 172(sp);\
csrr	x5, 0x342;\
sw	x5, 176(sp);\
csrr	x5, 0x7B6;\
sw	x5, 180(sp);\
csrr	x5, 0x7B2;\
sw	x5, 184(sp);\
\
csrr	x5, 0x014;\
sw	x5, 188(sp);\
csrr	x5, 0xF14;\
sw	x5, 192(sp);\
csrr	x5, 0x7C0;\
sw	x5, 196(sp);\
csrr	x5, 0x7C1;\
sw	x5, 200(sp);\
csrr	x5, 0x7C2;\
sw	x5, 204(sp);\
csrr	x5, 0x7C4;\
sw	x5, 208(sp);\
csrr	x5, 0x7C5;\
sw	x5, 212(sp);\
csrr	x5, 0x7C6;\
sw	x5, 216(sp);\
LI_DRAM_ADDR(x7); \
sw      sp, 0(x7); \


#define EPILOGUE() \
LI_DRAM_ADDR(x7); \
lw      sp, 0(x7);\
lw      x5, 0(x7);\
lw      x27, 12(sp);\
lw      x26, 16(sp);\
lw      x25, 20(sp);\
lw      x24, 24(sp);\
lw      x23, 28(sp);\
lw      x22, 32(sp);\
lw      x21, 36(sp);\
lw      x20, 40(sp);\
lw      x19, 44(sp);\
lw      x18, 48(sp);\
lw      x9, 52(sp);\
lw      x8, 56(sp);\
lw      x3, 60(sp);\
lw      x1, 64(sp);\
\
lw	x5, 68(sp);\
csrw	0x79F, x5;\
lw	x5, 72(sp);\
csrw	0x780, x5;\
lw	x5, 76(sp);\
csrw	0x781, x5;\
lw	x5, 80(sp);\
csrw	0x782, x5;\
lw	x5, 84(sp);\
csrw	0x783, x5;\
lw	x5, 88(sp);\
csrw	0x784, x5;\
lw	x5, 92(sp);\
csrw	0x785, x5;\
lw	x5, 96(sp);\
csrw	0x786, x5;\
lw	x5, 100(sp);\
csrw	0x787, x5;\
lw	x5, 104(sp);\
csrw	0x788, x5;\
lw	x5, 108(sp);\
csrw	0x789, x5;\
lw	x5, 112(sp);\
csrw	0x78A, x5;\
lw	x5, 116(sp);\
csrw	0x78B, x5;\
lw	x5, 120(sp);\
csrw	0x78C, x5;\
lw	x5, 124(sp);\
csrw	0x78D, x5;\
lw	x5, 128(sp);\
csrw	0x78E, x5;\
lw	x5, 132(sp);\
csrw	0x78F, x5;\
\
lw	x5, 136(sp);\
csrw	0x790, x5;\
lw	x5, 140(sp);\
csrw	0x791, x5;\
lw	x5, 144(sp);\
csrw	0x792, x5;\
lw	x5, 148(sp);\
csrw	0x793, x5;\
lw	x5, 152(sp);\
csrw	0x794, x5;\
\
lw	x5, 156(sp);\
csrw	0x300, x5;\
lw	x5, 160(sp);\
csrw	0x341, x5;\
lw	x5, 164(sp);\
csrw	0x305, x5;\
lw	x5, 168(sp);\
csrw	0x7A1, x5;\
lw	x5, 172(sp);\
csrw	0x7A0, x5;\
lw	x5, 176(sp);\
csrw	0x342, x5;\
lw	x5, 180(sp);\
csrw	0x7B6, x5;\
lw	x5, 184(sp);\
csrw	0x7B2, x5;\
\
lw	x5, 188(sp);\
csrw	0x014, x5;\
lw	x5, 192(sp);\
csrw	0xF14, x5;\
lw	x5, 196(sp);\
csrw	0x7C0, x5;\
lw	x5, 200(sp);\
csrw	0x7C1, x5;\
lw	x5, 204(sp);\
csrw	0x7C2, x5;\
lw	x5, 208(sp);\
csrw	0x7C4, x5;\
lw	x5, 212(sp);\
csrw	0x7C5, x5;\
lw	x5, 216(sp);\
csrw	0x7C6, x5;\
addi    sp, sp, 220;\
li x10, 0;\
