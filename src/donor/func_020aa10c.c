/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* Isd_TestFlags from https://github.com/sturmds/advance-wars-dual-strike-decomp src/sdk/isd/isd_test_flags.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef int BOOL;
typedef struct IsdSharedBlock {
    u32 unk_00[5];
    u32 flags;
    u32 unk_18;
    u8 *channel;
} IsdSharedBlock;
extern BOOL func_020aa10c(u32 mask);
BOOL func_020aa10c(u32 mask) {
    volatile IsdSharedBlock *block = ((volatile IsdSharedBlock *) 0x027fff60);

    return (mask & block->flags) != 0;
}
