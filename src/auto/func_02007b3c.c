/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020a5f2c(M2C_UNK *);                       /* extern */
extern s32 data_020d4e48;
extern M2C_UNK func_0200846c;

s32 func_02007b3c(void) {
    if (func_020a5f2c(&func_0200846c) != 2) {
        data_020d4e48 = 1;
        return 0;
    }
    return 1;
}
