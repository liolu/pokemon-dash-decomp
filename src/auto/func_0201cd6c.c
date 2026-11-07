/* compiler: 1.2/b56 */
#include "m2c.h"

typedef struct G6f64 {
    u8 p0[2];
    u16 h2;
} G6f64;

typedef struct G73d4 {
    u8 p0[2];
    u8 b2;
    u8 p3[5];
    s32 f8;
    s32 fc;
} G73d4;

typedef struct Obj {
    u8 p0[8];
    s32 state;
    s32 mode;
    s32 cnt;
    void **vt14;
} Obj;

extern G6f64 *data_020d6f64;
extern G73d4 *data_020d73d4;
void func_02063070(s32, s32, s32);
void func_0208284c(void *, s32);
void func_02082964(void *, s32);
void func_020829dc(void *, s32, void *);
void func_02082ac8(void *, s32, s32);
void func_02082b14(void *, s32);
void func_02082b40(void *, s32);
void func_02082e28(void *, s32);

void func_0201cd6c(Obj *o) {
    s32 r5 = 0;
    s32 r4 = 0;
    s32 x;
    s32 m;
    s32 r9;
    u8 *p;
    void **q;

    switch (o->state) {
        case 0:
        case 5:
            return;
        case 1:
            o->cnt++;
            x  = o->cnt;
            r4 = (x << 12) / 15;
            if (x == 15) {
                o->state = 2;
                o->cnt   = 0;
            }
            break;
        case 2:
            o->cnt++;
            x  = o->cnt;
            m  = x % 30;
            r4 = 0x1000;
            if (m > 15) {
                r5 = 1;
            }
            if ((data_020d6f64->h2 & 1) || (data_020d73d4->b2 != 0 && data_020d73d4->f8 >= 200 && data_020d73d4->fc >= 160)) {
                func_02063070(2, 1, 0);
                o->state = 3;
                o->cnt   = 0;
            }
            break;
        case 3:
            o->cnt++;
            x  = o->cnt;
            r4 = 0x1000;
            if (x % 10 > 5) {
                r5 = 1;
            }
            if (x == 30) {
                o->state = 4;
                o->cnt   = 0;
            }
            break;
        case 4:
            o->cnt++;
            x  = o->cnt;
            r9 = 15 - x;
            r4 = (r9 << 12) / 15;
            if (x == 15) {
                o->state = 5;
                o->cnt   = 0;
            }
            break;
    }
    if (r4 <= 0) {
        return;
    }
    switch (o->mode) {
        case 0:
            if (r5 != 0) {
                p = (u8 *) o + 0x54;
            } else {
                p = (u8 *) o + 0x44;
            }
            r5 = *(s32 *) (p + 4);
            break;
        case 1:
            if (r5 != 0) {
                p = (u8 *) o + 0x74;
            } else {
                p = (u8 *) o + 0x64;
            }
            r5 = *(s32 *) (p + 4);
            break;
        default:
            return;
    }
    func_02082b40(&o->vt14, 0xC0004000);
    func_02082b14(&o->vt14, 1);
    q = (void **) ((u8 *) o + 0x14);
    (*(void (**)(void *, s32))(*(u8 **) q))(q, r5);
    func_0208284c(&o->vt14, 1);
    r9 = 0x1000 - r4;
    func_02082ac8(&o->vt14, (s32) (((s64) r9 * 24 + 0x800) >> 12) + 0xa8, (s32) (((s64) r9 * 16 + 0x800) >> 12) + 0x90);
    func_02082e28((u8 *) o + 0x88, r4);
    func_020829dc(&o->vt14, 0x300, (u8 *) o + 0x88);
    func_02082964(&o->vt14, 1);
}
