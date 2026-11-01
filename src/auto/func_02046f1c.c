/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_020472a0(s32);                             /* extern */
s32 func_02047330(s32);                             /* extern */
s32 func_020a416c(s32, s32, s32, s32, s32, s32);    /* extern */
extern M2C_UNK data_020cf474;
extern M2C_UNK data_020d54cc;

s32 func_02046f1c(s32 arg0) {
    if (*(u8 *) &data_020cf474 == 0) {
        return 1;
    }
    func_020472a0(1);
    func_02047330(1);
    func_020a416c(arg0 << 12, *(s32 *) &data_020d54cc, 0x40, 0, 0, 1);
    return 1;
}
