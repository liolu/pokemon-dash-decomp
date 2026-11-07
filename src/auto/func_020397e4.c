/* compiler: 1.2/sp2p3 */
#include "m2c.h"

struct H {
    s32 a;
    u16 b;
    u8 c;
    u8 d;
};
struct E {
    u8 v[10];
};
struct F {
    u8 v[7];
};
struct S {
    struct H h;
    struct E e;
    struct F f;
    u8 g;
};
struct T {
    s32 a;
    s32 b;
    s32 c;
};
struct D {
    s32 a;
    s32 b;
};

M2C_UNK func_02002f24(u8 *, s32, u8 *);    /* extern */
void *func_02008c20();                              /* extern */
M2C_UNK func_02045e6c();            /* extern */
M2C_UNK func_02045f28(s32, u8 *);                   /* extern */
s32 func_02080448(u8 *);                       /* extern */
void *func_02082044(M2C_UNK);                       /* extern */
M2C_UNK func_0208376c(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_020853c8(void *, u8 *);                /* extern */
M2C_UNK func_02085740(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_020ab644(); /* extern */
M2C_UNK func_020ad98c(u8 *, u8 *);             /* extern */
extern u32 data_020beff0[];
extern u8 *data_020cd74c;
extern struct T data_020cd900;
extern s32 data_020cead0;
extern s32 data_020cead4;
extern u32 data_020d3de8;
extern u8 *data_020d5164;
extern void *data_020d51a4;
extern void *data_020d5294;
extern struct D data_020d52e4;

void func_020397e4(u32 arg0) {
    struct S s;
    u8 buf24[0x28];
    u8 buf4C[0x28];
    struct T t;
    u8 buf80[0x50];
    struct S *sp_;
    s32 *pv;
    void *temp_r0;
    void *temp_r0_2;
    void *temp_r0_3;

    temp_r0 = func_02082044(8);
    if (temp_r0 != NULL) {
        func_0208376c(temp_r0, 1, -1);
    }
    data_020d5294 = temp_r0;
    temp_r0_2     = func_02082044(0x48);
    if (temp_r0_2 != NULL) {
        func_02085740(temp_r0_2, 1, 0x1E);
    }
    data_020d51a4 = temp_r0_2;
    if (data_020d52e4.a == 9) {
        temp_r0_3 = func_02008c20();
        sp_       = (struct S *) temp_r0_3;
        s.h.a     = sp_->h.a;
        s.h.b     = sp_->h.b;
        s.h.c     = sp_->h.c;
        s.h.d     = sp_->h.d;
        s.e       = sp_->e;
        s.f       = sp_->f;
        s.g       = sp_->g;
    } else {
        t   = data_020cd900;
        t.b = data_020d52e4.b;
        t.c = 0;
        func_02045e6c(&t, &s);
    }
    func_02002f24(s.e.v, 0xA, buf24);
    switch (arg0) {
        case 2:
        case 3:
            if (data_020beff0[*(s32 *) (data_020d5164 + 0x1B4)] & 0x02000000) {
                func_02002f24(s.f.v, 7, buf4C);
            } else {
                func_02045f28(data_020d52e4.b, buf80);
                func_02002f24(buf80, 7, buf4C);
            }
            switch (data_020d3de8) {
                case 2:
                    if (func_02080448(buf4C) != 0) {
                        pv = &data_020cead0;
                    } else {
                        pv = &data_020cead4;
                    }
                    func_020ab644(buf80, 0x50, *(s32 *) (data_020cd74c + 0x28), buf24, pv, buf4C);
                    break;
                case 3:
                case 4:
                case 5:
                    func_020ab644(buf80, 0x50, *(s32 *) (data_020cd74c + 0x28), buf24, buf4C);
                    break;
                default:
                    func_020ab644(buf80, 0x50, *(s32 *) (data_020cd74c + 0x28), buf4C, buf24);
                    break;
            }
            break;
        case 1:
            func_020ab644(buf80, 0x50, *(s32 *) (data_020cd74c + 0x98), buf24);
            break;
        case 0:
            func_020ad98c(buf80, buf24);
            break;
    }
    func_020853c8(data_020d51a4, buf80);
    M2C_FIELD(data_020d51a4, s32 *, 0x30) = 1;
}
