/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0209da10(M2C_UNK);                     /* extern */
extern u8 *data_020d6540;

void func_02076b18(void) {
    u8 *temp_r4;

    temp_r4 = data_020d6540;
    func_0209da10(3);
    *temp_r4 &= 0xFD;
}
