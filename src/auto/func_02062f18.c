/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_0209637c(void *a, s32 b, void *c);
s32 func_0209c99c(void);
extern u8 data_020d5fa4;
extern s32 data_020d5fac;
extern u8 data_020d5fc4;
extern u8 data_020d5fcc;
extern u8 data_020d5fd0;
extern u8 data_020d5fd4;
extern u8 data_020d5fdc;

void func_02062f18(void *arg0) {
    s32 i;
    s32 v;
    s32 r1;

    if (func_0209c99c() != 0) {
        return;
    }
    if (data_020d5fa4 == 0) {
        r1 = 0x40;
    } else {
        r1 = 0;
    }
    func_0209637c(&data_020d5fd4, r1, arg0);
    if (data_020d5fa4 == 0) {
        r1 = 0;
    } else {
        r1 = 0x40;
    }
    func_0209637c(&data_020d5fd0, r1, arg0);
    func_0209637c(&data_020d5fcc, 0x40, arg0);
    v = data_020d5fac;
    func_0209637c(&data_020d5fc4, (v + (s32) ((u32) v >> 31)) >> 1, arg0);
    for (i = 0; i < 5; i++) {
        if (i != 4) {
            r1 = 0;
        } else {
            r1 = 0x40;
        }
        func_0209637c(&data_020d5fdc + i * 4, r1, arg0);
    }
}
