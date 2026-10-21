/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02076b18();                            /* extern */
M2C_UNK func_02076b44();                            /* extern */
M2C_UNK func_02092758(void *);                      /* extern */

void func_020478fc(void *arg0) {
    func_02076b44();
    if (M2C_FIELD(arg0, u8 *, 0x118) != 0) {
        func_02092758(arg0);
    }
    func_02076b18();
}
