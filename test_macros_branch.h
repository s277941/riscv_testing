#define TEST_BRANCH()\
li x3, 0;\
li x1, 1;\
li x2, 0xFFFFFFFF;\
beqz x1, neveer;\
bnez x0, neveer;\
blez x1, neveer;\
bgez x2, neveer;\
bltz x0, neveer;\
bgtz x0, neveer;\
bgt  x2, x1, neveer;\
ble  x1, x2, neveer;\
bgtu x1, x2, neveer;\
bleu x2, x1, neveer;\
bne x2, x2, neveer;\
addi x3, x3, 1;\
neveer:;\
beqz x1, neveer;\
bnez x0, neveer;\
blez x1, neveer;\
bgez x2, neveer;\
bltz x0, neveer;\
bgtz x0, neveer;\
bgt  x2, x1, neveer;\
ble  x1, x2, neveer;\
bgtu x1, x2, neveer;\
bleu x2, x1, neveer;\
bne x2, x2, neveer;\
addi x3, x3, 1;\
beqz x0, take1;\
addi x3, x3, 1;\
take1: bnez x0, take2;\
addi x3, x3, 1;\
take2: blez x2, take3;\
addi x3, x3, 1;\
take3: blez x0, take4;\
addi x3, x3, 1;\
take4: bgez x1, take5;\
addi x3, x3, 1;\
take5: bgez x0, take6;\
addi x3, x3, 1;\
take6: bgtz x1, take7;\
addi x3, x3, 1;\
take7: bltz x2, take8;\
addi x3, x3, 1;\
take8: bgt  x1, x2, take9;\
addi x3, x3, 1;\
take9: ble  x2, x1, take10;\
addi x3, x3, 1;\
take10: ble  x2, x2, take11;\
addi x3, x3, 1;\
take11: bgtu x2, x1, take12;\
addi x3, x3, 1;\
take12: bleu x1, x2, take13;\
addi x3, x3, 1;\
take13: bleu x2, x2, take14;\
addi x3, x3, 1;\
take14: bne x2, x1, take15;\
addi x3, x3, 1;\
take15:;\
LI_DRAM_ADDR(x31);\
sw x3, 4(x31);\
