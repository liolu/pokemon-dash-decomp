#include "m2c.h"

extern s32 data_020cd8c8;

s32 func_0202e7c0(void) {
    s32 temp_r1;

    temp_r1       = data_020cd8c8 + 1;
    data_020cd8c8 = temp_r1;
    if (temp_r1 == 0x3A) {
        data_020cd8c8 = 0x34;
    }
    return data_020cd8c8;
}
