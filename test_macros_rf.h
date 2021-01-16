#define TEST_REG_FILE_DEEP()\
MARCH_TEST();\
TEST_REG_FILE_ALU_FULL();\
LOAD_TEST();\

#define MARCH_TEST() \
LI_ALL_REGISTER(0x00000000); \
LI_DRAM_ADDR(x31); \
MARCH_ELEMENT_MAP_COMPLETE(0xFFFFFFFF); \
LI_DRAM_ADDR(x1); \
MARCH_ELEMENT_MAP_REVERSE(0x00000000); \

#define MARCH_ELEMENT_MAP_COMPLETE(value) \
MARCH_ELEMENT_MAP(x0, x31, value); \
MARCH_ELEMENT_MAP(x1, x31, value); \
MARCH_ELEMENT_MAP(x2, x31, value); \
MARCH_ELEMENT_MAP(x3, x31, value); \
MARCH_ELEMENT_MAP(x4, x31, value); \
MARCH_ELEMENT_MAP(x5, x31, value); \
MARCH_ELEMENT_MAP(x6, x31, value); \
MARCH_ELEMENT_MAP(x7, x31, value); \
MARCH_ELEMENT_MAP(x8, x31, value); \
MARCH_ELEMENT_MAP(x9, x31, value); \
MARCH_ELEMENT_MAP(x10, x31, value); \
MARCH_ELEMENT_MAP(x11, x31, value); \
MARCH_ELEMENT_MAP(x12, x31, value); \
MARCH_ELEMENT_MAP(x13, x31, value); \
MARCH_ELEMENT_MAP(x14, x31, value); \
MARCH_ELEMENT_MAP(x15, x31, value); \
MARCH_ELEMENT_MAP(x16, x31, value); \
MARCH_ELEMENT_MAP(x17, x31, value); \
MARCH_ELEMENT_MAP(x18, x31, value); \
MARCH_ELEMENT_MAP(x19, x31, value); \
MARCH_ELEMENT_MAP(x20, x31, value); \
MARCH_ELEMENT_MAP(x21, x31, value); \
MARCH_ELEMENT_MAP(x22, x31, value); \
MARCH_ELEMENT_MAP(x23, x31, value); \
MARCH_ELEMENT_MAP(x24, x31, value); \
MARCH_ELEMENT_MAP(x25, x31, value); \
MARCH_ELEMENT_MAP(x26, x31, value); \
MARCH_ELEMENT_MAP(x27, x31, value); \
MARCH_ELEMENT_MAP(x28, x31, value); \
MARCH_ELEMENT_MAP(x29, x31, value); \
MARCH_ELEMENT_MAP(x30, x31, value); \
LI_DRAM_ADDR(x30); \
li x31, 0x00000000; \
MARCH_ELEMENT_MAP(x31, x30, value); \
li x30, value; \

