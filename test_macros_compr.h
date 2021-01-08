#define TEST_COMPRESSED()\
  LI_DRAM_ADDR(x11);\
  li x14, 3;\
  li x9, 0xFFFFFFFF;\
  li x13, 0xFFFFFFFF;\
  li x15, 0xCCCCCCCCC;\
  li x12, 0;\
  sw x0, 4(x11);\
  .option rvc;\
  c.li x10, 1;\
  c.add x10, x9;\
  c.sw x10, 4(x11);\
  c.addi x10, 1;\
  c.sw x10, 4(x11);\
  c.addi16sp sp, 0x20;\
  c.nop;\
  c.nop;\
 .option norvc;\
  sw sp, 4(x11);\
 .option rvc;\
  c.addi4spn x10, sp, 0x20;\
  c.sw x10, 4(x11);\
  c.mv x12, x10;\
  c.sw x12, 4(x11);\
  c.sub x10, x9;\
  c.sw x10, 4(x11);\
  c.andi x9, 15;\
  c.sw x9, 4(x11);\
  c.li x9, 1;\
  c.xor x9, x13;\
  c.sw x9, 4(x11);\
  c.or x9, x13;\
  c.sw x9, 4(x11);\
  c.and x9, x13;\
  c.sw x9, 4(x11);\
  c.srai x15, 5;\
  c.sw x15, 4(x11);\
  c.slli x15, 7;\
  c.sw x15, 4(x11);\
  c.beqz x15, neveer2;\
  c.addi x8, 1;\
  neveer2:;\
  c.sw x8, 4(x11);\
  c.lw x12, 4(x11);\
  c.sw x12, 4(x11);\
  c.bnez x12, neveer2;\
  c.lwsp x2, 0(sp);\
  c.lwsp x12, 0(sp);\
  LI_DRAM_ADDR(sp);\
  c.swsp x12, 4(sp);\
  c.swsp x2, 4(sp);\
  c.ebreak;\
 .option norvc;\
  TEST_J(c.j, 1);\
  TEST_J(c.jal, 0);\
  TEST_JR(c.jr, 1);\
  TEST_JR(c.jalr, 0);\
addi x1, x1, 1;\
helper_error:;\
sw x1, 0x(x11);\

#define TEST_J(rvc_instr, should_be_zero) \
  .data; \
rvc_string ##rvc_instr: \
  .string #rvc_instr; \
  .text; \
  lui a0,      %hi(rvc_string##rvc_instr); \
  addi a0, a0, %lo(rvc_string##rvc_instr); \
  \
  li ra, 0; \
  li a1, should_be_zero; \
  .option rvc; \
  rvc_instr rvc_instr##_jt; \
  .option norvc; \
  jal helper_error; \
rvc_instr##_jt:; \
  mv a2, ra; \

#define TEST_JR(rvc_instr, should_be_zero) \
  .data; \
rvc_string ##rvc_instr: \
  .string #rvc_instr; \
  .text; \
  lui a0,      %hi(rvc_string##rvc_instr); \
  addi a0, a0, %lo(rvc_string##rvc_instr); \
  \
  li ra, 0; \
  li a1, should_be_zero; \
  lui  a2,     %hi(rvc_instr##_jt); \
  addi a2, a2, %lo(rvc_instr##_jt); \
  .option rvc; \
  rvc_instr a2; \
  .option norvc; \
  jal helper_error; \
rvc_instr##_jt:; \
  mv a2, ra; \
