#include "test_frame.h"
#include "test_macros_rf.h"
#include "test_macros_alu08.h"
#include "test_macros_mul_final.h"
#include "test_macros_alu_final.h"
#include "test_fill_the_gap.h"
#include "test_macros_ls19.h"
#include "test_macros_ls20.h"
#include "test_macros_hwl.h"
#include "test_macros_branch.h"
#include "test_macros_forwj.h"
#include "test_macros_compr.h"
#include "test_macros_exceptions.h"
#include "test_alternative_ivt.h"

# Main test function, performs all the tests
PROLOGUE()

FILL_THE_GAP()
FORWARDING_STALL_JUMPS()
ALTERNATIVE_IVT()
TEST_HWLOOP()
TEST_REG_FILE_DEEP()
fence
TEST_MUL_FINAL()
TEST_BRANCH()
ecall
TEST_LOAD_STORE19()
TEST_LOAD_STORE20()
ebreak
nop
TEST_COMPRESSED()
EXCEPTIONS()
fence.i
.word 0x3C33F503
TEST_ALU_FINAL()

EPILOGUE()
