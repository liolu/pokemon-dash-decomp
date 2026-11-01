#include "m2c.h"

void func_02022250(u8 *arg0) {
    u32 i;

    for (i = 0; i < *(u32 *) (arg0 + 4); i += 1) {
        ((s32 *) *(u8 **) arg0)[i] = -1;
    }
    for (i = 0; i < *(u32 *) (arg0 + 0x10); i += 1) {
        ((s32 *) *(u8 **) (arg0 + 0xC))[i] = -1;
    }
    *(u8 *) (arg0 + 0x18) = 0;
}
