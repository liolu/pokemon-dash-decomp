/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0201cd58(s32);                             /* extern */
M2C_UNK func_0201d074(s32, M2C_UNK);                /* extern */
M2C_UNK func_02047db4(void *);                      /* extern */
M2C_UNK func_02047e8c(void *);                      /* extern */
M2C_UNK func_0205cc04(void *);                      /* extern */
M2C_UNK func_0205cc84(void *);                      /* extern */
M2C_UNK func_02063030(M2C_UNK);                     /* extern */
M2C_UNK func_02063678(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_0207c7f4(M2C_UNK);                     /* extern */

void func_0205cb70(void *arg0) {
    func_02063678(0xE, 0x7F);
    func_0205cc84(arg0);
    func_0201d074(M2C_FIELD(arg0, s32 *, 0x6F0), 0);
    M2C_FIELD(arg0, s8 *, 0x6F5) = 1;
    func_02047db4(arg0);
    if (func_0201cd58(M2C_FIELD(arg0, s32 *, 0x6F0)) == 0) {
        do {
            func_0207c7f4(0);
        } while (func_0201cd58(M2C_FIELD(arg0, s32 *, 0x6F0)) == 0);
    }
    M2C_FIELD(arg0, s32 *, 0xEC) = 0x16;
    func_02063030(0x3C);
    func_02047e8c(arg0);
    func_0205cc04(arg0);
}
