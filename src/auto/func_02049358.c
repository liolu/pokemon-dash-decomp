/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02076d3c(M2C_UNK);                     /* extern */
M2C_UNK func_02083abc(M2C_UNK);                     /* extern */
M2C_UNK func_02083aec(M2C_UNK);                     /* extern */
M2C_UNK func_02099ab0(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */

void func_02049358(void *arg0) {
    func_02076d3c(0);
    func_02083aec(1);
    func_02083abc(0x40);
    func_02099ab0(1, 5, 0);
    M2C_FIELD(arg0, s8 *, 0x6F4) = 1;
}
