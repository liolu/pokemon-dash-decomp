/* compiler: 1.2/b56 */
#include "m2c.h"
extern void func_02081f64(void *);
extern u8 data_020ccfdc;
extern u8 data_020cd10c;
extern u8 data_020cd140;

void *func_0200d3d4(void *arg0) {
    u8 *p = (u8 *) arg0;
    u8 *o;
    *(void **) p = &data_020cd10c;
    o            = *(u8 **) (p + 8);
    if (o != 0) {
        s32 *q = (s32 *) (o + 4);
        *q     = *q - 1;
        if (*(s32 *) (o + 4) == 0) {
            u8 *r = *(u8 **) (p + 8);
            if (r != 0) {
                (*(void (**)(void *))(*(u8 **) r + 4))(r);
            }
        }
    }
    *(void **) (p + 8) = 0;
    *(void **) p       = &data_020cd140;
    *(void **) p       = &data_020ccfdc;
    func_02081f64(p);
    return p;
}
