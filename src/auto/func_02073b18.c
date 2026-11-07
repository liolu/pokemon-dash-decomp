/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_0207379c(void *);
void func_020738e0(void *);

s32 func_02073b18(u8 *arg0) {
    u8 *best;
    u8 *end;
    u8 *e;
    u8 *it;
    it   = *(u8 **) (arg0 + 0x40);
    end  = arg0 + 0x3C;
    best = 0;
    if (it != end) {
        do {
            e = *(u8 **) (it + 0x10);
            if (func_0207379c(e) == 0 && (e[8] & 1)) {
                if (best == 0 || *(u32 *) (*(u8 **) (e + 0xC) + 4) < *(u32 *) (*(u8 **) (best + 0xC) + 4)) {
                    best = e;
                }
            }
        } while (it != end);
    }
    if (best == 0) {
        return 0;
    }
    func_020738e0(best);
    return 1;
}
