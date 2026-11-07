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

M2C_UNK func_02002f24(u8 *, s32, u8 *); /* extern */
void *func_02008c2c();                              /* extern */
M2C_UNK func_02045e6c();                /* extern */
void *func_02082044(M2C_UNK);                       /* extern */
M2C_UNK func_0208376c(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_020853c8(void *, u8 *);
M2C_UNK func_02085740(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_020ab644(); /* extern */
M2C_UNK func_020ad98c(u8 *, u8 *);        /* extern */
extern u8 *data_020cd74c;
extern u32 data_020d3de8;
extern void *data_020d51dc;
extern void *data_020d5204;
extern s32 data_020d52e4;

void func_02039520(u32 arg0) {
    struct S s;
    u8 buf20[0x28];
    u8 buf48[0x50];
    struct S *sp_;
    void *temp_r0;
    void *temp_r0_2;
    void *temp_r0_3;

    temp_r0 = func_02082044(8);
    if (temp_r0 != NULL) {
        func_0208376c(temp_r0, 1, -1);
    }
    data_020d5204 = temp_r0;
    temp_r0_2     = func_02082044(0x48);
    if (temp_r0_2 != NULL) {
        func_02085740(temp_r0_2, 1, 0x1E);
    }
    data_020d51dc = temp_r0_2;
    if (data_020d52e4 == 9) {
        temp_r0_3 = func_02008c2c();
        sp_       = (struct S *) temp_r0_3;
        s.h.a     = sp_->h.a;
        s.h.b     = sp_->h.b;
        s.h.c     = sp_->h.c;
        s.h.d     = sp_->h.d;
        s.e       = sp_->e;
        s.f       = sp_->f;
        s.g       = sp_->g;
    } else {
        func_02045e6c(&data_020d52e4, &s);
    }
    func_02002f24(s.e.v, 0xA, buf20);
    switch (arg0) {
        case 0:
            func_020ad98c(buf48, buf20);
            break;
        case 1:
            func_020ab644(buf48, 0x50, M2C_FIELD(data_020cd74c, s32 *, 0x9C), buf20);
            break;
        case 2:
            if (s.g >= 0x80) {
                func_020ab644(buf48, 0x50, M2C_FIELD(data_020cd74c, s32 *, 0xD4), buf20);
            } else {
                switch (data_020d3de8) {
                    case 2:
                    case 4:
                    case 5:
                        func_020ab644(buf48, 0x50, M2C_FIELD(data_020cd74c, s32 *, 0xD8), buf20, s.g);
                        break;
                    case 0:
                    case 1:
                    case 3:
                        func_020ab644(buf48, 0x50, M2C_FIELD(data_020cd74c, s32 *, 0xD8), s.g, buf20);
                        break;
                }
            }
            break;
        case 3:
            if (s.g >= 0x80) {
                func_020ab644(buf48, 0x50, M2C_FIELD(data_020cd74c, s32 *, 0xA0), buf20);
            } else {
                switch (data_020d3de8) {
                    case 2:
                    case 4:
                    case 5:
                        func_020ab644(buf48, 0x50, M2C_FIELD(data_020cd74c, s32 *, 0xA4), buf20, s.g);
                        break;
                    case 0:
                    case 1:
                    case 3:
                        func_020ab644(buf48, 0x50, M2C_FIELD(data_020cd74c, s32 *, 0xA4), s.g, buf20);
                        break;
                }
            }
            break;
    }
    func_020853c8(data_020d51dc, buf48);
    M2C_FIELD(data_020d51dc, s32 *, 0x30) = 1;
}
