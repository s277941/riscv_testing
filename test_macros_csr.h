#define TEST_PERF();\
  li x27 , 0x00000001;\
\
  csrw  0x79F, x27;\
  csrr  x26, 0x780;\
  csrr  x25, 0x781;\
  csrr  x24, 0x782;\
  csrr  x23, 0x783;\
  csrr  x22, 0x784;\
  csrr  x21, 0x785;\
  csrr  x20, 0x786;\
  csrr  x19, 0x787;\
  sw x26, 8(x31);\
  sw x25, 8(x31);\
  sw x24, 8(x31);\
  sw x23, 8(x31);\
  sw x22, 8(x31);\
  sw x21, 8(x31);\
  sw x20, 8(x31);\
  sw x19, 8(x31);\
\
  csrr  x26, 0x788;\
  csrr  x25, 0x789;\
  csrr  x24, 0x78A;\
  csrr  x23, 0x78B;\
  csrr  x22, 0x78C;\
  csrr  x21, 0x78D;\
  csrr  x20, 0x78E;\
  csrr  x19, 0x78F;\
  sw x26, 8(x31);\
  sw x25, 8(x31);\
  sw x24, 8(x31);\
  sw x23, 8(x31);\
  sw x22, 8(x31);\
  sw x21, 8(x31);\
  sw x20, 8(x31);\
  sw x19, 8(x31);\
\
  csrr  x26, 0x790;\
  csrr  x25, 0x791;\
  csrr  x24, 0x792;\
  csrr  x23, 0x793;\
  csrr  x22, 0x794;\
  sw x26, 8(x31);\
  sw x25, 8(x31);\
  sw x24, 8(x31);\
  sw x23, 8(x31);\
  sw x22, 8(x31);\
\
  csrr  x19, 0x79F;\
  sw x19, 8(x31);\

