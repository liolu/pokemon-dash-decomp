/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_02003a44(void);
void func_020b523c(void *, s32, s32, void *);
void func_02081f64(void *);

void func_020207f0(u8 *arg0, s32 *arg1, u8 **arg2) {
    u8 *r4;

    r4                           = *arg2;
    *arg2                        = *(u8 **) (r4 + 4);
    *(u8 **) (*(u8 **) r4 + 4)   = *(u8 **) (r4 + 4);
    *(u8 **) (*(u8 **) (r4 + 4)) = *(u8 **) r4;
    func_020b523c(r4 + 0x14, 9, 4, (void *) func_02003a44);
    func_02081f64(r4);
    *arg1         = *arg1 - 1;
    *(u8 **) arg0 = *arg2;
}
