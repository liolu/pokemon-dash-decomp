/* compiler: 1.2/sp2p3 */
#include "m2c.h"
typedef struct N {
    u8 p[4];
    u8 a4[4];
    u8 a8[4];
    s32 fC;
    struct N *next;
} N;
typedef struct H {
    N **tab;
    s32 n;
} H;
extern void func_0207ce2c(void *, void *, void *, void *);
extern void func_02081edc(void *);
extern void func_02081f64(void *);
H *func_0207cd88(H *h) {
    void *sp0;
    s32 sp4;
    void *sp8;
    s32 i = 0;
    N *n;
    N *nx;
    if (h->n > 0) {
        do {
            n = h->tab[i];
            if (n != 0) {
                do {
                    nx = n->next;
                    if (n != 0) {
                        sp8 = n->a8;
                        sp4 = n->fC;
                        func_0207ce2c(&sp0, n->a4, &sp4, &sp8);
                        func_02081f64(n);
                    }
                    n = nx;
                } while (nx != 0);
            }
            i++;
        } while (i < h->n);
    }
    func_02081edc(h->tab);
    return h;
}
