/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02095540(M2C_UNK *, M2C_UNK);          /* extern */
s32 func_0209d650();                                /* extern */
M2C_UNK func_0209d664(s32);                         /* extern */
extern M2C_UNK data_020d7e70;

void func_02098090(M2C_UNK arg0) {
    s32 temp_r4;

    temp_r4 = func_0209d650();
    func_02095540(&data_020d7e70, arg0);
    func_0209d664(temp_r4);
}
