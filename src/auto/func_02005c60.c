/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02005ac4();                            /* extern */
M2C_UNK func_02005cbc(s32, s32, s32);               /* extern */
extern s32 data_020ccfe4;
extern s32 data_020d4e58;
extern s32 data_020d4e80;

void func_02005c60(s32 arg0, s32 arg1, s32 arg2) {
    if (data_020ccfe4 == arg0) {
        data_020d4e58 = arg1;
        data_020d4e80 = arg2;
        return;
    }
    func_02005ac4();
    func_02005cbc(arg0, arg1, arg2);
}
