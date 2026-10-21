/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02096658(void *);                      /* extern */
M2C_UNK func_02098118(void *);                      /* extern */
M2C_UNK func_0209cc54(M2C_UNK *);                   /* extern */
M2C_UNK func_0209ccc8(M2C_UNK *);                   /* extern */
extern M2C_UNK data_020d7e88;

void func_020981f4(void *arg0) {
    func_0209ccc8(&data_020d7e88);
    if (((s32) (M2C_FIELD(arg0, s32 *, 0x10C) << 0x1E) >> 0x1F) != 0) {
        func_02096658(arg0);
    }
    func_02098118(arg0);
    func_0209cc54(&data_020d7e88);
}