#define MARCH_ELEMENT_MAP_REVERSE(value) \
MARCH_ELEMENT_MAP(x31, x1, value); \
MARCH_ELEMENT_MAP(x30, x1, value); \
MARCH_ELEMENT_MAP(x29, x1, value); \
MARCH_ELEMENT_MAP(x28, x1, value); \
MARCH_ELEMENT_MAP(x27, x1, value); \
MARCH_ELEMENT_MAP(x26, x1, value); \
MARCH_ELEMENT_MAP(x25, x1, value); \
MARCH_ELEMENT_MAP(x24, x1, value); \
MARCH_ELEMENT_MAP(x23, x1, value); \
MARCH_ELEMENT_MAP(x22, x1, value); \
MARCH_ELEMENT_MAP(x21, x1, value); \
MARCH_ELEMENT_MAP(x20, x1, value); \
MARCH_ELEMENT_MAP(x19, x1, value); \
MARCH_ELEMENT_MAP(x18, x1, value); \
MARCH_ELEMENT_MAP(x17, x1, value); \
MARCH_ELEMENT_MAP(x16, x1, value); \
MARCH_ELEMENT_MAP(x15, x1, value); \
MARCH_ELEMENT_MAP(x14, x1, value); \
MARCH_ELEMENT_MAP(x13, x1, value); \
MARCH_ELEMENT_MAP(x12, x1, value); \
MARCH_ELEMENT_MAP(x11, x1, value); \
MARCH_ELEMENT_MAP(x10, x1, value); \
MARCH_ELEMENT_MAP(x9, x1, value); \
MARCH_ELEMENT_MAP(x8, x1, value); \
MARCH_ELEMENT_MAP(x7, x1, value); \
MARCH_ELEMENT_MAP(x6, x1, value); \
MARCH_ELEMENT_MAP(x5, x1, value); \
MARCH_ELEMENT_MAP(x4, x1, value); \
MARCH_ELEMENT_MAP(x3, x1, value); \
MARCH_ELEMENT_MAP(x2, x1, value); \
LI_DRAM_ADDR(x2);\
li x1, 0xFFFFFFFF; \
MARCH_ELEMENT_MAP(x1, x2, value); \
MARCH_ELEMENT_MAP(x0, x2, value); \

#define MARCH_ELEMENT_MAP(regS, regBase, value) \
sw regS, 4(regBase); \
li regS, value; \

#define MARCH_ELEMENT_MAP_ACC(regS, regAcc, value) \
add regAcc, regAcc, regS; \
li regS, value; \

#define LI_ALL_REGISTER(value) \
li x1, value; \
li x2, value; \
li x3, value; \
li x4, value; \
li x5, value; \
li x6, value; \
li x7, value; \
li x8, value; \
li x9, value; \
li x10, value; \
li x11, value; \
li x12, value; \
li x13, value; \
li x14, value; \
li x15, value; \
li x16, value; \
li x17, value; \
li x18, value; \
li x19, value; \
li x20, value; \
li x21, value; \
li x22, value; \
li x23, value; \
li x24, value; \
li x25, value; \
li x26, value; \
li x27, value; \
li x28, value; \
li x29, value; \
li x30, value; \
li x31, value; \

#define TEST_REG_FILE_ALU_FULL() \
LI_DRAM_ADDR(x31); \
TEST_REG_FILE_ALU_FULL_REG(p.mac, 0xFFFFFFFF); \
LI_DRAM_ADDR(x31); \
TEST_REG_FILE_ALU_FULL_REG(p.mac, 0x00000000); \
LI_DRAM_ADDR(x31); \
TEST_REG_FILE_ALU_FULL_REG(p.mac, 0x0000FFFF); \

