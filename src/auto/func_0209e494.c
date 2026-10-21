#include "m2c.h"

extern M2C_UNK *data_020d8768;
extern s32 data_020d8778;

M2C_UNK *func_0209e494(void) {
    M2C_UNK *temp_r0;
    M2C_UNK *temp_r2;

    temp_r0 = data_020d8768;
    if (temp_r0 == NULL) {
        return NULL;
    }
    temp_r2       = *temp_r0;
    data_020d8768 = temp_r2;
    if (temp_r2 == NULL) {
        data_020d8778 = 0;
    }
    return temp_r0;
}
