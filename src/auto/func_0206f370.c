/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_02098c0c(u8 *, u8 *);
void func_02098d64(u8 *, u8 *, u8 *);
void func_02098be4(u8 *);

void func_0206f370(s32 arg0, u8 *arg1) {
    u8 buf[0x30];
    func_02098c0c(arg1 + 0x30, buf);
    func_02098d64(buf, arg1, arg1);
    func_02098be4(arg1 + 0x30);
}
