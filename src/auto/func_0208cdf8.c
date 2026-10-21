/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0206e248(s32);                             /* extern */
M2C_UNK func_0206e5b8(s32, M2C_UNK, s32);           /* extern */
M2C_UNK func_0206e758(s32, s32);                    /* extern */
M2C_UNK func_0206e924(s32, M2C_UNK, s32);           /* extern */
M2C_UNK func_0206fee0(s32);                         /* extern */

void func_0208cdf8(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    M2C_FIELD(arg0, s32 *, 0x12C) = 0;
    func_0206e758(M2C_FIELD(arg0, s32 *, 0x68), 0x3FF);
    func_0206e924(M2C_FIELD(arg0, s32 *, 0x68), arg1, 0x3FF);
    func_0206fee0(M2C_FIELD(arg0, s32 *, 0x68));
    func_0206e5b8(M2C_FIELD(arg0, s32 *, 0x68), arg2, 0x3FF);
    M2C_FIELD(arg0, s32 *, 0x128) = func_0206e248(M2C_FIELD(arg0, s32 *, 0x68));
}
