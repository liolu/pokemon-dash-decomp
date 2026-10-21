/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0206d78c(M2C_UNK);                         /* extern */
extern M2C_UNK data_020ccfdc;
extern M2C_UNK data_020d439c;

void *func_0208f344(void *arg0, M2C_UNK arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020ccfdc;
    M2C_FIELD(arg0, s32 *, 4)      = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020d439c;
    M2C_FIELD(arg0, s32 *, 8)      = func_0206d78c(arg1);
    return arg0;
}
