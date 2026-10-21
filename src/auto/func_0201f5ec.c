/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_0201f640(M2C_UNK);

extern void *data_020d5164;

s32 func_0201f5ec(s32 arg0) {
    s32 temp_r4;
    s32 var_r0;

    temp_r4 = M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 8), void **, 0x1B0), s32 *, 0x44);
    if (temp_r4 == 0) {
        return -1;
    }
    if (M2C_FIELD(data_020d5164, s32 *, 0x1B4) == 9) {
        return -1;
    }
    var_r0 = temp_r4 - func_0201f640(arg0);
    if (var_r0 < 0) {
        var_r0 = 0;
    }
    return var_r0;
}
