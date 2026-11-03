/* compiler: 1.2/sp2p3  */
/* FindContainHeap from projets/rayman-rr/src/auto/FindContainHeap.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned long u32;
extern void *func_020953dc(void *, void *);
void *func_020956e0(void *arg0, u32 arg1) {
    u8 *p;
    u8 *r;

    p = (u8 *) func_020953dc(arg0, ((void *) 0));
    while (p != ((void *) 0)) {
        if (*(u32 *) (p + 0x18) <= arg1 && arg1 < *(u32 *) (p + 0x1c)) {
            r = (u8 *) func_020956e0(p + 0xc, arg1);
            if (r == ((void *) 0)) {
                r = p;
            }
            return r;
        }
        p = (u8 *) func_020953dc(arg0, p);
    }
    return ((void *) 0);
}
