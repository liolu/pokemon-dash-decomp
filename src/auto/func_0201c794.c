#include "m2c.h"

extern M2C_UNK data_020d4f88;

s32 func_0201c794(s32 arg0) {
    return *((M2C_UNK *) ((s8 *) &data_020d4f88 + (arg0 * 0x10)));
}
