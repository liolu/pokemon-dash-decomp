/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern void func_0207fd98(void *, s32);

void func_0207fcf0(void *arg0, u8 *arg1) {
    u8 *p;
    s32 c;
    s32 lead;
    s32 flag;
    p    = arg1;
    flag = 0;
    c    = *p;
    if (c == 0) {
        return;
    }
    do {
        if (flag != 0) {
            if (c >= 0x40 && c <= 0xFC) {
                func_0207fd98(arg0, c | (lead << 8));
            }
            flag = 0;
        } else if ((c >= 0x81 && c <= 0x9F) || (c >= 0xE0 && c <= 0xFC)) {
            lead = c;
            flag = 1;
        } else {
            func_0207fd98(arg0, c);
        }
        p++;
        c = *p;
    } while (c != 0);
}
