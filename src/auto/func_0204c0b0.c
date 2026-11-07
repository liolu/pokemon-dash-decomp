/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    s32 v[3];
} V;
typedef struct {
    V *p;
    u8 pad[0x3C - 4];
    u8 f3c[0x10];
    s32 f4c;
    s32 f50;
} O;

M2C_UNK func_02063070(s32, s32, s32);
M2C_UNK func_02083114(void *, s32, s32, s32, s32);
extern s32 data_020bef74;
extern V data_020bf8ac[];
extern V data_020bf930;
extern V data_020bf95c;
extern V data_020bfa0c;
extern V data_020bfa38;

void func_0204c0b0(O **arg0, s32 arg1, s32 arg2) {
    O *o;
    s32 i;
    s32 f;
    V *v;

    i = 0;
    do {
        o = arg0[i];
        switch ((u32) o->f50) {
            case 3:
            case 4:
            case 5:
                break;
            default:
                break;
            case 0:
            case 1:
                o->f4c = 0;
                o->f50 = 5;
                break;
            case 2:
                o->f4c = 0;
                o->f50 = 3;
                break;
        }
        i += 1;
    } while (i < 5);
    o = arg0[arg1];
    f = 1;
    if ((o->f50 != 3) && (o->f50 != 2)) {
        f = 0;
    }
    if (f != 0) {
        if ((data_020bef74 == 2) && (arg1 == 1)) {
            func_02063070(5, 2, 0);
            return;
        }
        o->f50 = 4;
        o->f4c = 0;
        o      = arg0[arg1];
        o->p   = (V *) ((u8 *) data_020bf8ac + (arg1 + 5) * 0x2C);
        v      = o->p;
        func_02083114(o->f3c, v->v[0], v->v[1], 0, v->v[2]);
        *(s32 *) ((u8 *) arg0 + 0x18) = arg1;
        func_02063070(5, 9, 0);
        return;
    }
    o      = arg0[0];
    o->f50 = 5;
    o->f4c = 0;
    o      = arg0[1];
    o->f50 = 5;
    o->f4c = 0;
    o      = arg0[2];
    o->f50 = 5;
    o->f4c = 0;
    o      = arg0[arg1];
    o->f50 = 3;
    o->f4c = 0;
    if (arg2 == 3) {
        o    = arg0[3];
        o->p = &data_020bfa0c;
        v    = o->p;
        func_02083114(o->f3c, v->v[0], v->v[1], 0, v->v[2]);
    } else {
        o    = arg0[3];
        o->p = &data_020bf930;
        v    = o->p;
        func_02083114(o->f3c, v->v[0], v->v[1], 0, v->v[2]);
    }
    if (arg2 == 4) {
        o    = arg0[4];
        o->p = &data_020bfa38;
        v    = o->p;
        func_02083114(o->f3c, v->v[0], v->v[1], 0, v->v[2]);
    } else {
        o    = arg0[4];
        o->p = &data_020bf95c;
        v    = o->p;
        func_02083114(o->f3c, v->v[0], v->v[1], 0, v->v[2]);
    }
    func_02063070(5, 1, 0);
}
