/* compiler: 1.2/b56 */
#include "m2c.h"

typedef struct {
    u8 pad[4];
    u16 f;
} T;
typedef struct {
    u8 pad[0x18];
    T *volatile p;
} O;
extern O *data_020d6540;

s32 func_020767b8(T *arg0) {
    O *o = data_020d6540;
    T *t;
    if (arg0 == NULL) {
        arg0 = o->p;
    }
    t = o->p;
    if (t == arg0 && t != NULL) {
        t->f &= 0xFFF7;
        o->p = NULL;
        return 1;
    }
    return 0;
}
