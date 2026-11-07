/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct V {
    u8 pad[0x2c];
    void (*f2c)(void *, void *);
    void (*f30)(void *, void *);
} V;

typedef struct S {
    s32 a;
    s32 b;
    s32 c;
    s32 d;
} S;

typedef struct Obj {
    u8 pad[0x14];
    V **sub;
    s32 pad2;
    s32 f1c;
} Obj;

void func_0200ca84(void);

void func_02008c88(Obj *o) {
    S s;
    func_0200ca84();
    if (o->sub == 0) {
        return;
    }
    (*o->sub)->f30(o->sub, &s);
    if (o->f1c > 0x10000) {
        s.b = o->f1c - 0x10000;
        (*o->sub)->f2c(o->sub, &s);
    }
}
