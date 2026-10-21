/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02063748(M2C_UNK);                     /* extern */
M2C_UNK func_0209637c(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_02097058(s32, M2C_UNK);                /* extern */
M2C_UNK func_020978b0(s32, s32);                    /* extern */
M2C_UNK func_0209803c(M2C_UNK *, s32);              /* extern */
s32 func_0209c99c();                                /* extern */
extern s8 data_020d5fa4;
extern s32 data_020d5fb4;
extern s32 data_020d5fc8;
extern M2C_UNK data_020d5fd0;
extern M2C_UNK data_020d5fd4;
extern s32 data_020d5fd8;

void func_02063390(s32 arg0, M2C_UNK arg1) {
    if (func_0209c99c() != 0) {
        return;
    }
    func_02063748(0);
    if (arg0 != data_020d5fc8) {
        func_02097058(data_020d5fd8, 3);
        func_020978b0(arg0, data_020d5fd8);
        data_020d5fc8 = arg0;
        data_020d5fb4 = -1;
    }
    func_0209803c(&data_020d5fd0, arg0);
    data_020d5fa4 = 1;
    func_0209637c(&data_020d5fd4, 0, arg1);
    func_0209637c(&data_020d5fd0, 0x7F, arg1);
}
