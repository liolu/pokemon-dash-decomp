/* compiler: 1.2/b56 */
#include "m2c.h"

extern u8 data_020cd0d8[];
extern u8 data_020cd170[];
void func_02032558(void *);

void *func_0200c4d8(void *arg0) {
    u8 *p = (u8 *) arg0;
    u8 *r2;
    u8 *r0;

    *(void **) p = (void *) data_020cd0d8;
    r2           = *(u8 **) (p + 0x114);
    if (r2 != NULL) {
        *(s32 *) (r2 + 4) = *(s32 *) (r2 + 4) - 1;
        if (*(s32 *) (r2 + 4) == 0) {
            r0 = *(u8 **) (p + 0x114);
            if (r0 != NULL) {
                (*(void (**)(void *))(*(u8 **) r0 + 4))(r0);
            }
        }
    }
    *(void **) (p + 0x114) = NULL;
    *(void **) p           = (void *) data_020cd170;
    func_02032558(arg0);
    return arg0;
}
