/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_02085d48(void *a, void *b);

extern u8 *data_020d73d0;
extern u8 *data_020d73d4;
extern u8 *data_020d73d8;

void func_02085b48(void) {
    u8 *dst;
    u8 *src;

    src                   = data_020d73d8;
    dst                   = data_020d73d0;
    dst[0]                = src[0];
    dst[1]                = src[1];
    dst[2]                = src[2];
    dst[3]                = src[3];
    dst[4]                = src[4];
    dst[5]                = src[5];
    *(s32 *) (dst + 0x8)  = *(s32 *) (src + 0x8);
    *(s32 *) (dst + 0xC)  = *(s32 *) (src + 0xC);
    *(s32 *) (dst + 0x10) = *(s32 *) (src + 0x10);
    *(s32 *) (dst + 0x14) = *(s32 *) (src + 0x14);
    func_02085d48(data_020d73d4, data_020d73d0);
    src                   = data_020d73d4;
    dst                   = data_020d73d8;
    dst[0]                = src[0];
    dst[1]                = src[1];
    dst[2]                = src[2];
    dst[3]                = src[3];
    dst[4]                = src[4];
    dst[5]                = src[5];
    *(s32 *) (dst + 0x8)  = *(s32 *) (src + 0x8);
    *(s32 *) (dst + 0xC)  = *(s32 *) (src + 0xC);
    *(s32 *) (dst + 0x10) = *(s32 *) (src + 0x10);
    *(s32 *) (dst + 0x14) = *(s32 *) (src + 0x14);
}
