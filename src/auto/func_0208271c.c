/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02081fec(M2C_UNK);                         /* extern */

void *func_0208271c(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = func_02081fec(0x800);
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_FIELD(arg0, s32 *, 8);
    return arg0;
}
