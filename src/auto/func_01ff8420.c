/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern volatile u16 data_020d8760;

void func_01ff83a0(void);
void func_01ff81ac(void);

void func_01ff8420(void) {
    while (data_020d8760 == 0) {
    }
    *(volatile u16 *) 0x04000208 = 0;
    func_01ff83a0();
    func_01ff81ac();
}
