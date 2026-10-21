/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020849d4();           /* extern */
M2C_UNK func_0209a73c();                            /* extern */
extern s32 data_020d6f6c;

void func_0207fa4c(s32 arg0) {
    M2C_UNK saved_reg_r4;
    s32 var_r4;

    var_r4 = saved_reg_r4;
    func_0209a73c();
    switch (arg0) {                                 /* irregular */
        case 0x70:
            var_r4 = 0x60;
            break;
        case 0x0:
            var_r4 = 0;
            break;
        case 0x40:
        case 0x20:
            var_r4 = 0x10;
            break;
        case 0x60:
            var_r4 = 0x20;
            break;
        case 0x10:
            var_r4 = 0x40;
            break;
        case 0x50:
        case 0x30:
            var_r4 = 0x50;
            break;
        case 0x1:
        case 0x2:
        case 0x4:
        case 0x8:
            var_r4 = 0x80;
            break;
        case 0x3:
        case 0x5:
        case 0x6:
        case 0x9:
        case 0xA:
        case 0xC:
            var_r4 = 0x100;
            break;
        case 0x7:
        case 0xB:
        case 0xD:
        case 0xE:
            var_r4 = 0x180;
            break;
        case 0xF:
            var_r4 = 0x200;
            break;
    }
    func_020849d4(data_020d6f6c, 0, var_r4 << 0xA);
}
