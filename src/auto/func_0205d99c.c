/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02006c88(s32, u32, M2C_UNK);           /* extern */
M2C_UNK func_02047db4(void *);                      /* extern */
M2C_UNK func_02047e8c(void *);                      /* extern */
s32 func_0205dc88(void *);                          /* extern */
M2C_UNK func_0205e578(void *);                      /* extern */
M2C_UNK func_0205f0d0();                            /* extern */
M2C_UNK func_020605cc(u32 *);                       /* extern */
s32 func_020605e0(u32 *);                           /* extern */
u32 func_0206068c(u32 *);                           /* extern */
M2C_UNK func_0207c7f4(M2C_UNK);                     /* extern */
extern u32 data_020d03dc;
extern s32 data_020d03e0;

void func_0205d99c(void *arg0) {
    u32 temp_r0;

    func_0205f0d0();
    data_020d03dc = *M2C_FIELD(arg0, u32 **, 0x700);
    func_02047db4(arg0);
    do {
        func_02006c88(data_020d03e0, data_020d03dc, 0);
        temp_r0 = func_0206068c(M2C_FIELD(arg0, u32 **, 0x700));
        switch (temp_r0) {
            default:
                break;
            case 6:
                M2C_FIELD(arg0, s32 *, 0xEC) = 0xE;
                break;
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
                data_020d03dc = temp_r0;
                break;
            case 7:
                if (func_0205dc88(arg0) != 0) {
                    M2C_FIELD(arg0, s32 *, 0xEC) = 0x11;
                }
                break;
        }
    } while (M2C_FIELD(arg0, s32 *, 0xEC) == 0x20);
    func_020605cc(M2C_FIELD(arg0, u32 **, 0x700));
    if (func_020605e0(M2C_FIELD(arg0, u32 **, 0x700)) == 0) {
        do {
            func_0207c7f4(0);
        } while (func_020605e0(M2C_FIELD(arg0, u32 **, 0x700)) == 0);
    }
    func_02047e8c(arg0);
    func_0205e578(arg0);
}
