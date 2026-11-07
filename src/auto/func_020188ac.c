/* compiler: 1.2/b56 */
#include "m2c.h"

void func_0200cb60(void *);
void func_02081f64(void *);
extern char data_020cd704;
extern char data_020cd6d8;

void *func_020188ac(void *arg0) {
    u8 *obj = (u8 *) arg0;
    u8 *r2;
    u8 *t;

    *(void **) obj = &data_020cd704;
    r2             = *(u8 **) (obj + 0x7C);
    if (r2 != NULL) {
        *(s32 *) (r2 + 4) = *(s32 *) (r2 + 4) - 1;
        if (*(s32 *) (r2 + 4) == 0) {
            t = *(u8 **) (obj + 0x7C);
            if (t != NULL) {
                (*(void (**)(void *))(*(u8 **) t + 4))(t);
            }
        }
    }
    *(void **) (obj + 0x7C) = NULL;
    *(void **) obj          = &data_020cd6d8;
    func_0200cb60(obj);
    func_02081f64(obj);
    return obj;
}
