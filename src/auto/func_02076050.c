#include "m2c.h"

extern void *data_020d6540;

void func_02076050(s32 arg0) {
    M2C_FIELD(data_020d6540, s32 *, 0x28) = arg0;
}
