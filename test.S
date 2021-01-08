#include "test_frame.h"
#include "test_macros_rf.h"
#include "test_macros_alu.h"
#include "test_macros_mul.h"
#include "test_macros_ls19.h"
#include "test_macros_hwl.h"

# Main test function, performs all the tests
PROLOGUE()

TEST_REG_FILE_DEEP()
TEST_ALU_DEEP()
TEST_MUL()
TEST_LOAD_STORE()

//TEST_HWLOOP()

EPILOGUE()
