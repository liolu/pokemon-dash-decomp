/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct S {
    u8 pad[0x104];
    int a;
    int b;
    u8 pad2[0x198 - 0x10c];
    int c;
} S;
extern void func_0202ef80(void *, int, int);
extern void func_0200bc44(void *, int);

void func_02009600(S *s, int x) {
    s->b = (int) (((long long) x * 0x3C000 + 0x800) >> 12) + 0x800 >> 12;
    if (s->b <= 0) {
        s->b = 1;
    }
    s->a = 1;
    func_0202ef80(s, 1, 0x2819d000);
    func_0200bc44(s, 0x40);
    s->c = 1;
}
