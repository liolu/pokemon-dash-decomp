/* compiler: 1.2/b56 */
#include "m2c.h"

void func_02077230(void **);
void func_020788d4(void *, s32);
void func_02081f64(void *);

void func_02090cec(u8 *arg0, void *arg1, s32 a2, s32 a3, ...) {
    void *r4;
    void **n;
    void *rc;

    r4 = arg1;
    if (r4 == *(void **) (arg0 + 8)) {
        func_02077230((void **) &arg1);
        *(void **) (arg0 + 8) = arg1;
    }
    func_020788d4(r4, *(s32 *) (arg0 + 4));
    n  = (void **) r4;
    rc = n[4];
    if (rc != NULL) {
        *(s32 *) ((u8 *) rc + 4) = *(s32 *) ((u8 *) rc + 4) - 1;
        if (*(s32 *) ((u8 *) rc + 4) == 0) {
            if (n[4] != NULL) {
                (*(void (**)(void *))(*(u8 **) n[4] + 4))(n[4]);
            }
        }
    }
    n[4] = NULL;
    func_02081f64(n);
    *(s32 *) arg0 = *(s32 *) arg0 - 1;
}
