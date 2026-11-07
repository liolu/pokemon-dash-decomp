/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern u16 data_020d7538;
extern u16 data_020d7540;
extern s16 *data_020d755c;
void func_02094db4(void) {
    s16 *a;
    s16 *b;
    *(volatile u16 *) 0x04000208 = 0;
    a                            = data_020d755c;
    data_020d755c                = a + 1;
    *a                           = 0;
    b                            = data_020d755c;
    data_020d755c                = b - 1;
    *b                           = 0;
    *(volatile u16 *) 0x04000210 &= ~(8 << data_020d7538);
    *(volatile u16 *) 0x04000208 = data_020d7540;
}
