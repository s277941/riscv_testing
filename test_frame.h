#define LI_DRAM_ADDR(reg1) \
li	reg1, 0x00201084; \


#define PROLOGUE()             \
addi    sp, sp, -68; \
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
addi    sp, sp, 68;\
li x10, 0;\
