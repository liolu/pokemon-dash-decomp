/* compiler: 1.2/b56 */
#include "m2c.h"
typedef struct S {
    u8 pad[0x9c];
    u8 f;
} S;
extern S *data_020d6560;
void func_0207c7f4(s32 a);
void func_0207c720(void) {
    data_020d6560->f |= 1;
    func_0207c7f4(0);
}
