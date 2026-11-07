/* compiler: 1.2/b56 */
#include "m2c.h"

typedef struct Sub {
    u8 flags;
} Sub;

void func_020750e0(u8 *arg0) {
    Sub *s   = (Sub *) (arg0 + 4);
    s->flags = (u8) (s->flags | 0x80);
}
