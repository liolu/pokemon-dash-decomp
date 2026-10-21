/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0209db20(M2C_UNK, s32, u16, s32);      /* extern */
extern s32 data_020d65a8;

void func_0207e9f4(void *arg0, M2C_UNK arg1, s32 arg2, s32 arg3, u16 arg4) {
    s32 var_ip;
    s32 var_r3;

    var_r3 = arg3;
    if (var_r3 == 0) {
        var_r3 = M2C_FIELD(arg0, s32 *, 8) - arg2;
    }
    var_ip = M2C_FIELD(arg0, s32 *, 0xC) + M2C_FIELD(arg0, s32 *, 4);
    if (M2C_FIELD(arg0, s32 *, 0) == 0) {
        var_ip += data_020d65a8;
    }
    func_0209db20(arg1, var_ip + arg2, arg4, var_r3);
}
