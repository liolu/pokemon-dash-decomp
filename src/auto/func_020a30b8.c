/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0214fefc from https://github.com/RonyxDumb/mkds src/arm9/0214fefc_func_0214fefc.c (license: none), reused by
 * tools/donor_match.py */
extern int func_020a3394(void);
extern void func_020a2d24(int param);
extern void func_020a2a08(int a, int b, int c, int d);
extern volatile int data_020da3e8;
extern int data_020da3ec;
int func_020a30b8(unsigned int a, unsigned int b) {
    volatile int *p;

    if (!func_020a3394()) {
        return 1;
    }
    data_020da3e8 = 0;
    func_020a2d24(0x3006000);
    p = &data_020da3e8;
    while (!*p) {
    }
    *p            = 0;
    data_020da3ec = 0;
    func_020a2a08(0, 2, 0, 0);
    func_020a2d24((a & 0xff) | 0x2006100);
    func_020a2d24((b & 0xffff) | 0x1010000);
    return 0;
}
