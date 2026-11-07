/* compiler: 1.2/b56 */
#include "m2c.h"

void func_02032558(void *);
void func_02081f64(void *);
extern u8 data_020cf3bc;

void *func_02011a38(u8 *a) {
    *(u8 **) a = &data_020cf3bc;
    {
        u8 *p = *(u8 **) (a + 272);
        if (p != 0) {
            int *q = (int *) (p + 4);
            *q     = *q - 1;
            if (*(int *) (p + 4) == 0) {
                u8 *o = *(u8 **) (a + 272);
                if (o != 0) {
                    (*(void (**)(void *))(*(u8 **) o + 4))(o);
                }
            }
        }
    }
    *(void **) (a + 272) = 0;
    {
        u8 *p = *(u8 **) (a + 268);
        if (p != 0) {
            int *q = (int *) (p + 4);
            *q     = *q - 1;
            if (*(int *) (p + 4) == 0) {
                u8 *o = *(u8 **) (a + 268);
                if (o != 0) {
                    (*(void (**)(void *))(*(u8 **) o + 4))(o);
                }
            }
        }
    }
    *(void **) (a + 268) = 0;
    {
        u8 *p = *(u8 **) (a + 264);
        if (p != 0) {
            int *q = (int *) (p + 4);
            *q     = *q - 1;
            if (*(int *) (p + 4) == 0) {
                u8 *o = *(u8 **) (a + 264);
                if (o != 0) {
                    (*(void (**)(void *))(*(u8 **) o + 4))(o);
                }
            }
        }
    }
    *(void **) (a + 264) = 0;
    {
        u8 *p = *(u8 **) (a + 260);
        if (p != 0) {
            int *q = (int *) (p + 4);
            *q     = *q - 1;
            if (*(int *) (p + 4) == 0) {
                u8 *o = *(u8 **) (a + 260);
                if (o != 0) {
                    (*(void (**)(void *))(*(u8 **) o + 4))(o);
                }
            }
        }
    }
    *(void **) (a + 260) = 0;
    func_02032558(a);
    func_02081f64(a);
    return a;
}
