/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern char data_020cd820[];
extern char data_020ccfdc[];
void func_02003a44();
void func_0202c644(void *);
void func_020b523c(void *, s32, s32, void *);
void func_02081f64(void *);

void **func_0202755c(void **arg0) {
    *arg0 = data_020cd820;
    func_0202c644((char *) arg0 + 0x14);
    func_020b523c((char *) arg0 + 0xC, 2, 4, func_02003a44);
    *arg0 = data_020ccfdc;
    func_02081f64(arg0);
    return arg0;
}
