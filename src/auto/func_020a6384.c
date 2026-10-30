/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_020a6340(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);

s32 func_020a6384(s32 arg0, s32 arg1, s32 arg2) {
    if (arg0 == 0) {
        return 0;
    }
    if (arg1 == 0) {
        return 0;
    }
    if (!(M2C_FIELD(arg1, u16 *, 2) & (1 << arg2))) {
        return 0;
    }
    return func_020a6340(arg0, (s32) M2C_FIELD(arg1, u16 *, 0), arg1 + 4, arg2);
}
