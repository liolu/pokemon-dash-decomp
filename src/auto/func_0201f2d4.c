/* compiler: 1.2/b56 */
#include "m2c.h"

typedef struct RC {
    void **vt;
    s32 rc;
} RC;

typedef struct Obj {
    void **vt;
    s32 f4;
    s32 f8;
    RC *fC;
    RC *arr[5];
    s32 f24;
    s32 f28;
} Obj;

extern void *data_020ccfdc;
extern void *data_020cd30c;
extern void func_02003a44(void);
extern void func_02005758(void);
void func_020b5358(void *, s32, s32, void *, void *);
void func_02005338(RC **, s32, s32);
void func_020639e4(s32, s32);
void func_02088ffc(s32, s32, s32);
void func_0201f0ec(void *);

Obj *func_0201f2d4(Obj *o, s32 a1, s32 a2) {
    RC *p;
    RC *q;
    RC *t;
    s32 v[3];
    s32 i;
    s32 off;

    o->vt = (void **) &data_020ccfdc;
    o->f4 = 0;
    o->vt = (void **) &data_020cd30c;
    o->f8 = a1;
    o->fC = 0;
    func_020b5358(&o->arr[0], 5, 4, func_02005758, func_02003a44);
    o->f24 = 0;
    o->f28 = a2;
    if (a2 < 10) {
        v[0] = 0x2C80;
    } else {
        v[0] = 0x2080;
    }
    v[1] = 0x12000;
    v[2] = 0x2E00;
    func_02005338(&p, o->f8, 0x20D);
    if (&p != &o->fC && p != o->fC) {
        if (p != 0) {
            p->rc++;
        }
        t = o->fC;
        if (t != 0) {
            t->rc--;
            if (t->rc == 0) {
                if (o->fC != 0) {
                    (*(void (**)(void *))((u8 *) o->fC->vt + 4))(o->fC);
                }
            }
        }
        o->fC = p;
    }
    if (p != 0) {
        p->rc--;
        if (p->rc == 0 && p != 0) {
            (*(void (**)(void *))((u8 *) p->vt + 4))(p);
        }
    }
    p = 0;
    func_020639e4(*(s32 *) (*(u8 **) ((u8 *) o->fC + 0x64) + 0x10), 0x11);
    i   = 0;
    off = 0;
    do {
        if ((i != 0 && i != 3) || a2 >= 10) {
            func_02005338(&q, o->f8, 0x20C);
            if (&q != (RC **) ((u8 *) o->arr + off) && q != o->arr[i]) {
                if (q != 0) {
                    q->rc++;
                }
                t = o->arr[i];
                if (t != 0) {
                    t->rc--;
                    if (t->rc == 0) {
                        if (o->arr[i] != 0) {
                            (*(void (**)(void *))((u8 *) o->arr[i]->vt + 4))(o->arr[i]);
                        }
                    }
                }
                o->arr[i] = q;
            }
            if (q != 0) {
                q->rc--;
                if (q->rc == 0 && q != 0) {
                    (*(void (**)(void *))((u8 *) q->vt + 4))(q);
                }
            }
            q = 0;
            func_020639e4(*(s32 *) (*(u8 **) ((u8 *) o->arr[i] + 0x64) + 0x10), 0x11);
            (*(void (**)(void *, s32 *))((u8 *) o->arr[i]->vt + 0x2c))(o->arr[i], v);
            v[0] += 0x600;
        }
        i++;
        off += 4;
    } while (i < 5);
    func_02088ffc(*(s32 *) ((u8 *) o + 0x18), 0x2820C00A, 0);
    func_0201f0ec(o);
    return o;
}
