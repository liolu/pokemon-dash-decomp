/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_0206cbb8(M2C_UNK, M2C_UNK, M2C_UNK);
void func_02082160(M2C_UNK, M2C_UNK);

extern s32 data_020d6638;

void func_0208209c(s32 arg0) {
    s32 var_r2;
    u32 temp_r1;

    if (arg0 == 0) {
        return;
    }
    temp_r1 = M2C_FIELD(arg0, u32 *, -4);
    if (temp_r1 >= 0x7CU) {
        var_r2 = 0x20;
    } else {
        var_r2 = 4;
    }
    if (var_r2 != 0x20) {
        func_02082160(arg0 - var_r2, temp_r1 + var_r2);
        return;
    }
    func_0206cbb8(data_020d6638, -1, arg0 - var_r2);
}
