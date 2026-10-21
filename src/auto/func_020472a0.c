/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02081fec(M2C_UNK);                         /* extern */
M2C_UNK func_0209cdd4(s32, M2C_UNK);                /* extern */
M2C_UNK func_020ab4e0(s32, M2C_UNK, M2C_UNK);       /* extern */
extern s32 data_020d54cc;

void func_020472a0(s32 arg0) {
    s32 temp_r0;

    temp_r0       = func_02081fec(0xA00);
    data_020d54cc = temp_r0;
    func_020ab4e0(temp_r0, 0, 0xA00);
    if (arg0 == 0) {
        return;
    }
    func_0209cdd4(data_020d54cc, 0xA00);
}
