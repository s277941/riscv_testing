#define TEST_ALU_IMPROVED() \
LI_DRAM_ADDR(x31);\
/*
TEST_ALU_imm(0xA5A5A5A5, 0x3C3);\
TEST_ALU_imm(0xA5A5A5A5, 0x5A5);\
TEST_ALU_imm(0x3C35A5A5, 0x3C3);\
TEST_ALU_imm(0x3C35A5A5, 0x5A5);\
TEST_ALU_imm(0xFFFFFFFF, 0x3C3);\
\
TEST_SHF( p.addN, 0xA5A5A5A5, 0x3C3C3C3C);\
TEST_SHF( p.addN, 0xA5A5A5A5, 0xA5A5A5A5);\
TEST_SHF( p.addN, 0x3C3C3C3C, 0x3C3C3C3C);\
TEST_SHF( p.addN, 0x3C3C3C3C, 0xA5A5A5A5);\
TEST_SHF( p.addN, 0xA5A5A5A5, 0xFFFFFFFF);\
TEST_SHF( p.addN, 0xFFFFFFFF, 0x3C3C3C3C);\
\
TEST_SHF( p.subuN, 0xA5A5A5A5, 0x3C3C3C3C);\
TEST_SHF( p.subuN, 0xA5A5A5A5, 0xA5A5A5A5);\
TEST_SHF( p.subuN, 0x3C3C3C3C, 0x3C3C3C3C);\
TEST_SHF( p.subuN, 0x3C3C3C3C, 0xA5A5A5A5);\
TEST_SHF( p.subuN, 0xA5A5A5A5, 0xFFFFFFFF);\
TEST_SHF( p.subuN, 0xFFFFFFFF, 0x3C3C3C3C);\
\
TEST_SHF( p.subRN, 0xA5A5A5A5, 0x3C3C3C3C);\
TEST_SHF( p.subRN, 0xA5A5A5A5, 0xA5A5A5A5);\
TEST_SHF( p.subRN, 0x3C3C3C3C, 0x3C3C3C3C);\
TEST_SHF( p.subRN, 0x3C3C3C3C, 0xA5A5A5A5);\
TEST_SHF( p.subRN, 0xA5A5A5A5, 0xFFFFFFFF);\
TEST_SHF( p.subRN, 0xFFFFFFFF, 0x3C3C3C3C);\
\
TEST_SHF( p.adduRN, 0xA5A5A5A5, 0x3C3C3C3C);\
TEST_SHF( p.adduRN, 0xA5A5A5A5, 0xA5A5A5A5);\
TEST_SHF( p.adduRN, 0x3C3C3C3C, 0x3C3C3C3C);\
TEST_SHF( p.adduRN, 0x3C3C3C3C, 0xA5A5A5A5);\
TEST_SHF( p.adduRN, 0xA5A5A5A5, 0xFFFFFFFF);\
TEST_SHF( p.adduRN, 0xFFFFFFFF, 0x3C3C3C3C);\
\
TEST_SHF2( pv.srl.sci.h , 0xA5A5A5A5);\
TEST_SHF2( pv.srl.sci.h , 0x3C3C3C3C);\
TEST_SHF2( pv.sra.sci.h , 0xA5A5A5A5);\
TEST_SHF2( pv.sra.sci.h , 0x3C3C3C3C);\
TEST_SHF2( pv.sll.sci.h , 0xA5A5A5A5);\
TEST_SHF2( pv.sll.sci.h , 0x3C3C3C3C);\
TEST_SHF2( srli , 0xA5A5A5A5);\
TEST_SHF2( srli , 0x3C3C3C3C);\
TEST_SHF2( srai , 0xA5A5A5A5);\
TEST_SHF2( srai , 0x3C3C3C3C);\
TEST_SHF2( slli , 0xA5A5A5A5);\
TEST_SHF2( slli , 0x3C3C3C3C);\
\
li x1, 0xA5A5A5A5;\
li x2, 0x3C3C3C3C;\
TEST_ALU();\
li x1, 0x3C3C3C3C;\
li x2, 0xA5A5A5A5;\
TEST_ALU();\
li x1, 0x3C3C3C3C;\
li x2, 0xFFFFFFFF;\
TEST_ALU();\
li x1, 0xA5A5A5A5;\
li x2, 0xFFFFFFFF;\
TEST_ALU();\
li x1, 0xA5A5A5A5;\
li x2, 0xE38E38E3;\
TEST_ALU();\
li x1, 0x3C3C3C3C;\
li x2, 0xE38E38E3;\
TEST_ALU();\
\
\
TEST_CLIP(0xA5A5A5A5, 0x3C3C3C3C);\
TEST_CLIP(0x3C3C3C3C, 0xA5A5A5A5);\
\
TEST_CLB1();\
TEST_CLB2();\
\
TEST_ROR1();\
TEST_ROR2();\
\
li x3, 0xA5A5A5A5;\
TEST_COMPVI();\
li x3, 0x3C3C3C3C;\
TEST_COMPVI();\
\
TEST_MANIP1();i*/\
TEST_MANIP2();\
\
/*li x3, 0xA5A5A5A5;\
li x1, 0x3C3C3C3C;\
pv.insert.h x3, x1, 1;\
sw x3, 8(x31);\
pv.insert.b x3, x1, 1;\
sw x3, 8(x31);\
pv.insert.h x1, x3, 1;\
sw x1, 8(x31);\
pv.insert.b x1, x3, 1;\
sw x1, 8(x31);*/\


