/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Obj {
    u8 pad0[0x24];
    s32 f24;
    s32 pad28;
    s32 f2c;
} Obj;

typedef struct Res {
    u8 pad0[8];
    s32 f8;
} Res;

typedef struct Ptrs {
    u8 pad0[0x7c];
    s32 *f7c;
    s32 *f80;
} Ptrs;

typedef struct Root {
    u8 pad0[0x1b0];
    Ptrs *f1b0;
} Root;

extern void func_0207da08(void *, s32, s32, s32, s32, s32, s32, s32, s32, s32);
extern void func_0207dad8(void *, s32);
extern void func_0207dbf8(void *, s32, s32, s32, s32, s32);
extern void func_0207dfe8(void *, s32);
extern void func_0207e1ec(void *, s32);
extern void func_0207e324(void *, s32);
extern void func_0207e900(s32, s32, s32, s32);
extern void func_0207eda8(s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
extern void func_0207f0a0(s32, s32, s32, s32);
extern void func_0207f174(s32, void *, s32, s32, s32);
extern void func_0207f28c(void *, void *, s32, s32);
extern s32 func_02082044(s32);
extern u8 data_020ce8fc[];
extern u8 data_020ce90c[];
extern u8 data_020ce91c[];
extern u8 data_020ce92c[];
extern s32 data_020d4534;
extern Root *data_020d5164;
extern Res *data_020d51c0;
extern s32 data_020d51d8;
extern Obj *data_020d51e8;
extern s32 data_020d51f8;
extern s32 data_020d5228;
extern Res *data_020d522c;
extern Res *data_020d5230;
extern Obj *data_020d5274;
extern Obj *data_020d5278;

void func_020368cc(void) {
    Ptrs *p;
    s32 a;
    s32 b;
    s32 i;
    s32 j;
    s32 n;
    s32 t;
    Obj *o;
    s32 v;
    s32 x;
    s32 u;

    p = data_020d5164->f1b0;
    func_0207dbf8(data_020d51e8, 1, 1, 0x800, 0, 0);
    func_0207e1ec(data_020d51e8, 2);
    func_0207e1ec(data_020d5278, 3);
    a = func_02082044(0x14);
    if (a != 0) {
        func_0207e900(a, 1, 0x7840, 0);
    }
    data_020d5228 = a;
    func_0207e324(data_020d5274, a);
    u = data_020d4534;
    t = data_020d5274->f2c;
    if (t != 0) {
        func_0207f0a0(t, u, 0, 0x40);
    }
    o = data_020d5274;
    if (o->f2c != 0) {
        func_0207f174(o->f2c, data_020ce8fc, 0x9024, 0x40, 0x1800);
    }
    u = data_020d4534;
    t = data_020d5274->f24;
    if (t != 0) {
        func_0207f0a0(t, u, 0, 0);
    }
    v = data_020d522c->f8;
    o = data_020d5274;
    if (o->f24 != 0) {
        func_0207eda8(o->f24, 0x20, 3, v, 0, 0, 1, 0, 0, 0);
    }
    v = data_020d51c0->f8;
    o = data_020d5274;
    if (o->f24 != 0) {
        func_0207eda8(o->f24, 0x20, 0xc, v, 0, 7, 0x61, 0, 0, 0);
    }
    func_0207f28c(data_020d522c, data_020ce90c, 0x20, 0x200);
    b = func_02082044(0x14);
    if (b != 0) {
        func_0207e900(b, 1, 0x400, 0);
    }
    data_020d51d8 = b;
    func_0207dad8(data_020d51e8, b);
    o = data_020d51e8;
    if (o->f2c != 0) {
        func_0207f174(o->f2c, data_020ce91c, 0x424, 0, 0x400);
    }
    i = 0;
    do {
        j = 0;
        do {
            func_0207da08(data_020d51e8, 4, 4, data_020d5230->f8, j, i, 0, 0, 0, 0);
            j += 4;
        } while (j < 0x20);
        i += 4;
    } while (i < 0x20);
    func_0207f28c(data_020d5230, data_020ce92c, 0x20, 0x200);
    n = data_020d51f8 - 10;
    o = data_020d5274;
    x = p->f7c[n];
    if (o->f2c != 0) {
        func_0207f174(o->f2c, (void *) x, 0x24, 0x1840, 0x6000);
    }
    func_0207f28c(data_020d51c0, (void *) p->f80[n], 0x20, 0x200);
    func_0207dfe8(data_020d5274, 1);
    func_0207dfe8(data_020d5278, 1);
    func_0207dfe8(data_020d51e8, 1);
}
