/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0208cdd4(void *, M2C_UNK);             /* extern */

void func_02086c14(void *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 0x1BC) = arg1;
    if (arg1 != 0) {
        func_0208cdd4(arg0, 0);
        return;
    }
    func_0208cdd4(arg0, 0x1000);
}
