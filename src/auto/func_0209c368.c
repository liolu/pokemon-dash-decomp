/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0209c114();                            /* extern */
M2C_UNK func_0209c23c(void *);                      /* extern */
M2C_UNK func_0209c648(void *);                      /* extern */
M2C_UNK func_0209cc04(void *);                      /* extern */
M2C_UNK func_0209d650();                            /* extern */
extern void **data_020d844c;
extern M2C_UNK data_020d8468;

void func_0209c368(void) {
    void *temp_r4;

    func_0209d650();
    temp_r4 = *data_020d844c;
    func_0209cc04(temp_r4);
    func_0209c648(temp_r4);
    *((M2C_UNK *) ((s8 *) &data_020d8468 + (M2C_FIELD(temp_r4, s32 *, 0x6C) * 4))) = 0;
    M2C_FIELD(temp_r4, s32 *, 0x64)                                                = 2;
    func_0209c23c(temp_r4 + 0x90);
    func_0209c114();
}
