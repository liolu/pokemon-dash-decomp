/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020849d4();           /* extern */
M2C_UNK func_0209a060();                            /* extern */
extern s32 data_020d6f74;

void func_0207f8b0(s32 arg0) {
    M2C_UNK saved_reg_r4;
    s32 var_r4;

    var_r4 = saved_reg_r4;
    func_0209a060();
    switch (arg0) {                                 /* irregular */
        case 0x4:
            var_r4 = 0x80;
            break;
        case 0x180:
            var_r4 = 0x30;
            break;
        case 0x0:
            var_r4 = 0;
            break;
        case 0x80:
            var_r4 = 0x20;
            break;
    }
    func_020849d4(data_020d6f74, 0, var_r4 << 0xA);
}
