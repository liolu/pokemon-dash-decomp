/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020a3be8(u16);                         /* extern */
M2C_UNK func_020a3c08(u16);                         /* extern */
extern s32 data_020da33c;

s32 func_020a0e9c(s32 arg0, s32 arg1) {
    switch (arg1) {                                 /* irregular */
        case 9:
            func_020a3c08((u16) data_020da33c);
            return 0;
        case 10:
            func_020a3be8((u16) data_020da33c);
            return 0;
        case 1:
            return 4;
        default:
            return 8;
    }
}
