#define TEST_COMPRESSED()\
  LI_DRAM_ADDR(x11);\
  li x14, 3;\
  li x9, 0xFFFFFFFF;\
  li x13, 0xFFFFFFFF;\
  li x15, 0xCCCCCCCC;\
  li x12, 0;\
  sw x0, 8(x11);\
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
  .half 0x0000;\
  c.andi x9, 15;\
  c.sw x9, 4(x11);\
  c.li x9, 1;\
  c.sw x9, 4(x11);\
  c.lui x9, 15;\
  c.sw x9, 4(x11);\
  c.ebreak;\
  c.nop;\
  .option rvc;\
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
  c.lw x12, 8(x11);\
  c.sw x12, 4(x11);\
  c.bnez x12, neveer2;\
  LI_DRAM_ADDR(sp);\
  c.lwsp x2, 0(sp);\
  c.lwsp x12, 0(sp);\
  c.swsp x12, 4(sp);\
  c.swsp x2, 4(sp);\
c.li x5, 0;\
jmp1: c.j jmp2;\
  c.addi x5, 10;\
jmp2: c.jal jmp3;\
  c.addi x5, 10;\
jmp3: la x6, jmp4;\
  c.jr x6;\
  c.addi x5, 10;\
jmp4: la x6, end;\
  c.jalr x6;\
  c.addi x5, 10;\
end: .option norvc;\
sw x5, 8(x11);\
sw x1, 4(x11);\
