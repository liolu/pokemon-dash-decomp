/* compiler: 1.2/sp2p3 */
#include "m2c.h"
typedef struct N {
    struct N *prev;
    struct N *next;
} N;
extern void func_02081f64(N *n);

void func_0200d5f4(N **arg0, s32 *arg1, N **arg2, N **arg3) {
    N *last  = *arg3;
    N *first = *arg2;
    N *lp;
    if (first == last) {
        *arg0 = last;
        return;
    }
    lp                = last->prev;
    first->prev->next = lp->next;
    lp->next->prev    = first->prev;
    if (*arg2 != *arg3) {
        do {
            N *n  = *arg2;
            *arg2 = n->next;
            func_02081f64(n);
            *arg1 -= 1;
        } while (*arg2 != *arg3);
    }
    *arg0 = *arg3;
}
