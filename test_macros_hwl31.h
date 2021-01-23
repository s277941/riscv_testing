#define TEST_HWLOOP31() \
li x31, 0x00201090;\
addi                x1,     x0,     30;\
addi                x2,     x0,     0;\
lp.setup            x0,     x1,     hwloop_test_1;\
addi                x2,     x2,     1;\
hwloop_test_1:;\
sw                  x2,     0(x31);\
addi                x1,     x0,     30;\
addi                x2,     x0,     0;\
lp.setup            x1,     x1,     hwloop_test_2;\
addi                x2,     x2,     1;\
addi                x0,     x0,     0;\
hwloop_test_2:;\
sw                  x2,     0(x31);\
addi                x2,     x0,     0;\
lp.setupi           x0,     10,     30;\
addi                x2,     x2,     1;\
addi                x0,     x0,     0;\
addi                x0,     x0,     0;\
addi                x0,     x0,     0;\
addi                x0,     x0,     0;\
addi                x0,     x0,     0;\
addi                x0,     x0,     0;\
addi                x0,     x0,     0;\
addi                x0,     x0,     0;\
addi                x0,     x0,     0;\
addi                x0,     x0,     0;\
sw                  x2,     0(x31);\
addi                x1,     x0,     100;\
addi                x2,     x0,     0;\
lp.starti           x0,     hwl_start1;\
lp.endi             x0,     hwl_end1;\
lp.count            x0,     x1;\
hwl_start1:;\
addi                x2,     x2,     1;\
addi                x0,     x0,     0;\
hwl_end1:;\
sw                  x2,     0(x31);\
addi                x1,     x0,     100;\
addi                x2,     x0,     0;\
lp.starti           x0,     hwl_start2;\
lp.endi             x0,     hwl_end2;\
lp.counti           x0,     50;\
hwl_start2:;\
addi                x2,     x2,     1;\
addi                x0,     x0,     0;\
hwl_end2:;\
sw                  x2,     0(x31);\
addi                x1,     x0,     10;\
addi                x2,     x0,     10;\
addi                x3,     x0,     0;\
addi                x4,     x0,     0;\
lp.setup            x0,     x1,     nested_1;\
addi                x3,     x3,     1;\
lp.setup            x1,     x2,     nested_2;\
addi                x4,     x4,     1;\
addi                x0,     x0,     0;\
nested_2:;\
sw                  x2,     0(x31);\
nested_1:;\
sw                  x2,     0(x31);\
