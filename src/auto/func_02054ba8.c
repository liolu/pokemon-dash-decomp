/* compiler: 1.2/b56 */
#include "m2c.h"

void func_0207d830(s32, s32, s32);

void func_02054ba8(u8 *arg0) {
    s32 idx;

    idx = ((*(s32 *) (arg0 + 0xF8) + (s32) ((u32) * (s32 *) (arg0 + 0xF8) >> 31)) >> 1) & 0x1F;
    func_0207d830(*(s32 *) (arg0 + 0x13C), idx, idx);
    *(s32 *) (arg0 + 0x5F0) = *(s32 *) (arg0 + 0x5F0) + (*(s32 *) (arg0 + 0xF8) - *(s32 *) (arg0 + 0x5F4));
    *(s32 *) (arg0 + 0x5F4) = *(s32 *) (arg0 + 0xF8);
}
