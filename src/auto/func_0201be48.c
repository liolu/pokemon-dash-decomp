/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_020cd39c;
extern u8 data_020cd3d0;
extern u8 data_020cd400;
extern void func_0201c03c(void *);
extern void func_02081f64(void *);

void **func_0201be48(void **arg0) {
    *arg0 = &data_020cd39c;
    *arg0 = &data_020cd3d0;
    func_0201c03c((u8 *) arg0 + 4);
    *arg0 = &data_020cd400;
    func_02081f64(arg0);
    return arg0;
}
