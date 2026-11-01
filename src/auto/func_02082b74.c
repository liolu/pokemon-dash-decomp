/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0207ce2c(M2C_UNK *, void *, s32 *, void **); /* extern */
M2C_UNK func_02082964(void *, M2C_UNK);             /* extern */
M2C_UNK func_02082c60(void *);                      /* extern */
extern M2C_UNK data_020d3f90;

void *func_02082b74(void *arg0) {
    M2C_UNK sp0;
    s32 sp4;
    void *sp8;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020d3f90;
    func_02082964(arg0, 0);
    func_02082c60(arg0);
    sp8 = arg0 + 0x1C;
    sp4 = M2C_FIELD(arg0, s32 *, 0x20);
    func_0207ce2c(&sp0, arg0 + 0x18, &sp4, &sp8);
    return arg0;
}
