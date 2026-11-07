/* compiler: 1.2/b56 */
#include "m2c.h"

typedef struct Sub {
    u8 flags;
} Sub;

extern u8 *data_020d6560;

void func_0207c620(void) {
    Sub *s   = (Sub *) (data_020d6560 + 0x9C);
    s->flags = (u8) (s->flags | 8);
}
