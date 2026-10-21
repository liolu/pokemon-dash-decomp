/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_02087f48(M2C_UNK);

s32 func_02086a88(s32 arg0) {
    if (func_02087f48(arg0 + 0x15C) != 0) {
        return M2C_FIELD(arg0, s32 *, 0x160);
    }
    return 0;
}
