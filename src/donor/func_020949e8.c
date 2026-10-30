/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* CTRDGi_ProgramFlashByteLE from https://github.com/ntrtwl/NitroSDK libraries/ctrdg/src/ctrdg_flash_LE39FW512.c (license:
 * none), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef volatile u8 vu8;
extern const u16(*ctrdgi_fl_maxtime);
extern u16 (*data_020d7550)(u16 phase, u8 *adr, u16 lastData);
extern u16 func_020949e8(u8 *src, u8 *dst);
u16 func_020949e8(u8 *src, u8 *dst) {
    u16 result;
    *(vu8 *) (0x0A000000 + 0x00005555) = 0xaa;
    *(vu8 *) (0x0A000000 + 0x00002aaa) = 0x55;
    *(vu8 *) (0x0A000000 + 0x00005555) = 0xa0;
    *dst                               = *src;

    result = data_020d7550(0x0001, dst, *src);
    return result;
}
