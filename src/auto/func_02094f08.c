/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0209bb14(s32, M2C_UNK *);              /* extern */
extern s16 data_020d7538;
extern s32 data_020d755c;
extern M2C_UNK func_02094f6c;

s32 func_02094f08(u32 arg0) {
    if (arg0 > 3U) {
        return 1;
    }
    data_020d7538 = (s16) arg0;
    data_020d755c = (arg0 * 4) + 0x04000100;
    func_0209bb14(8 << arg0, &func_02094f6c);
    return 0;
}
