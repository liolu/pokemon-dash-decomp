#include "m2c.h"

extern s32 data_020d65a8;

void func_0207f808(s32 arg0) {
    *(s32 *) 0x04000000 = (*(s32 *) 0x04000000 & ~0x38000000) | (arg0 << 0x1B);
    data_020d65a8       = arg0 << 0x10;
}
