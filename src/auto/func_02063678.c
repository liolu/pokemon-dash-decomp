/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020963d4(M2C_UNK *, s32);              /* extern */
M2C_UNK func_02097058(s32, M2C_UNK);                /* extern */
s32 func_02097130(s32);                             /* extern */
M2C_UNK func_020978b0(s32, s32);                    /* extern */
M2C_UNK func_0209803c(M2C_UNK *, s32);              /* extern */
s32 func_0209c99c();                                /* extern */
extern s32 data_020d5fa8;
extern s32 data_020d5fb4;
extern s32 data_020d5fb8;
extern s32 data_020d5fc0;
extern M2C_UNK data_020d5fd4;
extern s32 data_020d5fd8;

void func_02063678(s32 arg0, s32 arg1) {
    if (func_0209c99c() != 0) {
        return;
    }
    if (data_020d5fc0 != arg0) {
        func_02097058(data_020d5fd8, 1);
        func_020978b0(arg0, data_020d5fd8);
        data_020d5fa8 = func_02097130(data_020d5fd8);
        data_020d5fc0 = arg0;
        data_020d5fb4 = -1;
        data_020d5fb8 = -1;
    }
    if (arg1 <= 0) {
        return;
    }
    func_0209803c(&data_020d5fd4, arg0);
    func_020963d4(&data_020d5fd4, arg1);
}