#define TEST_REG_FILE_ALU_FULL_REG(inst, value1) \
TEST_REG_FILE_ALU_OPERATION(inst, value1, x1, x31); \
TEST_REG_FILE_ALU_OPERATION(inst, value1, x2, x31); \
TEST_REG_FILE_ALU_OPERATION(inst, value1, x3, x31); \
TEST_REG_FILE_ALU_OPERATION(inst, value1, x4, x31); \
TEST_REG_FILE_ALU_OPERATION(inst, value1, x5, x31); \
TEST_REG_FILE_ALU_OPERATION(inst, value1, x6, x31); \
TEST_REG_FILE_ALU_OPERATION(inst, value1, x7, x31); \
TEST_REG_FILE_ALU_OPERATION(inst, value1, x8, x31); \
TEST_REG_FILE_ALU_OPERATION(inst, value1, x9, x31); \
TEST_REG_FILE_ALU_OPERATION(inst, value1, x10, x31); \
TEST_REG_FILE_ALU_OPERATION(inst, value1, x11, x31); \
TEST_REG_FILE_ALU_OPERATION(inst, value1, x12, x31); \
TEST_REG_FILE_ALU_OPERATION(inst, value1, x13, x31); \
TEST_REG_FILE_ALU_OPERATION(inst, value1, x14, x31); \
TEST_REG_FILE_ALU_OPERATION(inst, value1, x15, x31); \
TEST_REG_FILE_ALU_OPERATION(inst, value1, x16, x31); \
TEST_REG_FILE_ALU_OPERATION(inst, value1, x17, x31); \
TEST_REG_FILE_ALU_OPERATION(inst, value1, x18, x31); \
TEST_REG_FILE_ALU_OPERATION(inst, value1, x19, x31); \
TEST_REG_FILE_ALU_OPERATION(inst, value1, x20, x31); \
TEST_REG_FILE_ALU_OPERATION(inst, value1, x21, x31); \
TEST_REG_FILE_ALU_OPERATION(inst, value1, x22, x31); \
TEST_REG_FILE_ALU_OPERATION(inst, value1, x23, x31); \
TEST_REG_FILE_ALU_OPERATION(inst, value1, x24, x31); \
TEST_REG_FILE_ALU_OPERATION(inst, value1, x25, x31); \
TEST_REG_FILE_ALU_OPERATION(inst, value1, x26, x31); \
TEST_REG_FILE_ALU_OPERATION(inst, value1, x27, x31); \
TEST_REG_FILE_ALU_OPERATION(inst, value1, x28, x31); \
TEST_REG_FILE_ALU_OPERATION(inst, value1, x29, x31); \
TEST_REG_FILE_ALU_OPERATION(inst, value1, x30, x31); \
LI_DRAM_ADDR(x30); \
TEST_REG_FILE_ALU_OPERATION(inst, value1, x31, x30); \

#define TEST_REG_FILE_ALU_OPERATION(inst, value1, reg1, regBase)\
li reg1, value1; \
nop; \
nop; \
nop; \
nop; \
inst reg1,reg1,reg1; \
nop; \
nop; \
nop; \
nop; \
sw reg1, 4(regBase); \

#define TEST_REG_FILE_LOAD_FULL(value1, regBase) \
li x0, 0; \
nop; \
nop; \
nop; \
li x1, value1; \
nop; \
nop; \
nop; \
nop; \
sw x1, 4(regBase); \
nop; \
nop; \
nop; \
nop; \
TEST_REG_FILE_LOAD(x1, regBase); \
TEST_REG_FILE_LOAD(x2, regBase); \
TEST_REG_FILE_LOAD(x3, regBase); \
TEST_REG_FILE_LOAD(x4, regBase); \
TEST_REG_FILE_LOAD(x5, regBase); \
TEST_REG_FILE_LOAD(x6, regBase); \
TEST_REG_FILE_LOAD(x7, regBase); \
TEST_REG_FILE_LOAD(x8, regBase); \
TEST_REG_FILE_LOAD(x9, regBase); \
TEST_REG_FILE_LOAD(x10, regBase); \
TEST_REG_FILE_LOAD(x11, regBase); \
TEST_REG_FILE_LOAD(x12, regBase); \
TEST_REG_FILE_LOAD(x13, regBase); \
TEST_REG_FILE_LOAD(x14, regBase); \
TEST_REG_FILE_LOAD(x15, regBase); \
TEST_REG_FILE_LOAD(x16, regBase); \
TEST_REG_FILE_LOAD(x17, regBase); \
TEST_REG_FILE_LOAD(x18, regBase); \
TEST_REG_FILE_LOAD(x19, regBase); \
TEST_REG_FILE_LOAD(x20, regBase); \
TEST_REG_FILE_LOAD(x21, regBase); \
TEST_REG_FILE_LOAD(x22, regBase); \
TEST_REG_FILE_LOAD(x23, regBase); \
TEST_REG_FILE_LOAD(x24, regBase); \
TEST_REG_FILE_LOAD(x25, regBase); \
TEST_REG_FILE_LOAD(x26, regBase); \
TEST_REG_FILE_LOAD(x27, regBase); \
TEST_REG_FILE_LOAD(x28, regBase); \
TEST_REG_FILE_LOAD(x29, regBase); \
TEST_REG_FILE_LOAD(x30, regBase); \
LI_DRAM_ADDR(x30);\
TEST_REG_FILE_LOAD(x31, x30); \

