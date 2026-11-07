/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_0207f174(s32 a, void *b, s32 c, s32 d, s32 e);
s32 func_0207f28c(s32 a, void *b, s32 c, s32 d);
extern s32 data_020d52e4;
extern void *data_020d5278;
extern s32 data_020d51e4;
extern u8 data_020cea40[];
extern u8 data_020cea58[];
extern u8 data_020cea70[];
extern u8 data_020cea88[];
extern u8 data_020ceaa0[];
extern u8 data_020ceab8[];

void func_020393e4(void) {
    void *p;
    s32 st;

    st = data_020d52e4;
    if (st == 3) {
        goto blk_b;
    }
    if (st == 4) {
        goto blk_b;
    }
    if (st != 5) {
        goto blk_c;
    }
    p = data_020d5278;
    if (M2C_FIELD(p, s32 *, 0x2C) != 0) {
        func_0207f174(M2C_FIELD(p, s32 *, 0x2C), data_020cea40, 0x24, 0, 0);
    }
    func_0207f28c(data_020d51e4, data_020cea58, 0x20, 0x200);
    return;
blk_b:
    p = data_020d5278;
    if (M2C_FIELD(p, s32 *, 0x2C) != 0) {
        func_0207f174(M2C_FIELD(p, s32 *, 0x2C), data_020cea70, 0x24, 0, 0);
    }
    func_0207f28c(data_020d51e4, data_020cea88, 0x20, 0x200);
    return;
blk_c:
    p = data_020d5278;
    if (M2C_FIELD(p, s32 *, 0x2C) != 0) {
        func_0207f174(M2C_FIELD(p, s32 *, 0x2C), data_020ceaa0, 0x24, 0, 0);
    }
    func_0207f28c(data_020d51e4, data_020ceab8, 0x20, 0x200);
}
