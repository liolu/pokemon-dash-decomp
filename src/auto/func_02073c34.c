/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02081f64(void *);                      /* extern */
M2C_UNK func_020844f4(s32, s32);                    /* extern */
extern M2C_UNK data_020ccfdc;
extern M2C_UNK data_020d3988;
extern s32 data_020d6f88;

void *func_02073c34(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020d3988;
    if (M2C_FIELD(arg0, u8 *, 8) & 1) {
        func_020844f4(data_020d6f88, M2C_FIELD(arg0, s32 *, 0x14));
    }
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020ccfdc;
    func_02081f64(arg0);
    return arg0;
}
