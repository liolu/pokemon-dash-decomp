/* compiler: 1.2/b56 */
#include "m2c.h"
typedef struct S {
    u32 head;
    u32 tail;
    u16 count;
    u16 size;
} S;
void func_020955ac(S *s, u8 *n) {
    u16 sz                = s->size;
    *(s32 *) (n + sz + 4) = 0;
    *(s32 *) (n + sz)     = 0;
    s->head               = (u32) n;
    s->tail               = (u32) n;
    s->count++;
}
