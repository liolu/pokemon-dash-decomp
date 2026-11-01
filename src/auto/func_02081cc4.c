#include "m2c.h"

void func_02081cc4(s32 *arg0, s32 *arg1, s32 arg2) {
    s32 i;

    i = 0;
    do {
        arg0[i] = arg1[i] << arg2;
        i++;
    } while (i < 9);
    arg0[9]  = arg1[9];
    arg0[10] = arg1[10];
    arg0[11] = arg1[11];
}
