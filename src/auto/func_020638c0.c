/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02081f64();                            /* extern */
extern M2C_UNK data_020ccfdc;
extern M2C_UNK data_020cd140;
extern M2C_UNK data_020d073c;

M2C_UNK **func_020638c0(M2C_UNK **arg0) {
    *arg0 = &data_020d073c;
    *arg0 = &data_020cd140;
    *arg0 = &data_020ccfdc;
    func_02081f64(arg0);
    return arg0;
}
