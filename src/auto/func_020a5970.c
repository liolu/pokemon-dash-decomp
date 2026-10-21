/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0209d650();                                /* extern */
M2C_UNK func_0209d664(s32);                         /* extern */
s32 func_020a532c();                                /* extern */
void *func_020a5348();                              /* extern */

s32 func_020a5970(s32 arg0) {
    s32 temp_r0;
    s32 temp_r5;

    temp_r5 = func_0209d650();
    temp_r0 = func_020a532c();
    if (temp_r0 != 0) {
        func_0209d664(temp_r5);
        return temp_r0;
    }
    M2C_FIELD(func_020a5348(), s32 *, 0xB4) = arg0;
    func_0209d664(temp_r5);
    return 0;
}
