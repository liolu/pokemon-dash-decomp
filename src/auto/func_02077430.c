/* compiler: 1.2/b56 */
#include "m2c.h"

extern void func_02077230(void **);
extern void func_020788d4(void *, void *);
extern void func_02081f64(void *);

void func_02077430(u8 *arg0, void *arg1, ...) {
    void *obj;
    u8 *t;
    obj = arg1;
    if (obj == *(void **) (arg0 + 8)) {
        func_02077230((void **) &arg1);
        *(void **) (arg0 + 8) = arg1;
    }
    func_020788d4(obj, *(void **) (arg0 + 4));
    t = *(u8 **) ((u8 *) obj + 0x10);
    if (t != NULL) {
        *(s32 *) (t + 4) = *(s32 *) (t + 4) - 1;
        if (*(s32 *) (t + 4) == 0) {
            t = *(u8 **) ((u8 *) obj + 0x10);
            if (t != NULL) {
                (*(void (**)(void *))(*(u8 **) t + 4))(t);
            }
        }
    }
    *(void **) ((u8 *) obj + 0x10) = NULL;
    func_02081f64(obj);
    *(s32 *) arg0 = *(s32 *) arg0 - 1;
}
