/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_02020f04(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x70) <= 0) {
        M2C_FIELD(arg0, s32 *, 0x74) = 0x20;
        M2C_FIELD(arg0, s32 *, 0x70) = 1;
    }
}
