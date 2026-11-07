/* compiler: 1.2/b56 */
#include "m2c.h"

extern u8 data_020cd30c[];
extern u8 data_020ccfdc[];
extern void func_02003a44(void);

void func_020b523c(void *, s32, s32, void *);

void *func_02018e20(void *arg0) {
    u8 *obj;
    u8 *rc;
    u8 *t;

    obj          = (u8 *) arg0;
    *(u8 **) obj = data_020cd30c;
    func_020b523c(obj + 0x10, 5, 4, (void *) func_02003a44);
    rc = *(u8 **) (obj + 0xc);
    if (rc != NULL) {
        *(s32 *) (rc + 4) = *(s32 *) (rc + 4) - 1;
        if (*(s32 *) (rc + 4) == 0) {
            t = *(u8 **) (obj + 0xc);
            if (t != NULL) {
                (*(void (**)(void *))(*(u8 **) t + 4))(t);
            }
        }
    }
    *(void **) (obj + 0xc) = NULL;
    *(u8 **) obj           = data_020ccfdc;
    return arg0;
}
