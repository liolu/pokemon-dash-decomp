/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02081f64(M2C_UNK **);                  /* extern */
M2C_UNK func_020b55ec();                            /* extern */
extern M2C_UNK data_020d4d00;

M2C_UNK **func_020b554c(M2C_UNK **arg0) {
    *arg0 = &data_020d4d00;
    func_020b55ec();
    func_02081f64(arg0);
    return arg0;
}
