/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020a5d9c(M2C_UNK *, s32);                  /* extern */
extern s32 data_020d4e70;
extern M2C_UNK func_0200826c;

s32 func_02007a50(void) {
    if (func_020a5d9c(&func_0200826c, data_020d4e70) == 2) {
        return 1;
    }
    return 0;
}
