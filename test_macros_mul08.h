#define TEST_MUL08() \
LI_DRAM_ADDR(x31); \
li  x1, 0x00000000; \
li  x2, 0x00000000; \
li x30, 0x11111111; \
li x28, 0xFFFFFFFF; \
loopp:	p.muls x3, x1, x2; \
	p.mulhhs x6, x1, x2; \
	p.mac x4, x1, x2; \
	p.msu x5, x1, x2; \
	sw  x3, 4(x31); \
	sw  x4, 4(x31); \
	sw  x5, 4(x31); \
	sw  x6, 4(x31); \
	p.mulu x7, x1, x2; \
	p.mulhhu x8, x1, x2; \
	p.macsRN x9, x1, x2, 0; \
	p.machhsRN x10, x1, x2, 0; \
	pv.dotusp.sc.h x11, x1, x2; \
	pv.sdotusp.sc.b x12, x1, x2; \
	sw  x7, 4(x31); \
	sw  x8, 5(x31); \
	sw  x9, 6(x31); \
	sw  x10, 7(x31); \
	sw  x11, 8(x31); \
	sw  x12, 9(x31); \
	beq x2, x28, end2; \
	p.adduN x2, x2, x30,0; \
	j loopp; \
end2:	xor x2, x2, x2; \
	beq x1, x28, end3; \
	p.adduN x1, x1, x30, 0; \
	j loopp; \
end3:; \
	p.mac x3, x1, x2; \
	sw  x3, 4(x31); \
	p.msu x3, x1, x2; \
	sw  x3, 5(x31); \
	p.muls x3, x1, x2; \
	sw  x3, 13(x31); \
	p.mulhhs x3, x1, x2; \
	sw  x3, 14(x31); \
	p.mulhhsN x3, x1, x2, 3; \
	sw  x3, 16(x31); \
	p.mulsRN x3, x1, x2, 4; \
	sw  x3, 17(x31); \
	p.mulhhsRN x3, x1, x2, 5; \
	sw  x3, 18(x31); \
	p.mulu x3, x1, x2; \
	sw  x3, 19(x31); \
	p.mulhhu x3, x1, x2; \
	sw  x3, 10(x31); \
	p.mulhhuN x3, x1, x2, 7; \
	sw  x3, 12(x31); \
	p.muluRN x3, x1, x2, 8; \
	sw  x3, 24(x31); \
	p.mulhhuRN x3, x1, x2, 9; \
	sw  x3, 34(x31); \
	p.macsN x3, x1, x2, 10; \
	sw  x3, 44(x31); \
	p.machhsN x3, x1, x2, 11; \
	sw  x3, 54(x31); \
	p.macsRN x3, x1, x2, 12; \
	sw  x3, 64(x31); \
	p.machhsRN x3, x1, x2, 13; \
	sw  x3, 74(x31); \
	p.macuN x3, x1, x2, 14; \
	sw  x3, 84(x31); \
	p.machhuN x3, x1, x2, 15; \
	sw  x3, 94(x31); \
	p.macuRN x3, x1, x2, 16; \
	sw  x3, 5(x31); \
	p.machhuRN x3, x1, x2, 17; \
	sw  x3, 6(x31); \
      	p.mulhsu x5,x1,x2; \
	p.mulh x22,x1,x2; \
	p.mulhu x23,x1,x2; \
	p.msu x28, x1, x2; \
	sw  x5, 4(x31); \
	sw  x22, 4(x31); \
	sw  x23, 5(x31); \
	sw  x28, 6(x31); \
