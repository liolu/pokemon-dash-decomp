/* compiler: 1.2/sp2p3 */
#include "m2c.h"
typedef struct N {
    struct N *prev;
    struct N *next;
} N;
extern void func_02081f64(N *n);

void func_0200d68c(N **arg0, s32 *arg1, N **arg2) {
    N *t          = *arg2;
    *arg2         = t->next;
    t->prev->next = t->next;
    t->next->prev = t->prev;
    func_02081f64(t);
    *arg1 -= 1;
    *arg0 = *arg2;
}
