/* compiler: 1.2/sp2p3 */
#include "m2c.h"
typedef struct S {
    u8 *p;
} S;
void func_02077230(S *);
void func_02077430(void *, S);
void func_02073bac(u8 *p) {
    S a;
    S b;
    S c;
    u8 *end;
    u8 *t;
    a.p = *(u8 **) (p + 0x40);
    end = p + 0x3C;
    if (a.p == end) {
        return;
    }
    do {
        b = a;
        func_02077230(&b);
        t = a.p;
        if (*(s32 *) (*(u8 **) (t + 0x10) + 4) == 1) {
            c.p = t;
            func_02077430(p + 0x38, c);
        }
        a = b;
    } while (a.p != end);
}
