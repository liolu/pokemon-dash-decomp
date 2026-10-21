/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK VBlankIntrWait();                           /* extern */
M2C_UNK func_020230d4(void *);                      /* extern */
M2C_UNK func_020230f4(void *, s32, M2C_UNK);        /* extern */
M2C_UNK func_02023108(void *);                      /* extern */
M2C_UNK func_02046800();                            /* extern */
s32 func_02046f10();                                /* extern */
M2C_UNK func_02046f1c(M2C_UNK);                     /* extern */
s32 func_02047188(M2C_UNK);                         /* extern */
M2C_UNK func_02047db4(void *);                      /* extern */
M2C_UNK func_02047e8c(void *);                      /* extern */
M2C_UNK func_0205717c(void *);                      /* extern */
M2C_UNK func_020571f4();                            /* extern */
M2C_UNK func_020605cc(s32);                         /* extern */
s32 func_020605e0(s32);                             /* extern */
s32 func_0206068c(s32);                             /* extern */
M2C_UNK func_0207c7f4(M2C_UNK);                     /* extern */
M2C_UNK func_02099b70();                            /* extern */
M2C_UNK func_0209d6cc();                            /* extern */
M2C_UNK func_0209d6e0(M2C_UNK);                     /* extern */
extern void *data_020cd74c;

void func_02054464(void *arg0) {
    s32 temp_r0;
    s32 var_r0;

    func_020571f4();
    func_02047db4(arg0);
    do {
        temp_r0 = func_0206068c(M2C_FIELD(arg0, s32 *, 0x700));
        switch (temp_r0) {                          /* irregular */
            case 6:
                M2C_FIELD(arg0, s32 *, 0xEC) = 0x1B;
                break;
            case 0:
                var_r0 = func_02047188(0);
                if (var_r0 == 0) {
                    var_r0 = func_02047188(1);
                }
                if (var_r0 != 0) {
                    func_020230f4(M2C_FIELD(arg0, void **, 0x6F8), M2C_FIELD(data_020cd74c, s32 *, 0x80), 2);
                    func_020230d4(M2C_FIELD(arg0, void **, 0x6F8));
                    func_02023108(M2C_FIELD(arg0, void **, 0x6F8));
                    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x6F8), s32 *, 0x24) != 4) {
                        do {
                            func_0207c7f4(0);
                        } while (M2C_FIELD(M2C_FIELD(arg0, void **, 0x6F8), s32 *, 0x24) != 4);
                    }
                    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x6F8), s32 *, 0x38) == 1) {
                        func_020230f4(M2C_FIELD(arg0, void **, 0x6F8), M2C_FIELD(data_020cd74c, s32 *, 0x84), 2);
                        func_020230d4(M2C_FIELD(arg0, void **, 0x6F8));
                        func_02023108(M2C_FIELD(arg0, void **, 0x6F8));
                        if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x6F8), s32 *, 0x24) != 4) {
                            do {
                                func_0207c7f4(0);
                            } while (M2C_FIELD(M2C_FIELD(arg0, void **, 0x6F8), s32 *, 0x24) != 4);
                        }
                        if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x6F8), s32 *, 0x38) == 1) {
                            func_02046800();
                            func_02046f1c(0);
                            if (func_02046f10() == 0) {
                                do {
                                    func_0207c7f4(0);
                                } while (func_02046f10() == 0);
                            }
                            func_02046f1c(1);
                            if (func_02046f10() == 0) {
                                do {
                                    func_0207c7f4(0);
                                } while (func_02046f10() == 0);
                            }
                            func_020230f4(M2C_FIELD(arg0, void **, 0x6F8), M2C_FIELD(data_020cd74c, s32 *, 0x88), 1);
                            func_020230d4(M2C_FIELD(arg0, void **, 0x6F8));
                            func_02023108(M2C_FIELD(arg0, void **, 0x6F8));
                            if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x6F8), s32 *, 0x24) != 4) {
                                do {
                                    func_0207c7f4(0);
                                } while (M2C_FIELD(M2C_FIELD(arg0, void **, 0x6F8), s32 *, 0x24) != 4);
                            }
                            VBlankIntrWait();
                            func_02099b70();
                            *(s32 *) 0x04001000 &= ~0x10000;
                            func_0209d6e0(1);
                            func_0209d6cc();
                        }
                    }
                } else {
                    func_020230f4(M2C_FIELD(arg0, void **, 0x6F8), M2C_FIELD(data_020cd74c, s32 *, 0x8C), 1);
                    func_020230d4(M2C_FIELD(arg0, void **, 0x6F8));
                    func_02023108(M2C_FIELD(arg0, void **, 0x6F8));
                    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x6F8), s32 *, 0x24) != 4) {
                        do {
                            func_0207c7f4(0);
                        } while (M2C_FIELD(M2C_FIELD(arg0, void **, 0x6F8), s32 *, 0x24) != 4);
                    }
                }
                break;
        }
    } while (M2C_FIELD(arg0, s32 *, 0xEC) == 0x20);
    func_020605cc(M2C_FIELD(arg0, s32 *, 0x700));
    if (func_020605e0(M2C_FIELD(arg0, s32 *, 0x700)) == 0) {
        do {
            func_0207c7f4(0);
        } while (func_020605e0(M2C_FIELD(arg0, s32 *, 0x700)) == 0);
    }
    func_02047e8c(arg0);
    func_0205717c(arg0);
}
