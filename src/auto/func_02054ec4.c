/* compiler: 1.2/b56 */
#include "m2c.h"

M2C_UNK func_02004864(void **, void *);             /* extern */
M2C_UNK func_0207462c(void *, M2C_UNK);             /* extern */
M2C_UNK func_02074644(void *, M2C_UNK);             /* extern */
M2C_UNK func_0207d830(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_0207dfe8(s32, M2C_UNK);                /* extern */
M2C_UNK func_0207e35c(s32, M2C_UNK);                /* extern */
M2C_UNK func_0207e398(s32, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32); /* extern */
M2C_UNK func_0207f230(M2C_UNK **);                  /* extern */
M2C_UNK func_02081edc(s32);                         /* extern */
M2C_UNK func_02081f64(M2C_UNK **);                  /* extern */
M2C_UNK func_02082b74(M2C_UNK **);                  /* extern */
M2C_UNK func_02082ee8(M2C_UNK **);                  /* extern */
M2C_UNK func_02082ffc(M2C_UNK);                     /* extern */
M2C_UNK func_02083194(M2C_UNK **);                  /* extern */
M2C_UNK func_020833e4(M2C_UNK **);                  /* extern */
extern M2C_UNK data_020d3e6c;

void func_02054ec4(void *arg0) {
    s32 *rc;
    void *spC;
    void *sp10;
    M2C_UNK **temp_r5;
    M2C_UNK **temp_r5_2;
    M2C_UNK **temp_r5_3;
    M2C_UNK **temp_r5_4;
    M2C_UNK **temp_r5_5;
    M2C_UNK **temp_r5_6;
    s32 var_r7;
    M2C_UNK **temp_r6;
    void **temp_r0;

    temp_r0 = M2C_FIELD(arg0, void ***, 0x6F0);
    if (temp_r0 != NULL) {
        (*(void (**)(void *))(*(u8 **) temp_r0 + 4))(temp_r0);
    }
    M2C_FIELD(arg0, void ***, 0x6F0) = NULL;
    func_02081edc(M2C_FIELD(arg0, s32 *, 0x660));
    func_02081edc(M2C_FIELD(arg0, s32 *, 0x664));
    func_02081edc(M2C_FIELD(arg0, s32 *, 0x65C));
    func_02081edc(M2C_FIELD(arg0, s32 *, 0x658));
    func_02081edc(M2C_FIELD(arg0, s32 *, 0x5FC));
    func_02081edc(M2C_FIELD(arg0, s32 *, 0x5F8));
    func_0207dfe8(M2C_FIELD(arg0, s32 *, 0x124), 0);
    func_0207e398(M2C_FIELD(arg0, s32 *, 0x124), 0, 1, 0, 0, 0, 0);
    func_0207e35c(M2C_FIELD(arg0, s32 *, 0x124), 0);
    temp_r5 = M2C_FIELD(arg0, M2C_UNK ***, 0x618);
    if (temp_r5 != NULL) {
        func_0207f230(temp_r5);
        func_02081f64(temp_r5);
    }
    func_0207dfe8(M2C_FIELD(arg0, s32 *, 0x128), 0);
    func_0207d830(M2C_FIELD(arg0, s32 *, 0x128), 0, 0);
    func_02082ffc(1);
    var_r7 = 0;
    do {
        temp_r6 = ((M2C_UNK ***) ((u8 *) arg0 + 0x630))[var_r7];
        if (temp_r6 != NULL) {
            *temp_r6 = &data_020d3e6c;
            func_02082b74(temp_r6);
            func_02081f64(temp_r6);
        }
        var_r7 += 1;
    } while (var_r7 < 8);
    temp_r5_2 = M2C_FIELD(arg0, M2C_UNK ***, 0x62C);
    if (temp_r5_2 != NULL) {
        func_02082ee8(temp_r5_2);
        func_02081f64(temp_r5_2);
    }
    func_02081edc(M2C_FIELD(arg0, s32 *, 0x61C));
    func_02081edc(M2C_FIELD(arg0, s32 *, 0x620));
    temp_r5_3 = M2C_FIELD(arg0, M2C_UNK ***, 0x628);
    if (temp_r5_3 != NULL) {
        func_02083194(temp_r5_3);
        func_02081f64(temp_r5_3);
    }
    temp_r5_4 = M2C_FIELD(arg0, M2C_UNK ***, 0x624);
    if (temp_r5_4 != NULL) {
        func_020833e4(temp_r5_4);
        func_02081f64(temp_r5_4);
    }
    func_0207dfe8(M2C_FIELD(arg0, s32 *, 0x13C), 0);
    func_0207dfe8(M2C_FIELD(arg0, s32 *, 0x140), 0);
    temp_r5_5 = M2C_FIELD(arg0, M2C_UNK ***, 0x14C);
    if (temp_r5_5 != NULL) {
        func_0207f230(temp_r5_5);
        func_02081f64(temp_r5_5);
    }
    M2C_FIELD(arg0, M2C_UNK ***, 0x14C) = NULL;
    temp_r5_6                           = M2C_FIELD(arg0, M2C_UNK ***, 0x150);
    if (temp_r5_6 != NULL) {
        func_0207f230(temp_r5_6);
        func_02081f64(temp_r5_6);
    }
    M2C_FIELD(arg0, M2C_UNK ***, 0x150) = NULL;
    func_02004864(&spC, arg0);
    func_02074644(spC + 0x60, 0x1000);
    if (spC != NULL) {
        rc  = (s32 *) ((u8 *) spC + 4);
        *rc = *rc - 1;
        if ((M2C_FIELD(spC, s32 *, 4) == 0) && (spC != NULL)) {
            (*(void (**)(void *))(*(u8 **) spC + 4))(spC);
        }
    }
    spC = NULL;
    func_02004864(&sp10, arg0);
    func_0207462c(sp10 + 0x60, 0x190000);
    if (sp10 != NULL) {
        rc  = (s32 *) ((u8 *) sp10 + 4);
        *rc = *rc - 1;
        if ((M2C_FIELD(sp10, s32 *, 4) == 0) && (sp10 != NULL)) {
            (*(void (**)(void *))(*(u8 **) sp10 + 4))(sp10);
        }
    }
    sp10 = NULL;
}
