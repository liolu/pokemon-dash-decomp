/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02060398 from https://github.com/tangosdev/sm64ds-decomp src/unnamed/arm9/0206/func_02060398.c (license: MIT), reused
 * by tools/donor_match.py */
struct T867bc {
    int key;
    char pad[0x24];
};
extern struct T867bc data_020c94a8[];
struct T867bc *func_020a4064(int arg) {
    struct T867bc *p = data_020c94a8;
    for (;;) {
        if (p->key == arg) {
            return p;
        }
        if (p->key == 0) {
            return 0;
        }
        p++;
    }
}
