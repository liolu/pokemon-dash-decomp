/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern int data_020d65a8;
typedef struct B {
    int a;
    int b;
    int pad;
    int c;
} B;

void func_0207ea9c(B *o, int w, int h, int x, int y, int v) {
    u8 *base;
    int j;
    int i;
    base = (u8 *) (o->c + o->b);
    if (o->a == 0) {
        base += data_020d65a8;
    }
    for (j = 0; j < h; j++) {
        for (i = 0; i < w; i++) {
            base[x + i + ((y + j) << 5)] = (u8) v;
        }
    }
}
