/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_02076c50(s32 arg0) {
    if (arg0 != 0) {
        *(s32 *) 0x04000000 |= 0x100;
        return;
    }
    *(M2C_UNK *) 0x04000000 = (s32) (*(M2C_UNK *) 0x04000000 & ~0x100);
}
