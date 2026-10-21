/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0202634c(s32);                             /* extern */
extern s32 data_020d5164;

s32 func_0200c760(void *arg0) {
    if ((M2C_FIELD(arg0, s32 *, 0xC) & 0x20) && (func_0202634c(data_020d5164) == 0)) {
        return 1;
    }
    return 0;
}
