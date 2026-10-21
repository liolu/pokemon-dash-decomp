/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0206d764(s32);                         /* extern */
M2C_UNK func_02081f64(void *);                      /* extern */
extern M2C_UNK data_020ccfdc;
extern M2C_UNK data_020d439c;

void *func_0208f2d4(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020d439c;
    func_0206d764(M2C_FIELD(arg0, s32 *, 8));
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020ccfdc;
    func_02081f64(arg0);
    return arg0;
}
