/* compiler: 1.2/b56 */
#include "m2c.h"

void func_02095c00(s32);
void func_020953f4(void *, void *);
extern u8 data_020d7d78;

void func_02096528(u8 *arg0) {
    func_02095c00(*(s32 *) (arg0 + 0x40));
    func_020953f4(&data_020d7d78, arg0);
    *(s32 *) (arg0 + 0x24) = *(s32 *) (arg0 + 0x24) & ~1;
}
