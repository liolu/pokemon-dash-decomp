/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020a5ee4(M2C_UNK *);                       /* extern */
extern s32 data_020d4e48;
extern M2C_UNK func_020083ec;

s32 func_02007b00(void) {
    if (func_020a5ee4(&func_020083ec) != 2) {
        data_020d4e48 = 1;
        return 0;
    }
    return 1;
}
