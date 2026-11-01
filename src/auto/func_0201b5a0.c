/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_020cd39c[];
extern u8 data_020cd3d0[];
extern u8 data_020cd400[];

void func_0201c03c(void *p);

void *func_0201b5a0(void **arg0) {
    arg0[0] = data_020cd39c;
    arg0[0] = data_020cd3d0;
    func_0201c03c((u8 *) arg0 + 4);
    arg0[0] = data_020cd400;
    return arg0;
}
