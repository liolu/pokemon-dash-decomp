/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02081f64();                      /* extern */
M2C_UNK func_02082b74();                      /* extern */
M2C_UNK func_02082ee8();                         /* extern */
M2C_UNK func_02083194();                      /* extern */
M2C_UNK func_02083574();                      /* extern */
extern M2C_UNK data_020ccfdc;
extern M2C_UNK data_020cd2e0;
extern M2C_UNK data_020d3e6c;

void *func_0200f2e0(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020cd2e0;
    func_02082ee8(arg0 + 0x88);
    func_02083574(arg0 + 0x84);
    func_02083194(arg0 + 0x74);
    func_02083194(arg0 + 0x64);
    func_02083194(arg0 + 0x54);
    func_02083194(arg0 + 0x44);
    M2C_FIELD(arg0, M2C_UNK **, 0x14) = &data_020d3e6c;
    func_02082b74(arg0 + 0x14);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020ccfdc;
    func_02081f64(arg0);
    return arg0;
}
