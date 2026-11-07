/* compiler: 1.2/b56 */
#include "m2c.h"

typedef struct Hw {
    u16 v;
} Hw;

void func_0207367c(u8 *arg0, s32 arg1) {
    Hw *h                  = (Hw *) (arg0 + 8);
    *(s32 *) (arg0 + 0x2C) = arg1;
    h->v                   = (u16) (h->v | 0x40);
    h->v                   = (u16) (h->v & 0xFFEF);
}
