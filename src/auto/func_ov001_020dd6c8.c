/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_ov001_02119c40;

u8 *func_ov001_020dd6c8(s32 arg0, s32 arg1) {
    s32 t = arg1 * 9 + arg0;
    return &data_ov001_02119c40 + ((t % 0x75) << 9);
}
