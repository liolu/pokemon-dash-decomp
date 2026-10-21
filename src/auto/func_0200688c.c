#include "m2c.h"

extern s32 data_020d4e3c;
extern M2C_UNK data_020d4f00;

M2C_UNK *func_0200688c(s32 arg0) {
    if (arg0 == 0) {
        return &data_020d4f00;
    }
    return (M2C_UNK *) (((arg0 - 1) * 0x16) + data_020d4e3c);
}
