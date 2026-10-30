/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020707cc from https://github.com/tangosdev/sm64ds-decomp src/unnamed/arm9/0207/func_020707cc.c (license: MIT), reused
 * by tools/donor_match.py */
double func_020adaa8(double x) {
    int a  = (int) (&x);
    int *p = (int *) ((long long) (a + 4));
    *p &= 0x7fffffff;
    return x;
}
