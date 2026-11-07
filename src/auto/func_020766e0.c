/* compiler: 1.2/b56 */
#include "m2c.h"

typedef struct {
    u8 pad[4];
    u8 f;
} T;
typedef struct {
    u8 pad[4];
    T *volatile p;
} O;
extern O *data_020d6540;

s32 func_020766e0(T *arg0) {
    O *o = data_020d6540;
    T *t = o->p;
    if (arg0 == NULL) {
        arg0 = o->p;
    }
    if (t != NULL && t == arg0) {
        t->f &= 0xFD;
        o->p = NULL;
        return 1;
    }
    return 0;
}
