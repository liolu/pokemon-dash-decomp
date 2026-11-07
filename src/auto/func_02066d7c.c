/* compiler: 1.2/b56 */
#include "m2c.h"

extern u8 data_020d0ab8[];

void func_0207c9dc(void *);
void func_02081f64(void *);

void *func_02066d7c(u8 *arg0) {
    u8 *rc;

    *(void **) arg0 = (void *) data_020d0ab8;
    rc              = *(u8 **) (arg0 + 0xCC);
    if (rc != NULL) {
        *(s32 *) (rc + 4) = *(s32 *) (rc + 4) - 1;
        if (*(s32 *) (rc + 4) == 0) {
            if (*(u8 **) (arg0 + 0xCC) != NULL) {
                (*(void (**)(void *))(*(u8 **) *(u8 **) (arg0 + 0xCC) + 4))(*(u8 **) (arg0 + 0xCC));
            }
        }
    }
    *(void **) (arg0 + 0xCC) = NULL;
    rc                       = *(u8 **) (arg0 + 0xC4);
    if (rc != NULL) {
        *(s32 *) (rc + 4) = *(s32 *) (rc + 4) - 1;
        if (*(s32 *) (rc + 4) == 0) {
            if (*(u8 **) (arg0 + 0xC4) != NULL) {
                (*(void (**)(void *))(*(u8 **) *(u8 **) (arg0 + 0xC4) + 4))(*(u8 **) (arg0 + 0xC4));
            }
        }
    }
    *(void **) (arg0 + 0xC4) = NULL;
    func_0207c9dc(arg0);
    func_02081f64(arg0);
    return arg0;
}
