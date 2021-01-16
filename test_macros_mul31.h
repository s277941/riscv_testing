#define TEST_MUL31();\
LI_DRAM_ADDR(x31);\
li                  x23,    0x52a829c8;\
li                  x26,    0xca3e1e86;\
mul                 x24,    x23,    x26;\
sw                  x24,    4(x31);\
li                  x6,     0xdfb72f04;\
li                  x30,    0xc5d8cc0a;\
mul                 x13,    x6,     x30;\
sw                  x13,    4(x31);\
li                  x28,    0x8a6944e1;\
li                  x10,    0x97e0ef36;\
mul                 x10,    x28,    x10;\
sw                  x10,    4(x31);\
li                  x10,    0x41676df7;\
li                  x15,    0x6091bef7;\
mulh                x7,     x10,    x15;\
sw                  x7,     4(x31);\
li                  x22,    0x484291d;\
li                  x4,     0xfef9160c;\
mulh                x3,     x22,    x4;\
sw                  x3,     1164(x31);\
li                  x28,    0x896b53df;\
li                  x22,    0x7e93e9c1;\
mulh                x8,     x28,    x22;\
sw                  x8,     4(x31);\
li                  x13,    0x79ddd256;\
li                  x13,    0xe346e5bc;\
mulhu               x5,     x13,    x13;\
sw                  x5,     4(x31);\
li                  x0,     0x901c60cd;\
li                  x8,     0x6e4c6374;\
mulhu               x25,    x0,     x8;\
sw                  x25,    294(x31);\
li                  x23,    0x143f7578;\
li                  x2,     0x58df2600;\
mulhu               x9,     x23,    x2;\
sw                  x9,     4(x31);\
li                  x2,     0xe32a6a6f;\
li                  x10,    0xfec938f1;\
mulhsu              x13,    x2,     x10;\
sw                  x13,    898(x31);\
li                  x15,    0x5eb516f4;\
li                  x28,    0xe8bfc761;\
mulhsu              x24,    x15,    x28;\
sw                  x24,    1877(x31);\
li                  x11,    0x9bfc173f;\
li                  x27,    0xa09fb012;\
mulhsu              x3,     x11,    x27;\
sw                  x3,     1454(x31);\
li                  x5,     0x7b39df5f;\
li                  x3,     0x97349815;\
p.mac               x10,    x5,     x3;\
sw                  x10,    4(x31);\
li                  x14,    0x89ac98df;\
li                  x19,    0x32a33592;\
p.mac               x30,    x14,    x19;\
sw                  x30,    4(x31);\
li                  x2,     0xa5f470e4;\
li                  x12,    0x7d7063a;\
p.mac               x19,    x2,     x12;\
sw                  x19,    4(x31);\
li                  x19,    0x56911b12;\
li                  x0,     0xf799aac5;\
p.msu               x3,     x19,    x0;\
sw                  x3,     4(x31);\
li                  x3,     0xcd1cd2fe;\
li                  x29,    0x893aebb;\
p.msu               x21,    x3,     x29;\
sw                  x21,    4(x31);\
li                  x2,     0x30531592;\
li                  x14,    0x7ee97771;\
p.msu               x10,    x2,     x14;\
sw                  x10,    1094(x31);\
li                  x23,    0x9e1ab6bc;\
li                  x29,    0x2a01dc2;\
p.muls              x8,     x23,    x29;\
sw                  x8,     4(x31);\
li                  x13,    0xf01f6ac3;\
li                  x13,    0x822facfd;\
p.muls              x26,    x13,    x13;\
sw                  x26,    1364(x31);\
li                  x18,    0x1e0f544a;\
li                  x26,    0xe4890024;\
p.muls              x22,    x18,    x26;\
sw                  x22,    4(x31);\
li                  x9,     0x4fa19ad8;\
li                  x25,    0x796a3494;\
p.mulhhs            x4,     x9,     x25;\
sw                  x4,     416(x31);\
li                  x26,    0x7a60a56a;\
li                  x18,    0xd0776637;\
p.mulhhs            x29,    x26,    x18;\
sw                  x29,    1334(x31);\
li                  x22,    0x7951ef45;\
li                  x9,     0xccf11079;\
p.mulhhs            x18,    x22,    x9;\
sw                  x18,    4(x31);\
li                  x2,     0xc649fc53;\
li                  x28,    0xd9e155ac;\
p.mulu              x19,    x2,     x28;\
sw                  x19,    4(x31);\
li                  x23,    0xfb31219;\
li                  x11,    0xf723ff71;\
p.mulu              x7,     x23,    x11;\
sw                  x7,     478(x31);\
li                  x4,     0xc7e8fc47;\
li                  x5,     0xcc59c717;\
p.mulu              x26,    x4,     x5;\
sw                  x26,    1944(x31);\
li                  x22,    0x7a855aba;\
li                  x27,    0xae257af0;\
p.mulhhu            x28,    x22,    x27;\
sw                  x28,    547(x31);\
li                  x11,    0x93c6773b;\
li                  x21,    0x3d037936;\
p.mulhhu            x25,    x11,    x21;\
sw                  x25,    4(x31);\
li                  x26,    0x38e7d06a;\
li                  x23,    0x61aa6d27;\
p.mulhhu            x27,    x26,    x23;\
sw                  x27,    1258(x31);\
p.mulsN             x14,    x5,     x20,    11;\
sw                  x14,    4(x31);\
p.mulsN             x25,    x10,    x29,    28;\
sw                  x25,    424(x31);\
p.mulsN             x6,     x30,    x23,    30;\
sw                  x6,     4(x31);\
p.mulhhsN           x9,     x29,    x6,     11;\
sw                  x9,     414(x31);\
p.mulhhsN           x9,     x14,    x7,     1;\
sw                  x9,     4(x31);\
p.mulhhsN           x29,    x9,     x16,    7;\
sw                  x29,    4(x31);\
p.mulsRN            x30,    x5,     x18,    24;\
sw                  x30,    4(x31);\
p.mulsRN            x29,    x19,    x3,     20;\
sw                  x29,    4(x31);\
p.mulsRN            x28,    x10,    x21,    14;\
sw                  x28,    4(x31);\
p.mulhhsRN          x30,    x20,    x8,     27;\
sw                  x30,    984(x31);\
p.mulhhsRN          x18,    x25,    x2,     7;\
sw                  x18,    1174(x31);\
p.mulhhsRN          x17,    x26,    x22,    9;\
sw                  x17,    1174(x31);\
p.muluN             x4,     x20,    x18,    24;\
sw                  x4,     4(x31);\
p.muluN             x8,     x25,    x12,    26;\
sw                  x8,     179(x31);\
p.muluN             x21,    x19,    x30,    0;\
sw                  x21,    4(x31);\
p.mulhhuN           x30,    x2,     x13,    6;\
sw                  x30,    4(x31);\
p.mulhhuN           x11,    x29,    x29,    7;\
sw                  x11,    4(x31);\
p.mulhhuN           x9,     x25,    x25,    30;\
sw                  x9,     4(x31);\
p.muluRN            x16,    x26,    x27,    7;\
sw                  x16,    4(x31);\
p.muluRN            x18,    x19,    x7,     1;\
sw                  x18,    4(x31);\
p.muluRN            x13,    x30,    x15,    31;\
sw                  x13,    4(x31);\
p.mulhhuRN          x29,    x15,    x30,    13;\
sw                  x29,    4(x31);\
p.mulhhuRN          x26,    x26,    x30,    26;\
sw                  x26,    384(x31);\
p.mulhhuRN          x19,    x0,     x2,     27;\
sw                  x19,    1824(x31);\
p.macsN             x6,     x16,    x27,    17;\
sw                  x6,     339(x31);\
p.macsN             x29,    x2,     x6,     31;\
sw                  x29,    4(x31);\
p.macsN             x27,    x20,    x30,    23;\
sw                  x27,    1276(x31);\
p.machhsN           x24,    x2,     x19,    11;\
sw                  x24,    1905(x31);\
p.machhsN           x1,     x19,    x26,    29;\
sw                  x1,     4(x31);\
p.machhsN           x25,    x8,     x28,    30;\
sw                  x25,    889(x31);\
p.macsRN            x26,    x18,    x28,    11;\
sw                  x26,    1434(x31);\
p.macsRN            x20,    x14,    x17,    27;\
sw                  x20,    4(x31);\
p.macsRN            x6,     x15,    x14,    11;\
sw                  x6,     154(x31);\
p.machhsRN          x21,    x22,    x11,    11;\
sw                  x21,    1984(x31);\
p.machhsRN          x18,    x21,    x29,    28;\
sw                  x18,    4(x31);\
p.machhsRN          x6,     x26,    x29,    0;\
sw                  x6,     1136(x31);\
p.macuN             x13,    x21,    x0,     7;\
sw                  x13,    4(x31);\
p.macuN             x19,    x22,    x3,     24;\
sw                  x19,    4(x31);\
p.macuN             x12,    x26,    x17,    11;\
sw                  x12,    917(x31);\
p.machhuN           x18,    x25,    x21,    10;\
sw                  x18,    4(x31);\
p.machhuN           x15,    x15,    x16,    27;\
sw                  x15,    4(x31);\
p.machhuN           x23,    x3,     x21,    1;\
sw                  x23,    1674(x31);\
p.macuRN            x18,    x6,     x23,    20;\
sw                  x18,    1394(x31);\
p.macuRN            x21,    x20,    x0,     23;\
sw                  x21,    4(x31);\
p.macuRN            x4,     x28,    x1,     7;\
sw                  x4,     4(x31);\
p.machhuRN          x19,    x8,     x21,    31;\
sw                  x19,    1429(x31);\
p.machhuRN          x18,    x10,    x26,    17;\
sw                  x18,    1864(x31);\
p.machhuRN          x13,    x15,    x18,    26;\
sw                  x13,    1124(x31);\
li                  x8,     0xea720e8b;\
li                  x20,    0x21542a3d;\
pv.dotusp.h         x3,     x8,     x20;\
sw                  x3,     4(x31);\
li                  x7,     0xeeb7de64;\
li                  x1,     0xcf8f236e;\
pv.dotusp.h         x28,    x7,     x1;\
sw                  x28,    399(x31);\
li                  x6,     0x2a072bd2;\
li                  x25,    0xa52271d1;\
pv.dotusp.h         x18,    x6,     x25;\
sw                  x18,    817(x31);\
li                  x8,     0x50822b1a;\
li                  x14,    0xe9c1bb92;\
pv.dotusp.b         x21,    x8,     x14;\
sw                  x21,    4(x31);\
li                  x18,    0x6f15bfa5;\
li                  x3,     0x106e3818;\
pv.dotusp.b         x16,    x18,    x3;\
sw                  x16,    734(x31);\
li                  x21,    0x8fb4aad2;\
li                  x0,     0x5da7417a;\
pv.dotusp.b         x22,    x21,    x0;\
sw                  x22,    1444(x31);\
li                  x23,    0x6994e40e;\
li                  x8,     0x622323cb;\
pv.dotusp.sc.h      x9,     x23,    x8;\
sw                  x9,     1826(x31);\
li                  x4,     0x8d5af5b1;\
li                  x5,     0xc41f75b5;\
pv.dotusp.sc.h      x12,    x4,     x5;\
sw                  x12,    4(x31);\
li                  x3,     0x6e49c2d6;\
li                  x14,    0xa73a920;\
pv.dotusp.sc.h      x29,    x3,     x14;\
sw                  x29,    4(x31);\
li                  x8,     0xb8090b6e;\
li                  x29,    0xbcace9cc;\
pv.dotusp.sc.b      x6,     x8,     x29;\
sw                  x6,     1294(x31);\
li                  x23,    0x505a1086;\
li                  x15,    0xbc72a492;\
pv.dotusp.sc.b      x17,    x23,    x15;\
sw                  x17,    304(x31);\
li                  x4,     0xdfad956e;\
li                  x27,    0xb4b13e8;\
pv.dotusp.sc.b      x24,    x4,     x27;\
sw                  x24,    1829(x31);\
li                  x0,     0x6d8f5beb;\
pv.dotusp.sci.h     x14,    x0,     1;\
sw                  x14,    4(x31);\
li                  x16,    0xde9f2295;\
pv.dotusp.sci.h     x12,    x16,    23;\
sw                  x12,    4(x31);\
li                  x2,     0x8a98a287;\
pv.dotusp.sci.h     x9,     x2,     2;\
sw                  x9,     787(x31);\
li                  x20,    0x653f5872;\
pv.dotusp.sci.b     x20,    x20,    16;\
sw                  x20,    1334(x31);\
li                  x21,    0x3bbdd5d9;\
pv.dotusp.sci.b     x10,    x21,    22;\
sw                  x10,    437(x31);\
li                  x4,     0x457b9b0d;\
pv.dotusp.sci.b     x15,    x4,     2;\
sw                  x15,    4(x31);\
li                  x17,    0x6af0722;\
li                  x6,     0x7798d589;\
pv.dotsp.h          x28,    x17,    x6;\
sw                  x28,    4(x31);\
li                  x27,    0x1f61bbf0;\
li                  x7,     0xe03796eb;\
pv.dotsp.h          x1,     x27,    x7;\
sw                  x1,     1868(x31);\
li                  x18,    0x457a1b28;\
li                  x3,     0xb04331e7;\
pv.dotsp.h          x11,    x18,    x3;\
sw                  x11,    4(x31);\
li                  x25,    0x7195f4c1;\
li                  x14,    0xc6447a68;\
pv.dotsp.b          x13,    x25,    x14;\
sw                  x13,    964(x31);\
li                  x10,    0x7071c9f4;\
li                  x15,    0x796d5704;\
pv.dotsp.b          x15,    x10,    x15;\
sw                  x15,    515(x31);\
li                  x16,    0x1ce1ae93;\
li                  x30,    0x5f48de67;\
pv.dotsp.b          x20,    x16,    x30;\
sw                  x20,    355(x31);\
li                  x26,    0x2dad05c9;\
li                  x26,    0x57b50d67;\
pv.dotsp.sc.h       x10,    x26,    x26;\
sw                  x10,    4(x31);\
li                  x19,    0xbb406bac;\
li                  x4,     0x3263dd47;\
pv.dotsp.sc.h       x2,     x19,    x4;\
sw                  x2,     557(x31);\
li                  x30,    0xe1b01fd1;\
li                  x20,    0x84917c1f;\
pv.dotsp.sc.h       x15,    x30,    x20;\
sw                  x15,    1357(x31);\
li                  x9,     0x65a22d85;\
li                  x23,    0x23ccf55b;\
pv.dotsp.sc.b       x8,     x9,     x23;\
sw                  x8,     4(x31);\
li                  x8,     0x7fc635ff;\
li                  x9,     0xab1e45ec;\
pv.dotsp.sc.b       x22,    x8,     x9;\
sw                  x22,    1197(x31);\
li                  x13,    0x8f87df57;\
li                  x15,    0xfbdcf50e;\
pv.dotsp.sc.b       x13,    x13,    x15;\
sw                  x13,    996(x31);\
li                  x26,    0x2b9e68d9;\
pv.dotsp.sci.h      x20,    x26,    22;\
sw                  x20,    1134(x31);\
li                  x16,    0x4379e422;\
pv.dotsp.sci.h      x13,    x16,    13;\
sw                  x13,    4(x31);\
li                  x23,    0xaed91887;\
pv.dotsp.sci.h      x3,     x23,    25;\
sw                  x3,     4(x31);\
li                  x25,    0x1fcb7fd7;\
pv.dotsp.sci.b      x6,     x25,    16;\
sw                  x6,     4(x31);\
li                  x3,     0x451e42b3;\
pv.dotsp.sci.b      x26,    x3,     28;\
sw                  x26,    1758(x31);\
li                  x2,     0x488a755e;\
pv.dotsp.sci.b      x21,    x2,     16;\
sw                  x21,    1159(x31);\
li                  x15,    0x937aa1dc;\
li                  x13,    0x13d58c06;\
pv.sdotup.h         x15,    x15,    x13;\
sw                  x15,    1685(x31);\
li                  x7,     0x8f1aeb92;\
li                  x8,     0x47c3a7f6;\
pv.sdotup.h         x6,     x7,     x8;\
sw                  x6,     4(x31);\
li                  x18,    0xc956b948;\
li                  x20,    0x4502ca8f;\
pv.sdotup.h         x9,     x18,    x20;\
sw                  x9,     977(x31);\
li                  x21,    0x7a1d6e80;\
li                  x7,     0x279cb4bf;\
pv.sdotup.b         x19,    x21,    x7;\
sw                  x19,    889(x31);\
li                  x17,    0x7784640e;\
li                  x18,    0x61d0335c;\
pv.sdotup.b         x21,    x17,    x18;\
sw                  x21,    757(x31);\
li                  x21,    0xe5fba844;\
li                  x13,    0xa6371ed0;\
pv.sdotup.b         x29,    x21,    x13;\
sw                  x29,    1959(x31);\
li                  x19,    0xb9e61e17;\
li                  x14,    0x6ae5d5af;\
pv.sdotup.sc.h      x28,    x19,    x14;\
sw                  x28,    1644(x31);\
li                  x19,    0x5f70e271;\
li                  x5,     0x68ea99e0;\
pv.sdotup.sc.h      x1,     x19,    x5;\
sw                  x1,     4(x31);\
li                  x25,    0xe498f59f;\
li                  x18,    0x6a401e4c;\
pv.sdotup.sc.h      x4,     x25,    x18;\
sw                  x4,     4(x31);\
li                  x24,    0xa8d3f393;\
li                  x7,     0xeef62ce1;\
pv.sdotup.sc.b      x12,    x24,    x7;\
sw                  x12,    4(x31);\
li                  x9,     0xf6530266;\
li                  x19,    0x49a52050;\
pv.sdotup.sc.b      x10,    x9,     x19;\
sw                  x10,    4(x31);\
li                  x13,    0x70b5b023;\
li                  x4,     0x79482d4e;\
pv.sdotup.sc.b      x13,    x13,    x4;\
sw                  x13,    1946(x31);\
li                  x30,    0xadfa2204;\
pv.sdotup.sci.h     x20,    x30,    28;\
sw                  x20,    334(x31);\
li                  x7,     0xe3aee7b1;\
pv.sdotup.sci.h     x11,    x7,     10;\
sw                  x11,    4(x31);\
li                  x9,     0xc672878b;\
pv.sdotup.sci.h     x9,     x9,     2;\
sw                  x9,     4(x31);\
li                  x22,    0xc9f12fad;\
pv.sdotup.sci.b     x16,    x22,    7;\
sw                  x16,    4(x31);\
li                  x20,    0x639b2baf;\
pv.sdotup.sci.b     x24,    x20,    23;\
sw                  x24,    4(x31);\
li                  x25,    0xc48d1ca7;\
pv.sdotup.sci.b     x4,     x25,    8;\
sw                  x4,     1486(x31);\
li                  x8,     0x808aa16d;\
li                  x4,     0x85bc7e84;\
pv.sdotusp.h        x18,    x8,     x4;\
sw                  x18,    606(x31);\
li                  x8,     0x58e03fcf;\
li                  x3,     0xbdbbe718;\
pv.sdotusp.h        x20,    x8,     x3;\
sw                  x20,    4(x31);\
li                  x12,    0xd3c87a0b;\
li                  x29,    0x7cffa4c2;\
pv.sdotusp.h        x28,    x12,    x29;\
sw                  x28,    206(x31);\
li                  x20,    0xdb11b70e;\
li                  x19,    0x2f8fe15e;\
pv.sdotusp.b        x11,    x20,    x19;\
sw                  x11,    466(x31);\
li                  x7,     0x2a8b381e;\
li                  x22,    0xe3d94ac1;\
pv.sdotusp.b        x23,    x7,     x22;\
sw                  x23,    4(x31);\
li                  x0,     0xe6755f8;\
li                  x23,    0x8724dd9b;\
pv.sdotusp.b        x19,    x0,     x23;\
sw                  x19,    4(x31);\
li                  x26,    0xbabaf775;\
li                  x30,    0x2fa72e46;\
pv.sdotusp.sc.h     x23,    x26,    x30;\
sw                  x23,    826(x31);\
li                  x19,    0xf76f7d29;\
li                  x21,    0xad86c664;\
pv.sdotusp.sc.h     x13,    x19,    x21;\
sw                  x13,    4(x31);\
li                  x1,     0xcdee5419;\
li                  x18,    0x6598dbcd;\
pv.sdotusp.sc.h     x23,    x1,     x18;\
sw                  x23,    4(x31);\
li                  x8,     0x231e21d6;\
li                  x21,    0x9a9361cf;\
pv.sdotusp.sc.b     x23,    x8,     x21;\
sw                  x23,    4(x31);\
li                  x25,    0xb9642dec;\
li                  x1,     0xfe9359a1;\
pv.sdotusp.sc.b     x5,     x25,    x1;\
sw                  x5,     4(x31);\
li                  x30,    0x6e621de4;\
li                  x29,    0x18ff3011;\
pv.sdotusp.sc.b     x6,     x30,    x29;\
sw                  x6,     355(x31);\
li                  x28,    0x49b611d1;\
pv.sdotusp.sci.h    x5,     x28,    28;\
sw                  x5,     1104(x31);\
li                  x24,    0xf3ba0f9c;\
pv.sdotusp.sci.h    x12,    x24,    9;\
sw                  x12,    164(x31);\
li                  x25,    0xa77d1453;\
pv.sdotusp.sci.h    x2,     x25,    5;\
sw                  x2,     314(x31);\
li                  x13,    0x394bab9f;\
pv.sdotusp.sci.b    x25,    x13,    21;\
sw                  x25,    4(x31);\
li                  x24,    0xf817c617;\
pv.sdotusp.sci.b    x24,    x24,    11;\
sw                  x24,    384(x31);\
li                  x25,    0xf306668e;\
pv.sdotusp.sci.b    x11,    x25,    4;\
sw                  x11,    266(x31);\
li                  x17,    0xaeaecc8;\
li                  x6,     0x8af1356c;\
pv.sdotsp.h         x17,    x17,    x6;\
sw                  x17,    4(x31);\
li                  x16,    0xa90f5c49;\
li                  x30,    0x3f9e5807;\
pv.sdotsp.h         x1,     x16,    x30;\
sw                  x1,     724(x31);\
li                  x15,    0x27b9770e;\
li                  x4,     0x43cfcb19;\
pv.sdotsp.h         x9,     x15,    x4;\
sw                  x9,     4(x31);\
li                  x15,    0x1cb391f8;\
li                  x24,    0xe4daf20b;\
pv.sdotsp.b         x7,     x15,    x24;\
sw                  x7,     4(x31);\
li                  x20,    0x3fedb132;\
li                  x13,    0x1fb34a22;\
pv.sdotsp.b         x20,    x20,    x13;\
sw                  x20,    4(x31);\
li                  x13,    0x15b5ad10;\
li                  x15,    0xb28bc81a;\
pv.sdotsp.b         x26,    x13,    x15;\
sw                  x26,    4(x31);\
li                  x10,    0x41ea3056;\
li                  x16,    0x7d7c974c;\
pv.sdotsp.sc.h      x17,    x10,    x16;\
sw                  x17,    1998(x31);\
li                  x25,    0x2586448f;\
li                  x30,    0xb1f1ccfd;\
pv.sdotsp.sc.h      x6,     x25,    x30;\
sw                  x6,     1284(x31);\
li                  x12,    0x16d2ac3b;\
li                  x27,    0xf95ee640;\
pv.sdotsp.sc.h      x23,    x12,    x27;\
sw                  x23,    928(x31);\
li                  x6,     0xa6586848;\
li                  x9,     0xda8ef2aa;\
pv.sdotsp.sc.b      x4,     x6,     x9;\
sw                  x4,     886(x31);\
li                  x19,    0xdf220d4c;\
li                  x13,    0xa201b04a;\
pv.sdotsp.sc.b      x4,     x19,    x13;\
sw                  x4,     4(x31);\
li                  x30,    0xdbc8073e;\
li                  x22,    0xddb8404c;\
pv.sdotsp.sc.b      x1,     x30,    x22;\
sw                  x1,     4(x31);\
li                  x5,     0x5516e534;\
pv.sdotsp.sci.h     x26,    x5,     28;\
sw                  x26,    579(x31);\
li                  x0,     0x76f4084c;\
pv.sdotsp.sci.h     x28,    x0,     14;\
sw                  x28,    4(x31);\
li                  x27,    0xeaac7c72;\
pv.sdotsp.sci.h     x9,     x27,    23;\
sw                  x9,     934(x31);\
li                  x23,    0x72421111;\
pv.sdotsp.sci.b     x6,     x23,    28;\
sw                  x6,     1516(x31);\
li                  x29,    0xdbde5a65;\
pv.sdotsp.sci.b     x17,    x29,    3;\
sw                  x17,    4(x31);\
li                  x10,    0xfed7dae0;\
pv.sdotsp.sci.b     x9,     x10,    26;\
sw                  x9,     898(x31);\
TEST_SHF( p.muluN, 0x55555555, 0x00000001); \
TEST_SHF( p.muluN, 0xCCCCCCCC, 0x00000001); \
TEST_SHF( p.mulsN, 0x55555555, 0x00000001); \
TEST_SHF( p.mulsN, 0xCCCCCCCC, 0x00000001); \
TEST_SHF( p.mulsRN, 0x00000001, 0xFFFFFFFF); \
TEST_SHF( p.mulhhsRN, 0x00000001, 0xFFFFFFFF); \
