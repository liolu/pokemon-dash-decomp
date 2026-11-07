/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02046f90();                                /* extern */
M2C_UNK func_02046ff0(M2C_UNK);                     /* extern */
M2C_UNK func_02047db4(void *);                      /* extern */
M2C_UNK func_02047e8c(void *);                      /* extern */
M2C_UNK func_0204e510(void *);                      /* extern */
M2C_UNK func_0204e7b8(void *);                      /* extern */
M2C_UNK func_0204f008(void *, u32);                 /* extern */
M2C_UNK func_0204f0cc(void *);                      /* extern */
M2C_UNK func_0204f1f4();                            /* extern */
s32 func_020605e0(void *);                          /* extern */
u32 func_0206068c(void *);                          /* extern */
M2C_UNK func_02060c58(void *);                      /* extern */
M2C_UNK func_0207c7f4(s32);                         /* extern */
M2C_UNK func_02081f64(void *);                      /* extern */

void func_0204e2fc(void *arg0) {
    s32 sp0;
    s32 temp_r0;
    s32 var_r5;
    u32 temp_r0_2;
    u32 temp_r0_3;
    void *temp_r4;

    func_0204f1f4();
    func_0204e7b8(arg0);
    func_0204f0cc(arg0);
    func_0204f008(arg0, M2C_FIELD(M2C_FIELD(arg0, void **, 0x700), u32 *, 0));
    func_02047db4(arg0);
    do {
        temp_r0_2 = func_0206068c(M2C_FIELD(arg0, void **, 0x700));
        switch (temp_r0_2) {                        /* switch 1 */
            default:                                    /* switch 1 */
                break;
            case 6:                                     /* switch 1 */
                M2C_FIELD(arg0, s32 *, 0xEC) = 2;
                break;
            case 0:                                     /* switch 1 */
            case 1:                                     /* switch 1 */
            case 2:                                     /* switch 1 */
            case 3:                                     /* switch 1 */
            case 4:                                     /* switch 1 */
            case 5:                                     /* switch 1 */
                func_0204f008(arg0, M2C_FIELD(M2C_FIELD(arg0, void **, 0x700), u32 *, 0));
                break;
            case 7:                                     /* switch 1 */
                temp_r0_3 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x700), u32 *, 0);
                switch (temp_r0_3) {                    /* switch 2 */
                    default:                                /* switch 2 */
                        break;
                    case 0:                                 /* switch 2 */
                        M2C_FIELD(arg0, s32 *, 0xEC) = 4;
                        break;
                    case 1:                                 /* switch 2 */
                        M2C_FIELD(arg0, s32 *, 0xEC) = 5;
                        break;
                    case 2:                                 /* switch 2 */
                        M2C_FIELD(arg0, s32 *, 0xEC) = 6;
                        break;
                    case 3:                                 /* switch 2 */
                        M2C_FIELD(arg0, s32 *, 0xEC) = 7;
                        break;
                    case 4:                                 /* switch 2 */
                        M2C_FIELD(arg0, s32 *, 0xEC) = 9;
                        break;
                    case 5:                                 /* switch 2 */
                        M2C_FIELD(arg0, s32 *, 0xEC) = 0xC;
                        break;
                }
                break;
        }
        temp_r0 = M2C_FIELD(arg0, s32 *, 0xEC);
        sp0     = temp_r0;
    } while (temp_r0 == 0x20);
    M2C_FIELD(arg0, s32 *, 0xEC) = 0x20;
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x700), s32 *, 0x1C) != 0) {
        func_02046ff0(0);
    }
    if (func_020605e0(M2C_FIELD(arg0, void **, 0x700)) == 0) {
        s32 k = 0;
        do {
            func_0207c7f4(k);
        } while (func_020605e0(M2C_FIELD(arg0, void **, 0x700)) == 0);
    }
    while ((M2C_FIELD(M2C_FIELD(arg0, void **, 0x700), s32 *, 0x1C) != 0) && (func_02046f90() == 0)) {
        func_0207c7f4(0);
    }
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x700), s32 *, 0x1C) != 0) {
        func_02046ff0(1);
    }
    func_02047e8c(arg0);
    var_r5 = 0;
    {
        s32 zero = 0;
        while ((var_r5 < 0x3C) && (M2C_FIELD(M2C_FIELD(arg0, void **, 0x700), s32 *, 0x1C) != 0) && (func_02046f90() == 0)) {
            func_0207c7f4(zero);
            var_r5 += 1;
        }
    }
    temp_r4 = M2C_FIELD(arg0, void **, 0x700);
    if (temp_r4 != NULL) {
        func_02060c58(temp_r4);
        func_02081f64(temp_r4);
    }
    func_0204e510(arg0);
    M2C_FIELD(arg0, s32 *, 0xEC) = sp0;
}
