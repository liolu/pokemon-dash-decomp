/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020063b8();                            /* extern */
s32 func_020063cc();                                /* extern */
s32 func_02006f48();                                /* extern */
M2C_UNK func_02006f64();                            /* extern */
s32 func_02006fcc();                                /* extern */
M2C_UNK func_02007158();                            /* extern */
M2C_UNK func_020230d4();                      /* extern */
M2C_UNK func_020230f4();        /* extern */
M2C_UNK func_02047db4();                      /* extern */
M2C_UNK func_02047e8c();                      /* extern */
M2C_UNK func_0204e510();                      /* extern */
M2C_UNK func_0204e7b8();                      /* extern */
M2C_UNK func_0205e6e0();                      /* extern */
M2C_UNK func_0205f480();                 /* extern */
M2C_UNK func_0205f544();                      /* extern */
M2C_UNK func_0205f644();                      /* extern */
M2C_UNK func_020605cc();                       /* extern */
s32 func_020605e0();                           /* extern */
s32 func_020605f4();                           /* extern */
u32 func_0206068c();                           /* extern */
M2C_UNK func_0207c7f4(s32);                     /* extern */
M2C_UNK func_0207dfe8();                /* extern */
M2C_UNK func_02082ffc();                     /* extern */
M2C_UNK func_0208300c();            /* extern */
extern void *data_020cd74c;
extern s32 data_020d5d20;

void func_0205df50(void *arg0) {
    s32 temp_r0_2;
    u32 temp_r0;
    s32 z;

    *(u16 *) 0x04000204 &= ~0x8000;
    data_020d5d20 = 8;
    func_02006f64();
    func_0205f644(arg0);
    func_0204e7b8(arg0);
    func_0205f544(arg0);
    func_0205f480(arg0, *M2C_FIELD(arg0, s32 **, 0x700));
    func_02047db4(arg0);
    if (func_020063cc() != 0) {
        if (func_020605f4(M2C_FIELD(arg0, s32 **, 0x700)) == 0) {
            z = 0;
            do {
                func_0207c7f4(z);
            } while (func_020605f4(M2C_FIELD(arg0, s32 **, 0x700)) == 0);
        }
        func_020230f4(M2C_FIELD(arg0, void **, 0x6F8), M2C_FIELD(data_020cd74c, s32 *, 0x78), 1);
        func_020230d4(M2C_FIELD(arg0, void **, 0x6F8));
        if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x6F8), s32 *, 0x24) != 4) {
            z = 0;
            do {
                func_0207c7f4(z);
            } while (M2C_FIELD(M2C_FIELD(arg0, void **, 0x6F8), s32 *, 0x24) != 4);
        }
        func_020063b8();
    }
    do {
        temp_r0 = func_0206068c(M2C_FIELD(arg0, s32 **, 0x700));
        switch (temp_r0) {
            default:
                break;
            case 6:
                M2C_FIELD(arg0, s32 *, 0xEC) = 2;
                break;
            case 0:
            case 1:
                func_0207dfe8(M2C_FIELD(arg0, s32 *, 0x124), 0);
                func_02082ffc(1);
                func_0205f480(arg0, *M2C_FIELD(arg0, s32 **, 0x700));
                func_0207dfe8(M2C_FIELD(arg0, s32 *, 0x124), 1);
                func_0208300c(1, 1);
                break;
            case 7:
                temp_r0_2 = *M2C_FIELD(arg0, s32 **, 0x700);
                switch (temp_r0_2) {
                    case 0:
                    case 1:
                        if (func_02006f48() != 0) {
                            if (func_02006fcc() == 0) {
                                func_020230f4(M2C_FIELD(arg0, void **, 0x6F8), M2C_FIELD(data_020cd74c, s32 *, 0x7C), 1);
                                func_020230d4(M2C_FIELD(arg0, void **, 0x6F8));
                                if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x6F8), s32 *, 0x24) != 4) {
                                    z = 0;
                                    do {
                                        func_0207c7f4(z);
                                    } while (M2C_FIELD(M2C_FIELD(arg0, void **, 0x6F8), s32 *, 0x24) != 4);
                                }
                                M2C_FIELD(arg0, s32 *, 0xEC) = 0xD;
                            } else if (*M2C_FIELD(arg0, s32 **, 0x700) != 0) {
                                M2C_FIELD(arg0, s32 *, 0xEC) = 0x12;
                            } else {
                                func_02007158();
                                M2C_FIELD(arg0, s32 *, 0xEC) = 0xE;
                            }
                        }
                        break;
                }
                break;
        }
    } while (M2C_FIELD(arg0, s32 *, 0xEC) == 0x20);
    func_020605cc(M2C_FIELD(arg0, s32 **, 0x700));
    if (func_020605e0(M2C_FIELD(arg0, s32 **, 0x700)) == 0) {
        z = 0;
        do {
            func_0207c7f4(z);
        } while (func_020605e0(M2C_FIELD(arg0, s32 **, 0x700)) == 0);
    }
    func_02047e8c(arg0);
    func_0205e6e0(arg0);
    func_0204e510(arg0);
    *(u16 *) 0x04000204 |= 0x8000;
}
