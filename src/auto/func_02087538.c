/* compiler: 1.2/b56 */
#include "m2c.h"

s32 func_020877fc(void *, s32, s32, s32, M2C_UNK *, M2C_UNK *, M2C_UNK *, s32, M2C_UNK *); /* extern */
M2C_UNK func_020879c4(void *, M2C_UNK *, M2C_UNK);  /* extern */
s32 func_02087f48(M2C_UNK *);                       /* extern */
M2C_UNK func_02088004(void *);                      /* extern */
M2C_UNK func_02088010(M2C_UNK *, s32, s32, s32, s32); /* extern */
M2C_UNK func_02088038(M2C_UNK *, s32, s32, s32);    /* extern */
M2C_UNK func_02088174(M2C_UNK *, void *, s32 *);    /* extern */
s32 func_0208c13c(void *);                          /* extern */
s32 func_0208ce5c(void *);                          /* extern */
s32 func_0208ce88(void *);                          /* extern */

void func_02087538(void *arg0) {
    M2C_UNK sp14;
    M2C_UNK sp18;
    s32 sp1C;
    M2C_UNK sp20;
    s32 sp24;
    M2C_UNK sp28;
    s32 sp2C;
    s32 sp30[3];
    s32 sp3C[10];
    s32 sp64[3];
    s32 *cp;
    s32 a4;
    s32 temp_r0;
    s32 temp_r1;
    s32 temp_r6;
    s32 temp_r5;
    M2C_UNK *temp_r4;

    if (func_02087f48(arg0 + 0x15C) == 0) {
        if (M2C_FIELD(arg0, s32 *, 0x168) == 0) {
            return;
        }
        func_020879c4(arg0, (M2C_UNK *) (*(u8 **) ((u8 *) arg0 + 0x170) + 8), 0);
        if (M2C_FIELD(arg0, s32 *, 0x168) == 0) {
            return;
        }
        sp1C = M2C_FIELD(arg0, s32 *, 0x170);
        func_02088174(&sp18, arg0 + 0x168, &sp1C);
        return;
    }
    if ((func_0208ce88(arg0) == 0) && (func_0208ce5c(arg0) == 0) && (func_0208c13c(arg0) != 0x28000000)) {
        return;
    }
    func_02088010(sp30, M2C_FIELD(M2C_FIELD(arg0, void **, 0x60), s32 *, 8), M2C_FIELD(arg0, s32 *, 0x1A8),
                  M2C_FIELD(M2C_FIELD(arg0, void **, 0x160), s32 *, 0x18), M2C_FIELD(arg0, s32 *, 0x164));
    if (M2C_FIELD(arg0, s32 *, 0x168) == 0) {
        if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x160), s32 *, 8) & 4) {
            func_020879c4(arg0, arg0 + 0x15C, 1);
            return;
        }
        if (func_02087f48(sp30) != 0) {
            cp  = (s32 *) ((u8 *) arg0 + 0x1A8);
            *cp = *cp + 1;
            func_020879c4(arg0, sp30, 0);
            return;
        }
        func_02088004(arg0 + 0x15C);
        func_020879c4(arg0, arg0 + 0x15C, 0);
        return;
    }
    temp_r4 = (M2C_UNK *) (*(u8 **) ((u8 *) arg0 + 0x170) + 8);
    temp_r6 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x160), s32 *, 0x14);
    temp_r5 = M2C_FIELD(M2C_FIELD(temp_r4, void **, 4), s32 *, 0x10);
    if (temp_r5 == temp_r6) {
        func_020879c4(arg0, temp_r4, 0);
        sp24 = M2C_FIELD(arg0, s32 *, 0x170);
        func_02088174(&sp20, arg0 + 0x168, &sp24);
        return;
    }
    if ((func_02087f48(sp30) != 0) && (temp_r5 == M2C_FIELD(sp30[1], s32 *, 0x14))) {
        cp  = (s32 *) ((u8 *) arg0 + 0x1A8);
        *cp = *cp + 1;
        func_020879c4(arg0, sp30, 0);
        return;
    }
    temp_r0 = func_020877fc(arg0, temp_r6, temp_r6, temp_r5, sp3C, sp3C, sp64,
                            M2C_FIELD(M2C_FIELD(arg0, void **, 0x160), s32 *, 0x18), &sp14);
    if (temp_r0 != 0) {
        cp      = (s32 *) ((u8 *) arg0 + 0x1A8);
        a4      = M2C_FIELD(temp_r4, s32 *, 8);
        temp_r1 = M2C_FIELD(arg0, s32 *, 0x1A8);
        *cp     = *cp + 1;
        func_02088038(sp64, temp_r1, temp_r0, a4);
        func_020879c4(arg0, sp64, 0);
        return;
    }
    func_020879c4(arg0, temp_r4, 0);
    sp2C = M2C_FIELD(arg0, s32 *, 0x170);
    func_02088174(&sp28, arg0 + 0x168, &sp2C);
}
