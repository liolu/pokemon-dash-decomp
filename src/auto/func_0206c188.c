/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02081f64(M2C_UNK **);                  /* extern */
M2C_UNK func_0208ffd4();                            /* extern */
extern M2C_UNK data_020d384c;
extern M2C_UNK data_020d3894;

M2C_UNK **func_0206c188(M2C_UNK **arg0) {
    *arg0 = &data_020d384c;
    *arg0 = &data_020d3894;
    func_0208ffd4(arg0);
    func_02081f64(arg0);
    return arg0;
}
