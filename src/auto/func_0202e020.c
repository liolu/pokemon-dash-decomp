/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0202d994(void *, M2C_UNK);             /* extern */

void func_0202e020(void *arg0) {
    if (M2C_FIELD(arg0, volatile s32 *, 0x10) == 8) {
        return;
    }
    if (M2C_FIELD(arg0, volatile s32 *, 0x10) == 7) {
        func_0202d994(arg0, 3);
    } else {
        func_0202d994(arg0, 0);
    }
    M2C_FIELD(arg0, volatile s32 *, 0xC) = 3;
}
