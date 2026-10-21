/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_02020f38(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x74) = 0x80;
    M2C_FIELD(arg0, s32 *, 0x70) = (s32) (0 - M2C_FIELD(arg0, s32 *, 0x74));
}
