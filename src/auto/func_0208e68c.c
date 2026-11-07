/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern void func_020059fc(s32 *, u32, u32, u32);
extern s32 func_0200d5c0(s32);
extern void func_0200d5c4(u16 *, u32, u32, u32);
extern void func_020755a4(void *, s32);
extern void func_020755e4(void *, void *, s32, s32);
extern void func_02075790(void *);
extern void func_020757bc(void *, s32, void *);
extern u8 data_020c4de8[];

void func_0208e68c(void *arg0, void *arg1, s32 arg2) {
    s32 sp8[14];
    s32 sp40[6];
    u16 sp0[3];
    s32 var_r4;

    var_r4 = arg2;
    func_0200d5c4(sp0, 0, 0, 0);
    ((u16 *) arg1)[0] = sp0[0];
    ((u16 *) arg1)[1] = sp0[1];
    ((u16 *) arg1)[2] = sp0[2];
    func_020059fc(&sp40[0], 0x1000, 0x1000, 0x1000);
    ((s32 *) arg1)[2] = sp40[0];
    ((s32 *) arg1)[3] = sp40[1];
    ((s32 *) arg1)[4] = sp40[2];
    func_020059fc(&sp40[3], 0, 0, 0);
    ((s32 *) arg1)[5] = sp40[3];
    ((s32 *) arg1)[6] = sp40[4];
    ((s32 *) arg1)[7] = sp40[5];
    func_020757bc(sp8, ((s32 *) arg0)[2], data_020c4de8);
    func_020755a4(sp8, 0);
    if (var_r4 < 0) {
        var_r4 = func_0200d5c0(((s32 *) arg0)[1]);
    }
    func_020755e4(sp8, arg1, var_r4, 1);
    func_02075790(sp8);
}