#define TEST_ROR1();\
li x6, 31;\
li x2, 0;\
li x1, 0xA5A5A5A5;\
li x4, 0x3C3C3C3C;\
rorr1:	p.ror x3, x1, x2;\
	p.ror x3, x4, x2;\
	sw  x3, 8(x31);\
	add x2, x2, 1;\
	beq x2, x6, end_ror1;\
	j rorr1;\
end_ror1:;\

#define TEST_ROR2();\
li x6, 31;\
li x2, 0;\
li x1, 0x3C3C3C3C;\
li x4, 0xA5A5A5A5;\
rorr2:	p.ror x3, x1, x2;\
	p.ror x3, x4, x2;\
	sw  x3, 8(x31);\
	add x2, x2, 1;\
	beq x2, x6, end_ror2;\
	j rorr2;\
end_ror2:;\

#define TEST_CLB1();\
li x6, 1;\
li x1, 0xA5A5A5A5;\
clbb1:	p.clb x3, x1;\
	p.cnt x4, x1;\
	sw  x3, 8(x31);\
	sw  x4, 8(x31);\
	sub x1, x1, x6;\
	sll x6, x6, 1;\
	beq x6, x0, end_clb1;\
	j clbb1;\
end_clb1:;\

#define TEST_CLB2();\
li x6, 1;\
li x1, 0x3C3C3C3C;\
clbb2:	p.clb x3, x1;\
	p.cnt x4, x1;\
	sw  x3, 8(x31);\
	sw  x4, 8(x31);\
	sub x1, x1, x6;\
	sll x6, x6, 1;\
	beq x6, x0, end_clb2;\
	j clbb2;\
end_clb2:;\

#define TEST_MANIP1() \
xor x2, x2, x2;\
li x6, 1;\
li x1, 0xA5A5A5A5;\
li x5, 0x000003E0;\
li x7, 31;\
manip11:p.extractr x3, x1, x2;\
	sw  x3, 8(x31);\
	p.bclrr x3, x1, x2;\
	sw  x3, 8(x31);\
	p.insertr x3, x1, x2;\
	sw  x3, 8(x31);\
	p.bsetr x3, x1, x2;\
	sw  x3, 8(x31);\
	beq x2, x7, manip21;\
	add x2, x2, 1;\
	j manip11;\
manip21: add x2, x2, 0x00000020;\
	add x7, x2, 0;\
	sub x7, x7, x6;\
	andi x2, x2, 0xFFFFFFE0;\
	beq x7, x5, end_manip1;\
	j manip11;\
end_manip1: ;\
	beq x1, x0, end_manip21;\
	li x1, 0;\
	li x2, 0xFFFFFFFF;\
	li x7, 31;\
	j manip11;\
end_manip21:;\

#define TEST_MANIP2() \
xor x2, x2, x2;\
li x6, 1;\
li x1, 0x3C3C3C3C;\
li x5, 0x000003E0;\
li x7, 31;\
manip12:p.extractr x3, x1, x2;\
	sw  x3, 8(x31);\
	p.bclrr x3, x1, x2;\
	sw  x3, 8(x31);\
	p.insertr x3, x1, x2;\
	sw  x3, 8(x31);\
	p.bsetr x3, x1, x2;\
	sw  x3, 8(x31);\
	beq x2, x7, manip22;\
	add x2, x2, 1;\
	j manip12;\
manip22: add x2, x2, 0x00000020;\
	add x7, x2, 0;\
	sub x7, x7, x6;\
	andi x2, x2, 0xFFFFFFE0;\
	beq x7, x5, end_manip2;\
	j manip12;\
end_manip2: ;\
	beq x1, x0, end_manip22;\
	li x1, 0;\
	li x2, 0xFFFFFFFF;\
	li x7, 31;\
	j manip12;\
end_manip22:;\
