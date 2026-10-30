/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* Isd_StringLength from https://github.com/sturmds/advance-wars-dual-strike-decomp src/sdk/isd/isd_string_length.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned int u32;
static inline int Isd_ReadByte(const char *address) {
    if ((u32) address & 1) {
        return (*(u16 *) (address - 1) & 0xff00) >> 8;
    }
    return *(u16 *) address & 0xff;
}
int func_020a9bd4(const char *s) {
    int n = 0;

    while (Isd_ReadByte(s) != 0) {
        n++;
        s++;
    }
    return n;
}
