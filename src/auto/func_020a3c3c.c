/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern M2C_UNK data_020da600;

s32 func_020a3c3c(void) {
    if (!(M2C_FIELD(&data_020da600, s32 *, 0x34) & 4)) {
        return 1;
    }
    return 0;
}
