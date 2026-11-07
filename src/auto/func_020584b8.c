/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    u8 p0[0x124];
    s32 f124;
    s32 f128;
    u8 p12c[0x418 - 0x12C];
    void *a418[6];
    void *f430;
    void *f434;
    void *f438;
    void *a43c[6];
    void *a454[6];
    void *a46c[6][2];
    void *a49c[6][2];
    void *f4cc;
    void *f4d0;
    void *f4d4;
    void *f4d8;
    void *f4dc;
    void *f4e0;
    void *f4e4;
    void *f4e8;
} Q;

M2C_UNK func_0207dfe8(s32, s32);
M2C_UNK func_02081f64(void *);
M2C_UNK func_02082b74(void *);
M2C_UNK func_02082ee8(void *);
M2C_UNK func_02082ffc(s32);
M2C_UNK func_02083194(void *);
M2C_UNK func_020833e4(void *);
M2C_UNK func_02083714(void *);
M2C_UNK func_020856a8(void *);
M2C_UNK func_02085908(s32);
extern s32 data_020d3de8;
extern u8 data_020d3e6c[];

void func_020584b8(Q *arg0) {
    void **t;
    s32 i;
    s32 j;

    t = arg0->f4e4;
    if (t != NULL) {
        func_020833e4(t);
        func_02081f64(t);
    }
    t = arg0->f4e8;
    if (t != NULL) {
        func_020833e4(t);
        func_02081f64(t);
    }
    t = arg0->f4d8;
    if (t != NULL) {
        func_02083194(t);
        func_02081f64(t);
    }
    t = arg0->f4dc;
    if (t != NULL) {
        func_02083194(t);
        func_02081f64(t);
    }
    t = arg0->f4e0;
    if (t != NULL) {
        func_02083194(t);
        func_02081f64(t);
    }
    i = 0;
    do {
        t = arg0->a418[i];
        if (t != NULL) {
            func_020856a8(t);
            func_02081f64(t);
        }
        t = arg0->a43c[i];
        if (t != NULL) {
            *t = data_020d3e6c;
            func_02082b74(t);
            func_02081f64(t);
        }
        t = arg0->a454[i];
        if (t != NULL) {
            *t = data_020d3e6c;
            func_02082b74(t);
            func_02081f64(t);
        }
        j = 0;
        do {
            t = arg0->a46c[i][j];
            if (t != NULL) {
                *t = data_020d3e6c;
                func_02082b74(t);
                func_02081f64(t);
            }
            t = arg0->a49c[i][j];
            if (t != NULL) {
                *t = data_020d3e6c;
                func_02082b74(t);
                func_02081f64(t);
            }
            j += 1;
        } while (j < 2);
        i += 1;
    } while (i < 6);
    if (data_020d3de8 != 0) {
        t = arg0->f4cc;
        if (t != NULL) {
            *t = data_020d3e6c;
            func_02082b74(t);
            func_02081f64(t);
        }
        t = arg0->f4d0;
        if (t != NULL) {
            *t = data_020d3e6c;
            func_02082b74(t);
            func_02081f64(t);
        }
        t = arg0->f4d4;
        if (t != NULL) {
            func_02082ee8(t);
            func_02081f64(t);
        }
    }
    t = arg0->f434;
    if (t != NULL) {
        func_02083714(t);
        func_02081f64(t);
    }
    t = arg0->f438;
    if (t != NULL) {
        func_02083714(t);
        func_02081f64(t);
    }
    t = arg0->f430;
    if (t != NULL) {
        func_020856a8(t);
        func_02081f64(t);
    }
    func_0207dfe8(arg0->f128, 0);
    func_0207dfe8(arg0->f124, 0);
    func_02082ffc(1);
    func_02085908(1);
}
