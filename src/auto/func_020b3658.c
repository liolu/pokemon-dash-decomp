/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_020b389c(void *, M2C_UNK *);             /* extern */

void func_020b3658(u8 *arg0) {
    M2C_UNK sp0;
    u8 temp_r4;
    void *temp_r0;

    temp_r4 = *arg0;
    temp_r0 = func_020b389c(arg0 + 2, &sp0);
    if (!(temp_r4 & 0x40)) {
        return;
    }
    func_020b389c(temp_r0, &sp0);
}
