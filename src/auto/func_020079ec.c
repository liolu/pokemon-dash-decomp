/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020a5bb8(M2C_UNK *, s32);                  /* extern */
extern s32 data_020d4e7c;
extern M2C_UNK func_02007f28;

s32 func_020079ec(void) {
    if (func_020a5bb8(&func_02007f28, data_020d4e7c) == 2) {
        return 1;
    }
    return 0;
}
