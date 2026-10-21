/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0209d6cc();                            /* extern */
extern s16 data_020db940;

void func_020a7824(s32 arg0, s32 arg1) {
    if ((arg1 & 0x3F) == 1) {
        data_020db940 = 1;
        return;
    }
    func_0209d6cc();
}
