/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02081f64(M2C_UNK **);                  /* extern */
M2C_UNK func_02089438();                            /* extern */
extern M2C_UNK data_020d07fc;

M2C_UNK **func_02004750(M2C_UNK **arg0) {
    *arg0 = &data_020d07fc;
    func_02089438();
    func_02081f64(arg0);
    return arg0;
}
