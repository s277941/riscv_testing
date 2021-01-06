#include "test_macros.h"

# Main test function, performs all the tests
PROLOGUE()

TEST_REG_FILE_DEEP()
#include "alu.S"

EPILOGUE()

