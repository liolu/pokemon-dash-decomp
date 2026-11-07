/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020059fc();
M2C_UNK func_0200d5c4();
M2C_UNK func_02018748();
void **func_02018770();
s32 func_02067888();
M2C_UNK func_02067c48();
s32 func_02067c60();
M2C_UNK func_02067c68();
u32 func_02067c70();
M2C_UNK func_020699bc();
M2C_UNK func_020699c4();
M2C_UNK func_020699cc();
M2C_UNK func_02074bf4();
M2C_UNK func_02074c3c();
M2C_UNK func_0207bc9c();
M2C_UNK func_0207c68c();
s32 func_02081a18();
M2C_UNK func_02086a04();
M2C_UNK func_02086c50();
s32 func_02086d30();
M2C_UNK func_0208c268();

s32 func_020680a0(void *arg0, M2C_UNK arg1) {
    s32 sbuf[11];
    s32 var_r5;
    u32 temp_r4;
    s32 temp_r7;
    s32 temp_r7_2;
    void **temp_r0;
    void **temp_r0_2;

    temp_r4 = func_02067c70(arg1, 0);
    func_02018748(M2C_FIELD(arg0, void ***, 0xC8), 1);
    func_02018748(func_02018770(arg0 + 0xCC), 1);
    func_0208c268(M2C_FIELD(arg0, void ***, 0xC8), 1);
    M2C_FIELD(arg0, s32 *, 0xD8) = 0x10;
    func_020699c4(M2C_FIELD(arg0, void ***, 0xC8), 1);
    func_020699cc(M2C_FIELD(arg0, void ***, 0xC8), 0x7F);
    func_020699bc(M2C_FIELD(arg0, void ***, 0xC8), 0);
    func_02067c68(arg0 + 0xC4);
    temp_r7 = func_02067c60();
    func_020059fc((void *) &sbuf[2], 0, 0x41000, 0x352000);
    func_02074c3c(temp_r7, (void *) &sbuf[2]);
    func_02067c68(arg0 + 0xC4);
    temp_r7_2 = func_02067c60();
    func_020059fc((void *) &sbuf[5], 0, 0x16000, 0x2DA000);
    func_02074bf4(temp_r7_2, (void *) &sbuf[5]);
    func_02067c68(arg0 + 0xC4);
    func_02067c48(func_02067c60(), 0xE39);
    func_020059fc((void *) &sbuf[8], 0, 0, 0x2D8000);
    temp_r0 = M2C_FIELD(arg0, void ***, 0xC8);
    M2C_FIELD(*temp_r0, M2C_UNK(**)(void **, M2C_UNK *), 0x2C)(temp_r0, (void *) &sbuf[8]);
    func_0200d5c4((void *) &sbuf[0], 0, 0, 0);
    temp_r0_2 = M2C_FIELD(arg0, void ***, 0xC8);
    M2C_FIELD(*temp_r0_2, M2C_UNK(**)(void **, M2C_UNK *), 0x24)(temp_r0_2, (void *) &sbuf[0]);
    func_02086c50(M2C_FIELD(arg0, void ***, 0xC8), 0x08019000, 0x38000001);
    switch (temp_r4) {
        default:
            break;
        case 0:
            var_r5 = func_02086d30(M2C_FIELD(arg0, void ***, 0xC8), 0x08019035, 0x38000001);
            break;
        case 1:
            var_r5 = func_02086d30(M2C_FIELD(arg0, void ***, 0xC8), 0x08019037, 0x38000001);
            break;
        case 2:
            var_r5 = func_02086d30(M2C_FIELD(arg0, void ***, 0xC8), 0x08019032, 0x38000001);
            break;
        case 3:
            func_02086d30(M2C_FIELD(arg0, void ***, 0xC8), 0x08019001, 0x38000001);
            func_02086d30(M2C_FIELD(arg0, void ***, 0xC8), 0x08019002, 0x38000001);
            var_r5 = func_02086d30(M2C_FIELD(arg0, void ***, 0xC8), 0x08019003, 0x38000001);
            break;
        case 4:
            var_r5 = func_02086d30(M2C_FIELD(arg0, void ***, 0xC8), 0x0801901F, 0x38000001);
            break;
    }
    func_02086a04(M2C_FIELD(arg0, void ***, 0xC8), var_r5);
    func_0207c68c(func_02067888(func_02081a18(), 0x2000) + 0x2000);
    func_0207bc9c((u8 *) M2C_FIELD(arg0, void ***, 0xC8) + 0x138, 0x10);
    return 1;
}