pv.dotup.h x15, x1, x2; \
sw  x15, 4(x31); \
pv.dotup.sc.h x15, x1, x2; \
sw  x15, 4(x31); \
pv.dotup.b x15, x1, x2; \
sw  x15, 4(x31); \
pv.dotup.sc.b x15, x1, x2; \
sw  x15, 4(x31); \
pv.dotusp.h x15, x1, x2; \
sw  x15, 4(x31); \
pv.dotusp.sc.h x15, x1, x2; \
sw  x15, 4(x31); \
pv.dotusp.b x15, x1, x2; \
sw  x15, 4(x31); \
pv.dotusp.sc.b x15, x1, x2; \
sw  x15, 4(x31); \
pv.dotsp.h x15, x1, x2; \
sw  x15, 4(x31); \
pv.dotsp.sc.h x15, x1, x2; \
sw  x15, 4(x31); \
pv.dotsp.b x15, x1, x2; \
sw  x15, 4(x31); \
pv.dotsp.sc.b x15, x1, x2; \
sw  x15, 4(x31); \
pv.sdotup.h x15, x1, x2; \
sw  x15, 4(x31); \
pv.sdotup.sc.h x15, x1, x2; \
sw  x15, 4(x31); \
pv.sdotup.b x15, x1, x2; \
sw  x15, 4(x31); \
pv.sdotup.sc.b x15, x1, x2; \
sw  x15, 4(x31); \
pv.sdotusp.h x15, x1, x2; \
sw  x15, 4(x31); \
pv.sdotusp.sc.h x15, x1, x2; \
sw  x15, 4(x31); \
pv.sdotusp.b x15, x1, x2; \
sw  x15, 4(x31); \
pv.sdotusp.sc.b x15, x1, x2; \
sw  x15, 4(x31); \
pv.sdotsp.h x15, x1, x2; \
sw  x15, 4(x31); \
pv.sdotsp.sc.h x15, x1, x2; \
sw  x15, 4(x31); \
pv.sdotsp.b x15, x1, x2; \
sw  x15, 4(x31); \
pv.sdotsp.sc.b x15, x1, x2; \
sw  x15, 4(x31); \
pv.dotup.sci.b x15, x1, 63; \
sw  x15, 4(x31); \
pv.dotusp.sci.h x15, x1, 31; \
sw  x15, 4(x31); \
pv.dotusp.sci.b x15, x1, 31; \
sw  x15, 4(x31); \
pv.dotsp.sci.h x15, x1, 31; \
sw  x15, 4(x31); \
pv.dotsp.sci.b x15, x1, 31; \
sw  x15, 4(x31); \
pv.sdotup.sci.h x15, x1, 63; \
sw  x15, 4(x31); \
pv.sdotup.sci.b x15, x1, 63; \
sw  x15, 4(x31); \
pv.sdotusp.sci.h x15, x1, 31; \
sw  x15, 4(x31); \
pv.dotup.sci.h x15, x1, 63; \
sw  x15, 4(x31); \
pv.sdotusp.sci.b x15, x1, 31; \
sw  x15, 4(x31); \
pv.sdotsp.sci.h x15, x1, 31; \
sw  x15, 4(x31); \
pv.sdotsp.sci.b x15, x1, 31; \
sw  x15, 4(x31); \
pv.dotup.sci.b x15, x1, 0; \
sw  x15, 4(x31); \
pv.dotusp.sci.h x15, x1, 0; \
sw  x15, 4(x31); \
pv.dotusp.sci.b x15, x1, 0; \
sw  x15, 4(x31); \
pv.dotsp.sci.h x15, x1, 0; \
sw  x15, 4(x31); \
pv.dotsp.sci.b x15, x1, 0; \
sw  x15, 4(x31); \
pv.sdotup.sci.h x15, x1, 0; \
sw  x15, 4(x31); \
pv.sdotup.sci.b x15, x1, 0; \
sw  x15, 4(x31); \
pv.sdotusp.sci.h x15, x1, 0; \
sw  x15, 4(x31); \
pv.dotup.sci.h x15, x1, 0; \
sw  x15, 4(x31); \
pv.sdotusp.sci.b x15, x1, 0; \
sw  x15, 4(x31); \
pv.sdotsp.sci.h x15, x1, 0; \
sw  x15, 4(x31); \
pv.sdotsp.sci.b x15, x1, 0; \
sw  x15, 4(x31); \
TEST_SHF( p.muluN, 0x55555555, 0x00000001); \
TEST_SHF( p.muluN, 0xCCCCCCCC, 0x00000001); \
TEST_SHF( p.mulsN, 0x55555555, 0x00000001); \
TEST_SHF( p.mulsN, 0xCCCCCCCC, 0x00000001); \
TEST_SHF( p.mulsRN, 0x00000001, 0xFFFFFFFF); \
TEST_SHF( p.mulhhsRN, 0x00000001, 0xFFFFFFFF); \
