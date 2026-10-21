#include "m2c.h"

extern s32 data_020d3de8;
extern M2C_UNK data_020d3dec;

s32 func_02080674(void) {
    return *((M2C_UNK *) ((s8 *) &data_020d3dec + (data_020d3de8 * 4)));
}
