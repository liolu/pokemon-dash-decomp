/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_0208300c(s32 arg0, s32 arg1) {
    switch (arg0) {                                 /* irregular */
        case 0:
            if (arg1 != 0) {
                *(s32 *) 0x04000000 |= 0x1000;
            } else {
                *(M2C_UNK *) 0x04000000 = (s32) (*(M2C_UNK *) 0x04000000 & ~0x1000);
            }
            return;
        case 1:
            if (arg1 != 0) {
                *(s32 *) 0x04001000 |= 0x1000;
                return;
            }
            *(M2C_UNK *) 0x04001000 = (s32) (*(M2C_UNK *) 0x04001000 & ~0x1000);
            return;
    }
}
