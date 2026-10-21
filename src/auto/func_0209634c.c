/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0209e404(u8);                          /* extern */

void func_0209634c(void **arg0) {
    void *temp_r0;

    temp_r0 = *arg0;
    if (temp_r0 == NULL) {
        return;
    }
    func_0209e404(M2C_FIELD(temp_r0, u8 *, 0x3C));
}
