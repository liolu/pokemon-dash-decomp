/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0209637c(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_02096518(M2C_UNK *, M2C_UNK);          /* extern */
s32 func_0209c99c();                                /* extern */
extern s8 data_020d5fa4;
extern M2C_UNK data_020d5fd0;
extern M2C_UNK data_020d5fd4;

void func_0206333c(M2C_UNK arg0) {
    if (func_0209c99c() != 0) {
        return;
    }
    func_0209637c(&data_020d5fd4, 0x7F, arg0);
    func_02096518(&data_020d5fd0, arg0);
    data_020d5fa4 = 0;
}
