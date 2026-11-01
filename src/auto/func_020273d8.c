/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_020cd848[];
extern u8 data_020ccfdc[];
void func_02003a44(void);
void func_02027450(void);
void func_020b523c(void *, s32, s32, void *);
void func_02081f64(void *);

void *func_020273d8(u8 *arg0) {
    *(void **) arg0 = (void *) data_020cd848;
    func_020b523c(arg0 + 0x68, 9, 4, (void *) func_02027450);
    func_020b523c(arg0 + 0x30, 5, 4, (void *) func_02003a44);
    func_020b523c(arg0 + 0x1C, 5, 4, (void *) func_02003a44);
    *(void **) arg0 = (void *) data_020ccfdc;
    func_02081f64(arg0);
    return arg0;
}
