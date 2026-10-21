/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02081edc(s32);                         /* extern */
M2C_UNK func_020824c8(void *);                      /* extern */

void *func_02082590(void *arg0) {
    func_02081edc(M2C_FIELD(arg0, s32 *, 0x18));
    func_020824c8(arg0);
    return arg0;
}
