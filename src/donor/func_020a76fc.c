/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* CTRDGi_GetAgbGameCodeAtInit from https://github.com/ntrtwl/NitroSDK libraries/ctrdg/src/ctrdg.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef int BOOL;
typedef struct {
    union {
        struct {
            u8 bitID;
            u8 numberID : 5;
            u8 : 2;
            u8 disableExLsiID : 1;
        };
        u16 raw;
    };
} CTRDGModuleID;
typedef struct {
    CTRDGModuleID moduleID;
    u8 exLsiID[3];
    u8 isAgbCartridge : 1;
    u8 detectPullOut : 1;
    u8 : 0;
    u16 makerCode;
    u32 gameCode;
} CTRDGModuleInfo;
extern BOOL func_020a774c(void);
extern u32 func_020a76fc(void);
extern const u16(*ctrdgi_fl_maxtime);
BOOL func_020a774c(void);
u32 func_020a76fc(void) {
    CTRDGModuleInfo *cip = ((CTRDGModuleInfo *) (0x02000000 + 0x007ffc30));
    u32 retval           = 0;

    if (func_020a774c()) {
        retval = cip->gameCode;
    }

    return retval;
}
