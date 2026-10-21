/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020862dc(void *, M2C_UNK);             /* extern */

void func_020864ec(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_FIELD(arg0, s32 *, 0)    = 0;
    M2C_FIELD(arg0, s32 *, 4)    = arg1;
    M2C_FIELD(arg0, s32 *, 8)    = arg2;
    M2C_FIELD(arg0, s32 *, 0xC)  = arg3;
    M2C_FIELD(arg0, s32 *, 0x10) = (s32) (arg2 - 1);
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) (arg3 - 0x1000);
    func_020862dc(arg0, 0);
}
