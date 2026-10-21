/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020a4158();                                /* extern */
M2C_UNK func_020a4504(void **);                     /* extern */
M2C_UNK func_020a4c54(void **, M2C_UNK, M2C_UNK);   /* extern */

void func_020a44d0(void **arg0) {
    M2C_FIELD(*arg0, s32 *, 4) = func_020a4158();
    func_020a4c54(arg0, 2, 1);
    func_020a4504(arg0);
}
