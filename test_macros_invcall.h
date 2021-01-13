#define CALL_INVALID() \
LI_DRAM_ADDR(x8);\
li x31, 0;\
li x25, 0x00202000;\
li x28, 0xFFFFFFFF;\
li x29, 0xFFFFFFFF;\
csrw 0x305, x25;\
la x20, ecall_insn_handler;\
slli x20,x20, 20;\
li x10, 0x1F00;\
slli x10,x10,7;\
add x20,x20,x10;\
add x20,x20, 0x67;\
sw x20, 0(x25);\
li x1, 2;\
ecall;\
return:;\
li x28, 0;\
li x29, 0;\
nop;\
j end_call;\
li x27, 0xFFFFFFFF;\
sw x27, 4(x8);\
loop1:;\
j loop1;\
ecall_insn_handler:;\
sw x28, 4(x8);\
sw x29, 4(x8);\
li x30, 0xFFFFFFFF;\
add x1,x1,1;\
li x2, 4;\
beq x1,x2, return;\
mret;\
end_call:;\
li x28, 0xFFFFFFFF;\
li x29, 0xFFFFFFFF;\
csrrw x0, 0x305, x25;\
la x20, fault_instr_insn_handler;\
slli x20,x20, 20;\
li x10, 0x1F00;\
slli x10,x10,7;\
add x20,x20,x10;\
add x20,x20, 0x67;\
sw x20, 0(x25);\
.word 0xFFFFFFFF;\
sw x28, 4(x8);\
sw x29, 4(x8);\
loop2:;\
j loop2;\
fault_instr_insn_handler:;\
li x28, 0x0;\
li x29, 0x0;\
sw x28, 4(x8);\
sw x29, 4(x8);\
li x30, 0xFFFFFFFF;\
j finish_int;\
finish_int: la x10, __vector_start;\
csrw 0x305, x10;\
