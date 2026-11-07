/* compiler: 1.2/b56 */
#include "m2c.h"

void func_020732a0(void *, void *);
void func_02071348(void *, void *);

void func_0207320c(u8 *arg0, void *arg1) {
    u8 *cur;
    u8 *sp0;
    int *q;
    cur = arg0;
    if (cur == 0) {
        return;
    }
    do {
        func_020732a0(cur, arg1);
        func_02071348(&sp0, cur);
        cur = sp0;
        if (cur != 0) {
            q  = (int *) (cur + 4);
            *q = *q - 1;
            if (*(int *) (sp0 + 4) == 0 && sp0 != 0) {
                (*(void (**)(void *))(*(u8 **) sp0 + 4))(sp0);
            }
        }
        sp0 = 0;
    } while (cur != 0);
}
