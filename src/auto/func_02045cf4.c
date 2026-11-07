/* compiler: 1.2/sp2p3 */
#include "m2c.h"
typedef struct G {
    u8 pad[0x848];
    u32 v;
} G;
extern G data_020d54d4;
void func_02045cf4(u32 a) {
    u64 t = (u64) data_020d54d4.v + a;
    u32 r = (u32) t;
    if (t >= 0x100000000ULL) {
        r = 0xFFFFFFFF;
    }
    data_020d54d4.v = r;
}
