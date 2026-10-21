/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0200d5c0(s32);                             /* extern */

void func_02080dcc(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s32 *, 0) = func_0200d5c0(M2C_FIELD(arg1, s32 *, 0x24));
    M2C_FIELD(arg0, s32 *, 4) = func_0200d5c0(M2C_FIELD(arg1, s32 *, 0x28));
    M2C_FIELD(arg0, s32 *, 8) = func_0200d5c0(M2C_FIELD(arg1, s32 *, 0x2C));
}
