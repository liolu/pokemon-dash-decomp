/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct T {
    s32 a;
    s32 b;
    s32 c;
} T;

extern T data_020d03e8;
s32 func_02045e6c(T *t, s32 v);
void func_0205fb18(u8 *o);
void func_02061190(s32 a, s32 b);

void func_0205ea90(u8 *o) {
    s32 mask = 0;
    s32 i    = 0;
    do {
        T t = data_020d03e8;
        t.b = i;
        t.c = 0;
        if (func_02045e6c(&t, 0) == 0) {
            mask |= 1 << i;
        }
        i++;
    } while (i < 6);
    func_02061190(*(s32 *) (o + 0x700), mask);
    func_0205fb18(o);
}
