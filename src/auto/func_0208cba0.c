/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0200d5c0(s32);                             /* extern */
M2C_UNK func_020816e4(void *, M2C_UNK, s32);        /* extern */
M2C_UNK func_0208c788(void *, void *);              /* extern */

s32 func_0208cba0(void *arg0, M2C_UNK arg1) {
    func_020816e4(arg0 + 0xA0, arg1,
                  func_0200d5c0(M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x60), void **, 8), s32 *, 0xC)));
    func_0208c788(arg0, arg0 + 0xAC);
    return 1;
}
