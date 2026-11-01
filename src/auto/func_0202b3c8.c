/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern void func_0202c644(void *);
extern void func_020b523c(void *, s32, s32, void *);
extern u8 data_020ccfdc;
extern u8 data_020cd820;
extern void func_02003a44(void);

void **func_0202b3c8(void **arg0) {
    *arg0 = &data_020cd820;
    func_0202c644((u8 *) arg0 + 0x14);
    func_020b523c((u8 *) arg0 + 0xC, 2, 4, (void *) func_02003a44);
    *arg0 = &data_020ccfdc;
    return arg0;
}
