/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02008858();                                /* extern */
s32 func_02008868();                                /* extern */
M2C_UNK func_0201c8c8(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_020230d4(void *);                      /* extern */
M2C_UNK func_020230f4(void *, s32, M2C_UNK);        /* extern */
M2C_UNK func_02023108(void *);                      /* extern */
M2C_UNK func_020502d8(void *);                      /* extern */
M2C_UNK func_020503f8();                            /* extern */
M2C_UNK func_0207c7f4(M2C_UNK);                     /* extern */
extern void *data_020cd74c;
extern u32 data_020d5d20;

void func_02050164(void *arg0) {
    func_020503f8();
    func_0201c8c8(0x800, 0, 1);
    func_0201c8c8(0x800, 0, 0);
    func_020230f4(M2C_FIELD(arg0, void **, 0x6F8), M2C_FIELD(data_020cd74c, s32 *, 0xC8), 2);
    func_020230d4(M2C_FIELD(arg0, void **, 0x6F8));
    func_02023108(M2C_FIELD(arg0, void **, 0x6F8));
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x6F8), s32 *, 0x24) != 0) {
        do {
            func_0207c7f4(0);
        } while (M2C_FIELD(M2C_FIELD(arg0, void **, 0x6F8), s32 *, 0x24) != 0);
    }
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x6F8), s32 *, 0x38) == 1) {
        M2C_FIELD(arg0, s32 *, 0xEC) = 1;
    } else {
        switch (data_020d5d20) {
            default:
            /* fallthrough */
            case 0:
            case 3:
            case 4:
            case 6:
            case 7:
            case 8:
                M2C_FIELD(arg0, s32 *, 0xEC) = 4;
                break;
            case 1:
                M2C_FIELD(arg0, s32 *, 0xEC) = 5;
                break;
            case 2:
                M2C_FIELD(arg0, s32 *, 0xEC) = 6;
                break;
            case 5:
                M2C_FIELD(arg0, s32 *, 0xEC) = 7;
                break;
            case 9:
                if (func_02008868() == 0) {
                    M2C_FIELD(arg0, s32 *, 0xEC) = 0xD;
                } else if (func_02008858() != 0) {
                    M2C_FIELD(arg0, s32 *, 0xEC) = 0x13;
                } else {
                    M2C_FIELD(arg0, s32 *, 0xEC) = 0xE;
                }
                break;
        }
    }
    func_0201c8c8(0x800, -0x1000, 1);
    func_0201c8c8(0x800, -0x1000, 0);
    func_020502d8(arg0);
}
