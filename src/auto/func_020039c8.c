/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200cb60(void *);                      /* extern */
M2C_UNK func_02081f64();                            /* extern */
M2C_UNK func_020b523c(void *, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
extern M2C_UNK data_020ccf10;
extern M2C_UNK func_02003a44;

void *func_020039c8(void *arg0) {
    s32 *temp_r1;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020ccf10;
    func_020b523c(arg0 + 0x78, 4, 4, &func_02003a44);
    temp_r1 = M2C_FIELD(arg0, s32 **, 0x74);
    if (temp_r1 != NULL) {
        *temp_r1 -= 1;
        if ((*temp_r1 == 0) && (M2C_FIELD(arg0, s32 **, 0x74) != NULL)) {
            func_02081f64();
        }
    }
    M2C_FIELD(arg0, s32 **, 0x74) = NULL;
    func_0200cb60(arg0);
    return arg0;
}
