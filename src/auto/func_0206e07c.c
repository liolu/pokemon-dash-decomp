/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020750f4();                            /* extern */
M2C_UNK func_0207521c(M2C_UNK **);                  /* extern */
extern M2C_UNK data_020cd874;
extern M2C_UNK data_020d3b18;

M2C_UNK **func_0206e07c(M2C_UNK **arg0) {
    *arg0 = &data_020d3b18;
    func_020750f4();
    *arg0 = &data_020cd874;
    func_0207521c(arg0);
    return arg0;
}
