#include "m2c.h"

extern s32 data_020cd8c4;

s32 func_0202e818(void) {
    s32 temp_r1;

    temp_r1       = data_020cd8c4 + 1;
    data_020cd8c4 = temp_r1;
    if (temp_r1 == 0x2A) {
        data_020cd8c4 = 0x16;
    }
    return data_020cd8c4;
}