#define TEST_CSR();\
csrr x30, 0x00;\
LI_DRAM_ADDR(x31);\
sw x30, 8(x31);\
csrrci x30, 0x300, 7;\
csrrci x30, 0x300, 3;\
csrrsi x30, 0x300, 7;\
sw x30, 8(x31);\
csrrsi x30, 0x300, 3;\
sw x30, 8(x31);\
csrrci x30, 0x300, 7;\
sw x30, 8(x31);\
csrrci x30, 0x300, 3;\
sw x30, 8(x31);\
csrr x30, 0x300;\
sw x30, 8(x31);\
\
li x28, 0xFFFFFFFE;\
li x1, 1;\
csrrwi x30, 0x341, 1;\
csrrw x30, 0x341, x28;\
sw x30, 8(x31);\
csrrw x30, 0x341, x1;\
sw x30, 8(x31);\
csrr x30, 0x342;\
sw x30, 8(x31);\
csrrwi x30, 0x305, 1;\
csrrw x30, 0x305, x28;\
sw x30, 8(x31);\
csrrw x30, 0x305, x1;\
sw x30, 8(x31);\
csrr x30, 0x014;\
sw x30, 8(x31);\
csrr x30, 0xF14;\
sw x30, 8(x31);\
csrrsi x30, 0x7A1, 1;\
csrrsi x30, 0x7A1, 0;\
csrrci x30, 0x7A1, 1;\
sw x30, 8(x31);\
csrrci x30, 0x7A1, 0;\
sw x30, 8(x31);\
csrrsi x30, 0x7A1, 1;\
sw x30, 8(x31);\
\
csrrsi x30, 0x7A0, 20;\
csrrsi x30, 0x7A0, 19;\
csrrsi x30, 0x7A0, 18;\
csrrsi x30, 0x7A0, 17;\
csrrsi x30, 0x7A0, 16;\
csrrsi x30, 0x7A0, 15;\
csrrsi x30, 0x7A0, 14;\
csrrsi x30, 0x7A0, 13;\
csrrsi x30, 0x7A0, 12;\
csrrsi x30, 0x7A0, 11;\
csrrsi x30, 0x7A0, 10;\
csrrsi x30, 0x7A0, 9;\
csrrsi x30, 0x7A0, 8;\
csrrsi x30, 0x7A0, 7;\
csrrsi x30, 0x7A0, 6;\
csrrsi x30, 0x7A0, 5;\
csrrsi x30, 0x7A0, 4;\
csrrsi x30, 0x7A0, 3;\
csrrsi x30, 0x7A0, 2;\
csrrsi x30, 0x7A0, 1;\
csrrsi x30, 0x7A0, 0;\
csrrci x30, 0x7A0, 20;\
sw x30, 8(x31);\
csrrci x30, 0x7A0, 19;\
sw x30, 8(x31);\
csrrci x30, 0x7A0, 18;\
sw x30, 8(x31);\
csrrci x30, 0x7A0, 17;\
sw x30, 8(x31);\
csrrci x30, 0x7A0, 16;\
sw x30, 8(x31);\
csrrci x30, 0x7A0, 15;\
sw x30, 8(x31);\
csrrci x30, 0x7A0, 14;\
sw x30, 8(x31);\
csrrci x30, 0x7A0, 13;\
sw x30, 8(x31);\
csrrci x30, 0x7A0, 12;\
sw x30, 8(x31);\
csrrci x30, 0x7A0, 11;\
sw x30, 8(x31);\
csrrci x30, 0x7A0, 10;\
sw x30, 8(x31);\
csrrci x30, 0x7A0, 9;\
sw x30, 8(x31);\
csrrci x30, 0x7A0, 8;\
sw x30, 8(x31);\
csrrsi x30, 0x7A1, 0;\
sw x30, 8(x31);\
csrrci x30, 0x7A0, 7;\
sw x30, 8(x31);\
csrrci x30, 0x7A0, 6;\
sw x30, 8(x31);\
csrrci x30, 0x7A0, 5;\
sw x30, 8(x31);\
csrrci x30, 0x7A0, 4;\
sw x30, 8(x31);\
csrrci x30, 0x7A0, 3;\
sw x30, 8(x31);\
csrrci x30, 0x7A0, 2;\
sw x30, 8(x31);\
csrrci x30, 0x7A0, 1;\
sw x30, 8(x31);\
csrrci x30, 0x7A0, 0;\
sw x30, 8(x31);\
csrrsi x30, 0x7A0, 20;\
sw x30, 8(x31);\
csrrsi x30, 0x7A0, 19;\
sw x30, 8(x31);\
csrrsi x30, 0x7A0, 18;\
sw x30, 8(x31);\
csrrsi x30, 0x7A0, 17;\
sw x30, 8(x31);\
csrrsi x30, 0x7A0, 16;\
sw x30, 8(x31);\
csrrsi x30, 0x7A0, 15;\
sw x30, 8(x31);\
csrrsi x30, 0x7A0, 14;\
sw x30, 8(x31);\
csrrsi x30, 0x7A0, 13;\
sw x30, 8(x31);\
csrrsi x30, 0x7A0, 12;\
sw x30, 8(x31);\
csrrsi x30, 0x7A0, 11;\
sw x30, 8(x31);\
csrrsi x30, 0x7A0, 10;\
sw x30, 8(x31);\
csrrsi x30, 0x7A0, 9;\
sw x30, 8(x31);\
csrrsi x30, 0x7A0, 8;\
sw x30, 8(x31);\
csrrsi x30, 0x7A0, 7;\
sw x30, 8(x31);\
csrrsi x30, 0x7A0, 6;\
sw x30, 8(x31);\
csrrsi x30, 0x7A0, 5;\
sw x30, 8(x31);\
csrrsi x30, 0x7A0, 4;\
sw x30, 8(x31);\
csrrsi x30, 0x7A0, 3;\
sw x30, 8(x31);\
csrrsi x30, 0x7A0, 2;\
sw x30, 8(x31);\
csrrsi x30, 0x7A0, 1;\
sw x30, 8(x31);\
csrrsi x30, 0x7A0, 0;\
sw x30, 8(x31);\
  csrw  0x780, x28;\
  csrw  0x781, x28;\
  csrw  0x782, x28;\
  csrw  0x783, x28;\
  csrw  0x784, x28;\
  csrw  0x785, x28;\
  csrw  0x786, x28;\
  csrw  0x787, x28;\
  csrw  0x788, x28;\
  csrw  0x789, x28;\
  csrw  0x78A, x28;\
  csrw  0x78B, x28;\
  csrw  0x78C, x28;\
  csrw  0x78D, x28;\
  csrw  0x78E, x28;\
  csrw  0x78F, x28;\
  csrw  0x790, x28;\
  csrw  0x791, x28;\
  csrw  0x792, x28;\
  csrw  0x793, x28;\
  csrw  0x794, x28;\
  csrw  0x79F, x28;\
  csrrw x26, 0x780, x27;\
  csrrw x25, 0x781, x27;\
  csrrw x24, 0x782, x27;\
  csrrw x23, 0x783, x27;\
  csrrw x22, 0x784, x27;\
  csrrw x21, 0x785, x27;\
  csrrw x20, 0x786, x27;\
  csrrw x19, 0x787, x27;\
  sw x26, 8(x31);\
  sw x25, 8(x31);\
  sw x24, 8(x31);\
  sw x23, 8(x31);\
  sw x22, 8(x31);\
  sw x21, 8(x31);\
  sw x20, 8(x31);\
  sw x19, 8(x31);\
