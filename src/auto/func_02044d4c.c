/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_0203231c(M2C_UNK);

s32 func_02044d4c(s32 arg0) {
    s32 temp_r1;

    temp_r1 = M2C_FIELD(arg0, s32 *, 0x128);
    if ((temp_r1 == 0) || (temp_r1 == 0xF)) {
        return 0;
    }
    return func_0203231c(arg0);
}
