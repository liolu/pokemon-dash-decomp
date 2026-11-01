/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_0200230c(void *arg0) {
    u32 i;
    u32 *arr;

    arr = (u32 *) ((u8 *) arg0 + 0x20);
    i   = 0;
    do {
        arr[i] = arr[i] ^ M2C_FIELD(arg0, u32 *, 0);
        arr[i] = arr[i] ^ M2C_FIELD(arg0, u32 *, 4);
        i++;
    } while (i < 0xC);
}
