/* compiler: 1.2/sp2p3  */
#include "m2c.h"

u32 func_020239a0(s32);                             /* extern */
s32 func_020239ec(s32);                             /* extern */
s32 func_02023acc(s32);                             /* extern */
extern s32 data_020d5164;

s32 func_0200c6c0(void) {
    if ((func_020239ec(data_020d5164) != 0) && (func_02023acc(data_020d5164) != 0) &&
        (func_020239a0(data_020d5164) >= 0x28U) && (func_020239a0(data_020d5164) <= 0xD7U)) {
        return 1;
    }
    return 0;
}
