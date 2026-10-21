/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0209bc28(u16);                         /* extern */
M2C_UNK func_020a3bc8(u16);                         /* extern */
extern s8 data_020d54c0;
extern u16 data_020d54c8;

void func_020472ec(s32 arg0) {
    if (arg0 != 0) {
        data_020d54c0 = 0;
    }
    func_020a3bc8(data_020d54c8);
    func_0209bc28(data_020d54c8);
}