#define TEST_REG_FILE_LOAD_FULL_REVERSE(value1, regBase) \
li x0, 0; \
nop; \
nop; \
nop; \
li x1, value1; \
nop; \
nop; \
nop; \
nop; \
sw x1, 4(regBase); \
nop; \
nop; \
nop; \
nop; \
TEST_REG_FILE_LOAD(x31, regBase); \
TEST_REG_FILE_LOAD(x30, regBase); \
TEST_REG_FILE_LOAD(x29, regBase); \
TEST_REG_FILE_LOAD(x28, regBase); \
TEST_REG_FILE_LOAD(x27, regBase); \
TEST_REG_FILE_LOAD(x26, regBase); \
TEST_REG_FILE_LOAD(x25, regBase); \
TEST_REG_FILE_LOAD(x24, regBase); \
TEST_REG_FILE_LOAD(x23, regBase); \
TEST_REG_FILE_LOAD(x22, regBase); \
TEST_REG_FILE_LOAD(x21, regBase); \
TEST_REG_FILE_LOAD(x20, regBase); \
TEST_REG_FILE_LOAD(x19, regBase); \
TEST_REG_FILE_LOAD(x18, regBase); \
TEST_REG_FILE_LOAD(x17, regBase); \
TEST_REG_FILE_LOAD(x16, regBase); \
TEST_REG_FILE_LOAD(x15, regBase); \
TEST_REG_FILE_LOAD(x14, regBase); \
TEST_REG_FILE_LOAD(x13, regBase); \
TEST_REG_FILE_LOAD(x12, regBase); \
TEST_REG_FILE_LOAD(x11, regBase); \
TEST_REG_FILE_LOAD(x10, regBase); \
TEST_REG_FILE_LOAD(x9, regBase); \
TEST_REG_FILE_LOAD(x8, regBase); \
TEST_REG_FILE_LOAD(x7, regBase); \
TEST_REG_FILE_LOAD(x6, regBase); \
TEST_REG_FILE_LOAD(x5, regBase); \
TEST_REG_FILE_LOAD(x4, regBase); \
TEST_REG_FILE_LOAD(x3, regBase); \
TEST_REG_FILE_LOAD(x2, regBase); \
LI_DRAM_ADDR(x2);\
TEST_REG_FILE_LOAD(x1, x2); \

#define TEST_REG_FILE_LOAD(reg1, regBase)\
lw reg1, 4(regBase); \
nop; \
nop; \
sw reg1, 8(regBase); \
nop; \
nop; \
nop; \
lh reg1,4(regBase); \
nop; \
sh reg1, 8(regBase); \
lb reg1, 4(regBase);\
nop; \
nop; \
nop; \
nop; \
sb reg1, 8(regBase); \
nop; \
lhu reg1,4(regBase); \
nop; \
nop; \
sh reg1, 8(regBase); \
nop; \
lbu reg1, 4(regBase);\
nop; \
sb reg1, 8(regBase); \
li reg1, 4; \
nop; \
nop; \
p.lw reg1, reg1(regBase); \
nop; \
nop; \
li reg1, 4;\
p.sw reg1, reg1(regBase); \
li reg1, 4; \
nop; \
nop; \
p.lw reg1, reg1(regBase!); \
nop; \
nop; \
li reg1, 4;\
p.sw reg1, reg1(regBase!); \


#define LOAD_TEST() \
LI_DRAM_ADDR(x31);\
TEST_REG_FILE_LOAD_FULL(0xFFFFFFFF, x31); \
LI_DRAM_ADDR(x1);\
TEST_REG_FILE_LOAD_FULL_REVERSE(0x00000000, x1); \
