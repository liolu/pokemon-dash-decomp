/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0207c7f4(M2C_UNK);                     /* extern */
s32 func_02088c4c(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */

void func_0208828c(M2C_UNK arg0, M2C_UNK arg1) {
    if (func_02088c4c(arg0, arg1, 0) != 0) {
        return;
    }
    do {
        func_0207c7f4(0);
    } while (func_02088c4c(arg0, arg1, 0) == 0);
}
