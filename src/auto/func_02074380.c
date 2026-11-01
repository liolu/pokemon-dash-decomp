/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_0209ad8c(s32, s32, s32, s32, s32, s32, s32, s32, void *);
void func_0209abb4(void *);

void func_02074380(u8 *arg0) {
    s32 b[16];

    func_0209ad8c(*(s32 *) (arg0 + 0xA0), *(s32 *) (arg0 + 0xA4), *(s32 *) (arg0 + 0xA8), *(s32 *) (arg0 + 0xAC),
                  *(s32 *) (arg0 + 0x34), *(s32 *) (arg0 + 0x38), 0x1000, 0, b);
    *(s32 *) 0x04000440 = 0;
    func_0209abb4(b);
    *(s32 *) 0x0400044C = 0;
}
