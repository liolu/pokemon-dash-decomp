/* compiler: 1.2/b56 */
#include "m2c.h"

extern void *data_020cd5c4;
extern void *data_020ccfdc;
void func_02081f64(void *);

void *func_02020510(u8 *arg0) {
    u8 *p;

    *(void **) arg0 = &data_020cd5c4;
    p               = *(u8 **) (arg0 + 0x14);
    if (p != NULL) {
        *(s32 *) (p + 4) = *(s32 *) (p + 4) - 1;
        if (*(s32 *) (p + 4) == 0) {
            p = *(u8 **) (arg0 + 0x14);
            if (p != NULL) {
                (*(void (**)(void *))(*(u8 **) p + 4))(p);
            }
        }
    }
    *(void **) (arg0 + 0x14) = NULL;
    p                        = *(u8 **) (arg0 + 0x10);
    if (p != NULL) {
        *(s32 *) (p + 4) = *(s32 *) (p + 4) - 1;
        if (*(s32 *) (p + 4) == 0) {
            p = *(u8 **) (arg0 + 0x10);
            if (p != NULL) {
                (*(void (**)(void *))(*(u8 **) p + 4))(p);
            }
        }
    }
    *(void **) (arg0 + 0x10) = NULL;
    p                        = *(u8 **) (arg0 + 0xC);
    if (p != NULL) {
        *(s32 *) (p + 4) = *(s32 *) (p + 4) - 1;
        if (*(s32 *) (p + 4) == 0) {
            p = *(u8 **) (arg0 + 0xC);
            if (p != NULL) {
                (*(void (**)(void *))(*(u8 **) p + 4))(p);
            }
        }
    }
    *(void **) (arg0 + 0xC) = NULL;
    *(void **) arg0         = &data_020ccfdc;
    func_02081f64(arg0);
    return arg0;
}
