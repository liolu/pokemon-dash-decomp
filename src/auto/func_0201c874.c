#include "m2c.h"

extern M2C_UNK data_020d4f84;

s32 func_0201c874(s32 arg0) {
    return *((M2C_UNK *) ((s8 *) &data_020d4f84 + (arg0 * 0x10)));
}
