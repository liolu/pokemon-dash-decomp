/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0201c8c8(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_0202e134();                            /* extern */
M2C_UNK func_02062e18(M2C_UNK);                     /* extern */
M2C_UNK func_02062e40(M2C_UNK);                     /* extern */
M2C_UNK func_02063070(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */

void func_0202d994(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x64) = arg1;
    func_0202e134();
    if (arg1 == 0) {
        func_02062e40(0xF);
        func_0201c8c8(0x400, 0, 1);
        func_0201c8c8(0x400, 0, 2);
    } else {
        func_02062e18(0x3C);
        func_0201c8c8(0x400, -0x1000, 1);
        func_0201c8c8(0x400, -0x1000, 0);
    }
    func_02063070(2, 0, 0);
}
