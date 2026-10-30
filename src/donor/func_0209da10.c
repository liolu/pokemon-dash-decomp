/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02059fa8 from https://github.com/tangosdev/sm64ds-decomp src/func_02059fa8.c (license: MIT), reused by
 * tools/donor_match.py */
void func_0209da10(int ch) {
    while (*(volatile unsigned *) (0x40000b0 + (ch * 3 + 2) * 4) & 0x80000000)
        ;
}
