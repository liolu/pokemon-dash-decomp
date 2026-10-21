/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_02075634(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);

void func_020755e4(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_r7;

    var_r7 = arg0;
    if (var_r7 == 0) {
        return;
    }
    do {
        func_02075634(var_r7, arg1, arg2, arg3);
        var_r7 = *(M2C_UNK *) var_r7;
    } while (var_r7 != 0);
}
