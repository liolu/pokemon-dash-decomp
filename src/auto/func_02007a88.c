/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020a5ea4(M2C_UNK *);                       /* extern */
extern s32 data_020d4e48;
extern M2C_UNK func_02008324;

s32 func_02007a88(void) {
    if (func_020a5ea4(&func_02008324) != 2) {
        data_020d4e48 = 1;
        return 0;
    }
    return 1;
}
