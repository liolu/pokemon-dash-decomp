/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_0208037c(void *, void *);
void func_020a0bf4(void *);
void func_020a084c(void *);

s32 func_02080258(void *arg0) {
    u32 buf[18];
    s32 d;

    func_020a0bf4(buf);
    if (func_0208037c(buf, arg0) == 0) {
        return 0;
    }
    d = buf[9] - buf[8];
    func_020a084c(buf);
    return d;
}
