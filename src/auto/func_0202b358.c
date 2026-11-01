/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020b523c(void *, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
extern M2C_UNK data_020ccfdc;
extern M2C_UNK data_020cd848;
extern M2C_UNK func_02003a44;
extern M2C_UNK func_02027450;

void **func_0202b358(void **arg0) {
    *arg0 = (void *) &data_020cd848;
    func_020b523c((void *) ((u8 *) arg0 + 0x68), 9, 4, (M2C_UNK *) &func_02027450);
    func_020b523c((void *) ((u8 *) arg0 + 0x30), 5, 4, (M2C_UNK *) &func_02003a44);
    func_020b523c((void *) ((u8 *) arg0 + 0x1C), 5, 4, (M2C_UNK *) &func_02003a44);
    *arg0 = (void *) &data_020ccfdc;
    return arg0;
}
