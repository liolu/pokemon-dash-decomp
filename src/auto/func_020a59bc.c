/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_021436d0 from https://github.com/RonyxDumb/mkds src/arm9/021436d0_func_021436d0.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned int u32;
extern int func_020a5348(void);
extern int func_020a5228(int count, int a, int b, int c, int d, int e);
extern void func_0209cd9c(u32 a, u32 b);
extern void func_020a5474(int i, int val);
extern int func_020a5358(int a, int b, int c);
int func_020a59bc(int self, unsigned int idx) {
    int h;
    int *o;
    int r;
    h = func_020a5348();
    r = func_020a5228(5, 7, 9, 8, 0xa, 0xb);
    if (r != 0) {
        return r;
    }
    o = *(int **) (h + 4);
    {
        u16 v = *(u16 *) o;
        if (v == 7 || v == 9) {
            if (idx < 1) {
                goto ret6;
            }
            if (idx > 0xf) {
            ret6:
                return 6;
            }
            func_0209cd9c((u32) o + 0x17e, 2);
            if ((*(u16 *) ((char *) *(int **) (h + 4) + 0x17e) & (1u << idx)) == 0) {
                return 7;
            }
        } else {
            if (idx != 0) {
                return 6;
            }
        }
    }
    func_020a5474(0xd, self);
    r = func_020a5358(0xd, 1, 1u << idx);
    if (r == 0) {
        return 2;
    }
    return r;
}
