/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02073894(s32);                         /* extern */
M2C_UNK func_02073e04(s32);                         /* extern */
s32 func_0207636c(M2C_UNK *, M2C_UNK *);            /* extern */
M2C_UNK func_02076384(M2C_UNK *, s32);              /* extern */
M2C_UNK func_02076390(M2C_UNK *);                   /* extern */
s32 func_020763a8();                                /* extern */
s32 func_020763bc(s32);                             /* extern */
s32 func_020763c4(M2C_UNK *);                       /* extern */
M2C_UNK func_020763d0(M2C_UNK *, s32);              /* extern */
s32 func_020763dc(M2C_UNK *, M2C_UNK *);            /* extern */
M2C_UNK func_020763f4(M2C_UNK *, s32);              /* extern */
M2C_UNK func_02076400(M2C_UNK *);                   /* extern */
s32 func_02076418();                                /* extern */
s32 func_0207642c(s32);                             /* extern */
s32 func_02076434(M2C_UNK *);                       /* extern */
M2C_UNK func_02076440(M2C_UNK *, s32);              /* extern */
extern s32 data_020d6540;

void func_02076234(void) {
    M2C_UNK sp0;
    M2C_UNK sp4;
    M2C_UNK sp8;
    M2C_UNK spC;
    s32 temp_r6;
    s32 temp_r6_2;
    s32 temp_r8;

    temp_r8 = data_020d6540;
    func_02076440(&sp0, temp_r8 + 0x2C);
    func_020763f4(&sp8, temp_r8 + 0x2C);
    if (func_020763dc(&sp0, &sp8) != 0) {
        do {
            temp_r6 = func_0207642c(func_02076434(&sp0) + 4);
            if (func_02076418() != 0) {
                func_02073e04(temp_r6);
            }
            func_02076400(&sp0);
            func_020763f4(&sp8, temp_r8 + 0x2C);
        } while (func_020763dc(&sp0, &sp8) != 0);
    }
    func_020763d0(&sp4, temp_r8 + 0x38);
    func_02076384(&spC, temp_r8 + 0x38);
    if (func_0207636c(&sp4, &spC) == 0) {
        return;
    }
    do {
        temp_r6_2 = func_020763bc(func_020763c4(&sp4) + 4);
        if (func_020763a8() != 0) {
            func_02073894(temp_r6_2);
        }
        func_02076390(&sp4);
        func_02076384(&spC, temp_r8 + 0x38);
    } while (func_0207636c(&sp4, &spC) != 0);
}
