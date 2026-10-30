/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0206d940 from https://github.com/tangosdev/sm64ds-decomp src/unnamed/arm9/0206/func_0206d940.c (license: MIT), reused
 * by tools/donor_match.py */
extern void func_020a9ed4(const char *, const char *, const char *, int);
extern const char data_020c95c4;
extern const char data_020c96f8;
struct Elem {
    int a, b, c, d;
};
struct Arr {
    unsigned int count;
    int pad[3];
    struct Elem elems[1];
};
void func_020aaad0(struct Arr *s, unsigned int index) {
    unsigned int n;
    int i;
    if (index > s->count) {
        func_020a9ed4(&data_020c95c4, (const char *) 0x42, &data_020c96f8, 1);
    }
    n = s->count;
    if (n - index != 0) {
        i = (int) n - 1;
        goto test;
    loop:
        s->elems[i + 1] = s->elems[i];
        i--;
    test:
        if (i >= (int) index) {
            goto loop;
        }
    }
    s->count++;
}
