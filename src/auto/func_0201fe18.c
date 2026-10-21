/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02081f64();                      /* extern */
M2C_UNK func_020b523c(); /* extern */
extern M2C_UNK data_020ccfdc;
extern M2C_UNK data_020cd54c;
extern M2C_UNK func_02003a44;

void *func_0201fe18(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020cd54c;
    if (M2C_FIELD(arg0, s32 *, 0x2C) != 0) {
        func_02081f64();
    }
    func_020b523c(arg0 + 0x38, 2, 4, &func_02003a44);
    func_020b523c(arg0 + 0xC, 8, 4, &func_02003a44);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020ccfdc;
    func_02081f64(arg0);
    return arg0;
}
