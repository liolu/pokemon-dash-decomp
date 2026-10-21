/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02095edc(void *);                      /* extern */
M2C_UNK func_0209e460(u8);                          /* extern */
s32 func_0209e650();                                /* extern */

void func_02095fd8(void *arg0) {
    func_0209e460(M2C_FIELD(arg0, u8 *, 0x3C));
    func_02095edc(arg0);
    M2C_FIELD(arg0, s32 *, 0x30) = func_0209e650();
    M2C_FIELD(arg0, s8 *, 0x2C)  = 1;
}
