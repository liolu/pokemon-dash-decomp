/* compiler: 1.2/b56 */
#include "m2c.h"

typedef struct RC {
    void **vt;
    s32 rc;
} RC;

typedef struct Cnt {
    s32 n;
} Cnt;

typedef struct Sub {
    RC *a;
    RC *b;
} Sub;

typedef struct Obj {
    void **vt;
    u8 p4[0x6c];
    Cnt *f70;
    u8 p74[0x24];
    RC *f98;
    RC *f9c;
    RC *fa0;
    RC *fa4;
    u8 pa8[4];
    RC *fac;
    RC *fb0;
    u8 pb4[4];
    u8 fb8[0x20];
    Cnt *fd8;
    u8 pdc[4];
    Sub *fe0;
} Obj;

extern void *data_020cd8d4;
extern void func_02004698(void);
void func_0200cb60(Obj *);
void func_02081f64(void *);
void func_020b523c(void *, s32, s32, void *);

Obj *func_02032b88(Obj *o) {
    Sub *q;
    RC *t;
    Cnt *c;

    o->vt = (void **) &data_020cd8d4;
    q     = o->fe0;
    if (q != 0) {
        t = q->b;
        if (t != 0) {
            t->rc--;
            if (t->rc == 0) {
                if (q->b != 0) {
                    (*(void (**)(void *))((u8 *) q->b->vt + 4))(q->b);
                }
            }
        }
        q->b = 0;
        t    = q->a;
        if (t != 0) {
            t->rc--;
            if (t->rc == 0) {
                if (q->a != 0) {
                    (*(void (**)(void *))((u8 *) q->a->vt + 4))(q->a);
                }
            }
        }
        q->a = 0;
        func_02081f64(q);
    }
    c = o->fd8;
    if (c != 0) {
        c->n--;
        if (c->n == 0) {
            if (o->fd8 != 0) {
                func_02081f64(o->fd8);
            }
        }
    }
    o->fd8 = 0;
    func_020b523c(o->fb8, 2, 4, func_02004698);
    t = o->fb0;
    if (t != 0) {
        t->rc--;
        if (t->rc == 0) {
            if (o->fb0 != 0) {
                (*(void (**)(void *))((u8 *) o->fb0->vt + 4))(o->fb0);
            }
        }
    }
    o->fb0 = 0;
    t      = o->fac;
    if (t != 0) {
        t->rc--;
        if (t->rc == 0) {
            if (o->fac != 0) {
                (*(void (**)(void *))((u8 *) o->fac->vt + 4))(o->fac);
            }
        }
    }
    o->fac = 0;
    t      = o->fa4;
    if (t != 0) {
        t->rc--;
        if (t->rc == 0) {
            if (o->fa4 != 0) {
                (*(void (**)(void *))((u8 *) o->fa4->vt + 4))(o->fa4);
            }
        }
    }
    o->fa4 = 0;
    t      = o->fa0;
    if (t != 0) {
        t->rc--;
        if (t->rc == 0) {
            if (o->fa0 != 0) {
                (*(void (**)(void *))((u8 *) o->fa0->vt + 4))(o->fa0);
            }
        }
    }
    o->fa0 = 0;
    t      = o->f9c;
    if (t != 0) {
        t->rc--;
        if (t->rc == 0) {
            if (o->f9c != 0) {
                (*(void (**)(void *))((u8 *) o->f9c->vt + 4))(o->f9c);
            }
        }
    }
    o->f9c = 0;
    t      = o->f98;
    if (t != 0) {
        t->rc--;
        if (t->rc == 0) {
            if (o->f98 != 0) {
                (*(void (**)(void *))((u8 *) o->f98->vt + 4))(o->f98);
            }
        }
    }
    o->f98 = 0;
    c      = o->f70;
    if (c != 0) {
        c->n--;
        if (c->n == 0) {
            if (o->f70 != 0) {
                func_02081f64(o->f70);
            }
        }
    }
    o->f70 = 0;
    func_0200cb60(o);
    return o;
}
