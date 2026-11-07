/* compiler: 1.2/b56 */
#include "m2c.h"

extern u8 data_020cd624[];
extern u8 data_020ccfdc[];
void func_02081f64(void *);

void *func_02020248(u8 *arg0) {
    u8 *r2;

    *(void **) arg0 = (void *) data_020cd624;
    r2              = *(u8 **) (arg0 + 0x18);
    if (r2 != NULL) {
        *(s32 *) (r2 + 4) = *(s32 *) (r2 + 4) - 1;
        if (*(s32 *) (r2 + 4) == 0) {
            if (*(u8 **) (arg0 + 0x18) != NULL) {
                (*(void (**)(void *))(*(u8 **) *(u8 **) (arg0 + 0x18) + 4))(*(u8 **) (arg0 + 0x18));
            }
        }
    }
    *(void **) (arg0 + 0x18) = NULL;
    *(void **) arg0          = (void *) data_020ccfdc;
    func_02081f64(arg0);
    return arg0;
}
