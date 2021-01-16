#include "test_frame.h"
#include "test_macros_rf.h"
#include "test_macros_alu08.h"
#include "test_macros_alu31.h"
#include "test_macros_alu_improv.h"
#include "test_macros_mul08.h"
#include "test_macros_mul31.h"
#include "test_macros_ls08.h"
#include "test_macros_ls19.h"
#include "test_macros_ls20.h"
#include "test_macros_hwl.h"
#include "test_macros_branch.h"
#include "test_macros_forwj.h"
#include "test_macros_csr.h"
#include "test_macros_compr.h"
#include "test_macros_exceptions.h"
#include "test_alternative_ivt.h"

# Main test function, performs all the tests
PROLOGUE()

//FORWARDING_STALL_JUMPS()
//ALTERNATIVE_IVT()
//TEST_HWLOOP()
//TEST_REG_FILE_DEEP()
//fence
//TEST_MUL31()
//TEST_MUL08()
//TEST_ALU_DEEP31()
//TEST_ALU_DEEP08()
LI_DRAM_ADDR(x31)
ALU_IMPROVED()
//TEST_BRANCH()
//ecall
//TEST_CSR()
//TEST_LOAD_STORE()
//TEST_LOAD_STORE19()
//TEST_LOAD_STORE20()
//ebreak
//nop
//TEST_COMPRESSED()
//EXCEPTIONS()
//fence.i
//.word 0xFFFFFFFF

EPILOGUE()
