/* compiler: 1.2/sp2p3 */
#include "m2c.h"
typedef struct O {
    u8 p[0xE4];
    s32 k;
} O;
typedef struct S {
    u8 p0[4];
    s32 v;
    O *o;
    u8 pc[0x18];
    void **vo;
} S;
extern s32 data_020d5d20[];
extern s32 data_020d5e44[];
extern s32 data_020d5e54[][5];
extern s32 data_020d5f24[];
void func_02060514(S *s, s32 v) {
    s32 k;
    s->v = v;
    k    = s->o->k;
    switch (k) {
        case 10: {
            s32 i            = data_020d5d20[0];
            i                = i - 3;
            data_020d5e44[i] = s->v;
        } break;
        case 11: {
            s32 i                              = data_020d5d20[0];
            i                                  = i - 3;
            data_020d5e54[i][data_020d5d20[1]] = s->v;
        } break;
        default:
            data_020d5f24[k] = s->v;
            break;
    }
    (*(void (**)(void *))(*(u8 **) s->vo + 4))(s->vo);
}
