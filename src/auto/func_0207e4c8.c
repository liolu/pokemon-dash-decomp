/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    s32 eng;
    s32 bg;
    u8 p8[8];
    s32 f10;
    s32 f14;
    s32 f18;
    s32 f1c;
    s32 f20;
} A;

void func_0207e4c8(A *a) {
    volatile u16 *r;

    switch (a->eng) {
        case 0:
            switch (a->bg) {
                case 0:
                    r  = (volatile u16 *) 0x4000008;
                    *r = (a->f10 << 14) | (*r & 0x43) | (a->f14 << 7) | (a->f18 << 8) | (a->f1c << 2) | (a->f20 << 13);
                    break;
                case 1:
                    r  = (volatile u16 *) 0x400000A;
                    *r = (a->f10 << 14) | (*r & 0x43) | (a->f14 << 7) | (a->f18 << 8) | (a->f1c << 2) | (a->f20 << 13);
                    break;
                case 2:
                    r  = (volatile u16 *) 0x400000C;
                    *r = (a->f10 << 14) | (*r & 0x43) | (a->f14 << 7) | (a->f18 << 8) | (a->f1c << 2);
                    break;
                case 3:
                    r  = (volatile u16 *) 0x400000E;
                    *r = (a->f10 << 14) | (*r & 0x43) | (a->f14 << 7) | (a->f18 << 8) | (a->f1c << 2);
                    break;
            }
            break;
        case 1:
            switch (a->bg) {
                case 0:
                    r  = (volatile u16 *) 0x4001008;
                    *r = (a->f10 << 14) | (*r & 0x43) | (a->f14 << 7) | (a->f18 << 8) | (a->f1c << 2) | (a->f20 << 13);
                    break;
                case 1:
                    r  = (volatile u16 *) 0x400100A;
                    *r = (a->f10 << 14) | (*r & 0x43) | (a->f14 << 7) | (a->f18 << 8) | (a->f1c << 2) | (a->f20 << 13);
                    break;
                case 2:
                    r  = (volatile u16 *) 0x400100C;
                    *r = (a->f10 << 14) | (*r & 0x43) | (a->f14 << 7) | (a->f18 << 8) | (a->f1c << 2);
                    break;
                case 3:
                    r  = (volatile u16 *) 0x400100E;
                    *r = (a->f10 << 14) | (*r & 0x43) | (a->f14 << 7) | (a->f18 << 8) | (a->f1c << 2);
                    break;
            }
    }
}
