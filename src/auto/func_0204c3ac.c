/* compiler: 1.2/b56 */
#include "m2c.h"

M2C_UNK func_02063070(s32, s32, s32);
M2C_UNK func_0208284c(void *, s32);
M2C_UNK func_02082964(void *, s32);
M2C_UNK func_020829dc(void *, s32, void *);
M2C_UNK func_02082ac8(void *, s32, s32);
M2C_UNK func_02082b14(void *, s32);
M2C_UNK func_02082b40(void *, s32);
M2C_UNK func_02082e28(void *, s32);
extern u8 data_020bf8ac;
extern u8 data_020bf8d8;
extern u8 data_020bf904;
extern s16 data_020c4f00[];

static inline s32 fxmul(s32 a, s32 b) {
    return (s32) ((((long long) a * b) + 0x800) >> 12);
}

static inline void incr(s32 *c) {
    *c = *c + 1;
}

void func_0204c3ac(u8 *arg0) {
    s32 var_r4;
    s32 cnt;
    s32 t;
    u16 idx;
    s32 *p;
    u8 *vt;
    u8 *o;

    if (*(u32 *) (arg0 + 0x50) == 0) {
        func_02082964(arg0 + 0xC, 0);
        return;
    }
    var_r4 = 0x1000;
    incr((s32 *) (arg0 + 0x4C));
    switch (*(u32 *) (arg0 + 0x50)) {
        case 1:
        case 2:
            cnt = *(s32 *) (arg0 + 0x4C);
            if (cnt == 0x1E) {
                if (*(u32 *) (arg0 + 0x50) == 1) {
                    *(u32 *) (arg0 + 0x50) = 5;
                } else {
                    *(u32 *) (arg0 + 0x50) = 3;
                    *(s32 *) (arg0 + 0x4C) = 0;
                }
            } else if (cnt > 0) {
                if (cnt < 0xF) {
                    var_r4 = (cnt * 0x1333) / 15;
                } else if (cnt < 0x1E) {
                    var_r4 = ((0x1E - cnt) * 0x333) / 15 + 0x1000;
                }
            } else {
                var_r4 = 0;
            }
            if (*(s32 *) (arg0 + 0x4C) == 1) {
                vt = *(u8 **) arg0;
                if ((vt == &data_020bf8ac) || (vt == &data_020bf8d8) || (vt == &data_020bf904)) {
                    func_02063070(5, 0xA, 0);
                }
            }
            break;
        case 3:
            idx    = (u16) (((*(s32 *) (arg0 + 0x4C)) << 16) / 30);
            t      = data_020c4f00[(idx >> 4) * 2];
            var_r4 = fxmul(t, 0x199) + 0x1199;
            break;
        case 4:
            cnt = *(s32 *) (arg0 + 0x4C);
            if (cnt >= 0xF) {
                var_r4 = 0;
            } else {
                var_r4 = ((0xF - cnt) << 12) / 15;
            }
            break;
    }
    func_02082964(arg0 + 0xC, var_r4 != 0);
    func_02082e28(arg0 + 4, var_r4);
    func_02082b14(arg0 + 0xC, 1);
    func_0208284c(arg0 + 0xC, 1);
    o = arg0 + 0xC;
    (**(void (***)(void *, s32)) o)(o, *(s32 *) (arg0 + 0x40));
    func_02082b40(arg0 + 0xC, *(s32 *) (*(u8 **) arg0 + 0xC));
    func_02082ac8(arg0 + 0xC, *(s32 *) (*(u8 **) arg0 + 0x10), *(s32 *) (*(u8 **) arg0 + 0x14));
    func_020829dc(arg0 + 0xC, 0x300, arg0 + 4);
}
