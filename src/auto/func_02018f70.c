/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200cb60();                            /* extern */
M2C_UNK func_02081f64(M2C_UNK **);                  /* extern */
extern M2C_UNK data_020cd24c;

M2C_UNK **func_02018f70(M2C_UNK **arg0) {
    *arg0 = &data_020cd24c;
    func_0200cb60();
    func_02081f64(arg0);
    return arg0;
}
