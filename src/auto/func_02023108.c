#include "m2c.h"

void func_02023108(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x28) = 1;
    if (M2C_FIELD(arg0, s32 *, 0x24) == 2) {
        M2C_FIELD(M2C_FIELD(arg0, void **, 4), s8 *, 0x14) = 1;
    }
}
