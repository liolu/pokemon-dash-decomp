/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020a9e68(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_020aac4c();                            /* extern */
extern M2C_UNK data_020c9568;
extern M2C_UNK data_020c959c;

void func_020a9ed4(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3) {
    if (arg3 != 0) {
        func_020a9e68(&data_020c9568, arg0, arg1, arg2);
        func_020aac4c();
    loop_2:
        goto loop_2;
    }
    func_020a9e68(&data_020c959c, arg0, arg1, arg2);
}
