/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02095cd8(void *);                      /* extern */
M2C_UNK func_0209e41c(u8, s32);                     /* extern */
M2C_UNK func_0209e434(u8);                          /* extern */

void func_02095de4(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x2C) == 2) {
        func_0209e41c(M2C_FIELD(arg0, u8 *, 0x3C), 0xFFFFFD2D);
    }
    func_0209e434(M2C_FIELD(arg0, u8 *, 0x3C));
    func_02095cd8(arg0);
}
