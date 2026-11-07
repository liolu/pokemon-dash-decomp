/* compiler: 1.2/b56 */
#include "m2c.h"

typedef struct V {
    int x;
    int y;
    int z;
} V;

int func_02081a40(int, int);

int func_0203231c(u8 *self) {
    V d, t;
    u8 *a = *(u8 **) (self + 0x70);
    int c;
    if (a == 0) {
        c = 0;
    } else {
        c = (*(int *) (a + 4) != 0);
    }
    if (c != 0) {
        u8 *o = *(u8 **) (a + 4);
        V *p;
        if (o != 0) {
            o = o - 8;
        }
        p   = (V *) (o + 0x18);
        t.x = p->x - *(int *) (self + 0x18);
        t.y = p->y - *(int *) (self + 0x1c);
        t.z = p->z - *(int *) (self + 0x20);
        d   = t;
        return func_02081a40(d.x, d.z);
    }
    return 0;
}
