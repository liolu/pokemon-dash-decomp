/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02080890(M2C_UNK);                         /* extern */
M2C_UNK func_02081edc();                            /* extern */
s32 func_02081fec(s32);                             /* extern */
M2C_UNK func_02085420(void *);                      /* extern */
M2C_UNK func_020855dc(void *, M2C_UNK);             /* extern */

void func_020853c8(void *arg0, M2C_UNK arg1) {
    if (M2C_FIELD(arg0, s32 *, 0x20) != 0) {
        func_02081edc();
    }
    M2C_FIELD(arg0, s32 *, 0x20) = func_02081fec((func_02080890(arg1) + 1) * 2);
    func_020855dc(arg0, arg1);
    func_02085420(arg0);
}
