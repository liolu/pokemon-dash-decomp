/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0205abb8 from https://github.com/tangosdev/sm64ds-decomp src/unnamed/arm9/0205/func_0205abb8.c (license: MIT), reused
 * by tools/donor_match.py */
extern void func_0209eb6c(int i);
extern void func_0209e190(int a, int b, int c, int d, int e);
void func_0209e360(int a, int b, int c, int d) {
    int i;
    unsigned int mask = (unsigned int) c;
    for (i = 0; i < 8 && mask != 0;) {
        if (mask & 1) {
            func_0209eb6c(i);
        }
        i++;
        mask >>= 1;
    }
    func_0209e190(0xa, a, b, c, d);
}
