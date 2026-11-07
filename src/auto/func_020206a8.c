/* compiler: 1.2/b56 */
#include "m2c.h"

void func_02081f64(void *);
void func_020b523c(void *, s32, s32, void *);
extern u8 data_020ccfdc[];
extern u8 data_020cd598[];
extern u8 func_02003a44[];

u8 *func_020206a8(u8 *arg0) {
    u8 *r;
    int *q;
    *(u8 **) arg0 = data_020cd598;
    func_020b523c(arg0 + 0x10, 3, 4, func_02003a44);
    r = *(u8 **) (arg0 + 0xC);
    if (r != 0) {
        q  = (int *) (r + 4);
        *q = *q - 1;
        if (*(int *) (r + 4) == 0) {
            u8 *o = *(u8 **) (arg0 + 0xC);
            if (o != 0) {
                (*(void (**)(void *))(*(u8 **) o + 4))(o);
            }
        }
    }
    *(u8 **) (arg0 + 0xC) = 0;
    *(u8 **) arg0         = data_020ccfdc;
    func_02081f64(arg0);
    return arg0;
}
