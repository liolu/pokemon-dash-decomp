/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020754dc();                            /* extern */

void func_020754bc(void *arg0) {
    func_020754dc();
    M2C_FIELD(arg0, u8 *, 0x10) = (u8) (M2C_FIELD(arg0, u8 *, 0x10) & 0xF0);
}
