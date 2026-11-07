/* compiler: 1.2/b56 */
#include "m2c.h"

typedef struct V {
    int x;
    int y;
    int z;
} V;
typedef struct E {
    struct E *prev;
    struct E *next;
    u8 *obj;
} E;

int func_0200d5c0(int);
int func_02081a40(int, int);

void *func_0202b5a0(u8 *list, V *ref) {
    V d, t;
    int best;
    void *res;
    E *end;
    E *e;
    best = func_0200d5c0(0x7FFFFFFF);
    e    = *(E **) (list + 8);
    end  = (E *) (list + 4);
    res  = 0;
    while (e != end) {
        V *p = (V *) (e->obj + 0x18);
        int r;
        t.x = p->x - ref->x;
        t.y = p->y - ref->y;
        t.z = p->z - ref->z;
        d   = t;
        r   = func_02081a40(d.x, d.z);
        if (r <= best) {
            res  = &e->obj;
            best = r;
        }
        e = e->next;
    }
    return res;
}
