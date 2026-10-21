/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02074c90();                            /* extern */
extern M2C_UNK data_020d39f4;
extern M2C_UNK data_020d3a30;

M2C_UNK **func_02086824(M2C_UNK **arg0) {
    *arg0 = &data_020d39f4;
    *arg0 = &data_020d3a30;
    func_02074c90(arg0);
    return arg0;
}
