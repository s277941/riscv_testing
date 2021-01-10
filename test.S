#include "test_frame.h"
#include "test_macros_rf.h"
#include "test_macros_alu.h"
#include "test_macros_mul31.h"
#include "test_macros_ls08.h"
#include "test_macros_hwl.h"
#include "test_macros_branch.h"
#include "test_macros_forwj.h"
#include "test_macros_csr.h"
#include "test_macros_compr.h"

# Main test function, performs all the tests
PROLOGUE()

//FORWARDING_STALL_JUMPS()
//CALL_INVALID()
//TEST_HWLOOP()
//TEST_REG_FILE_DEEP()
//TEST_MUL()
//TEST_ALU_DEEP()
//TEST_BRANCH()
//TEST_CSR()
//TEST_LOAD_STORE()
TEST_COMPRESSED()
//EXCEPTIONS()

EPILOGUE()
