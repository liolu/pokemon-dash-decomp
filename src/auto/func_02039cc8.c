/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02005ac4();                            /* extern */
M2C_UNK func_02036638();            /* extern */
M2C_UNK func_0203adf0();                            /* extern */
M2C_UNK func_0203b554();                            /* extern */
M2C_UNK func_0207dfe8();                /* extern */
M2C_UNK func_02081edc();                         /* extern */
M2C_UNK func_02081f64(s32);                         /* extern */
M2C_UNK func_02082ffc();                     /* extern */
extern s32 data_020d51b4;
extern s32 data_020d51c8;
extern s32 data_020d51d0;
extern s32 data_020d51e8;
extern s32 data_020d51f4;
extern s32 data_020d51fc;
extern s32 *data_020d5208;
extern s32 data_020d5210;
extern s32 data_020d5220;
extern s32 data_020d5234;
extern s32 data_020d5240;
extern s32 data_020d5274;
extern s32 data_020d5278;
extern s32 *data_020d5284;
extern s32 data_020d5288;
extern s32 data_020d5290;
extern s32 data_020d529c;
extern s32 data_020d52b0;

void func_02039cc8(void) {
    s32 *p;
    s32 *q;

    func_02036638(0, 1);
    if (data_020d529c != 0) {
        func_02081edc(data_020d5288);
    }
    if (data_020d51d0 != 0) {
        func_02081edc(data_020d5290);
    }
    if (data_020d5220 != 0) {
        func_02081edc(data_020d51f4);
    }
    if (data_020d5234 != 0) {
        func_02081edc(data_020d52b0);
    }
    if (data_020d51c8 != 0) {
        func_02081edc(data_020d51fc);
    }
    data_020d51c8 = 0;
    data_020d5234 = 0;
    data_020d51d0 = 0;
    data_020d5220 = 0;
    data_020d529c = 0;
    func_0207dfe8(data_020d5274, 0);
    func_0207dfe8(data_020d5278, 0);
    func_0207dfe8(data_020d51e8, 0);
    func_02082ffc(1);
    func_0203b554();
    func_0203adf0();
    if (data_020d5240 != 0) {
        func_02081f64(data_020d5240);
    }
    if (data_020d5210 != 0) {
        func_02081f64(data_020d5210);
    }
    if (data_020d51b4 != 0) {
        func_02081f64(data_020d51b4);
    }
    func_02005ac4();
    p = data_020d5284;
    if (p != NULL) {
        *p -= 1;
        if ((*p == 0) && (data_020d5284 != NULL)) {
            func_02081f64((s32) data_020d5284);
        }
    }
    data_020d5284 = NULL;
    q             = data_020d5208;
    if (q != NULL) {
        *q -= 1;
        if ((*q == 0) && (data_020d5208 != NULL)) {
            func_02081f64((s32) data_020d5208);
        }
    }
    data_020d5208 = NULL;
}
