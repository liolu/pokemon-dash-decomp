/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct N {
    struct N *prev;
    struct N *next;
} N;
void func_02081f64(N *);

void func_0207cec4(N **arg0, s32 *arg1, N **arg2) {
    N *n          = *arg2;
    *arg2         = n->next;
    n->prev->next = n->next;
    n->next->prev = n->prev;
    func_02081f64(n);
    *arg1 -= 1;
    *arg0 = *arg2;
}
