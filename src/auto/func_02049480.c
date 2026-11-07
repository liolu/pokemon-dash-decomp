/* compiler: 1.2/b56 */
#include "m2c.h"

void func_02081f64(void *);

void func_02049480(u8 **arg0, s32 *arg1, u8 **arg2) {
    u8 *node;
    u8 *p;
    u8 *obj;

    node                           = *arg2;
    *arg2                          = *(u8 **) (node + 4);
    *(u8 **) (*(u8 **) node + 4)   = *(u8 **) (node + 4);
    *(u8 **) (*(u8 **) (node + 4)) = *(u8 **) node;
    p                              = *(u8 **) (node + 8);
    if (p != NULL) {
        *((s32 *) p + 1) = *((s32 *) p + 1) - 1;
        if (*((s32 *) p + 1) == 0) {
            obj = *(u8 **) (node + 8);
            if (obj != NULL) {
                (*(void (**)(void *))(*(u8 **) obj + 4))(obj);
            }
        }
    }
    *(u8 **) (node + 8) = NULL;
    func_02081f64(node);
    *arg1 = *arg1 - 1;
    *arg0 = *arg2;
}
