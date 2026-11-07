/* compiler: 1.2/b56 */
#include "m2c.h"

extern u8 data_020cd704[];
extern u8 data_020cd6d8[];
void func_0200cb60(void *);

void *func_02020cac(u8 *arg0) {
    u8 *r2;

    *(void **) arg0 = (void *) data_020cd704;
    r2              = *(u8 **) (arg0 + 0x7C);
    if (r2 != NULL) {
        *(s32 *) (r2 + 4) = *(s32 *) (r2 + 4) - 1;
        if (*(s32 *) (r2 + 4) == 0) {
            if (*(u8 **) (arg0 + 0x7C) != NULL) {
                (*(void (**)(void *))(*(u8 **) *(u8 **) (arg0 + 0x7C) + 4))(*(u8 **) (arg0 + 0x7C));
            }
        }
    }
    *(void **) (arg0 + 0x7C) = NULL;
    *(void **) arg0          = (void *) data_020cd6d8;
    func_0200cb60(arg0);
    return arg0;
}
