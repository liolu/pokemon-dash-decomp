#include "m2c.h"

extern M2C_UNK data_020beff0;

s32 func_02018804(void *arg0) {
    return *((M2C_UNK *) ((s8 *) &data_020beff0 + (M2C_FIELD(arg0, s32 *, 0x1B4) * 4)));
}
