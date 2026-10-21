/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02089a5c();                            /* extern */
extern M2C_UNK data_020d07fc;

void *func_020669a4(void *arg0) {
    func_02089a5c();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020d07fc;
    M2C_FIELD(arg0, s8 *, 0xBC)    = 0;
    M2C_FIELD(arg0, s8 *, 0xBD)    = 0;
    M2C_FIELD(arg0, s8 *, 0xBE)    = 0;
    M2C_FIELD(arg0, s8 *, 0xBF)    = 0;
    return arg0;
}
