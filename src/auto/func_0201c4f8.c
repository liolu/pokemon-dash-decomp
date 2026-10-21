/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02081f64();                            /* extern */
extern M2C_UNK data_020cd440;
extern M2C_UNK data_020cd4ac;

M2C_UNK **func_0201c4f8(M2C_UNK **arg0) {
    *arg0 = &data_020cd440;
    *arg0 = &data_020cd4ac;
    func_02081f64(arg0);
    return arg0;
}
