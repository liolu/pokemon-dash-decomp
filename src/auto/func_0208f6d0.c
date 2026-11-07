/* compiler: 1.2/b56 */
#include "m2c.h"
extern void func_02081f64(void *);
extern void func_02090e38(void *);
extern u8 data_020ccfdc;
extern u8 data_020d43c4;
extern u8 data_020d4414;

void *func_0208f6d0(void *arg0) {
    u8 *p = (u8 *) arg0;
    u8 *o;
    *(void **) p = &data_020d43c4;
    o            = *(u8 **) (p + 0x18);
    if (o != 0) {
        s32 *q = (s32 *) (o + 4);
        *q     = *q - 1;
        if (*(s32 *) (o + 4) == 0) {
            u8 *r = *(u8 **) (p + 0x18);
            if (r != 0) {
                (*(void (**)(void *))(*(u8 **) r + 4))(r);
            }
        }
    }
    *(void **) (p + 0x18) = 0;
    func_02090e38(p + 0xc);
    *(void **) p = &data_020d4414;
    *(void **) p = &data_020ccfdc;
    func_02081f64(p);
    return p;
}
