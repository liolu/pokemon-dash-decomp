/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0206c9f4 from https://github.com/tangosdev/sm64ds-decomp src/unnamed/arm9/0206/func_0206c9f4.c (license: MIT), reused
 * by tools/donor_match.py */
typedef void (*CopyFn)(void *self, void *buf, int len);
struct Stream {
    char pad[0x10];
    CopyFn fn;
};
extern unsigned char data_020c9548[];
#pragma optimize_for_size on
void func_020a9b84(struct Stream *self, unsigned int n) {
    while (n != 0) {
        int chunk = 0x10;
        if (n < 0x10) {
            chunk = n;
        }
        self->fn(self, data_020c9548, chunk);
        n -= chunk;
    }
}
