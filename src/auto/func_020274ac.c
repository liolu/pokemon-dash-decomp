/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02081f64();                            /* extern */
extern M2C_UNK data_020ccfdc;
extern M2C_UNK data_020d4414;

M2C_UNK **func_020274ac(M2C_UNK **arg0) {
    *arg0 = &data_020d4414;
    *arg0 = &data_020ccfdc;
    func_02081f64(arg0);
    return arg0;
}
