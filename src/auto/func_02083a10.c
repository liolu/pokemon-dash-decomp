/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020849d4();           /* extern */
M2C_UNK func_02099fe4();                            /* extern */
M2C_UNK func_0209dbf8(); /* extern */
extern s32 data_020d4534;
extern M2C_UNK data_020d6b60;
extern s32 data_020d6f70;
extern s32 data_020d6f80;
extern s32 data_020d6fa4;

void func_02083a10(s32 arg0) {
    M2C_UNK saved_reg_r4;
    s32 var_r4;

    var_r4 = saved_reg_r4;
    func_02099fe4();
    switch (arg0) {                                 /* irregular */
        case 0x100:
            var_r4 = 0x10;
            break;
        case 0x0:
            var_r4 = 0;
            break;
        case 0x8:
            var_r4 = 0x80;
            break;
    }
    func_020849d4(data_020d6f80, 0, var_r4 << 0xA);
    func_020849d4(data_020d6fa4, 0, 0x80);
    func_020849d4(data_020d6f70, 0, 0x20);
    func_0209dbf8(data_020d4534, &data_020d6b60, 0xC0, 0x400);
}
