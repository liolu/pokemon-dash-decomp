#include "m2c.h"

extern void *data_020d674c;

void func_020824c8(void *arg0) {
    void *temp_r2;
    void *temp_r2_2;

    temp_r2 = M2C_FIELD(arg0, void **, 0x20);
    if (temp_r2 != NULL) {
        M2C_FIELD(temp_r2, void **, 0x24) = (void *) M2C_FIELD(arg0, void **, 0x24);
    }
    temp_r2_2 = M2C_FIELD(arg0, void **, 0x24);
    if (temp_r2_2 != NULL) {
        M2C_FIELD(temp_r2_2, void **, 0x20) = (void *) M2C_FIELD(arg0, void **, 0x20);
    }
    if (arg0 == data_020d674c) {
        data_020d674c = M2C_FIELD(arg0, void **, 0x24);
    }
}
