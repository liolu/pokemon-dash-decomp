/* compiler: 1.2/b56 */
#include "m2c.h"

typedef struct T {
    int a, b, c;
} T;
extern T data_020d00cc;
extern int func_02045e6c(T *, int);
extern void func_02058bf0(void *);
extern void func_02061190(int, int);
typedef struct S {
    u8 pad[0x5c0];
    int cnt;
    u8 pad2[0x700 - 0x5c4];
    int h;
} S;

void func_0205bf60(S *s) {
    T sp;
    int m = 0;
    int i = 0;
    do {
        sp   = data_020d00cc;
        sp.b = i;
        sp.c = 0;
        if (func_02045e6c(&sp, 0) == 0) {
            m |= 1 << i;
        }
        i++;
    } while (i < 6);
    func_02061190(s->h, m);
    func_02058bf0(s);
    s->cnt = s->cnt + 1;
}
