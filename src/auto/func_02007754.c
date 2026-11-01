/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern s8 data_020d4e04;
extern s8 *data_020d4e38;
extern void *func_02085f44(void);
extern void func_0209dc94(void *, s8 *, s32);

void func_02007754(void) {
    s8 *temp_r4;
    void *temp_r0;

    *data_020d4e38 = 0;
    temp_r4        = data_020d4e38 + 2;
    temp_r0        = func_02085f44();
    func_0209dc94(temp_r0, temp_r4, 0x16);
    data_020d4e04 = 1;
}
