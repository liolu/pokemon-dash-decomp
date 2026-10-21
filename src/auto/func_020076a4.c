/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0200771c();                                /* extern */
M2C_UNK func_02007754();                            /* extern */
M2C_UNK func_0209dc94(s32, M2C_UNK *, M2C_UNK);     /* extern */
extern s8 data_020d4dec;
extern s8 data_020d4df4;
extern s32 data_020d4e60;
extern s32 data_020d4e6c;
extern M2C_UNK data_020d4f00;

s32 func_020076a4(s32 arg0) {
    if (func_0200771c() == 0) {
        return 0;
    }
    func_0209dc94((arg0 * 0xE0) + data_020d4e60 + 0x50, &data_020d4f00, 0x16);
    func_02007754();
    data_020d4e6c = arg0;
    data_020d4dec = 1;
    data_020d4df4 = 1;
    return 1;
}
