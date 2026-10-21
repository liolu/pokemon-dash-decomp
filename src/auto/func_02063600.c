/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0209637c(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
s32 func_0209c99c();                                /* extern */
extern u8 data_020d5fa4;
extern M2C_UNK data_020d5fd0;
extern M2C_UNK data_020d5fd4;

void func_02063600(M2C_UNK arg0, M2C_UNK arg1) {
    if (func_0209c99c() != 0) {
        return;
    }
    if (data_020d5fa4 == 0) {
        func_0209637c(&data_020d5fd4, arg0, arg1);
        return;
    }
    func_0209637c(&data_020d5fd0, arg0, arg1);
}
