/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* CTRDGi_SetFlashBankMx from https://github.com/ntrtwl/NitroSDK libraries/ctrdg/src/ctrdg_flash_common.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef volatile u8 vu8;
extern void func_02095144(u16 bank);
extern void func_02095144(u16 bank);
extern const u16(*ctrdgi_fl_maxtime);
extern const u16(*ctrdgi_fl_maxtime);
void func_02095144(u16 bank) {
    *(vu8 *) (0x0A000000 + 0x00005555) = 0xaa;
    *(vu8 *) (0x0A000000 + 0x00002aaa) = 0x55;
    *(vu8 *) (0x0A000000 + 0x00005555) = 0xb0;
    *(vu8 *) 0x0A000000                = (u8) bank;
}
