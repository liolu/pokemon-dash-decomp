/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02006234();                                /* extern */
s32 func_0200691c();                                /* extern */
M2C_UNK func_02006ae8();                            /* extern */
s32 func_02008868();                                /* extern */
M2C_UNK func_020230b8(void *);                      /* extern */
M2C_UNK func_020230d4(void *);                      /* extern */
M2C_UNK func_020230f4(void *, s32, M2C_UNK);        /* extern */
M2C_UNK func_02047db4(void *);                      /* extern */
M2C_UNK func_02047e8c(void *);                      /* extern */
M2C_UNK func_0205e4b4(void *);                      /* extern */
M2C_UNK func_0205f030();                            /* extern */
M2C_UNK func_020604a0(M2C_UNK *);                   /* extern */
s32 func_020605f4(s32);                             /* extern */
M2C_UNK func_0207c7f4(M2C_UNK);                     /* extern */
extern void *data_020cd74c;
extern s32 data_020d03e0;
extern M2C_UNK data_020d5d20;

void func_0205d7ec(void *arg0) {
    func_0205f030();
    func_02047db4(arg0);
    if (func_020605f4(M2C_FIELD(arg0, s32 *, 0x700)) == 0) {
        do {
            func_0207c7f4(0);
        } while (func_020605f4(M2C_FIELD(arg0, s32 *, 0x700)) == 0);
    }
    func_020230f4(M2C_FIELD(arg0, void **, 0x6F8), M2C_FIELD(data_020cd74c, s32 *, 0x54), 0);
    func_020230d4(M2C_FIELD(arg0, void **, 0x6F8));
loop_4:
    if (func_0200691c() == 2) {
        func_020230f4(M2C_FIELD(arg0, void **, 0x6F8), M2C_FIELD(data_020cd74c, s32 *, 0x58), 1);
        func_02006ae8();
        if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x6F8), s32 *, 0x24) != 4) {
            do {
                func_0207c7f4(0);
            } while (M2C_FIELD(M2C_FIELD(arg0, void **, 0x6F8), s32 *, 0x24) != 4);
        }
        M2C_FIELD(arg0, s32 *, 0xEC) = 0xE;
    } else if (func_0200691c() == 1) {
        func_020230b8(M2C_FIELD(arg0, void **, 0x6F8));
        func_020604a0(&data_020d5d20);
        M2C_FIELD(arg0, s32 *, 0xEC) = 0x16;
    } else if (func_02008868() == 0) {
        func_020230b8(M2C_FIELD(arg0, void **, 0x6F8));
        M2C_FIELD(arg0, s32 *, 0xEC) = 0xD;
    } else {
        func_0207c7f4(0);
        goto loop_4;
    }
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x6F8), s32 *, 0x24) != 0) {
        do {
            func_0207c7f4(0);
        } while (M2C_FIELD(M2C_FIELD(arg0, void **, 0x6F8), s32 *, 0x24) != 0);
    }
    func_02047e8c(arg0);
    if ((M2C_FIELD(arg0, s32 *, 0xEC) == 0x16) && (data_020d03e0 == 6) && (func_02006234() == 0)) {
        do {
            func_0207c7f4(0);
        } while (func_02006234() == 0);
    }
    func_0205e4b4(arg0);
}
