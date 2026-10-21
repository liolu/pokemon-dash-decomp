/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02081f64();                      /* extern */
extern M2C_UNK data_020ccfa4;
extern M2C_UNK data_020ccfcc;
extern M2C_UNK data_020ccfdc;

void *func_02005894(void *arg0) {
    void *temp_r1;
    void *temp_r1_2;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020ccfa4;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020ccfcc;
    temp_r1                        = M2C_FIELD(arg0, void **, 8);
    if (temp_r1 != NULL) {
        M2C_FIELD(temp_r1, s32 *, 4) = 0;
    }
    temp_r1_2 = M2C_FIELD(arg0, void **, 8);
    if (temp_r1_2 != NULL) {
        M2C_FIELD(temp_r1_2, s32 *, 0) = (s32) (M2C_FIELD(temp_r1_2, s32 *, 0) - 1);
        if ((M2C_FIELD(temp_r1_2, s32 *, 0) == 0) && (M2C_FIELD(arg0, void **, 8) != NULL)) {
            func_02081f64();
        }
    }
    M2C_FIELD(arg0, void **, 8)    = NULL;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020ccfdc;
    func_02081f64(arg0);
    return arg0;
}
