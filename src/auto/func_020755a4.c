/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_02075548(M2C_UNK, M2C_UNK);

void func_020755a4(s32 arg0, s32 arg1) {
    s32 var_r5;

    var_r5 = arg0;
    if (var_r5 == 0) {
        return;
    }
    do {
        func_02075548(var_r5, arg1);
        var_r5 = *(M2C_UNK *) var_r5;
    } while (var_r5 != 0);
}
