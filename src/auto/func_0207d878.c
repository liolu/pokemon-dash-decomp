/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_0209aac8(s32 a, s32 b, s32 c, s32 d, s32 e, s32 f);

void func_0207d878(s32 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    switch (arg0[0]) {
        case 0:
            switch (arg0[1]) {
                case 2:
                    func_0209aac8(0x04000020, arg1, arg2, arg3, arg4, arg5);
                    return;
                case 3:
                    func_0209aac8(0x04000030, arg1, arg2, arg3, arg4, arg5);
                    return;
            }
            return;
        case 1:
            switch (arg0[1]) {
                case 2:
                    func_0209aac8(0x04001020, arg1, arg2, arg3, arg4, arg5);
                    return;
                case 3:
                    func_0209aac8(0x04001030, arg1, arg2, arg3, arg4, arg5);
                    return;
            }
            return;
        default:
            return;
    }
}
