/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0207e750(void *);                      /* extern */
M2C_UNK func_0207e7c4(void *);                      /* extern */
M2C_UNK func_0207f230(void *);                      /* extern */
M2C_UNK func_0207f4a0(void *);                      /* extern */
M2C_UNK func_02081f64(void *);                      /* extern */
extern void *data_020d51c0;
extern void *data_020d51e4;
extern void *data_020d51e8;
extern void *data_020d522c;
extern void *data_020d5230;
extern void *data_020d5244;
extern void *data_020d5274;
extern void *data_020d5278;

void func_0203b554(void) {
    void *temp_r4;
    void *temp_r4_2;
    void *temp_r4_3;
    void *temp_r4_4;
    void *temp_r4_5;
    void *temp_r4_6;
    void *temp_r4_7;
    void *temp_r4_8;
    void *temp_r5;
    void *temp_r5_2;

    temp_r4 = data_020d5274;
    if (temp_r4 != NULL) {
        func_0207e7c4(temp_r4);
        func_02081f64(temp_r4);
    }
    temp_r4_2 = data_020d5278;
    if (temp_r4_2 != NULL) {
        temp_r5 = M2C_FIELD(temp_r4_2, void **, 0x50);
        if (temp_r5 != NULL) {
            func_0207f230(temp_r5);
            func_02081f64(temp_r5);
        }
        func_0207e750(temp_r4_2);
        func_02081f64(temp_r4_2);
    }
    temp_r4_3 = data_020d51e8;
    if (temp_r4_3 != NULL) {
        temp_r5_2 = M2C_FIELD(temp_r4_3, void **, 0x50);
        if (temp_r5_2 != NULL) {
            func_0207f230(temp_r5_2);
            func_02081f64(temp_r5_2);
        }
        func_0207e750(temp_r4_3);
        func_02081f64(temp_r4_3);
    }
    temp_r4_4 = data_020d522c;
    if (temp_r4_4 != NULL) {
        func_0207f4a0(temp_r4_4);
        func_02081f64(temp_r4_4);
    }
    temp_r4_5 = data_020d51c0;
    if (temp_r4_5 != NULL) {
        func_0207f4a0(temp_r4_5);
        func_02081f64(temp_r4_5);
    }
    temp_r4_6 = data_020d51e4;
    if (temp_r4_6 != NULL) {
        func_0207f4a0(temp_r4_6);
        func_02081f64(temp_r4_6);
    }
    temp_r4_7 = data_020d5244;
    if (temp_r4_7 != NULL) {
        func_0207f4a0(temp_r4_7);
        func_02081f64(temp_r4_7);
    }
    temp_r4_8 = data_020d5230;
    if (temp_r4_8 == NULL) {
        return;
    }
    func_0207f4a0(temp_r4_8);
    func_02081f64(temp_r4_8);
}
