/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0207cfac(void *);                      /* extern */
M2C_UNK func_02082964(void *, M2C_UNK);             /* extern */
M2C_UNK func_02082cc8(void *);                      /* extern */
extern M2C_UNK data_020d3f90;

void *func_02082c10(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020d3f90;
    M2C_FIELD(arg0, s32 *, 4)      = arg1;
    M2C_FIELD(arg0, s32 *, 0xC)    = 0;
    M2C_FIELD(arg0, s8 *, 0x10)    = 0;
    M2C_FIELD(arg0, s32 *, 0x14)   = 0;
    func_0207cfac(arg0 + 0x18);
    func_02082cc8(arg0);
    func_02082964(arg0, 0);
    return arg0;
}
