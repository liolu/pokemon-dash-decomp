/* compiler: 1.2/b56 */
#include "m2c.h"

typedef struct S {
    u8 pad0[8];
    int a;
    u8 pad1[0x24 - 0xc];
    unsigned flags;
    u8 pad2[0x40 - 0x28];
    int sh;
    int h;
} S;
extern void func_0209e360(int, int, int, int);
extern void func_020a28c8(void *);
extern void func_020a28b0(void *);
extern int func_0209e650(void);
extern void func_0209e70c(int);
extern void func_0209e67c(int);
extern void func_02096528(void *);

void func_02096560(S *s) {
    int r5;
    if (((int) (s->flags << 30) >> 31) != 0) {
        unsigned *p;
        func_0209e360(s->h, 0, 1 << s->sh, 0);
        func_020a28c8((u8 *) s + 8);
        func_020a28b0((u8 *) s + 0x14);
        p  = &s->flags;
        *p = *p & ~2;
        r5 = func_0209e650();
        func_0209e70c(1);
        func_0209e67c(r5);
    }
    func_02096528(s);
}
