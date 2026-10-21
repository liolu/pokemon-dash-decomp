/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020b5358(void *, M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK *); /* extern */
extern M2C_UNK func_0209099c;
extern M2C_UNK func_020909b4;

void *func_02090928(void *arg0) {
    func_020b5358(arg0, 2, 0xC, &func_020909b4, &func_0209099c);
    M2C_FIELD(arg0, s32 *, 0x18) = 1;
    return arg0;
}
