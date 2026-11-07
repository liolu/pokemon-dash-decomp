/* compiler: 1.2/sp2p3 */
#include "m2c.h"
typedef struct {
    s32 a, b, c;
} V3;
void func_020059fc(V3 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    V3 v;
    V3 *p = &v;
    v.a   = arg1;
    v.b   = arg2;
    v.c   = arg3;
    *arg0 = *p;
}
