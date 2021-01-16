#define TEST_LOAD_STORE20() \
addi x1, x0, -1;\
li x31, 0x00201090;\
li x30, 0x00201090;\
li x29, 0x00201090;\
addi x5, x0, 31;\
\
lop10:;\
	sw x1,0(x31);\
	sw x1,0(x29);\
\
	lw x2, 0(x31);\
	sw x2, 0(x30);\
	sh x2, 0(x30);\
	sb x2, 0(x30);\
\
	lh x2, 0(x31);\
	sw x2, 0(x30);\
	sh x2, 0(x30);\
	sb x2, 0(x30);\
\
	lb x2, 0(x31);\
	sw x2, 0(x30);\
	sh x2, 0(x30);\
	sb x2, 0(x30);\
\
	lhu x2,0(x31);\
	sw x2, 0(x30);\
	sh x2, 0(x30);\
	sb x2, 0(x30);\
\
	lbu x2,0(x31);\
	sw x2, 0(x30);\
	sh x2, 0(x30);\
	sb x2, 0(x30);\
\
	p.lw x2,x0(x29!);\
	p.sw x2,x5(x30!);\
	p.sh x2,x5(x30!);\
	p.sb x2,x5(x30!);\
\
	p.lh x2,x0(x29!);\
	p.sw x2,x5(x30!);\
	p.sh x2,x5(x30!);\
	p.sb x2,x5(x30!);\
\
	p.lb x2,x0(x29!);\
	p.sw x2,x5(x30!);\
	p.sh x2,x5(x30!);\
	p.sb x2,x5(x30!);\
\
	p.lhu x2,x0(x29!);\
	p.sw x2,x5(x30!);\
	p.sh x2,x5(x30!);\
	p.sb x2,x5(x30!);\
\
	p.lbu x2,x0(x29!);\
	p.sw x2,x5(x30!);\
	p.sh x2,x5(x30!);\
	p.sb x2,x5(x30!);\
\
	addi x5,x5,31;\
	addi x31,x31,1;\
	addi x30,x30,1;\
	srli x1,x1,1;\
	bne x1,x0,lop10;\
