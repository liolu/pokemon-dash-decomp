/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_0207c7f4(M2C_UNK);
M2C_UNK func_02086adc(M2C_UNK, M2C_UNK);

void func_02086a04(s32 arg0, s32 arg1) {
    if (func_02086adc(arg0, arg1) != 0) {
        return;
    }
    do {
        func_0207c7f4(0);
    } while (func_02086adc(arg0, arg1) == 0);
}
