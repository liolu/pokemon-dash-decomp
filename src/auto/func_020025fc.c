/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020026b8(M2C_UNK);                     /* extern */
M2C_UNK func_02002704(s32, M2C_UNK, M2C_UNK);       /* extern */
s32 func_020027c8(M2C_UNK);                         /* extern */
M2C_UNK func_02002c5c();                            /* extern */
extern s32 data_020d4dbc;
extern s32 data_020d4dc0;
extern s32 data_020d4dc4;
extern s32 data_020d4dcc;

s32 func_020025fc(s32 arg0, M2C_UNK arg1) {
    s32 temp_r0;

    data_020d4dbc = data_020d4dc0;
    if (arg0 == 0) {
        goto case0;
    }
    if (arg0 == 1) {
        goto case1;
    }
    return arg0;
case0:
    temp_r0       = func_020027c8(arg1);
    data_020d4dcc = temp_r0;
    if ((temp_r0 == 0) && (temp_r0 == 2)) {
        func_02002c5c();
        return data_020d4dcc;
    }
    func_02002704((data_020d4dc4 & 1) * 0xE, 0, arg1);
    return data_020d4dcc;
case1:
    func_020026b8(arg1);
    return data_020d4dcc;
}
