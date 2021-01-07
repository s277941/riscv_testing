#include "test_frame.h"
#include "test_macros_rf.h"
#include "test_macros_alu31.h"

# Main test function, performs all the tests
PROLOGUE()

TEST_REG_FILE_DEEP()
TEST_ALU_DEEP()
//TEST_MUL()

EPILOGUE()
