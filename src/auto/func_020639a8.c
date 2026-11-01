#include "m2c.h"

s32 func_020639a8(u8 *arg0) {
    s32 *tbl = *(s32 **) (arg0 + 0x100);
    u8 *n;
    u8 *c;
    s32 v;
    n = (tbl != 0) ? (u8 *) tbl[arg0[0x104]] : 0;
    if (n == 0) {
        n = *(u8 **) (arg0 + 0x14);
    }
    c = *(u8 **) (*(u8 **) (n + 0xC) + 0xC);
    v = (s16) * (s32 *) (c + 0x48);
    return (v + (s32) ((u32) v >> 31)) >> 1;
}
