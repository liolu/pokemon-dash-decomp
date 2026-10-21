/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02081fec(M2C_UNK);                         /* extern */
M2C_UNK func_0208271c(void *);                      /* extern */
M2C_UNK func_0209c3c0(void *, M2C_UNK *, void *, s32, s32, s32); /* extern */
extern M2C_UNK data_020d3c98;
extern M2C_UNK func_0207c640;

void *func_0207caec(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020d3c98;
    M2C_FIELD(arg0, s8 *, 0x9C)    = 0;
    M2C_FIELD(arg0, s32 *, 0xA0)   = 0;
    M2C_FIELD(arg0, s32 *, 0xA4)   = 0;
    func_0208271c(arg0 + 0xA8);
    M2C_FIELD(arg0, s32 *, 0xB4) = 0;
    M2C_FIELD(arg0, s32 *, 0x98) = func_02081fec(0x2000);
    func_0209c3c0(arg0 + 4, &func_0207c640, arg0, M2C_FIELD(arg0, s32 *, 0x98) + 0x2000, 0x2000, 0xF);
    return arg0;
}
