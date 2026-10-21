/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_02087f48(M2C_UNK);
M2C_UNK func_02088068(M2C_UNK, M2C_UNK);

s32 func_02087458(s32 arg0, s32 arg1) {
    s32 var_r4;

    var_r4 = 0;
    if (func_02087f48(arg0 + 0x15C) != 0) {
        var_r4 = func_02088068(M2C_FIELD(M2C_FIELD(arg0, void **, 0x160), s32 *, 0x30), arg1);
    }
    if (var_r4 == 0) {
        var_r4 = func_02088068(M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x60), void **, 8), s32 *, 0x1C), arg1);
    }
    if (var_r4 != 0) {
        return var_r4 + 4;
    }
    return 0;
}
