#include "m2c.h"
typedef struct S {
    u8 a;
    u8 b;
    u8 pad[0x12];
    s32 x;
} S;
extern S *data_020d4e38;
extern u8 data_020d4e04;
void func_0200647c(s32 x) {
    S *s          = data_020d4e38;
    s->x          = x;
    s->b          = 0;
    s->a          = 4;
    data_020d4e04 = 1;
}
