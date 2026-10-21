/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02023124(void *, s32);                 /* extern */
M2C_UNK func_020231b0(void *);                      /* extern */

void *func_02023404(void *arg0, s32 arg1, s32 *arg2, s32 arg3) {
    M2C_FIELD(arg0, s32 *, 0)    = (s32) *arg2;
    M2C_FIELD(arg0, s32 *, 4)    = arg1;
    M2C_FIELD(arg0, s32 **, 8)   = arg2;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    M2C_FIELD(arg0, s8 *, 0x28)  = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = -1;
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    M2C_FIELD(arg0, s32 *, 0x3C) = arg3;
    func_02023124(arg0, arg3);
    func_020231b0(arg0);
    return arg0;
}
