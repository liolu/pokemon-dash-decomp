/* compiler: 1.2/b56 */
#include "m2c.h"

extern char data_020cd7f8;
extern char data_020cd140;
extern char data_020ccfdc;

void *func_0202b414(void *arg0) {
    u8 *obj = (u8 *) arg0;
    u8 *r2;
    u8 *t;
    void *vt1;
    void *vt2;

    *(void **) obj = &data_020cd7f8;
    r2             = *(u8 **) (obj + 8);
    if (r2 != NULL) {
        *(s32 *) (r2 + 4) = *(s32 *) (r2 + 4) - 1;
        if (*(s32 *) (r2 + 4) == 0) {
            t = *(u8 **) (obj + 8);
            if (t != NULL) {
                (*(void (**)(void *))(*(u8 **) t + 4))(t);
            }
        }
    }
    *(void **) (obj + 8) = NULL;
    vt1                  = &data_020cd140;
    *(void **) obj       = vt1;
    vt2                  = &data_020ccfdc;
    *(void **) obj       = vt2;
    return obj;
}
