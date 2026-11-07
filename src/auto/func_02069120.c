/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    s32 x, y, z;
} V;
typedef struct {
    s16 a, b, c;
} H;

void func_020059fc(V *, s32, s32, s32); /* extern */
void func_0200d5c4(H *, s32, s32, s32); /* extern */
M2C_UNK func_02018748(void **, M2C_UNK);            /* extern */
void **func_02018770(void *);                       /* extern */
M2C_UNK func_0204738c(s32, M2C_UNK);                /* extern */
s32 func_0204c084();                                /* extern */
M2C_UNK func_02063600(M2C_UNK, s32);                /* extern */
M2C_UNK func_02067c48(s32, s32);                    /* extern */
s32 func_02067c60();                                /* extern */
M2C_UNK func_02067c68(void *);                      /* extern */
M2C_UNK func_02069434(void *, M2C_UNK);             /* extern */
s32 func_02069840(s32);                             /* extern */
M2C_UNK func_02069848(V *, V *, V *); /* extern */
M2C_UNK func_02074bf4(s32, V *);              /* extern */
M2C_UNK func_02074c3c(s32, V *);              /* extern */
M2C_UNK func_0207c7f4(M2C_UNK);                     /* extern */
M2C_UNK func_0208697c(void **, s32, M2C_UNK);       /* extern */
M2C_UNK func_02086a48(void **, s32, M2C_UNK);       /* extern */
M2C_UNK func_02086c0c(void **, M2C_UNK);            /* extern */
M2C_UNK func_02087cf0(void **, V *);          /* extern */
M2C_UNK func_0208c268(void **, M2C_UNK);            /* extern */
M2C_UNK func_0208cecc(void **);                     /* extern */

s32 func_02069120(void *arg0) {
    H sp0;
    H sp6;
    V spC;
    V sp18;
    V sp24;
    V sp30;
    V sp3C;
    V sp48;
    V sp54;
    V sp60;
    V sp6C;
    V sp78;
    V sp84;
    V sp90;
    s32 temp_r5;
    s32 temp_r5_2;
    s32 temp_r5_3;
    s32 temp_r5_4;
    void **temp_r0;
    void **temp_r0_2;
    void **temp_r0_3;
    void **temp_r0_4;

    func_02067c68(arg0 + 0xC4);
    temp_r5 = func_02067c60();
    func_020059fc(&spC, 0, 0x28000, 0x1C2000);
    func_02074c3c(temp_r5, &spC);
    func_02067c68(arg0 + 0xC4);
    temp_r5_2 = func_02067c60();
    func_020059fc(&sp18, 0, 0x14000, 0);
    func_02074bf4(temp_r5_2, &sp18);
    func_02067c68(arg0 + 0xC4);
    func_02067c48(func_02067c60(), 0x1D28);
    func_02086c0c(M2C_FIELD(arg0, void ***, 0xC8), 0x38000003);
    func_020059fc(&sp24, 0, 0, 0x94000);
    temp_r0 = M2C_FIELD(arg0, void ***, 0xC8);
    M2C_FIELD(*temp_r0, void (**)(void *, void *), 0x2C)(temp_r0, &sp24);
    func_0208c268(M2C_FIELD(arg0, void ***, 0xC8), 1);
    func_020059fc(&sp3C, 0, 0, 0x15C000);
    func_020059fc(&sp48, 0, 0, 0x96000);
    func_02069848(&sp30, &sp3C, &sp48);
    func_02087cf0(M2C_FIELD(arg0, void ***, 0xC8), &sp30);
    func_0200d5c4(&sp0, 0, 0, 0);
    temp_r0_2 = M2C_FIELD(arg0, void ***, 0xC8);
    M2C_FIELD(*temp_r0_2, void (**)(void *, void *), 0x24)(temp_r0_2, &sp0);
    func_02018748(M2C_FIELD(arg0, void ***, 0xC8), 1);
    func_02018748(func_02018770(arg0 + 0xCC), 1);
    func_02086a48(M2C_FIELD(arg0, void ***, 0xC8), 0x080190F2, 0x38000001);
    func_02063600(0, func_0204c084() * 5);
    func_0208cecc(M2C_FIELD(arg0, void ***, 0xC8));
    func_0208697c(M2C_FIELD(arg0, void ***, 0xC8), 0x0801900F, 0);
    func_02067c68(arg0 + 0xC4);
    temp_r5_3 = func_02067c60();
    func_020059fc(&sp54, 0, 0x41000, 0x352000);
    func_02074c3c(temp_r5_3, &sp54);
    func_02067c68(arg0 + 0xC4);
    temp_r5_4 = func_02067c60();
    func_020059fc(&sp60, 0, 0x16000, 0x2DA000);
    func_02074bf4(temp_r5_4, &sp60);
    func_02067c68(arg0 + 0xC4);
    func_02067c48(func_02067c60(), 0xE39);
    func_020059fc(&sp78, 0, 0, 0x2D8000);
    func_020059fc(&sp84, 0, 0, -0x12C000);
    func_02069848(&sp6C, &sp78, &sp84);
    temp_r0_3 = M2C_FIELD(arg0, void ***, 0xC8);
    M2C_FIELD(*temp_r0_3, void (**)(void *, void *), 0x2C)(temp_r0_3, &sp6C);
    func_0200d5c4(&sp6, 0, 0, 0);
    temp_r0_4 = M2C_FIELD(arg0, void ***, 0xC8);
    M2C_FIELD(*temp_r0_4, void (**)(void *, void *), 0x24)(temp_r0_4, &sp6);
    func_020059fc(&sp90, 0, 0, 0x2D8000);
    func_02087cf0(M2C_FIELD(arg0, void ***, 0xC8), &sp90);
    func_0204738c(M2C_FIELD(arg0, s32 *, 0xC0), 1);
    if (func_02069840(M2C_FIELD(arg0, s32 *, 0xC0)) == 1) {
        do {
            func_0207c7f4(0);
        } while (func_02069840(M2C_FIELD(arg0, s32 *, 0xC0)) == 1);
    }
    func_0208697c(M2C_FIELD(arg0, void ***, 0xC8), 0x0801900F, 0);
    func_02069434(arg0, 1);
    return 1;
}
