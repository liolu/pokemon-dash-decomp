/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020849d4(M2C_UNK, M2C_UNK, M2C_UNK);
void func_0209a200(M2C_UNK);

extern void *data_020d6540;
extern s32 data_020d6f84;

void func_02076d3c(s32 arg0) {
    s32 var_r1;

    M2C_FIELD(data_020d6540, s32 *, 0x74) = arg0;
    func_0209a200(arg0);
    switch (arg0) {
        default:
        /* fallthrough */
        case 0:
            var_r1 = 0;
            break;
        case 1:
        case 2:
        case 4:
        case 8:
            var_r1 = 0x80;
            break;
        case 3:
        case 6:
        case 12:
            var_r1 = 0x100;
            break;
        case 7:
        case 14:
            var_r1 = 0x180;
            break;
        case 15:
            var_r1 = 0x200;
            break;
        case 5:
        case 9:
        case 10:
            var_r1 = 0x100;
            break;
        case 11:
        case 13:
            var_r1 = 0x180;
            break;
    }
    func_020849d4(data_020d6f84, 0, var_r1 << 0xA);
}
