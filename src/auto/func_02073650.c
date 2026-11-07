/* compiler: 1.2/b56 */
#include "m2c.h"
typedef struct S {
    u8 pad[8];
    u16 f;
    u8 pad2[0xe];
    s32 x;
} S;
void func_02073650(S *s, s32 x) {
    s->x = x;
    s->f |= 0x40;
    s->f &= 0xFFEF;
}
