/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct V {
    int x, y, z;
} V;
typedef struct O {
    u8 pad[0x208];
    u8 *p;
} O;
extern void func_02081334(void *, void *);
extern void func_020059fc(V *, int, int, int);
extern void func_0209856c(V *, void *, V *);
extern void func_02080b40(u16 *, V *, int);

void func_0206bed0(O *o, s16 *a, u16 *b) {
    u8 sp8[0x24];
    V sp2c;
    V sp38;
    u16 sp0[4];
    func_02081334(sp8, o->p + 0x18);
    func_020059fc(&sp38, 0, 0, 0x1000);
    sp2c = sp38;
    func_0209856c(&sp2c, sp8, &sp2c);
    func_02080b40(sp0, &sp2c, 1);
    *a = -sp0[0];
    *b = sp0[1];
}
