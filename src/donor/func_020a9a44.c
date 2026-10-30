/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* Isd_DoubleExponent from https://github.com/sturmds/advance-wars-dual-strike-decomp src/sdk/isd/isd_double_exponent.c
 * (license: CC0-1.0), reused by tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned int u32;
static inline int Isd_ReadByte(const char *address) {
    if ((u32) address & 1) {
        return (*(u16 *) (address - 1) & 0xff00) >> 8;
    }
    return *(u16 *) address & 0xff;
}
int func_020a9a44(double x) {
    char *topBytePtr  = (char *) &x + 7;
    int topByte       = Isd_ReadByte(topBytePtr);
    char *nextBytePtr = (char *) &x + 6;
    int nextByte      = Isd_ReadByte(nextBytePtr);

    return ((topByte & 0x7f) << 4) + (nextByte >> 4);
}
