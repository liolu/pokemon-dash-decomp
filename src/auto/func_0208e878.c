/* compiler: 1.2/b56 */
#include "m2c.h"

extern u8 data_020d430c;
void func_02089a5c(void *);

void *func_0208e878(void *arg0) {
    u8 *p = (u8 *) arg0;
    func_02089a5c(arg0);
    *(void **) p        = &data_020d430c;
    *(s32 *) (p + 0x10) = 0x60000;
    *(s32 *) (p + 0x14) = *(s32 *) (p + 0x14) | 0x200000;
    return p;
}
