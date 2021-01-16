#define ALTERNATIVE_IVT() \
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
addi x21, x0, 2;\
ecall;\
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
li x26, 3;\
addi x21, x21, -1;\
beq x21, x0, not_nested;\
ebreak;\
not_nested:;\
csrr x23, 0x342;\
slli x23, x23, 1;\
srli x23, x23, 1;\
beq x23, x26, end_ebreak;\
csrr x10, mepc;\
addi x10, x10, 4;\
csrw mepc, x10;\
mret;\
end_call:;\
ebreak;\
end_ebreak: ;\
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
la x23, inv_instr;\
inv_instr: .word 0xFFFFFFFF;\
.word 0xFFFF0000;\
.word 0xFFFFFF36;\
.word 0xF0F0F077;\
.word 0x0F0F0F3F;\
.word 0xFF00FF6B;\
.word 0x00FF0062;\
j finish_int;\
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
csrr x10, mepc;\
addi x10, x10, 4;\
csrw mepc, x10;\
mret;\
finish_int: la x10, __vector_start;\
csrw 0x305, x10;\
