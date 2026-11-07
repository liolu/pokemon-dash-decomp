/* compiler: 1.2/b56 */
#include "m2c.h"

typedef struct In {
    u8 p0[0x10];
    s32 f10;
} In;

typedef struct RC {
    void **vt;
    s32 rc;
    u8 p8[0x5c];
    In *f64;
} RC;

typedef struct Obj {
    u8 p0[0xc];
    s32 fc;
    u32 mode;
    u8 p14[4];
    s32 f18;
    RC *arr1[4];
    RC *r2c;
    RC *arr0[4];
    u8 p40[4];
    s32 arr2[4];
    u8 p54[4];
    s32 f58;
} Obj;

extern s32 data_020bf1d4[][4];
void func_0202cbe0(Obj *);
void func_0202cf54(Obj *, s32, s32);
void func_0202e068(Obj *);
void func_0202e5c0(RC **, s32, s32);
void func_0202e630(Obj *, s32);
void func_0202e68c(Obj *, s32);
s32 func_0202e818(void);
s32 func_020639a8(s32);

void func_0202e158(Obj *o, u32 mode) {
    RC *s0;
    RC *s4;
    RC *s8;
    RC *sC;
    RC *t;
    s32 g;
    s32 i;
    s32 id;
    RC **pp0;
    RC **pp1;
    RC **pp;

    o->mode = mode;
    g       = func_0202e818();
    o->f18  = 0;
    func_0202e068(o);
    pp0 = &o->arr0[0];
    pp1 = &o->arr1[0];
    i   = 0;
    do {
        id = data_020bf1d4[o->mode][i];
        if (id != 0) {
            func_0202e5c0(&s0, id, g);
            pp = pp0;
            if (&s0 != pp && s0 != o->arr0[i]) {
                if (s0 != 0) {
                    s0->rc++;
                }
                t = o->arr0[i];
                if (t != 0) {
                    t->rc--;
                    if (t->rc == 0) {
                        if (o->arr0[i] != 0) {
                            (*(void (**)(void *))((u8 *) o->arr0[i]->vt + 4))(o->arr0[i]);
                        }
                    }
                }
                o->arr0[i] = s0;
            }
            if (s0 != 0) {
                s0->rc--;
                if (s0->rc == 0 && s0 != 0) {
                    (*(void (**)(void *))((u8 *) s0->vt + 4))(s0);
                }
            }
            s0         = 0;
            o->arr2[i] = func_020639a8(o->arr0[i]->f64->f10);
            func_0202e5c0(&s4, 0x23B, g);
            pp = pp1;
            if (&s4 != pp && s4 != o->arr1[i]) {
                if (s4 != 0) {
                    s4->rc++;
                }
                t = o->arr1[i];
                if (t != 0) {
                    t->rc--;
                    if (t->rc == 0) {
                        if (o->arr1[i] != 0) {
                            (*(void (**)(void *))((u8 *) o->arr1[i]->vt + 4))(o->arr1[i]);
                        }
                    }
                }
                o->arr1[i] = s4;
            }
            if (s4 != 0) {
                s4->rc--;
                if (s4->rc == 0 && s4 != 0) {
                    (*(void (**)(void *))((u8 *) s4->vt + 4))(s4);
                }
            }
            s4 = 0;
            if (id == 0x23A) {
                func_0202e68c(o, i);
            } else if (id == 0x240) {
                func_0202e630(o, i);
            }
        }
        i++;
        pp0++;
        pp1++;
    } while (i < 4);
    if (o->mode <= 5) {
        func_0202e5c0(&s8, 0x23E, g);
        pp = &o->r2c;
        if (&s8 != pp && s8 != o->r2c) {
            if (s8 != 0) {
                s8->rc++;
            }
            t = o->r2c;
            if (t != 0) {
                t->rc--;
                if (t->rc == 0) {
                    if (o->r2c != 0) {
                        (*(void (**)(void *))((u8 *) o->r2c->vt + 4))(o->r2c);
                    }
                }
            }
            o->r2c = s8;
        }
        if (s8 != 0) {
            s8->rc--;
            if (s8->rc == 0 && s8 != 0) {
                (*(void (**)(void *))((u8 *) s8->vt + 4))(s8);
            }
        }
        s8 = 0;
    } else if (o->mode == 6) {
        func_0202e5c0(&sC, 0x239, g);
        pp = &o->r2c;
        if (&sC != pp && sC != o->r2c) {
            if (sC != 0) {
                sC->rc++;
            }
            t = o->r2c;
            if (t != 0) {
                t->rc--;
                if (t->rc == 0) {
                    if (o->r2c != 0) {
                        (*(void (**)(void *))((u8 *) o->r2c->vt + 4))(o->r2c);
                    }
                }
            }
            o->r2c = sC;
        }
        if (sC != 0) {
            sC->rc--;
            if (sC->rc == 0 && sC != 0) {
                (*(void (**)(void *))((u8 *) sC->vt + 4))(sC);
            }
        }
        sC = 0;
    }
    o->f58 = 0;
    if (o->mode == 6) {
        o->fc = 5;
    } else {
        o->fc = 0;
    }
    func_0202cf54(o, 0, 1);
    func_0202cbe0(o);
}
