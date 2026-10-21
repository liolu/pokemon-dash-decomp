#include "m2c.h"

extern s32 data_020d65a4;

void func_0207f7e0(s32 arg0) {
    *(s32 *) 0x04000000 = (*(s32 *) 0x04000000 & ~0x07000000) | (arg0 << 0x18);
    data_020d65a4       = arg0 << 0x10;
}
