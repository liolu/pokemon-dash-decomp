/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020802b0(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK data_020d40d8;
extern M2C_UNK data_020d40ec;

s32 func_020860e8(M2C_UNK arg0, M2C_UNK arg1) {
    if (func_020802b0(&data_020d40d8, 0, arg0, 0x480) == 0) {
        return 0;
    }
    return func_020802b0(&data_020d40ec, 0, arg1, 0x20);
}
