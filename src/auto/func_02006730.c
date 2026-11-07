/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern s32 func_020068b8(void *);
extern s32 func_020070d4(u8 *, void *);
extern u8 *func_020087e0(s32);
extern u8 data_020cd010[];
extern void *data_020cd74c;
extern u8 data_020d4dfc;
extern s32 data_020d4e60;
extern u8 data_020d4f00[];
extern u8 data_020d4f16[];

s32 func_02006730(s32 arg0, s32 arg1) {
    u8 *t;
    u8 *u;
    u8 *r;
    s32 off;

    if (arg0 < 0) {
        if (arg1 != 0) {
            return (s32) (data_020d4f16 + (arg1 - 1) * 0xD);
        }
        return func_020068b8(data_020d4f00);
    }
    if (data_020d4dfc != 0) {
        if (arg1 != 0) {
            r = func_020087e0(arg1);
            if ((r == NULL) || (r[0] > 2)) {
                return (s32) data_020cd010;
            }
            off = (arg1 - 1) * 0xD;
            func_020070d4(r + 2, data_020d4f16 + off);
            return (s32) data_020d4f16 + off;
        }
        return func_020068b8(data_020d4f00);
    }
    t = (u8 *) (arg0 * 0xE0 + data_020d4e60);
    if (t[0xC9] != 0) {
        u = t + 0x50;
        if (u[0x57] == 0) {
            if (arg1 != 0) {
                return (s32) data_020cd010;
            }
            return *(s32 *) ((u8 *) data_020cd74c + 0xAC);
        }
        if (arg1 != 0) {
            return (s32) (u + 0x16 + (arg1 - 1) * 0xD);
        }
        return func_020068b8(u);
    }
    if (arg1 != 0) {
        return (s32) data_020cd010;
    }
    return *(s32 *) ((u8 *) data_020cd74c + 0x90);
}