\
  csrrw x26, 0x788, x27;\
  csrrw x25, 0x789, x27;\
  csrrw x24, 0x78A, x27;\
  csrrw x23, 0x78B, x27;\
  csrrw x22, 0x78C, x27;\
  csrrw x21, 0x78D, x27;\
  csrrw x20, 0x78E, x27;\
  csrrw x19, 0x78F, x27;\
  sw x26, 8(x31);\
  sw x25, 8(x31);\
  sw x24, 8(x31);\
  sw x23, 8(x31);\
  sw x22, 8(x31);\
  sw x21, 8(x31);\
  sw x20, 8(x31);\
  sw x19, 8(x31);\
\
  csrrw x26, 0x790, x27;\
  csrrw x25, 0x791, x27;\
  csrrw x24, 0x792, x27;\
  csrrw x23, 0x793, x27;\
  csrrw x22, 0x794, x27;\
  sw x26, 8(x31);\
  sw x25, 8(x31);\
  sw x24, 8(x31);\
  sw x23, 8(x31);\
  sw x22, 8(x31);\
\
  csrrw x19, 0x79F, x27;\
  sw x19, 8(x31);\
TEST_PERF();\
csrrw x30, 0x341, x1;\
sw x30, 4(x31);\
csrrw x30, 0x341, x28;\
sw x30, 4(x31);\
csrr x30, 0x341;\
sw x30, 4(x31);\
csrrw x30, 0x341, x0;\
sw x30, 8(x31);\
csrrw x30, 0x341, x28;\
sw x30, 8(x31);\
CSRRCI x29, 0x7B6, 0; \
sw x29, 8(x31);\
CSRRSI x29, 0x7B6, 0; \
sw x29, 8(x31);\
CSRRWI x29, 0x7B6, 0; \
sw x29, 8(x31);\
CSRRC x29, 0x7B6, x28; \
sw x29, 8(x31);\
CSRRS x29, 0x7B6, x28; \
sw x29, 8(x31);\
CSRRW x29, 0x7B6, x28; \
sw x29, 8(x31);\
\
csrw 0x7B2, x0;\
csrrsi x30, 0x7B2, 31;\
sw x30, 4(x31);\
csrrsi x30, 0x7B2, 30;\
sw x30, 4(x31);\
csrrsi x30, 0x7B2, 29;\
sw x30, 4(x31);\
csrrsi x30, 0x7B2, 28;\
sw x30, 4(x31);\
csrrsi x30, 0x7B2, 27;\
sw x30, 4(x31);\
csrrsi x30, 0x7B2, 26;\
sw x30, 4(x31);\
csrrsi x30, 0x7B2, 25;\
sw x30, 4(x31);\
csrrsi x30, 0x7B2, 24;\
sw x30, 4(x31);\
csrrsi x30, 0x7B2, 23;\
sw x30, 4(x31);\
csrrsi x30, 0x7B2, 22;\
sw x30, 4(x31);\
csrrsi x30, 0x7B2, 21;\
sw x30, 4(x31);\
csrrci x30, 0x7B2, 31;\
sw x30, 4(x31);\
csrrci x30, 0x7B2, 30;\
sw x30, 4(x31);\
csrrci x30, 0x7B2, 29;\
sw x30, 4(x31);\
csrrci x30, 0x7B2, 28;\
sw x30, 4(x31);\
csrrci x30, 0x7B2, 27;\
sw x30, 4(x31);\
csrrci x30, 0x7B2, 26;\
sw x30, 4(x31);\
csrrci x30, 0x7B2, 25;\
sw x30, 4(x31);\
csrrci x30, 0x7B2, 24;\
sw x30, 4(x31);\
csrrci x30, 0x7B2, 23;\
sw x30, 4(x31);\
csrrci x30, 0x7B2, 22;\
sw x30, 4(x31);\
csrrci x30, 0x7B2, 21;\
sw x30, 4(x31);\
\
CSRRCI x29, 0x7C6, 0; \
sw x29, 8(x31);\
CSRRSI x29, 0x7C6, 0; \
sw x29, 8(x31);\
CSRRWI x29, 0x7C6, 0; \
sw x29, 8(x31);\
CSRRC x29, 0x7C6, x28; \
sw x29, 8(x31);\
CSRRS x29, 0x7C6, x28; \
sw x29, 8(x31);\
CSRRW x29, 0x7C6, x28; \
sw x29, 8(x31);\
RDCYCLE x5; \
sw x5, 8(x31); \
RDCYCLEH x5; \
sw x5, 8(x31); \
RDTIME x5; \
sw x5, 8(x31); \
RDTIMEH x5; \
sw x5, 8(x31); \
RDINSTRET x5; \
sw x5, 8(x31); \
RDINSTRETH x5; \
sw x5, 8(x31); \
csrw 0x7C2, x0;\
csrrsi x30, 0x7C2, 31;\
sw x30, 4(x31);\
csrrsi x30, 0x7C2, 30;\
sw x30, 4(x31);\
csrrsi x30, 0x7C2, 29;\
sw x30, 4(x31);\
csrrsi x30, 0x7C2, 28;\
sw x30, 4(x31);\
csrrsi x30, 0x7C2, 27;\
sw x30, 4(x31);\
csrrsi x30, 0x7C2, 26;\
sw x30, 4(x31);\
csrrsi x30, 0x7C2, 25;\
sw x30, 4(x31);\
csrrsi x30, 0x7C2, 24;\
sw x30, 4(x31);\
csrrsi x30, 0x7C2, 23;\
sw x30, 4(x31);\
csrrsi x30, 0x7C2, 22;\
sw x30, 4(x31);\
csrrsi x30, 0x7C2, 21;\
sw x30, 4(x31);\
csrrci x30, 0x7C2, 31;\
sw x30, 4(x31);\
csrrci x30, 0x7C2, 30;\
sw x30, 4(x31);\
csrrci x30, 0x7C2, 29;\
sw x30, 4(x31);\
csrrci x30, 0x7C2, 28;\
sw x30, 4(x31);\
csrrci x30, 0x7C2, 27;\
sw x30, 4(x31);\
csrrci x30, 0x7C2, 26;\
sw x30, 4(x31);\
csrrci x30, 0x7C2, 25;\
sw x30, 4(x31);\
csrrci x30, 0x7C2, 24;\
sw x30, 4(x31);\
csrrci x30, 0x7C2, 23;\
sw x30, 4(x31);\
csrrci x30, 0x7C2, 22;\
sw x30, 4(x31);\
csrrci x30, 0x7C2, 21;\
sw x30, 4(x31);\
