/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0206ffcc(void *);                      /* extern */
M2C_UNK func_02075470(void *);                      /* extern */
M2C_UNK func_02081f64(void *);                      /* extern */

void func_0206f680(void *arg0) {
    void *temp_r4;
    void *temp_r4_2;
    void *temp_r4_3;
    void *temp_r4_4;

    temp_r4 = M2C_FIELD(arg0, void **, 8);
    if (temp_r4 != NULL) {
        func_0206f680(temp_r4);
        func_02081f64(temp_r4);
    }
    temp_r4_2 = M2C_FIELD(arg0, void **, 0x10);
    if (temp_r4_2 != NULL) {
        func_0206f680(temp_r4_2);
        func_02081f64(temp_r4_2);
    }
    temp_r4_3 = M2C_FIELD(arg0, void **, 0x14);
    if (temp_r4_3 != NULL) {
        func_0206ffcc(temp_r4_3);
        func_02081f64(temp_r4_3);
    }
    temp_r4_4 = M2C_FIELD(arg0, void **, 0xFC);
    if (temp_r4_4 != NULL) {
        func_02075470(temp_r4_4);
        func_02081f64(temp_r4_4);
    }
    func_02081f64(M2C_FIELD(arg0, void **, 0x100));
}
