/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02081edc(s32);                         /* extern */
M2C_UNK func_02081f64(void *);                      /* extern */
M2C_UNK func_02087d14(void *);                      /* extern */
extern M2C_UNK data_020d3800;

void *func_0206bf9c(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020d3800;
    func_02081edc(M2C_FIELD(arg0, s32 *, 0x1CC));
    func_02087d14(arg0);
    func_02081f64(arg0);
    return arg0;
}
